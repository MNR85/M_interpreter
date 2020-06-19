
// Generated from LULU.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "LULUParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LULUParser.
 */
class  LULUListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(LULUParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(LULUParser::ProgramContext *ctx) = 0;

  virtual void enterFt_def(LULUParser::Ft_defContext *ctx) = 0;
  virtual void exitFt_def(LULUParser::Ft_defContext *ctx) = 0;

  virtual void enterType_def(LULUParser::Type_defContext *ctx) = 0;
  virtual void exitType_def(LULUParser::Type_defContext *ctx) = 0;

  virtual void enterFun_def(LULUParser::Fun_defContext *ctx) = 0;
  virtual void exitFun_def(LULUParser::Fun_defContext *ctx) = 0;

  virtual void enterComponent(LULUParser::ComponentContext *ctx) = 0;
  virtual void exitComponent(LULUParser::ComponentContext *ctx) = 0;

  virtual void enterBlock(LULUParser::BlockContext *ctx) = 0;
  virtual void exitBlock(LULUParser::BlockContext *ctx) = 0;

  virtual void enterArgs_varP(LULUParser::Args_varPContext *ctx) = 0;
  virtual void exitArgs_varP(LULUParser::Args_varPContext *ctx) = 0;

  virtual void enterArgs_var(LULUParser::Args_varContext *ctx) = 0;
  virtual void exitArgs_var(LULUParser::Args_varContext *ctx) = 0;

  virtual void enterVar_def(LULUParser::Var_defContext *ctx) = 0;
  virtual void exitVar_def(LULUParser::Var_defContext *ctx) = 0;

  virtual void enterVar_val(LULUParser::Var_valContext *ctx) = 0;
  virtual void exitVar_val(LULUParser::Var_valContext *ctx) = 0;

  virtual void enterExpr(LULUParser::ExprContext *ctx) = 0;
  virtual void exitExpr(LULUParser::ExprContext *ctx) = 0;

  virtual void enterAccess_modifier(LULUParser::Access_modifierContext *ctx) = 0;
  virtual void exitAccess_modifier(LULUParser::Access_modifierContext *ctx) = 0;

  virtual void enterType(LULUParser::TypeContext *ctx) = 0;
  virtual void exitType(LULUParser::TypeContext *ctx) = 0;

  virtual void enterStmt(LULUParser::StmtContext *ctx) = 0;
  virtual void exitStmt(LULUParser::StmtContext *ctx) = 0;

  virtual void enterAssign(LULUParser::AssignContext *ctx) = 0;
  virtual void exitAssign(LULUParser::AssignContext *ctx) = 0;

  virtual void enterVar(LULUParser::VarContext *ctx) = 0;
  virtual void exitVar(LULUParser::VarContext *ctx) = 0;

  virtual void enterRef(LULUParser::RefContext *ctx) = 0;
  virtual void exitRef(LULUParser::RefContext *ctx) = 0;

  virtual void enterFunc_call(LULUParser::Func_callContext *ctx) = 0;
  virtual void exitFunc_call(LULUParser::Func_callContext *ctx) = 0;

  virtual void enterList(LULUParser::ListContext *ctx) = 0;
  virtual void exitList(LULUParser::ListContext *ctx) = 0;

  virtual void enterHandle_call(LULUParser::Handle_callContext *ctx) = 0;
  virtual void exitHandle_call(LULUParser::Handle_callContext *ctx) = 0;

  virtual void enterParams(LULUParser::ParamsContext *ctx) = 0;
  virtual void exitParams(LULUParser::ParamsContext *ctx) = 0;

  virtual void enterCond_stmt(LULUParser::Cond_stmtContext *ctx) = 0;
  virtual void exitCond_stmt(LULUParser::Cond_stmtContext *ctx) = 0;

  virtual void enterSwitch_body(LULUParser::Switch_bodyContext *ctx) = 0;
  virtual void exitSwitch_body(LULUParser::Switch_bodyContext *ctx) = 0;

  virtual void enterLoop_stmt(LULUParser::Loop_stmtContext *ctx) = 0;
  virtual void exitLoop_stmt(LULUParser::Loop_stmtContext *ctx) = 0;

  virtual void enterConst_val(LULUParser::Const_valContext *ctx) = 0;
  virtual void exitConst_val(LULUParser::Const_valContext *ctx) = 0;

  virtual void enterUnary_op(LULUParser::Unary_opContext *ctx) = 0;
  virtual void exitUnary_op(LULUParser::Unary_opContext *ctx) = 0;

  virtual void enterBinary_op(LULUParser::Binary_opContext *ctx) = 0;
  virtual void exitBinary_op(LULUParser::Binary_opContext *ctx) = 0;

  virtual void enterArithmetic(LULUParser::ArithmeticContext *ctx) = 0;
  virtual void exitArithmetic(LULUParser::ArithmeticContext *ctx) = 0;

  virtual void enterBitwise(LULUParser::BitwiseContext *ctx) = 0;
  virtual void exitBitwise(LULUParser::BitwiseContext *ctx) = 0;

  virtual void enterLogical(LULUParser::LogicalContext *ctx) = 0;
  virtual void exitLogical(LULUParser::LogicalContext *ctx) = 0;

  virtual void enterRelational(LULUParser::RelationalContext *ctx) = 0;
  virtual void exitRelational(LULUParser::RelationalContext *ctx) = 0;


};

