﻿#include "mlululistener.h"
#define RUNALL 1


///////compare strings
bool icompare_pred(unsigned char a, unsigned char b)
{
    return std::tolower(a) == std::tolower(b);
}

bool stringCompare(std::string const& a, std::string const& b)
{
    if (a.length()==b.length()) {
        return std::equal(b.begin(), b.end(),
                          a.begin(), icompare_pred);
    }
    else {
        return false;
    }
}
///////
mLuluListener::mLuluListener()
{
    global.setTypeName("global");
    //    global.global.setSubRoutineName("global");
}

void mLuluListener::enterProgram(LULUParser::ProgramContext *ctx)
{
    for(int i=0; i<ctx->ft_def().size(); i++){
        _enterFt_def(ctx->ft_def().at(i));
    }
    if(!global.hasStart()){
        cout<<"Must define START function"<<endl;
        throw  "Must define START function";
    }else{
        Subroutine start;
        global.getSubroutineByName("start",start,0);
        _enterBlock(start.getSubRoutineStatements(),&start,&global);
        global.setSubroutineByName(start);
    }
    cout<<printScopes();
}

void mLuluListener::_enterFt_def(LULUParser::Ft_defContext *ctx)
{
    if(ctx->fun_def() != nullptr){
        Subroutine sub =_enterFun_def(ctx->fun_def(), &global);
        if(!_checkSubroutineName(sub.getSubRoutineName(),sub.getSubRoutineVariables(), &global))
            global.addSubroutineToPublicCTX(sub);
        else{
            throw "Duplicate function definition at line: "+std::to_string(ctx->getStart()->getLine());
        }
    }
    else if(ctx->type_def() != nullptr)
        _enterType_def(ctx->type_def(), &global.global, &global);
}


Subroutine mLuluListener::_enterFun_def(LULUParser::Fun_defContext *ctx, Type *scope)
{
    Subroutine *srd = new Subroutine();
    srd->setSubRoutineName(ctx->ID()->getText());
    srd->setSubRoutineStatements(ctx->block());
    if(ctx->args_var().size()>1){
        srd->setSubRoutinesParameter(_enterArgs_var(ctx->args_var()[1]));
        srd->setSubRoutineReturnType(_enterArgs_var(ctx->args_var()[0]));
    }else{
        srd->setSubRoutinesParameter(_enterArgs_var(ctx->args_var()[0]));
    }
    srd->setSubRoutineStatements(ctx->block());
    if(RUNALL)
        _enterBlock(ctx->block(),srd,scope);
    return *srd;
}

void mLuluListener::_enterType_def(LULUParser::Type_defContext *ctx, Subroutine *nameSpace, Type *scope)
{
    Type *type = new Type();
    type->setType(ctx->type()->getText());
    type->setTypeName(ctx->ID().at(0)->getText());
    if(!_checkTypeName(type->getTypeName())){
        if(ctx->ID().size()>1){
            if(_checkTypeName(ctx->ID().at(1)->getText())){
                type->setParentName(ctx->ID().at(1)->getText());
            }
            else
                throw "Undefined parent type at line: "+std::to_string(ctx->getStart()->getLine());
        }
        for(int i=0; i<ctx->component().size(); i++){
            _enterComponent(ctx->component().at(i), &type->global, type);
        }
        if(!type->hasConstructor() && !_getTypeByName(type->getParentName())->hasConstructor())
            throw "Should define atleast one constructor for type: "+type->getTypeName();
        types.push_back(type);
    }else{
        throw "Duplicate type decleration at line: "+std::to_string(ctx->getStart()->getLine());
    }
}

