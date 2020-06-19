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


void mLuluListener::_enterFun_def(LULUParser::Fun_defContext *ctx, Type *scope)
{
    Subroutine *srd = new Subroutine();
    srd->setSubRoutineName(ctx->ID()->getText());
    srd->setSubRoutineStatements(ctx->block());
    srd->setSubRoutinesParameter(_enterArgs_var(ctx->args_var()));
}

void mLuluListener::_enterType_def(LULUParser::Type_defContext *ctx, Subroutine *nameSpace, Type *scope)
{
    for(int i=0; i<ctx->component().size(); i++){
        _enterComponent(ctx->component().at(i), &scope->global, scope);
    }
}
void mLuluListener::_enterComponent(LULUParser::ComponentContext *ctx, Subroutine *nameSpace, Type *scope)
{
    if(ctx->access_modifier() != nullptr){

    }
    if(ctx->var_def()!=nullptr){
        _enterVar_def(ctx->var_def(),&scope->global, scope);

    }else if (ctx->fun_def() != nullptr){
        _enterFun_def(ctx->fun_def(), scope);
    }
}

vector<Variable> mLuluListener::_enterArgs_var(LULUParser::Args_varContext *ctx)
{

}


bool mLuluListener::_isPrimitiveType(string type)
{

}

bool mLuluListener::_checkSubroutineName(string name)
{

}

void mLuluListener::_updateParsingLine(antlr4::tree::TerminalNode *node)
{

}

void mLuluListener::_report(Subroutine *nameSpace, string msg)
{

}
