#ifndef MLULULISTENER_H
#define MLULULISTENER_H
#include "type.h"
#include "LULUParser.h"
#include "LULUBaseListener.h"

class mLuluListener :public LULUBaseListener
{
public:
    mLuluListener();

    Type global;

    void enterProgram(LULUParser::ProgramContext * ctx);
    void enterFt_def(LULUParser::Ft_defContext * ctx);
//    void exitFt_def(LULUParser::Ft_defContext * ctx);
    //    void addPointToGlobal(Variable point);
    void clearAllDefines();

private:
    vector<Subroutine*> subroutines;
    vector<Type*> types;

    void exitProgram();

    void _enterFun_def(LULUParser::Fun_defContext *ctx, Type *scope);
    void _enterType_def(LULUParser::Type_defContext *ctx,Subroutine *nameSpace, Type *scope);

    void _enterComponent(LULUParser::ComponentContext *ctx,Subroutine *nameSpace, Type *scope);
    void _enterVar_def(LULUParser::Var_defContext *ctx,Subroutine *nameSpace, Type *scope);
//    void _enterVar_val(LULUParser::Var_valContext *ctx,Subroutine *nameSpace, Type *scope);
    vector<Variable> _enterArgs_var(LULUParser::Args_varContext *ctx);
    void _enterBlock(LULUParser::BlockContext *ctx,Subroutine *nameSpace, Type *scope);
    int _enterStmt(LULUParser::StmtContext *ctx, Subroutine *nameSpace, Type *scope);
    Variable _enterAssign(LULUParser::AssignContext *ctx,Subroutine *nameSpace, Type *scope);
    void _enterVar(LULUParser::VarContext *ctx,Subroutine *nameSpace, Type *scope);
    void _enterRef(LULUParser::RefContext *ctx,Subroutine *nameSpace, Type *scope);
    void _enterExpr(LULUParser::ExprContext *ctx, Subroutine *nameSpace, Type *scope);
    Variable _enterFunc_call(LULUParser::Func_callContext *ctx, Subroutine *nameSpace, Type *scope);
    void _enterList(LULUParser::ListContext *ctx, Subroutine *nameSpace, Type *scope);
    Variable _enterHandle_call(LULUParser::Handle_callContext *ctx, Subroutine *nameSpace, Type *scope);
    Variable _enterParams(LULUParser::ParamsContext *ctx, Subroutine *nameSpace, Type *scope);
    void _enterCond_stmt(LULUParser::Cond_stmtContext *ctx, Subroutine *nameSpace, Type *scope);
    void _enterSwitch_body(LULUParser::Switch_bodyContext *ctx, Subroutine *nameSpace, Type *scope);
    void _enterLoop_stmt(LULUParser::Loop_stmtContext *ctx, Subroutine *nameSpace, Type *scope);
    void _enterConst_val(LULUParser::Const_valContext *ctx, Subroutine *nameSpace, Type *scope);

    Variable _enterUnary_op(LULUParser::Unary_opContext *ctx, Subroutine *nameSpace, Type *scope);
    Variable _enterBinary_op(LULUParser::Binary_opContext *ctx, Subroutine *nameSpace, Type *scope);
    Variable _enterArithmetic(LULUParser::ArithmeticContext *ctx, Subroutine *nameSpace, Type *scope);
    Variable _enterBitwise(LULUParser::BitwiseContext *ctx, Subroutine *nameSpace, Type *scope);
    Variable _enterLogical(LULUParser::LogicalContext *ctx, Subroutine *nameSpace, Type *scope);
    Variable _enterRelational(LULUParser::RelationalContext *ctx, Subroutine *nameSpace, Type *scope);

    bool _isPrimitiveType(string type);

    bool _checkSubroutineName(string name);
    Subroutine* _getVariableByName(string name, int access, Variable *var,Subroutine *nameSpace, Type *scope);
    void _addFormalParametersToSubroutine(Subroutine *sub, LULUParser::Args_varContext *ctx, Type *scope);

    bool _checkVariableName(string varName, Subroutine *nameSpace, Type *scope);
    //    int _getIndexFromVariableSuffix(LULUParser::ArrayVariableSuffixContext *ctx, Subroutine *nameSpace);

    void _updateParsingLine(antlr4::tree::TerminalNode* node);

    void _report(Subroutine *nameSpace, string msg);
};

#endif // MLULULISTENER_H