void mLuluListener::_enterComponent(LULUParser::ComponentContext *ctx, Subroutine *nameSpace, Type *scope)
{
    if(ctx->var_def()!=nullptr){
        vector<Variable> vars =_enterVar_def(ctx->var_def(),&scope->global, scope);
        for(int i=0; i< vars.size(); i++){
            Variable var = vars.at(i);
            if(!_checkVariableName(var.name, nameSpace,scope)){
                if(ctx->access_modifier() != nullptr){
                    if(stringCompare(ctx->access_modifier()->getText(), "PUBLIC")){
                        scope->addVaribaleToPublicCTX(var);
                    }else if(stringCompare(ctx->access_modifier()->getText(), "PROTECTED")){
                        scope->addVaribaleToProtectedCTX(var);
                    }
                }
                else{ // PRIVATE
                    scope->addVaribaleToPrivateCTX(var);
                }
            }else{
                throw "Duplicate variable decleration at line: "+std::to_string(ctx->getStart()->getLine());
            }
        }
    }else if (ctx->fun_def() != nullptr){
        Subroutine sub = _enterFun_def(ctx->fun_def(), scope);
        if(!_checkSubroutineName(sub.getSubRoutineName(),sub.getSubRoutineVariables(), scope)){
            if(ctx->access_modifier() != nullptr){
                if(stringCompare(ctx->access_modifier()->getText(), "PUBLIC")){
                    if(stringCompare(sub.getSubRoutineName(), scope->getTypeName())){
                        if(sub.getSubRoutineReturnVariables().size()==0)
                            scope->addSubroutineToConstructor(sub);
                        else {
                            throw "Constructor can not return value, line: "+std::to_string(ctx->fun_def()->args_var()[0]->getStart()->getLine());
                        }
                    }else{
                        scope->addSubroutineToPublicCTX(sub);
                    }
                }else if(stringCompare(ctx->access_modifier()->getText(), "PROTECTED")){
                    scope->addSubroutineToProtectedCTX(sub);
                }
            }
            else{ // PRIVATE
                scope->addSubroutineToPrivateCTX(sub);
            }
        }else{
            throw "Duplicate function definition at line: "+std::to_string(ctx->getStart()->getLine());
        }
    }
}

vector<Variable> mLuluListener::_enterArgs_var(LULUParser::Args_varContext *ctx)
{
    vector<Variable> vars;
    if(ctx->args_var()!=nullptr){
        vector<Variable> ret = _enterArgs_var(ctx->args_var());
        vars.insert(vars.end(),ret.begin(), ret.end());
    }
    Variable tail;
    tail.name = ctx->ID()->getText();
    tail.type = ctx->type()->getText();
    tail.checkType();
    vars.push_back(tail);
    return vars;
}

int mLuluListener::_enterVar(Variable &var, LULUParser::VarContext *ctx, Subroutine *nameSpace, Type *scope)
{
    Type *searchScope;
    int searchSpace=0;// in namespace
    if(stringCompare(ctx->children.at(0)->getText(),"this")){
        searchScope=scope;
        searchSpace=1;// in scope
    }else if(stringCompare(ctx->children.at(0)->getText(),"super")){
        searchScope=&global;
        searchSpace=2;// in global
    }
    //    Variable var1;
    int ss = _enterRef(var, ctx->ref().at(0),nameSpace, scope);
    return searchSpace==2?searchSpace:ss;
}

int mLuluListener::_enterRef(Variable &var, LULUParser::RefContext *ctx, Subroutine *nameSpace, Type *scope)
{
    Variable var1;
    int searchSpace=0;
    var1.name=ctx->ID()->getText();
    var.name=var1.name;
    if(nameSpace->getVariableByName(var1.name,var1)){
        var=var1;
        searchSpace=0;
    }else if(scope->getVariableByName(var1.name,var1, 0)){
        var=var1;
        searchSpace=1;
    }
    int size=1;
    for(int j=0; j<ctx->expr().size(); j++){
        size *= _enterExpr(ctx->expr()[j], nameSpace, scope).getDataAt(0);
    }
    var.setSize(size);
    return searchSpace;
}

vector<Variable> mLuluListener::_enterVar_def(LULUParser::Var_defContext *ctx, Subroutine *nameSpace, Type *scope)
{
    vector<Variable> vars;
    for(int i=0; i<ctx->var_val().size(); i++){
        Variable var;
        var.type = ctx->type()->getText();

        _enterRef(var, ctx->var_val()[i]->ref(), nameSpace, scope); //mnr
        string firstChild = ctx->children.at(0)->getText();
        if(stringCompare(firstChild,"const") && ctx->var_val()[i]->expr()==nullptr){
            throw "Const variable should have init val, line: "+std::to_string(ctx->getStart()->getLine());
        }
        else if(ctx->var_val()[i]->expr()!=nullptr){
            var.setData(_enterExpr(ctx->var_val()[i]->expr(),nameSpace,scope).getData());
        }
        var.checkType();
        vars.push_back(var);
    }
    return vars;
}

