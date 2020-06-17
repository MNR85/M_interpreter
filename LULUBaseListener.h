
// Generated from LULU.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "LULUListener.h"


/**
 * This class provides an empty implementation of LULUListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LULUBaseListener : public LULUListener {
public:

  virtual void enterProgram(LULUParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(LULUParser::ProgramContext * /*ctx*/) override { }

  virtual void enterFt_def(LULUParser::Ft_defContext * /*ctx*/) override { }
  virtual void exitFt_def(LULUParser::Ft_defContext * /*ctx*/) override { }

  virtual void enterType_def(LULUParser::Type_defContext * /*ctx*/) override { }
  virtual void exitType_def(LULUParser::Type_defContext * /*ctx*/) override { }

  virtual void enterComponent(LULUParser::ComponentContext * /*ctx*/) override { }
  virtual void exitComponent(LULUParser::ComponentContext * /*ctx*/) override { }

  virtual void enterAccess_modifier(LULUParser::Access_modifierContext * /*ctx*/) override { }
  virtual void exitAccess_modifier(LULUParser::Access_modifierContext * /*ctx*/) override { }

  virtual void enterVar_def(LULUParser::Var_defContext * /*ctx*/) override { }
  virtual void exitVar_def(LULUParser::Var_defContext * /*ctx*/) override { }

  virtual void enterType(LULUParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(LULUParser::TypeContext * /*ctx*/) override { }

  virtual void enterVar_val(LULUParser::Var_valContext * /*ctx*/) override { }
  virtual void exitVar_val(LULUParser::Var_valContext * /*ctx*/) override { }

  virtual void enterFun_def(LULUParser::Fun_defContext * /*ctx*/) override { }
  virtual void exitFun_def(LULUParser::Fun_defContext * /*ctx*/) override { }

  virtual void enterArgs_var(LULUParser::Args_varContext * /*ctx*/) override { }
  virtual void exitArgs_var(LULUParser::Args_varContext * /*ctx*/) override { }

  virtual void enterBlock(LULUParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(LULUParser::BlockContext * /*ctx*/) override { }

  virtual void enterStmt(LULUParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(LULUParser::StmtContext * /*ctx*/) override { }

  virtual void enterAssign(LULUParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(LULUParser::AssignContext * /*ctx*/) override { }

  virtual void enterVar(LULUParser::VarContext * /*ctx*/) override { }
  virtual void exitVar(LULUParser::VarContext * /*ctx*/) override { }

  virtual void enterRef(LULUParser::RefContext * /*ctx*/) override { }
  virtual void exitRef(LULUParser::RefContext * /*ctx*/) override { }

  virtual void enterExpr(LULUParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(LULUParser::ExprContext * /*ctx*/) override { }

  virtual void enterFunc_call(LULUParser::Func_callContext * /*ctx*/) override { }
  virtual void exitFunc_call(LULUParser::Func_callContext * /*ctx*/) override { }

  virtual void enterList(LULUParser::ListContext * /*ctx*/) override { }
  virtual void exitList(LULUParser::ListContext * /*ctx*/) override { }

  virtual void enterHandle_call(LULUParser::Handle_callContext * /*ctx*/) override { }
  virtual void exitHandle_call(LULUParser::Handle_callContext * /*ctx*/) override { }

  virtual void enterParams(LULUParser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(LULUParser::ParamsContext * /*ctx*/) override { }

  virtual void enterCond_stmt(LULUParser::Cond_stmtContext * /*ctx*/) override { }
  virtual void exitCond_stmt(LULUParser::Cond_stmtContext * /*ctx*/) override { }

  virtual void enterSwitch_body(LULUParser::Switch_bodyContext * /*ctx*/) override { }
  virtual void exitSwitch_body(LULUParser::Switch_bodyContext * /*ctx*/) override { }

  virtual void enterLoop_stmt(LULUParser::Loop_stmtContext * /*ctx*/) override { }
  virtual void exitLoop_stmt(LULUParser::Loop_stmtContext * /*ctx*/) override { }

  virtual void enterConst_val(LULUParser::Const_valContext * /*ctx*/) override { }
  virtual void exitConst_val(LULUParser::Const_valContext * /*ctx*/) override { }

  virtual void enterUnary_op(LULUParser::Unary_opContext * /*ctx*/) override { }
  virtual void exitUnary_op(LULUParser::Unary_opContext * /*ctx*/) override { }

  virtual void enterBinary_op(LULUParser::Binary_opContext * /*ctx*/) override { }
  virtual void exitBinary_op(LULUParser::Binary_opContext * /*ctx*/) override { }

  virtual void enterArithmetic(LULUParser::ArithmeticContext * /*ctx*/) override { }
  virtual void exitArithmetic(LULUParser::ArithmeticContext * /*ctx*/) override { }

  virtual void enterBitwise(LULUParser::BitwiseContext * /*ctx*/) override { }
  virtual void exitBitwise(LULUParser::BitwiseContext * /*ctx*/) override { }

  virtual void enterLogical(LULUParser::LogicalContext * /*ctx*/) override { }
  virtual void exitLogical(LULUParser::LogicalContext * /*ctx*/) override { }

  virtual void enterRelational(LULUParser::RelationalContext * /*ctx*/) override { }
  virtual void exitRelational(LULUParser::RelationalContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

