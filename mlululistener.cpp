#include "mlululistener.h"
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
    //    global.global.setSubRoutineName("global");
}

void mLuluListener::enterProgram(LULUParser::ProgramContext *ctx)
{
    for(int i=0; i<ctx->ft_def().size(); i++){
        enterFt_def(ctx->ft_def().at(i));
    }
}

void mLuluListener::enterFt_def(LULUParser::Ft_defContext *ctx)
{
    if(ctx->fun_def() != nullptr)
        _enterFun_def(ctx->fun_def(), &global);
    else if(ctx->type_def() != nullptr)
        _enterType_def(ctx->type_def(), &global.global, &global);
}


Subroutine mLuluListener::_enterFun_def(LULUParser::Fun_defContext *ctx, Type *scope)
{
    Subroutine *srd = new Subroutine();
    srd->setSubRoutineName(ctx->ID()->getText());
    srd->setSubRoutineStatements(ctx->block());
    srd->setSubRoutinesParameter(_enterArgs_var(ctx->args_varP()->args_var()));
    srd->setSubRoutineReturnType(_enterArgs_var(ctx->args_var()));
}

void mLuluListener::_enterType_def(LULUParser::Type_defContext *ctx, Subroutine *nameSpace, Type *scope)
{
    Type *type = new Type();

    type->setType(ctx->type()->getText());
    type->setTypeName(ctx->ID().at(0)->getText());
    if(ctx->ID().at(1) != nullptr){
        if(_checkTypeName(ctx->ID().at(1)->getText())){
            type->setParentName(ctx->ID().at(1)->getText());
        }
        else
            throw "Undefined parent type at line: "+std::to_string(ctx->getStart()->getLine());
    }
    for(int i=0; i<ctx->component().size(); i++){
        _enterComponent(ctx->component().at(i), &scope->global, scope);
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
                        scope->addSubroutineToConstructor(sub);
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
    //if(scope->) check constructor
}

vector<Variable> mLuluListener::_enterVar_def(LULUParser::Var_defContext *ctx, Subroutine *nameSpace, Type *scope)
{
    vector<Variable> vars;
    for(int i=0; i<ctx->var_val().size(); i++){
        Variable var;
        var.name=ctx->var_val()[i]->ref()->ID()->getText();
        int size=1;
        for(int j=0; j<ctx->var_val()[i]->ref()->expr().size(); j++){
            size *= _enterExpr(ctx->var_val()[i]->ref()->expr()[j], nameSpace, scope).getDataAt(0);
        }
        var.setSize(size);
        if(ctx->CONST()!=nullptr && ctx->var_val()[i]->expr()==nullptr){
            throw "Const variable should have init val, line: "+std::to_string(ctx->CONST()->getSymbol()->getLine());
        }
        else if(ctx->var_val()[i]->expr()!=nullptr){
            var.setData(_enterExpr(ctx->var_val()[i]->expr(),nameSpace,scope).getData());
        }
        vars.push_back(var);
    }
    return vars;
}

void mLuluListener::_enterBlock(LULUParser::BlockContext *ctx, Subroutine *nameSpace, Type *scope)
{
    for (int i=0; i<ctx->var_def().size(); i++){
        _enterVar_def(ctx->var_def()[i],nameSpace, scope);
    }
    for (int i=0; i<ctx->stmt().size(); i++){
        _enterStmt(ctx->stmt()[i],nameSpace,scope);
    }
}

int mLuluListener::_enterStmt(LULUParser::StmtContext *ctx, Subroutine *nameSpace, Type *scope)
{

}