void mLuluListener::_enterBlock(LULUParser::BlockContext *ctx, Subroutine *nameSpace, Type *scope)
{
    for(int i=0; i<ctx->children.size();i++){
        string s2= ctx->children[i]->getText();
        if(dynamic_cast<LULUParser::Var_defContext *>(ctx->children.at(i))!=nullptr){
            vector<Variable> vars = _enterVar_def((LULUParser::Var_defContext *)(ctx->children[i]), nameSpace, scope);
            for(int j=0; j<vars.size(); j++){
                if(!_checkVariableName(vars[j].name, nameSpace,scope)){
                    nameSpace->addVariableToCtx(vars[j]);
                }else{
                    throw "Duplicate variable decleration at line: "+std::to_string(ctx->getStart()->getLine());
                }
            }
        }
        else if(dynamic_cast<LULUParser::StmtContext *>(ctx->children.at(i))!=nullptr){
            _enterStmt((LULUParser::StmtContext *)(ctx->children.at(i)),nameSpace, scope);
        }
    }
    //    string s = ctx->getText();
    //    for (int i=0; i<ctx->var_def().size(); i++){
    //        _enterVar_def(ctx->var_def()[i],nameSpace, scope);
    //    }
    //    for (int i=0; i<ctx->stmt().size(); i++){
    //        _enterStmt(ctx->stmt()[i],nameSpace,scope);
    //    }
}

Variable mLuluListener::_enterFunc_call(LULUParser::Func_callContext *ctx, Subroutine *nameSpace, Type *scope)
{
    Variable expRet;
    int mod=0;
    for(int i=0; i<ctx->children.size(); i++){
        string ch = ctx->children.at(i)->getText();
        if(stringCompare(ch, "read"))
            mod=1;
        else if(stringCompare(ch, "write"))
            mod=2;
    }
    if(mod==1){//ctx->READ()!=nullptr){
        string stdin = read();
        for(int i=1; i<stdin.size()-1; i++ )
            expRet.setDataAt((int)stdin.at(i), i-1);
        expRet.type="STRING";
    }else if(mod==2){//ctx->WRITE()!=nullptr){
        write(ctx->expr()->getText());
    }else if(ctx->handle_call()!=nullptr){
        Subroutine srd;
        if(scope->getSubroutineByName(ctx->handle_call()->ID()->getText(), srd,0)){
            _enterBlock(srd.getSubRoutineStatements(),&srd,scope);
            scope->setSubroutineByName(srd);
        }else {
            throw "Undefined function name in current scope: "+std::to_string(ctx->getStart()->getLine());
        }
    }
    return expRet;
}
//        srd.setSubRoutineName(ctx->handle_call()->ID()->getText());
//        srd.setSubRoutinesParameter(_enterParams(ctx->handle_call()->params(),nameSpace,scope));
//        // check func call
//        if(!_checkSubroutineName(srd.getSubRoutineName(), srd.getSubRoutineVariables(),scope)){
//            throw "Duplicate function name: "+std::to_string(ctx->getStart()->getLine());
//        }


vector<Variable> mLuluListener::_enterParams(LULUParser::ParamsContext *ctx, Subroutine *nameSpace, Type *scope)
{
    vector<Variable> vars;
    if(ctx->params()!=nullptr){
        vector<Variable> ret = _enterParams(ctx->params(), nameSpace, scope);
        vars.insert(vars.end(),ret.begin(), ret.end());
    }
    Variable tail;
    tail = _enterExpr(ctx->expr(), nameSpace, scope);
    vars.push_back(tail);
    return vars;
}

string mLuluListener::read()
{
    string str;
    cout<<"Please enter value: ";
    cin>>str;
}

void mLuluListener::write(string str)
{
    cout<<str<<endl;
}

