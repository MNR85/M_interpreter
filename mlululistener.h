#ifndef MLULULISTENER_H
#define MLULULISTENER_H
#include "subroutine.h"
#include "variable.h"

class mLuluListener
{
public:
    mLuluListener();

    Subroutine global;
    Subroutine main;

    int currentLine=0;

    void enterProgram(LULUParser::ProgramContext * ctx);
    void enterFt_def(LULUParser::Ft_defContext * ctx);
    void exitFt_def(LULUParser::Ft_defContext * ctx);
    void addPointToGlobal(Variable point);
    void clearAllDefines();

private:
    vector<Subroutine*> subroutines;

    void exitProgram();

    //    void _enterMainRoutine(LULUParser::MainRoutineContext *ctx); // OK
    void _enterFun_def(LULUParser::Fun_defContext *ctx);
    void _enterType_def(LULUParser::Type_defContext *ctx,Subroutine *nameSpace);    // OK --> PostControl

    void _enterComponent(LULUParser::ComponentContext *ctx,Subroutine *nameSpace);
    void _enterAcess_modifier(LULUParser::Access_modifierContext *ctx,Subroutine *nameSpace);
    void _enterVar_def(LULUParser::Var_defContext *ctx,Subroutine *nameSpace);
    void _enterType(LULUParser::TypeContext *ctx,Subroutine *nameSpace);
    void _enterVar_val(LULUParser::Var_valContext *ctx,Subroutine *nameSpace);
    void _enterArgs_var(LULUParser::Args_varContext *ctx,Subroutine *nameSpace);
    void _enterBlock(LULUParser::BlockContext *ctx,Subroutine *nameSpace);
    int _enterStmt(LULUParser::StmtContext *ctx, Subroutine *nameSpace, string currentScope="");

    //Statements
    void _enterStateFor(LULUParser::STATFORContext *ctx, Subroutine *nameSpace);  // OK2
    void _enterStateIf(LULUParser::STATIFContext *ctx, Subroutine *nameSpace);    // OK2
    void _enterStateWhile(LULUParser::STATWHILEContext *ctx, Subroutine *nameSpace);  // OK2
    void _enterStateReturn(LULUParser::STATRETURNContext *ctx, Subroutine *nameSpace);    // OK2?
    void _enterStateAssignExpression(LULUParser::STATASINEPRContext *ctx, Subroutine *nameSpace); // OK2
    void _enterStateExpression(LULUParser::STATEXPContext *ctx, Subroutine *nameSpace);   // OK2 .. post control

    void _enterAssignExpression(LULUParser::AssignmentExpressionContext *ctx, Subroutine *nameSpace);
    Variable _enterExpression(LULUParser::ExpressionContext *ctx, Subroutine *nameSpace);
    Variable _enterConditionalOrExpression(LULUParser::ConditionalOrExpressionContext *ctx, Subroutine *nameSpace);
    Variable _enterExclusiveOrExpression(LULUParser::ExclusiveOrExpressionContext *ctx, Subroutine *nameSpace);
    Variable _enterConditionalAndExpression(LULUParser::ConditionalAndExpressionContext *ctx, Subroutine *nameSpace);
    Variable _enterAdditiveExpression(LULUParser::AdditiveExpressionContext *ctx, Subroutine *nameSpace);
    Variable _enterMultiplicativeExpression(LULUParser::MultiplicativeExpressionContext *ctx, Subroutine *nameSpace);
    Variable _enterUnaryNotExpression(LULUParser::UnaryNotExpressionContext *ctx, Subroutine *nameSpace);
    Variable _enterUnaryPlusMinuxExpression(LULUParser::UnaryPlusMinuxExpressionContext *ctx, Subroutine *nameSpace);
    Variable _enterPrimary(LULUParser::PrimaryContext *ctx, Subroutine *nameSpace);
    Variable _enterParExpression(LULUParser::ParExpressionContext *ctx, Subroutine *nameSpace);
    Variable _enterLiteral(LULUParser::LiteralContext *ctx, Subroutine *nameSpace);

    bool _isPrimitiveType(string type);


    bool _checkSubroutineName(string name);
    Subroutine* _getVariableByName(string name, Variable *var,Subroutine *nameSpace);
    void _addFormalParametersToSubroutine(Subroutine *sub, LULUParser::FormalParametersContext *ctx);

    bool _checkVariableName(string varName, Subroutine *nameSpace);
    int _getIndexFromVariableSuffix(LULUParser::ArrayVariableSuffixContext *ctx, Subroutine *nameSpace);

    void _updateParsingLine(antlr4::tree::TerminalNode* node);

    void _report(Subroutine *nameSpace, string msg);
};

#endif // MLULULISTENER_H