string mLuluListener::_castTypes(string type1, string type2)
{
    if( stringCompare(type1,"float") ||stringCompare(type2,"float") )
        return "float";
    else if( stringCompare(type1,"int") ||stringCompare(type2,"int") )
        return "int";
    if( stringCompare(type1,"bool") ||stringCompare(type2,"bool") )
        return "bool";
    else return "string";
}

bool mLuluListener::_checkSubroutineName(string name, vector<Variable *> args, Type *scope)
{
    Variable tmp;
    Subroutine sub;
    bool hasVar = scope->getVariableByName(name, tmp,0);
    bool hasSub = scope->getSubroutineByName(name, sub, 0);
    bool hasType=false;
    for (int i=0; i<types.size(); i++){
        if(stringCompare(types[i]->getTypeName(), name))
            hasType= true;
    }
    return hasVar | hasSub | hasType;
}

Type *mLuluListener::_getTypeByName(string name)
{
    Type *type;
    for (int i=0; i<types.size(); i++){
        if(stringCompare(types[i]->getTypeName(), name))
            type = types[i];
    }
    return type;
}

bool mLuluListener::_checkTypeName(string name)
{
    Variable tmp;
    Subroutine sub;
    bool hasVar = global.getVariableByName(name, tmp,0);
    bool hasSub = global.getSubroutineByName(name, sub, 0);
    bool hasType=false;
    for (int i=0; i<types.size(); i++){
        if(stringCompare(types[i]->getTypeName(), name))
            hasType= true;
    }
    return hasType;
}

bool mLuluListener::_checkVariableName(string name, Subroutine *nameSpace, Type *scope)
{
    Variable tmp;
    Subroutine sub;
    bool hasVar = scope->getVariableByName(name, tmp,0);
    bool hasSub = scope->getSubroutineByName(name, sub, 0);
    bool hasType=false;
    for (int i=0; i<types.size(); i++){
        if(stringCompare(types[i]->getTypeName(), name))
            hasType= true;
    }
    return hasVar | hasSub | hasType;
}

string mLuluListener::printScopes()
{
    string str=global.ToString()+"\r\n";
    for(int i=0; i<types.size(); i++){
        str+= types[i]->ToString()+"\r\n";
    }
    return str;
}

Variable mLuluListener::_enterExpr(LULUParser::ExprContext *ctx, Subroutine *nameSpace, Type *scope)
{
    Variable expRet;
    if(ctx->binary_op()!=nullptr){
        Variable var1 = _enterExpr(ctx->expr()[0], nameSpace, scope);
        Variable var2 = _enterExpr(ctx->expr()[1], nameSpace, scope);
        expRet.type = _castTypes(var1.type, var2.type);
        if(ctx->binary_op()->relational()!=nullptr || ctx->binary_op()->logical()!=nullptr)
            expRet.type = "bool";
        int size1=var1.getData().size();
        int size2=var2.getData().size();
        expRet.setSize(max(size1,size2));
        bool relationRes=true;
        for(int i=0; i<expRet.getData().size(); i++){
            double d1=size1>i?var1.getDataAt(i):0;
            double d2=size2>i?var2.getDataAt(i):0;
            if(ctx->binary_op()->arithmetic()!=nullptr){
                if(stringCompare(ctx->binary_op()->arithmetic()->getText(),"+")){
                    expRet.setDataAt(d1+d2,i);
                }else if(stringCompare(ctx->binary_op()->arithmetic()->getText(),"-")){
                    expRet.setDataAt(d1-d2,i);
                }else if(stringCompare(ctx->binary_op()->arithmetic()->getText(),"*")){
                    expRet.setDataAt(d1*d2,i);
                }else if(stringCompare(ctx->binary_op()->arithmetic()->getText(),"/")){
                    expRet.setDataAt(d1/d2,i);
                }else if(stringCompare(ctx->binary_op()->arithmetic()->getText(),"%")){
                    expRet.setDataAt((int)d1%(int)d2,i);
                }
            }else if(ctx->binary_op()->relational()!=nullptr){
                if(stringCompare(ctx->binary_op()->relational()->getText(),"!=")){
                    expRet.setDataAt(d1!=d2,i);
                }else if(stringCompare(ctx->binary_op()->relational()->getText(),"==")){
                    expRet.setDataAt(d1==d2,i);
                }else if(stringCompare(ctx->binary_op()->relational()->getText(),">=")){
                    expRet.setDataAt(d1>=d2,i);
                }else if(stringCompare(ctx->binary_op()->relational()->getText(),"<=")){
                    expRet.setDataAt(d1<=d2,i);
                }else if(stringCompare(ctx->binary_op()->relational()->getText(),">")){
                    expRet.setDataAt(d1>d2,i);
                }else if(stringCompare(ctx->binary_op()->relational()->getText(),"<")){
                    expRet.setDataAt(d1<d2,i);
                }
            }else if(ctx->binary_op()->bitwise()!=nullptr){
                if(stringCompare(ctx->binary_op()->bitwise()->getText(),"&")){
                    expRet.setDataAt((int)d1&(int)d2,i);
                }else if(stringCompare(ctx->binary_op()->bitwise()->getText(),"|")){
                    expRet.setDataAt((int)d1|(int)d2,i);
                }
            }else if(ctx->binary_op()->logical()!=nullptr){
                if(stringCompare(ctx->binary_op()->logical()->getText(),"&&")){
                    expRet.setDataAt((int)d1&&(int)d2,i);
                }else if(stringCompare(ctx->binary_op()->logical()->getText(),"||")){
                    expRet.setDataAt((int)d1||(int)d2,i);
                }
            }
        }
    }else if(ctx->children.at(0)->getText()=="("){
        return _enterExpr(ctx->expr()[0],nameSpace, scope);
    }else if(ctx->unary_op()!=nullptr){
        Variable var1 = _enterExpr(ctx->expr()[0], nameSpace, scope);
        expRet.type = var1.type;
        if(ctx->unary_op()->getText()=="~")
            expRet.type="int";
        expRet.setSize(var1.getData().size());
        for(int i=0; i<expRet.getData().size(); i++)
            if(ctx->unary_op()->getText()=="-"){
                expRet.setDataAt(-var1.getDataAt(i),i);
            }else if(ctx->unary_op()->getText()=="~"){
                expRet.setDataAt(~(int)var1.getDataAt(i),i);
            }else if(ctx->unary_op()->getText()=="!"){
                expRet.setDataAt(!var1.getDataAt(i),i);
            }
    }else if(ctx->const_val()!=nullptr){
        if(ctx->const_val()->INT_CONST()!=nullptr){
            expRet.setDataAt(stod(ctx->const_val()->INT_CONST()->getText()),0);
            expRet.type="INT";
        }else if(ctx->const_val()->REAL_CONST()!=nullptr){
            expRet.setDataAt(stod(ctx->const_val()->REAL_CONST()->getText()),0);
            expRet.type="DOUBLE";
        }
        else if(ctx->const_val()->REAL_CONST()!=nullptr){
            expRet.setDataAt(stringCompare(ctx->const_val()->BOOL_CONST()->getText(), "TRUE"),0);
            expRet.type="BOOL";
        }
        else if(ctx->const_val()->STRING_CONST()!=nullptr){
            for(int i=1; i<ctx->const_val()->STRING_CONST()->getText().size()-1; i++ )
                expRet.setDataAt((int)ctx->const_val()->STRING_CONST()->getText().at(i), i-1);
            expRet.type="STRING";
        }
    }else if(ctx->handle_call()!=nullptr){
        Type tp;
        tp.setTypeName(ctx->handle_call()->ID()->getText());
        vector<Variable> constructorVars;
        if(ctx->handle_call()->params()!=nullptr){
            constructorVars = _enterParams(ctx->handle_call()->params(), nameSpace, scope);
        }
        tp.callConstructor(constructorVars);
    }else if(ctx->func_call()!=nullptr){
        expRet = _enterFunc_call(ctx->func_call(),nameSpace, scope);
    }else if(ctx->var()!=nullptr){  //mnr
        Variable var;
        _enterRef(var, ctx->var()->ref()[0], nameSpace, scope);
        expRet=var;
        if(ctx->var()->ref().size()>1){
            Variable var2;
            _enterRef(var2, ctx->var()->ref()[1], nameSpace, scope);
        }
    }else if(ctx->list()!=nullptr){

    }
    //    else if(ctx->NIL()!=nullptr){

    //    }
    return expRet;
}

int mLuluListener::_enterStmt(LULUParser::StmtContext *ctx, Subroutine *nameSpace, Type *scope)
{
    Variable expRet;//mnr
    if(ctx->assign()!=nullptr){
        Variable exp = _enterExpr(ctx->assign()->expr(),nameSpace,scope);
        for(int i=0; i<ctx->assign()->var().size(); i++){
            Variable var;
            int searchScope=_enterVar(var, ctx->assign()->var()[i],nameSpace,scope);
            var.setData(exp.getData());
            if(searchScope==0){ // in namespace
                nameSpace->setVariableByName(var);
            }else if(searchScope==1){   // in scope
                scope->setVariableByName(var);
            }else if(searchScope==2){   // in global
                global.setVariableByName(var);
            }
        }
    }else if(ctx->func_call()!=nullptr){
        expRet = _enterFunc_call(ctx->func_call(),nameSpace, scope);
    }else if (ctx->cond_stmt()!=nullptr){
        string condType=ctx->cond_stmt()->children.at(0)->getText();
        if(stringCompare(condType, "if")){
            Variable ifCondition=_enterExpr(ctx->cond_stmt()->expr(),nameSpace,scope);
            if(ifCondition.getDataAt(0)){
                //                int a1 = ctx->cond_stmt()->children.size();
                //                string s1 = ctx->cond_stmt()->getText();
                if(dynamic_cast<LULUParser::StmtContext *>(ctx->cond_stmt()->children.at(2))!=nullptr)
                {
                    _enterStmt((LULUParser::StmtContext *)ctx->cond_stmt()->children.at(2), nameSpace,scope);
                }else if(dynamic_cast<LULUParser::BlockContext *>(ctx->cond_stmt()->children.at(3))!=nullptr){
                    _enterBlock((LULUParser::BlockContext *)ctx->cond_stmt()->children.at(2), nameSpace,scope);
                }
            }else if(ctx->cond_stmt()->children.size()>3){  // has else statement
                if(dynamic_cast<LULUParser::StmtContext *>(ctx->cond_stmt()->children.at(4))!=nullptr)
                {
                    _enterStmt((LULUParser::StmtContext *)ctx->cond_stmt()->children.at(4), nameSpace,scope);
                }else if(dynamic_cast<LULUParser::BlockContext *>(ctx->cond_stmt()->children.at(4))!=nullptr){
                    _enterBlock((LULUParser::BlockContext *)ctx->cond_stmt()->children.at(4), nameSpace,scope);
                }
            }
        }else if(stringCompare(condType,"switch")){
            Variable var;
            _enterVar(var,ctx->cond_stmt()->var(),nameSpace,scope);
            int constCont=0;
            for(int i=0; i<ctx->cond_stmt()->switch_body()->INT_CONST().size(); i++){
                constCont++;
                if(var.getDataAt(0)==stod(ctx->cond_stmt()->switch_body()->INT_CONST()[i]->getText())){
                    _enterBlock(ctx->cond_stmt()->switch_body()->block()[i], nameSpace, scope);
                    break;
                }
            }
            // default
            if(constCont==ctx->cond_stmt()->switch_body()->INT_CONST().size() && ctx->cond_stmt()->switch_body()->block()[constCont] !=nullptr){
                _enterBlock(ctx->cond_stmt()->switch_body()->block()[constCont], nameSpace, scope);
            }

        }else{
            throw "undefined cond type";
        }

    }else if (ctx->loop_stmt()!=nullptr){
        string loopType=ctx->loop_stmt()->children.at(0)->getText();
        if(stringCompare(loopType, "for")){

        }
        while(_enterExpr(ctx->loop_stmt()->expr(), nameSpace, scope).getDataAt(0)){
            if(ctx->loop_stmt()->block()!=nullptr){
                _enterBlock(ctx->loop_stmt()->block(), nameSpace,scope);
            }else if(ctx->loop_stmt()->stmt()!=nullptr){
                _enterStmt(ctx->loop_stmt()->stmt(),nameSpace,scope);
            }
            //            if(stringCompare(loopType, "for") && ctx->loop_stmt()->assign()[1]!=nullptr){
            //            }
        }
    }
}


