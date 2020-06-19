
// Generated from LULU.g4 by ANTLR 4.7.2


#include "LULUListener.h"

#include "LULUParser.h"


using namespace antlrcpp;
using namespace antlr4;

LULUParser::LULUParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

LULUParser::~LULUParser() {
  delete _interpreter;
}

std::string LULUParser::getGrammarFileName() const {
  return "LULU.g4";
}

const std::vector<std::string>& LULUParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& LULUParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

LULUParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LULUParser::Ft_defContext *> LULUParser::ProgramContext::ft_def() {
  return getRuleContexts<LULUParser::Ft_defContext>();
}

LULUParser::Ft_defContext* LULUParser::ProgramContext::ft_def(size_t i) {
  return getRuleContext<LULUParser::Ft_defContext>(i);
}


size_t LULUParser::ProgramContext::getRuleIndex() const {
  return LULUParser::RuleProgram;
}

void LULUParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void LULUParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

LULUParser::ProgramContext* LULUParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, LULUParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(62);
      ft_def();
      setState(65); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__3)
      | (1ULL << LULUParser::ID)
      | (1ULL << LULUParser::INT)
      | (1ULL << LULUParser::BOOL)
      | (1ULL << LULUParser::FLOAT)
      | (1ULL << LULUParser::STRING)
      | (1ULL << LULUParser::FUNCTION))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ft_defContext ------------------------------------------------------------------

LULUParser::Ft_defContext::Ft_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LULUParser::Type_defContext* LULUParser::Ft_defContext::type_def() {
  return getRuleContext<LULUParser::Type_defContext>(0);
}

LULUParser::Fun_defContext* LULUParser::Ft_defContext::fun_def() {
  return getRuleContext<LULUParser::Fun_defContext>(0);
}


size_t LULUParser::Ft_defContext::getRuleIndex() const {
  return LULUParser::RuleFt_def;
}

void LULUParser::Ft_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFt_def(this);
}

void LULUParser::Ft_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFt_def(this);
}

LULUParser::Ft_defContext* LULUParser::ft_def() {
  Ft_defContext *_localctx = _tracker.createInstance<Ft_defContext>(_ctx, getState());
  enterRule(_localctx, 2, LULUParser::RuleFt_def);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::ID:
      case LULUParser::INT:
      case LULUParser::BOOL:
      case LULUParser::FLOAT:
      case LULUParser::STRING: {
        setState(67);
        type_def();
        break;
      }

      case LULUParser::T__3:
      case LULUParser::FUNCTION: {
        setState(68);
        fun_def();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_defContext ------------------------------------------------------------------

LULUParser::Type_defContext::Type_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LULUParser::TypeContext* LULUParser::Type_defContext::type() {
  return getRuleContext<LULUParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> LULUParser::Type_defContext::ID() {
  return getTokens(LULUParser::ID);
}

tree::TerminalNode* LULUParser::Type_defContext::ID(size_t i) {
  return getToken(LULUParser::ID, i);
}

std::vector<LULUParser::ComponentContext *> LULUParser::Type_defContext::component() {
  return getRuleContexts<LULUParser::ComponentContext>();
}

LULUParser::ComponentContext* LULUParser::Type_defContext::component(size_t i) {
  return getRuleContext<LULUParser::ComponentContext>(i);
}


size_t LULUParser::Type_defContext::getRuleIndex() const {
  return LULUParser::RuleType_def;
}

void LULUParser::Type_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_def(this);
}

void LULUParser::Type_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_def(this);
}

LULUParser::Type_defContext* LULUParser::type_def() {
  Type_defContext *_localctx = _tracker.createInstance<Type_defContext>(_ctx, getState());
  enterRule(_localctx, 4, LULUParser::RuleType_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    type();
    setState(72);
    match(LULUParser::ID);
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LULUParser::T__0) {
      setState(73);
      match(LULUParser::T__0);
      setState(74);
      match(LULUParser::ID);
    }
    setState(77);
    match(LULUParser::T__1);
    setState(79); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(78);
      component();
      setState(81); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__3)
      | (1ULL << LULUParser::ID)
      | (1ULL << LULUParser::PRIVATE)
      | (1ULL << LULUParser::PUBLIC)
      | (1ULL << LULUParser::PROTECTED)
      | (1ULL << LULUParser::INT)
      | (1ULL << LULUParser::BOOL)
      | (1ULL << LULUParser::FLOAT)
      | (1ULL << LULUParser::STRING)
      | (1ULL << LULUParser::CONST)
      | (1ULL << LULUParser::FUNCTION))) != 0));
    setState(83);
    match(LULUParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fun_defContext ------------------------------------------------------------------

LULUParser::Fun_defContext::Fun_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LULUParser::Fun_defContext::FUNCTION() {
  return getToken(LULUParser::FUNCTION, 0);
}

tree::TerminalNode* LULUParser::Fun_defContext::ID() {
  return getToken(LULUParser::ID, 0);
}

LULUParser::BlockContext* LULUParser::Fun_defContext::block() {
  return getRuleContext<LULUParser::BlockContext>(0);
}

LULUParser::Args_varContext* LULUParser::Fun_defContext::args_var() {
  return getRuleContext<LULUParser::Args_varContext>(0);
}

LULUParser::Args_varPContext* LULUParser::Fun_defContext::args_varP() {
  return getRuleContext<LULUParser::Args_varPContext>(0);
}


size_t LULUParser::Fun_defContext::getRuleIndex() const {
  return LULUParser::RuleFun_def;
}

void LULUParser::Fun_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFun_def(this);
}

void LULUParser::Fun_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFun_def(this);
}

LULUParser::Fun_defContext* LULUParser::fun_def() {
  Fun_defContext *_localctx = _tracker.createInstance<Fun_defContext>(_ctx, getState());
  enterRule(_localctx, 6, LULUParser::RuleFun_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LULUParser::T__3) {
      setState(85);
      match(LULUParser::T__3);
      setState(86);
      args_var(0);
      setState(87);
      match(LULUParser::T__4);
      setState(88);
      match(LULUParser::T__5);
    }
    setState(92);
    match(LULUParser::FUNCTION);
    setState(93);
    match(LULUParser::ID);
    setState(94);
    match(LULUParser::T__3);
    setState(96);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::ID)
      | (1ULL << LULUParser::INT)
      | (1ULL << LULUParser::BOOL)
      | (1ULL << LULUParser::FLOAT)
      | (1ULL << LULUParser::STRING))) != 0)) {
      setState(95);
      args_varP();
    }
    setState(98);
    match(LULUParser::T__4);
    setState(99);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentContext ------------------------------------------------------------------

LULUParser::ComponentContext::ComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LULUParser::Var_defContext* LULUParser::ComponentContext::var_def() {
  return getRuleContext<LULUParser::Var_defContext>(0);
}

LULUParser::Fun_defContext* LULUParser::ComponentContext::fun_def() {
  return getRuleContext<LULUParser::Fun_defContext>(0);
}

LULUParser::Access_modifierContext* LULUParser::ComponentContext::access_modifier() {
  return getRuleContext<LULUParser::Access_modifierContext>(0);
}


size_t LULUParser::ComponentContext::getRuleIndex() const {
  return LULUParser::RuleComponent;
}

void LULUParser::ComponentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent(this);
}

void LULUParser::ComponentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent(this);
}

LULUParser::ComponentContext* LULUParser::component() {
  ComponentContext *_localctx = _tracker.createInstance<ComponentContext>(_ctx, getState());
  enterRule(_localctx, 8, LULUParser::RuleComponent);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::PRIVATE)
      | (1ULL << LULUParser::PUBLIC)
      | (1ULL << LULUParser::PROTECTED))) != 0)) {
      setState(101);
      access_modifier();
    }
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::ID:
      case LULUParser::INT:
      case LULUParser::BOOL:
      case LULUParser::FLOAT:
      case LULUParser::STRING:
      case LULUParser::CONST: {
        setState(104);
        var_def();
        break;
      }

      case LULUParser::T__3:
      case LULUParser::FUNCTION: {
        setState(105);
        fun_def();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

LULUParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LULUParser::Var_defContext *> LULUParser::BlockContext::var_def() {
  return getRuleContexts<LULUParser::Var_defContext>();
}

LULUParser::Var_defContext* LULUParser::BlockContext::var_def(size_t i) {
  return getRuleContext<LULUParser::Var_defContext>(i);
}

std::vector<LULUParser::StmtContext *> LULUParser::BlockContext::stmt() {
  return getRuleContexts<LULUParser::StmtContext>();
}

LULUParser::StmtContext* LULUParser::BlockContext::stmt(size_t i) {
  return getRuleContext<LULUParser::StmtContext>(i);
}


size_t LULUParser::BlockContext::getRuleIndex() const {
  return LULUParser::RuleBlock;
}

void LULUParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void LULUParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

LULUParser::BlockContext* LULUParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 10, LULUParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(LULUParser::T__1);
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__3)
      | (1ULL << LULUParser::ID)
      | (1ULL << LULUParser::FOR)
      | (1ULL << LULUParser::WHILE)
      | (1ULL << LULUParser::INT)
      | (1ULL << LULUParser::BOOL)
      | (1ULL << LULUParser::FLOAT)
      | (1ULL << LULUParser::STRING)
      | (1ULL << LULUParser::CONST)
      | (1ULL << LULUParser::BREAK)
      | (1ULL << LULUParser::CONTINUE)
      | (1ULL << LULUParser::DESTRUCT)
      | (1ULL << LULUParser::THIS)
      | (1ULL << LULUParser::SUPER)
      | (1ULL << LULUParser::READ)
      | (1ULL << LULUParser::WRITE)
      | (1ULL << LULUParser::IF)
      | (1ULL << LULUParser::SWITCH))) != 0)) {
      setState(111);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
      case 1: {
        setState(109);
        var_def();
        break;
      }

      case 2: {
        setState(110);
        stmt();
        break;
      }

      }
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(116);
    match(LULUParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Args_varPContext ------------------------------------------------------------------

LULUParser::Args_varPContext::Args_varPContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LULUParser::Args_varContext* LULUParser::Args_varPContext::args_var() {
  return getRuleContext<LULUParser::Args_varContext>(0);
}


size_t LULUParser::Args_varPContext::getRuleIndex() const {
  return LULUParser::RuleArgs_varP;
}

void LULUParser::Args_varPContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs_varP(this);
}

void LULUParser::Args_varPContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs_varP(this);
}

LULUParser::Args_varPContext* LULUParser::args_varP() {
  Args_varPContext *_localctx = _tracker.createInstance<Args_varPContext>(_ctx, getState());
  enterRule(_localctx, 12, LULUParser::RuleArgs_varP);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    args_var(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Args_varContext ------------------------------------------------------------------

LULUParser::Args_varContext::Args_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LULUParser::TypeContext* LULUParser::Args_varContext::type() {
  return getRuleContext<LULUParser::TypeContext>(0);
}

tree::TerminalNode* LULUParser::Args_varContext::ID() {
  return getToken(LULUParser::ID, 0);
}

LULUParser::Args_varContext* LULUParser::Args_varContext::args_var() {
  return getRuleContext<LULUParser::Args_varContext>(0);
}


size_t LULUParser::Args_varContext::getRuleIndex() const {
  return LULUParser::RuleArgs_var;
}

void LULUParser::Args_varContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs_var(this);
}

void LULUParser::Args_varContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs_var(this);
}


LULUParser::Args_varContext* LULUParser::args_var() {
   return args_var(0);
}

LULUParser::Args_varContext* LULUParser::args_var(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LULUParser::Args_varContext *_localctx = _tracker.createInstance<Args_varContext>(_ctx, parentState);
  LULUParser::Args_varContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, LULUParser::RuleArgs_var, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(121);
    type();
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LULUParser::T__6) {
      setState(122);
      match(LULUParser::T__6);
      setState(123);
      match(LULUParser::T__7);
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(129);
    match(LULUParser::ID);
    _ctx->stop = _input->LT(-1);
    setState(145);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Args_varContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleArgs_var);
        setState(131);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(132);
        match(LULUParser::T__8);
        setState(133);
        type();
        setState(138);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LULUParser::T__6) {
          setState(134);
          match(LULUParser::T__6);
          setState(135);
          match(LULUParser::T__7);
          setState(140);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(141);
        match(LULUParser::ID); 
      }
      setState(147);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Var_defContext ------------------------------------------------------------------

LULUParser::Var_defContext::Var_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LULUParser::TypeContext* LULUParser::Var_defContext::type() {
  return getRuleContext<LULUParser::TypeContext>(0);
}

std::vector<LULUParser::Var_valContext *> LULUParser::Var_defContext::var_val() {
  return getRuleContexts<LULUParser::Var_valContext>();
}

LULUParser::Var_valContext* LULUParser::Var_defContext::var_val(size_t i) {
  return getRuleContext<LULUParser::Var_valContext>(i);
}

tree::TerminalNode* LULUParser::Var_defContext::CONST() {
  return getToken(LULUParser::CONST, 0);
}


size_t LULUParser::Var_defContext::getRuleIndex() const {
  return LULUParser::RuleVar_def;
}

void LULUParser::Var_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_def(this);
}

void LULUParser::Var_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_def(this);
}

LULUParser::Var_defContext* LULUParser::var_def() {
  Var_defContext *_localctx = _tracker.createInstance<Var_defContext>(_ctx, getState());
  enterRule(_localctx, 16, LULUParser::RuleVar_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LULUParser::CONST) {
      setState(148);
      match(LULUParser::CONST);
    }
    setState(151);
    type();
    setState(152);
    var_val();
    setState(157);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LULUParser::T__8) {
      setState(153);
      match(LULUParser::T__8);
      setState(154);
      var_val();
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(160);
    match(LULUParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_valContext ------------------------------------------------------------------

LULUParser::Var_valContext::Var_valContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LULUParser::RefContext* LULUParser::Var_valContext::ref() {
  return getRuleContext<LULUParser::RefContext>(0);
}

LULUParser::ExprContext* LULUParser::Var_valContext::expr() {
  return getRuleContext<LULUParser::ExprContext>(0);
}


size_t LULUParser::Var_valContext::getRuleIndex() const {
  return LULUParser::RuleVar_val;
}

void LULUParser::Var_valContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_val(this);
}

void LULUParser::Var_valContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_val(this);
}

LULUParser::Var_valContext* LULUParser::var_val() {
  Var_valContext *_localctx = _tracker.createInstance<Var_valContext>(_ctx, getState());
  enterRule(_localctx, 18, LULUParser::RuleVar_val);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    ref();
    setState(165);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LULUParser::T__5) {
      setState(163);
      match(LULUParser::T__5);
      setState(164);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

LULUParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LULUParser::ExprContext *> LULUParser::ExprContext::expr() {
  return getRuleContexts<LULUParser::ExprContext>();
}

LULUParser::ExprContext* LULUParser::ExprContext::expr(size_t i) {
  return getRuleContext<LULUParser::ExprContext>(i);
}

LULUParser::Unary_opContext* LULUParser::ExprContext::unary_op() {
  return getRuleContext<LULUParser::Unary_opContext>(0);
}

LULUParser::Const_valContext* LULUParser::ExprContext::const_val() {
  return getRuleContext<LULUParser::Const_valContext>(0);
}

tree::TerminalNode* LULUParser::ExprContext::ALLOCATE() {
  return getToken(LULUParser::ALLOCATE, 0);
}

LULUParser::Handle_callContext* LULUParser::ExprContext::handle_call() {
  return getRuleContext<LULUParser::Handle_callContext>(0);
}

LULUParser::Func_callContext* LULUParser::ExprContext::func_call() {
  return getRuleContext<LULUParser::Func_callContext>(0);
}

LULUParser::VarContext* LULUParser::ExprContext::var() {
  return getRuleContext<LULUParser::VarContext>(0);
}

LULUParser::ListContext* LULUParser::ExprContext::list() {
  return getRuleContext<LULUParser::ListContext>(0);
}

tree::TerminalNode* LULUParser::ExprContext::NIL() {
  return getToken(LULUParser::NIL, 0);
}

LULUParser::Binary_opContext* LULUParser::ExprContext::binary_op() {
  return getRuleContext<LULUParser::Binary_opContext>(0);
}


size_t LULUParser::ExprContext::getRuleIndex() const {
  return LULUParser::RuleExpr;
}

void LULUParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void LULUParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


LULUParser::ExprContext* LULUParser::expr() {
   return expr(0);
}

LULUParser::ExprContext* LULUParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LULUParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  LULUParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, LULUParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(182);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(168);
      match(LULUParser::T__3);
      setState(169);
      expr(0);
      setState(170);
      match(LULUParser::T__4);
      break;
    }

    case 2: {
      setState(172);
      unary_op();
      setState(173);
      expr(7);
      break;
    }

    case 3: {
      setState(175);
      const_val();
      break;
    }

    case 4: {
      setState(176);
      match(LULUParser::ALLOCATE);
      setState(177);
      handle_call();
      break;
    }

    case 5: {
      setState(178);
      func_call();
      break;
    }

    case 6: {
      setState(179);
      var();
      break;
    }

    case 7: {
      setState(180);
      list();
      break;
    }

    case 8: {
      setState(181);
      match(LULUParser::NIL);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(190);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpr);
        setState(184);

        if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
        setState(185);
        binary_op();
        setState(186);
        expr(10); 
      }
      setState(192);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Access_modifierContext ------------------------------------------------------------------

LULUParser::Access_modifierContext::Access_modifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LULUParser::Access_modifierContext::PRIVATE() {
  return getToken(LULUParser::PRIVATE, 0);
}

tree::TerminalNode* LULUParser::Access_modifierContext::PUBLIC() {
  return getToken(LULUParser::PUBLIC, 0);
}

tree::TerminalNode* LULUParser::Access_modifierContext::PROTECTED() {
  return getToken(LULUParser::PROTECTED, 0);
}


size_t LULUParser::Access_modifierContext::getRuleIndex() const {
  return LULUParser::RuleAccess_modifier;
}

void LULUParser::Access_modifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccess_modifier(this);
}

void LULUParser::Access_modifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccess_modifier(this);
}

LULUParser::Access_modifierContext* LULUParser::access_modifier() {
  Access_modifierContext *_localctx = _tracker.createInstance<Access_modifierContext>(_ctx, getState());
  enterRule(_localctx, 22, LULUParser::RuleAccess_modifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::PRIVATE)
      | (1ULL << LULUParser::PUBLIC)
      | (1ULL << LULUParser::PROTECTED))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

LULUParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LULUParser::TypeContext::INT() {
  return getToken(LULUParser::INT, 0);
}

tree::TerminalNode* LULUParser::TypeContext::BOOL() {
  return getToken(LULUParser::BOOL, 0);
}

tree::TerminalNode* LULUParser::TypeContext::FLOAT() {
  return getToken(LULUParser::FLOAT, 0);
}

tree::TerminalNode* LULUParser::TypeContext::STRING() {
  return getToken(LULUParser::STRING, 0);
}

tree::TerminalNode* LULUParser::TypeContext::ID() {
  return getToken(LULUParser::ID, 0);
}


size_t LULUParser::TypeContext::getRuleIndex() const {
  return LULUParser::RuleType;
}

void LULUParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void LULUParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

LULUParser::TypeContext* LULUParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 24, LULUParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::ID)
      | (1ULL << LULUParser::INT)
      | (1ULL << LULUParser::BOOL)
      | (1ULL << LULUParser::FLOAT)
      | (1ULL << LULUParser::STRING))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

LULUParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LULUParser::AssignContext* LULUParser::StmtContext::assign() {
  return getRuleContext<LULUParser::AssignContext>(0);
}

LULUParser::Func_callContext* LULUParser::StmtContext::func_call() {
  return getRuleContext<LULUParser::Func_callContext>(0);
}

LULUParser::Cond_stmtContext* LULUParser::StmtContext::cond_stmt() {
  return getRuleContext<LULUParser::Cond_stmtContext>(0);
}

LULUParser::Loop_stmtContext* LULUParser::StmtContext::loop_stmt() {
  return getRuleContext<LULUParser::Loop_stmtContext>(0);
}

tree::TerminalNode* LULUParser::StmtContext::BREAK() {
  return getToken(LULUParser::BREAK, 0);
}

tree::TerminalNode* LULUParser::StmtContext::CONTINUE() {
  return getToken(LULUParser::CONTINUE, 0);
}

tree::TerminalNode* LULUParser::StmtContext::DESTRUCT() {
  return getToken(LULUParser::DESTRUCT, 0);
}

tree::TerminalNode* LULUParser::StmtContext::ID() {
  return getToken(LULUParser::ID, 0);
}


size_t LULUParser::StmtContext::getRuleIndex() const {
  return LULUParser::RuleStmt;
}

void LULUParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void LULUParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}

LULUParser::StmtContext* LULUParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 26, LULUParser::RuleStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(219);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(197);
      assign();
      setState(198);
      match(LULUParser::T__9);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(200);
      func_call();
      setState(201);
      match(LULUParser::T__9);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(203);
      cond_stmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(204);
      loop_stmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(205);
      match(LULUParser::BREAK);
      setState(206);
      match(LULUParser::T__9);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(207);
      match(LULUParser::CONTINUE);
      setState(208);
      match(LULUParser::T__9);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(209);
      match(LULUParser::DESTRUCT);
      setState(214);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LULUParser::T__6) {
        setState(210);
        match(LULUParser::T__6);
        setState(211);
        match(LULUParser::T__7);
        setState(216);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(217);
      match(LULUParser::ID);
      setState(218);
      match(LULUParser::T__9);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

LULUParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LULUParser::ExprContext* LULUParser::AssignContext::expr() {
  return getRuleContext<LULUParser::ExprContext>(0);
}

std::vector<LULUParser::VarContext *> LULUParser::AssignContext::var() {
  return getRuleContexts<LULUParser::VarContext>();
}

LULUParser::VarContext* LULUParser::AssignContext::var(size_t i) {
  return getRuleContext<LULUParser::VarContext>(i);
}


size_t LULUParser::AssignContext::getRuleIndex() const {
  return LULUParser::RuleAssign;
}

void LULUParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void LULUParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}

LULUParser::AssignContext* LULUParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 28, LULUParser::RuleAssign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::ID:
      case LULUParser::THIS:
      case LULUParser::SUPER: {
        setState(221);
        var();
        break;
      }

      case LULUParser::T__3: {
        setState(222);
        match(LULUParser::T__3);
        setState(223);
        var();
        setState(228);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LULUParser::T__8) {
          setState(224);
          match(LULUParser::T__8);
          setState(225);
          var();
          setState(230);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(231);
        match(LULUParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(235);
    match(LULUParser::T__5);
    setState(236);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

LULUParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LULUParser::RefContext *> LULUParser::VarContext::ref() {
  return getRuleContexts<LULUParser::RefContext>();
}

LULUParser::RefContext* LULUParser::VarContext::ref(size_t i) {
  return getRuleContext<LULUParser::RefContext>(i);
}

tree::TerminalNode* LULUParser::VarContext::THIS() {
  return getToken(LULUParser::THIS, 0);
}

tree::TerminalNode* LULUParser::VarContext::SUPER() {
  return getToken(LULUParser::SUPER, 0);
}


size_t LULUParser::VarContext::getRuleIndex() const {
  return LULUParser::RuleVar;
}

void LULUParser::VarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar(this);
}

void LULUParser::VarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar(this);
}

LULUParser::VarContext* LULUParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 30, LULUParser::RuleVar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(240);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LULUParser::THIS

    || _la == LULUParser::SUPER) {
      setState(238);
      _la = _input->LA(1);
      if (!(_la == LULUParser::THIS

      || _la == LULUParser::SUPER)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(239);
      match(LULUParser::T__10);
    }
    setState(242);
    ref();
    setState(247);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(243);
        match(LULUParser::T__10);
        setState(244);
        ref(); 
      }
      setState(249);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RefContext ------------------------------------------------------------------

LULUParser::RefContext::RefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LULUParser::RefContext::ID() {
  return getToken(LULUParser::ID, 0);
}

std::vector<LULUParser::ExprContext *> LULUParser::RefContext::expr() {
  return getRuleContexts<LULUParser::ExprContext>();
}

LULUParser::ExprContext* LULUParser::RefContext::expr(size_t i) {
  return getRuleContext<LULUParser::ExprContext>(i);
}


size_t LULUParser::RefContext::getRuleIndex() const {
  return LULUParser::RuleRef;
}

void LULUParser::RefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRef(this);
}

void LULUParser::RefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRef(this);
}

LULUParser::RefContext* LULUParser::ref() {
  RefContext *_localctx = _tracker.createInstance<RefContext>(_ctx, getState());
  enterRule(_localctx, 32, LULUParser::RuleRef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(LULUParser::ID);
    setState(257);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(251);
        match(LULUParser::T__6);
        setState(252);
        expr(0);
        setState(253);
        match(LULUParser::T__7); 
      }
      setState(259);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_callContext ------------------------------------------------------------------

LULUParser::Func_callContext::Func_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LULUParser::Handle_callContext* LULUParser::Func_callContext::handle_call() {
  return getRuleContext<LULUParser::Handle_callContext>(0);
}

LULUParser::VarContext* LULUParser::Func_callContext::var() {
  return getRuleContext<LULUParser::VarContext>(0);
}

tree::TerminalNode* LULUParser::Func_callContext::READ() {
  return getToken(LULUParser::READ, 0);
}

tree::TerminalNode* LULUParser::Func_callContext::WRITE() {
  return getToken(LULUParser::WRITE, 0);
}

LULUParser::ExprContext* LULUParser::Func_callContext::expr() {
  return getRuleContext<LULUParser::ExprContext>(0);
}


size_t LULUParser::Func_callContext::getRuleIndex() const {
  return LULUParser::RuleFunc_call;
}

void LULUParser::Func_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_call(this);
}

void LULUParser::Func_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_call(this);
}

LULUParser::Func_callContext* LULUParser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 34, LULUParser::RuleFunc_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(274);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::ID:
      case LULUParser::THIS:
      case LULUParser::SUPER: {
        enterOuterAlt(_localctx, 1);
        setState(263);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          setState(260);
          var();
          setState(261);
          match(LULUParser::T__10);
          break;
        }

        }
        setState(265);
        handle_call();
        break;
      }

      case LULUParser::READ: {
        enterOuterAlt(_localctx, 2);
        setState(266);
        match(LULUParser::READ);
        setState(267);
        match(LULUParser::T__3);
        setState(268);
        match(LULUParser::T__4);
        break;
      }

      case LULUParser::WRITE: {
        enterOuterAlt(_localctx, 3);
        setState(269);
        match(LULUParser::WRITE);
        setState(270);
        match(LULUParser::T__3);
        setState(271);
        expr(0);
        setState(272);
        match(LULUParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListContext ------------------------------------------------------------------

LULUParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LULUParser::ExprContext *> LULUParser::ListContext::expr() {
  return getRuleContexts<LULUParser::ExprContext>();
}

LULUParser::ExprContext* LULUParser::ListContext::expr(size_t i) {
  return getRuleContext<LULUParser::ExprContext>(i);
}

std::vector<LULUParser::ListContext *> LULUParser::ListContext::list() {
  return getRuleContexts<LULUParser::ListContext>();
}

LULUParser::ListContext* LULUParser::ListContext::list(size_t i) {
  return getRuleContext<LULUParser::ListContext>(i);
}


size_t LULUParser::ListContext::getRuleIndex() const {
  return LULUParser::RuleList;
}

void LULUParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}

void LULUParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}

LULUParser::ListContext* LULUParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 36, LULUParser::RuleList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(LULUParser::T__6);
    setState(279);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(277);
      expr(0);
      break;
    }

    case 2: {
      setState(278);
      list();
      break;
    }

    }
    setState(288);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LULUParser::T__8) {
      setState(281);
      match(LULUParser::T__8);
      setState(284);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
      case 1: {
        setState(282);
        expr(0);
        break;
      }

      case 2: {
        setState(283);
        list();
        break;
      }

      }
      setState(290);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(291);
    match(LULUParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Handle_callContext ------------------------------------------------------------------

LULUParser::Handle_callContext::Handle_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LULUParser::Handle_callContext::ID() {
  return getToken(LULUParser::ID, 0);
}

LULUParser::ParamsContext* LULUParser::Handle_callContext::params() {
  return getRuleContext<LULUParser::ParamsContext>(0);
}


size_t LULUParser::Handle_callContext::getRuleIndex() const {
  return LULUParser::RuleHandle_call;
}

void LULUParser::Handle_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandle_call(this);
}

void LULUParser::Handle_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandle_call(this);
}

LULUParser::Handle_callContext* LULUParser::handle_call() {
  Handle_callContext *_localctx = _tracker.createInstance<Handle_callContext>(_ctx, getState());
  enterRule(_localctx, 38, LULUParser::RuleHandle_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    match(LULUParser::ID);
    setState(294);
    match(LULUParser::T__3);
    setState(296);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__3)
      | (1ULL << LULUParser::T__6)
      | (1ULL << LULUParser::T__11)
      | (1ULL << LULUParser::T__12)
      | (1ULL << LULUParser::T__13)
      | (1ULL << LULUParser::INT_CONST)
      | (1ULL << LULUParser::REAL_CONST)
      | (1ULL << LULUParser::BOOL_CONST)
      | (1ULL << LULUParser::ID)
      | (1ULL << LULUParser::STRING_CONST)
      | (1ULL << LULUParser::THIS)
      | (1ULL << LULUParser::SUPER)
      | (1ULL << LULUParser::ALLOCATE)
      | (1ULL << LULUParser::READ)
      | (1ULL << LULUParser::WRITE)
      | (1ULL << LULUParser::NIL))) != 0)) {
      setState(295);
      params();
    }
    setState(298);
    match(LULUParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

LULUParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LULUParser::ExprContext* LULUParser::ParamsContext::expr() {
  return getRuleContext<LULUParser::ExprContext>(0);
}

LULUParser::ParamsContext* LULUParser::ParamsContext::params() {
  return getRuleContext<LULUParser::ParamsContext>(0);
}


size_t LULUParser::ParamsContext::getRuleIndex() const {
  return LULUParser::RuleParams;
}

void LULUParser::ParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParams(this);
}

void LULUParser::ParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParams(this);
}

LULUParser::ParamsContext* LULUParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 40, LULUParser::RuleParams);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(305);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(300);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(301);
      expr(0);
      setState(302);
      match(LULUParser::T__8);
      setState(303);
      params();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cond_stmtContext ------------------------------------------------------------------

LULUParser::Cond_stmtContext::Cond_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LULUParser::Cond_stmtContext::IF() {
  return getToken(LULUParser::IF, 0);
}

LULUParser::ExprContext* LULUParser::Cond_stmtContext::expr() {
  return getRuleContext<LULUParser::ExprContext>(0);
}

std::vector<LULUParser::BlockContext *> LULUParser::Cond_stmtContext::block() {
  return getRuleContexts<LULUParser::BlockContext>();
}

LULUParser::BlockContext* LULUParser::Cond_stmtContext::block(size_t i) {
  return getRuleContext<LULUParser::BlockContext>(i);
}

std::vector<LULUParser::StmtContext *> LULUParser::Cond_stmtContext::stmt() {
  return getRuleContexts<LULUParser::StmtContext>();
}

LULUParser::StmtContext* LULUParser::Cond_stmtContext::stmt(size_t i) {
  return getRuleContext<LULUParser::StmtContext>(i);
}

tree::TerminalNode* LULUParser::Cond_stmtContext::ELSE() {
  return getToken(LULUParser::ELSE, 0);
}

tree::TerminalNode* LULUParser::Cond_stmtContext::SWITCH() {
  return getToken(LULUParser::SWITCH, 0);
}

LULUParser::VarContext* LULUParser::Cond_stmtContext::var() {
  return getRuleContext<LULUParser::VarContext>(0);
}

LULUParser::Switch_bodyContext* LULUParser::Cond_stmtContext::switch_body() {
  return getRuleContext<LULUParser::Switch_bodyContext>(0);
}


size_t LULUParser::Cond_stmtContext::getRuleIndex() const {
  return LULUParser::RuleCond_stmt;
}

void LULUParser::Cond_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond_stmt(this);
}

void LULUParser::Cond_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond_stmt(this);
}

LULUParser::Cond_stmtContext* LULUParser::cond_stmt() {
  Cond_stmtContext *_localctx = _tracker.createInstance<Cond_stmtContext>(_ctx, getState());
  enterRule(_localctx, 42, LULUParser::RuleCond_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(326);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::IF: {
        enterOuterAlt(_localctx, 1);
        setState(307);
        match(LULUParser::IF);
        setState(308);
        expr(0);
        setState(311);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case LULUParser::T__1: {
            setState(309);
            block();
            break;
          }

          case LULUParser::T__3:
          case LULUParser::ID:
          case LULUParser::FOR:
          case LULUParser::WHILE:
          case LULUParser::BREAK:
          case LULUParser::CONTINUE:
          case LULUParser::DESTRUCT:
          case LULUParser::THIS:
          case LULUParser::SUPER:
          case LULUParser::READ:
          case LULUParser::WRITE:
          case LULUParser::IF:
          case LULUParser::SWITCH: {
            setState(310);
            stmt();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(318);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
        case 1: {
          setState(313);
          match(LULUParser::ELSE);
          setState(316);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case LULUParser::T__1: {
              setState(314);
              block();
              break;
            }

            case LULUParser::T__3:
            case LULUParser::ID:
            case LULUParser::FOR:
            case LULUParser::WHILE:
            case LULUParser::BREAK:
            case LULUParser::CONTINUE:
            case LULUParser::DESTRUCT:
            case LULUParser::THIS:
            case LULUParser::SUPER:
            case LULUParser::READ:
            case LULUParser::WRITE:
            case LULUParser::IF:
            case LULUParser::SWITCH: {
              setState(315);
              stmt();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          break;
        }

        }
        break;
      }

      case LULUParser::SWITCH: {
        enterOuterAlt(_localctx, 2);
        setState(320);
        match(LULUParser::SWITCH);
        setState(321);
        var();
        setState(322);
        match(LULUParser::T__1);
        setState(323);
        switch_body();
        setState(324);
        match(LULUParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_bodyContext ------------------------------------------------------------------

LULUParser::Switch_bodyContext::Switch_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LULUParser::Switch_bodyContext::CASEOF() {
  return getTokens(LULUParser::CASEOF);
}

tree::TerminalNode* LULUParser::Switch_bodyContext::CASEOF(size_t i) {
  return getToken(LULUParser::CASEOF, i);
}

std::vector<tree::TerminalNode *> LULUParser::Switch_bodyContext::INT_CONST() {
  return getTokens(LULUParser::INT_CONST);
}

tree::TerminalNode* LULUParser::Switch_bodyContext::INT_CONST(size_t i) {
  return getToken(LULUParser::INT_CONST, i);
}

std::vector<LULUParser::BlockContext *> LULUParser::Switch_bodyContext::block() {
  return getRuleContexts<LULUParser::BlockContext>();
}

LULUParser::BlockContext* LULUParser::Switch_bodyContext::block(size_t i) {
  return getRuleContext<LULUParser::BlockContext>(i);
}

tree::TerminalNode* LULUParser::Switch_bodyContext::DEFAULT() {
  return getToken(LULUParser::DEFAULT, 0);
}


size_t LULUParser::Switch_bodyContext::getRuleIndex() const {
  return LULUParser::RuleSwitch_body;
}

void LULUParser::Switch_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch_body(this);
}

void LULUParser::Switch_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch_body(this);
}

LULUParser::Switch_bodyContext* LULUParser::switch_body() {
  Switch_bodyContext *_localctx = _tracker.createInstance<Switch_bodyContext>(_ctx, getState());
  enterRule(_localctx, 44, LULUParser::RuleSwitch_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(328);
      match(LULUParser::CASEOF);
      setState(329);
      match(LULUParser::INT_CONST);
      setState(330);
      match(LULUParser::T__0);
      setState(331);
      block();
      setState(334); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LULUParser::CASEOF);
    setState(339);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LULUParser::DEFAULT) {
      setState(336);
      match(LULUParser::DEFAULT);
      setState(337);
      match(LULUParser::T__0);
      setState(338);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_stmtContext ------------------------------------------------------------------

LULUParser::Loop_stmtContext::Loop_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LULUParser::Loop_stmtContext::FOR() {
  return getToken(LULUParser::FOR, 0);
}

LULUParser::ExprContext* LULUParser::Loop_stmtContext::expr() {
  return getRuleContext<LULUParser::ExprContext>(0);
}

LULUParser::BlockContext* LULUParser::Loop_stmtContext::block() {
  return getRuleContext<LULUParser::BlockContext>(0);
}

std::vector<LULUParser::AssignContext *> LULUParser::Loop_stmtContext::assign() {
  return getRuleContexts<LULUParser::AssignContext>();
}

LULUParser::AssignContext* LULUParser::Loop_stmtContext::assign(size_t i) {
  return getRuleContext<LULUParser::AssignContext>(i);
}

LULUParser::TypeContext* LULUParser::Loop_stmtContext::type() {
  return getRuleContext<LULUParser::TypeContext>(0);
}

tree::TerminalNode* LULUParser::Loop_stmtContext::WHILE() {
  return getToken(LULUParser::WHILE, 0);
}

LULUParser::StmtContext* LULUParser::Loop_stmtContext::stmt() {
  return getRuleContext<LULUParser::StmtContext>(0);
}


size_t LULUParser::Loop_stmtContext::getRuleIndex() const {
  return LULUParser::RuleLoop_stmt;
}

void LULUParser::Loop_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop_stmt(this);
}

void LULUParser::Loop_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop_stmt(this);
}

LULUParser::Loop_stmtContext* LULUParser::loop_stmt() {
  Loop_stmtContext *_localctx = _tracker.createInstance<Loop_stmtContext>(_ctx, getState());
  enterRule(_localctx, 46, LULUParser::RuleLoop_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(362);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::FOR: {
        enterOuterAlt(_localctx, 1);
        setState(341);
        match(LULUParser::FOR);
        setState(346);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << LULUParser::T__3)
          | (1ULL << LULUParser::ID)
          | (1ULL << LULUParser::INT)
          | (1ULL << LULUParser::BOOL)
          | (1ULL << LULUParser::FLOAT)
          | (1ULL << LULUParser::STRING)
          | (1ULL << LULUParser::THIS)
          | (1ULL << LULUParser::SUPER))) != 0)) {
          setState(343);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
          case 1: {
            setState(342);
            type();
            break;
          }

          }
          setState(345);
          assign();
        }
        setState(348);
        match(LULUParser::T__9);
        setState(349);
        expr(0);
        setState(350);
        match(LULUParser::T__9);
        setState(352);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << LULUParser::T__3)
          | (1ULL << LULUParser::ID)
          | (1ULL << LULUParser::THIS)
          | (1ULL << LULUParser::SUPER))) != 0)) {
          setState(351);
          assign();
        }
        setState(354);
        block();
        break;
      }

      case LULUParser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(356);
        match(LULUParser::WHILE);
        setState(357);
        expr(0);
        setState(360);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case LULUParser::T__1: {
            setState(358);
            block();
            break;
          }

          case LULUParser::T__3:
          case LULUParser::ID:
          case LULUParser::FOR:
          case LULUParser::WHILE:
          case LULUParser::BREAK:
          case LULUParser::CONTINUE:
          case LULUParser::DESTRUCT:
          case LULUParser::THIS:
          case LULUParser::SUPER:
          case LULUParser::READ:
          case LULUParser::WRITE:
          case LULUParser::IF:
          case LULUParser::SWITCH: {
            setState(359);
            stmt();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_valContext ------------------------------------------------------------------

LULUParser::Const_valContext::Const_valContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LULUParser::Const_valContext::INT_CONST() {
  return getToken(LULUParser::INT_CONST, 0);
}

tree::TerminalNode* LULUParser::Const_valContext::REAL_CONST() {
  return getToken(LULUParser::REAL_CONST, 0);
}

tree::TerminalNode* LULUParser::Const_valContext::BOOL_CONST() {
  return getToken(LULUParser::BOOL_CONST, 0);
}

tree::TerminalNode* LULUParser::Const_valContext::STRING_CONST() {
  return getToken(LULUParser::STRING_CONST, 0);
}


size_t LULUParser::Const_valContext::getRuleIndex() const {
  return LULUParser::RuleConst_val;
}

void LULUParser::Const_valContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConst_val(this);
}

void LULUParser::Const_valContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConst_val(this);
}

LULUParser::Const_valContext* LULUParser::const_val() {
  Const_valContext *_localctx = _tracker.createInstance<Const_valContext>(_ctx, getState());
  enterRule(_localctx, 48, LULUParser::RuleConst_val);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::INT_CONST)
      | (1ULL << LULUParser::REAL_CONST)
      | (1ULL << LULUParser::BOOL_CONST)
      | (1ULL << LULUParser::STRING_CONST))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_opContext ------------------------------------------------------------------

LULUParser::Unary_opContext::Unary_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LULUParser::Unary_opContext::getRuleIndex() const {
  return LULUParser::RuleUnary_op;
}

void LULUParser::Unary_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_op(this);
}

void LULUParser::Unary_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_op(this);
}

LULUParser::Unary_opContext* LULUParser::unary_op() {
  Unary_opContext *_localctx = _tracker.createInstance<Unary_opContext>(_ctx, getState());
  enterRule(_localctx, 50, LULUParser::RuleUnary_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__11)
      | (1ULL << LULUParser::T__12)
      | (1ULL << LULUParser::T__13))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_opContext ------------------------------------------------------------------

LULUParser::Binary_opContext::Binary_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LULUParser::ArithmeticContext* LULUParser::Binary_opContext::arithmetic() {
  return getRuleContext<LULUParser::ArithmeticContext>(0);
}

LULUParser::RelationalContext* LULUParser::Binary_opContext::relational() {
  return getRuleContext<LULUParser::RelationalContext>(0);
}

LULUParser::BitwiseContext* LULUParser::Binary_opContext::bitwise() {
  return getRuleContext<LULUParser::BitwiseContext>(0);
}

LULUParser::LogicalContext* LULUParser::Binary_opContext::logical() {
  return getRuleContext<LULUParser::LogicalContext>(0);
}


size_t LULUParser::Binary_opContext::getRuleIndex() const {
  return LULUParser::RuleBinary_op;
}

void LULUParser::Binary_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary_op(this);
}

void LULUParser::Binary_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary_op(this);
}

LULUParser::Binary_opContext* LULUParser::binary_op() {
  Binary_opContext *_localctx = _tracker.createInstance<Binary_opContext>(_ctx, getState());
  enterRule(_localctx, 52, LULUParser::RuleBinary_op);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(372);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::T__11:
      case LULUParser::T__14:
      case LULUParser::T__15:
      case LULUParser::T__16:
      case LULUParser::T__17: {
        enterOuterAlt(_localctx, 1);
        setState(368);
        arithmetic();
        break;
      }

      case LULUParser::T__22:
      case LULUParser::T__23:
      case LULUParser::T__24:
      case LULUParser::T__25:
      case LULUParser::T__26:
      case LULUParser::T__27: {
        enterOuterAlt(_localctx, 2);
        setState(369);
        relational();
        break;
      }

      case LULUParser::T__18:
      case LULUParser::T__19: {
        enterOuterAlt(_localctx, 3);
        setState(370);
        bitwise();
        break;
      }

      case LULUParser::T__20:
      case LULUParser::T__21: {
        enterOuterAlt(_localctx, 4);
        setState(371);
        logical();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticContext ------------------------------------------------------------------

LULUParser::ArithmeticContext::ArithmeticContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LULUParser::ArithmeticContext::getRuleIndex() const {
  return LULUParser::RuleArithmetic;
}

void LULUParser::ArithmeticContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmetic(this);
}

void LULUParser::ArithmeticContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmetic(this);
}

LULUParser::ArithmeticContext* LULUParser::arithmetic() {
  ArithmeticContext *_localctx = _tracker.createInstance<ArithmeticContext>(_ctx, getState());
  enterRule(_localctx, 54, LULUParser::RuleArithmetic);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__11)
      | (1ULL << LULUParser::T__14)
      | (1ULL << LULUParser::T__15)
      | (1ULL << LULUParser::T__16)
      | (1ULL << LULUParser::T__17))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitwiseContext ------------------------------------------------------------------

LULUParser::BitwiseContext::BitwiseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LULUParser::BitwiseContext::getRuleIndex() const {
  return LULUParser::RuleBitwise;
}

void LULUParser::BitwiseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitwise(this);
}

void LULUParser::BitwiseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitwise(this);
}

LULUParser::BitwiseContext* LULUParser::bitwise() {
  BitwiseContext *_localctx = _tracker.createInstance<BitwiseContext>(_ctx, getState());
  enterRule(_localctx, 56, LULUParser::RuleBitwise);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    _la = _input->LA(1);
    if (!(_la == LULUParser::T__18

    || _la == LULUParser::T__19)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalContext ------------------------------------------------------------------

LULUParser::LogicalContext::LogicalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LULUParser::LogicalContext::getRuleIndex() const {
  return LULUParser::RuleLogical;
}

void LULUParser::LogicalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogical(this);
}

void LULUParser::LogicalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogical(this);
}

LULUParser::LogicalContext* LULUParser::logical() {
  LogicalContext *_localctx = _tracker.createInstance<LogicalContext>(_ctx, getState());
  enterRule(_localctx, 58, LULUParser::RuleLogical);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(378);
    _la = _input->LA(1);
    if (!(_la == LULUParser::T__20

    || _la == LULUParser::T__21)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalContext ------------------------------------------------------------------

LULUParser::RelationalContext::RelationalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LULUParser::RelationalContext::getRuleIndex() const {
  return LULUParser::RuleRelational;
}

void LULUParser::RelationalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational(this);
}

void LULUParser::RelationalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LULUListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational(this);
}

LULUParser::RelationalContext* LULUParser::relational() {
  RelationalContext *_localctx = _tracker.createInstance<RelationalContext>(_ctx, getState());
  enterRule(_localctx, 60, LULUParser::RuleRelational);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__22)
      | (1ULL << LULUParser::T__23)
      | (1ULL << LULUParser::T__24)
      | (1ULL << LULUParser::T__25)
      | (1ULL << LULUParser::T__26)
      | (1ULL << LULUParser::T__27))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool LULUParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return args_varSempred(dynamic_cast<Args_varContext *>(context), predicateIndex);
    case 10: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LULUParser::args_varSempred(Args_varContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool LULUParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 9);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> LULUParser::_decisionToDFA;
atn::PredictionContextCache LULUParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN LULUParser::_atn;
std::vector<uint16_t> LULUParser::_serializedATN;

std::vector<std::string> LULUParser::_ruleNames = {
  "program", "ft_def", "type_def", "fun_def", "component", "block", "args_varP", 
  "args_var", "var_def", "var_val", "expr", "access_modifier", "type", "stmt", 
  "assign", "var", "ref", "func_call", "list", "handle_call", "params", 
  "cond_stmt", "switch_body", "loop_stmt", "const_val", "unary_op", "binary_op", 
  "arithmetic", "bitwise", "logical", "relational"
};

std::vector<std::string> LULUParser::_literalNames = {
  "", "':'", "'{'", "'}'", "'('", "')'", "'='", "'['", "']'", "','", "';'", 
  "'.'", "'-'", "'!'", "'~'", "'+'", "'*'", "'/'", "'%'", "'&'", "'|'", 
  "'||'", "'&&'", "'=='", "'!='", "'<='", "'>='", "'<'", "'>'", "", "", 
  "", "", "", "", "", "", "", "", "", "'private'", "'public'", "'protected'", 
  "'for'", "'while'", "'int'", "'bool'", "'float'", "'string'", "'const'", 
  "'function'", "'break'", "'continue'", "'destruct'", "'this'", "'super'", 
  "'allocate'", "'read'", "'write'", "'nil'", "'if'", "'else'", "'switch'", 
  "'caseof'", "'default'"
};

std::vector<std::string> LULUParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "WHITESPACE", "COMMENT", "INT_CONST", 
  "REAL_CONST", "BOOL_CONST", "ID", "STRING_CONST", "RELATIONAL", "ARITHMETIC", 
  "LOGICAL", "BITWISE", "PRIVATE", "PUBLIC", "PROTECTED", "FOR", "WHILE", 
  "INT", "BOOL", "FLOAT", "STRING", "CONST", "FUNCTION", "BREAK", "CONTINUE", 
  "DESTRUCT", "THIS", "SUPER", "ALLOCATE", "READ", "WRITE", "NIL", "IF", 
  "ELSE", "SWITCH", "CASEOF", "DEFAULT"
};

dfa::Vocabulary LULUParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> LULUParser::_tokenNames;

LULUParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x42, 0x181, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x3, 0x2, 0x6, 0x2, 0x42, 0xa, 
    0x2, 0xd, 0x2, 0xe, 0x2, 0x43, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x48, 0xa, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x4e, 0xa, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x52, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x53, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x5d, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x63, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x5, 0x6, 
    0x69, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x6d, 0xa, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x72, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x75, 
    0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x7f, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x82, 
    0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0x8b, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x8e, 0xb, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x92, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x95, 
    0xb, 0x9, 0x3, 0xa, 0x5, 0xa, 0x98, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x7, 0xa, 0x9e, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xa1, 0xb, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xa8, 
    0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xb9, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x7, 0xc, 0xbf, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xc2, 0xb, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xd7, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xda, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0xde, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x7, 0x10, 0xe5, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xe8, 0xb, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xec, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xf3, 0xa, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xf8, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 
    0xfb, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x7, 0x12, 0x102, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x105, 0xb, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x10a, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x5, 0x13, 0x115, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0x11a, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x5, 0x14, 0x11f, 0xa, 0x14, 0x7, 0x14, 0x121, 0xa, 0x14, 0xc, 0x14, 
    0xe, 0x14, 0x124, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x5, 0x15, 0x12b, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x134, 0xa, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x13a, 0xa, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x13f, 0xa, 0x17, 0x5, 0x17, 
    0x141, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x149, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x6, 0x18, 0x14f, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 0x150, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x156, 0xa, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x5, 0x19, 0x15a, 0xa, 0x19, 0x3, 0x19, 0x5, 0x19, 0x15d, 
    0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x163, 
    0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x5, 0x19, 0x16b, 0xa, 0x19, 0x5, 0x19, 0x16d, 0xa, 0x19, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0x177, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x2, 
    0x4, 0x10, 0x16, 0x21, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
    0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x2, 0xb, 
    0x3, 0x2, 0x2a, 0x2c, 0x4, 0x2, 0x24, 0x24, 0x2f, 0x32, 0x3, 0x2, 0x38, 
    0x39, 0x4, 0x2, 0x21, 0x23, 0x25, 0x25, 0x3, 0x2, 0xe, 0x10, 0x4, 0x2, 
    0xe, 0xe, 0x11, 0x14, 0x3, 0x2, 0x15, 0x16, 0x3, 0x2, 0x17, 0x18, 0x3, 
    0x2, 0x19, 0x1e, 0x2, 0x19b, 0x2, 0x41, 0x3, 0x2, 0x2, 0x2, 0x4, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x49, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x68, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6e, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x78, 0x3, 0x2, 0x2, 0x2, 0x10, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0x14, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x16, 0xb8, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xc5, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xeb, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x22, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x114, 0x3, 0x2, 0x2, 0x2, 0x26, 0x116, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x127, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x133, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x148, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x16c, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x34, 0x170, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x176, 0x3, 0x2, 0x2, 0x2, 0x38, 0x178, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x17c, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x5, 0x4, 0x3, 0x2, 
    0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x48, 0x5, 0x6, 0x4, 0x2, 0x46, 0x48, 0x5, 
    0x8, 0x5, 0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x5, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x5, 0x1a, 0xe, 
    0x2, 0x4a, 0x4d, 0x7, 0x24, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x3, 0x2, 0x2, 
    0x4c, 0x4e, 0x7, 0x24, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x51, 
    0x7, 0x4, 0x2, 0x2, 0x50, 0x52, 0x5, 0xa, 0x6, 0x2, 0x51, 0x50, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x56, 0x7, 0x5, 0x2, 0x2, 0x56, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x57, 0x58, 0x7, 0x6, 0x2, 0x2, 0x58, 0x59, 0x5, 0x10, 0x9, 0x2, 0x59, 
    0x5a, 0x7, 0x7, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x8, 0x2, 0x2, 0x5b, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x34, 
    0x2, 0x2, 0x5f, 0x60, 0x7, 0x24, 0x2, 0x2, 0x60, 0x62, 0x7, 0x6, 0x2, 
    0x2, 0x61, 0x63, 0x5, 0xe, 0x8, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 
    0x65, 0x7, 0x7, 0x2, 0x2, 0x65, 0x66, 0x5, 0xc, 0x7, 0x2, 0x66, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x69, 0x5, 0x18, 0xd, 0x2, 0x68, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x6d, 0x5, 0x12, 0xa, 0x2, 0x6b, 0x6d, 0x5, 0x8, 0x5, 
    0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x6d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x73, 0x7, 0x4, 0x2, 0x2, 0x6f, 
    0x72, 0x5, 0x12, 0xa, 0x2, 0x70, 0x72, 0x5, 0x1c, 0xf, 0x2, 0x71, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x77, 0x7, 0x5, 0x2, 0x2, 0x77, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x79, 0x5, 0x10, 0x9, 0x2, 0x79, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7a, 
    0x7b, 0x8, 0x9, 0x1, 0x2, 0x7b, 0x80, 0x5, 0x1a, 0xe, 0x2, 0x7c, 0x7d, 
    0x7, 0x9, 0x2, 0x2, 0x7d, 0x7f, 0x7, 0xa, 0x2, 0x2, 0x7e, 0x7c, 0x3, 
    0x2, 0x2, 0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x24, 0x2, 0x2, 
    0x84, 0x93, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0xc, 0x3, 0x2, 0x2, 0x86, 
    0x87, 0x7, 0xb, 0x2, 0x2, 0x87, 0x8c, 0x5, 0x1a, 0xe, 0x2, 0x88, 0x89, 
    0x7, 0x9, 0x2, 0x2, 0x89, 0x8b, 0x7, 0xa, 0x2, 0x2, 0x8a, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x8b, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x24, 0x2, 0x2, 
    0x90, 0x92, 0x3, 0x2, 0x2, 0x2, 0x91, 0x85, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x94, 0x11, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x98, 0x7, 0x33, 0x2, 0x2, 0x97, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x9a, 0x5, 0x1a, 0xe, 0x2, 0x9a, 0x9f, 0x5, 0x14, 0xb, 0x2, 
    0x9b, 0x9c, 0x7, 0xb, 0x2, 0x2, 0x9c, 0x9e, 0x5, 0x14, 0xb, 0x2, 0x9d, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0xc, 
    0x2, 0x2, 0xa3, 0x13, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa7, 0x5, 0x22, 0x12, 
    0x2, 0xa5, 0xa6, 0x7, 0x8, 0x2, 0x2, 0xa6, 0xa8, 0x5, 0x16, 0xc, 0x2, 
    0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x8, 0xc, 0x1, 0x2, 0xaa, 0xab, 
    0x7, 0x6, 0x2, 0x2, 0xab, 0xac, 0x5, 0x16, 0xc, 0x2, 0xac, 0xad, 0x7, 
    0x7, 0x2, 0x2, 0xad, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x5, 0x34, 
    0x1b, 0x2, 0xaf, 0xb0, 0x5, 0x16, 0xc, 0x9, 0xb0, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xb9, 0x5, 0x32, 0x1a, 0x2, 0xb2, 0xb3, 0x7, 0x3a, 0x2, 0x2, 
    0xb3, 0xb9, 0x5, 0x28, 0x15, 0x2, 0xb4, 0xb9, 0x5, 0x24, 0x13, 0x2, 
    0xb5, 0xb9, 0x5, 0x20, 0x11, 0x2, 0xb6, 0xb9, 0x5, 0x26, 0x14, 0x2, 
    0xb7, 0xb9, 0x7, 0x3d, 0x2, 0x2, 0xb8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0xae, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb2, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb5, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb7, 0x3, 0x2, 
    0x2, 0x2, 0xb9, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0xc, 0xb, 0x2, 
    0x2, 0xbb, 0xbc, 0x5, 0x36, 0x1c, 0x2, 0xbc, 0xbd, 0x5, 0x16, 0xc, 0xc, 
    0xbd, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbf, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0x17, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 
    0x2, 0x2, 0x2, 0xc3, 0xc4, 0x9, 0x2, 0x2, 0x2, 0xc4, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0xc5, 0xc6, 0x9, 0x3, 0x2, 0x2, 0xc6, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0xc7, 0xc8, 0x5, 0x1e, 0x10, 0x2, 0xc8, 0xc9, 0x7, 0xc, 0x2, 0x2, 
    0xc9, 0xde, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x24, 0x13, 0x2, 0xcb, 
    0xcc, 0x7, 0xc, 0x2, 0x2, 0xcc, 0xde, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xde, 
    0x5, 0x2c, 0x17, 0x2, 0xce, 0xde, 0x5, 0x30, 0x19, 0x2, 0xcf, 0xd0, 
    0x7, 0x35, 0x2, 0x2, 0xd0, 0xde, 0x7, 0xc, 0x2, 0x2, 0xd1, 0xd2, 0x7, 
    0x36, 0x2, 0x2, 0xd2, 0xde, 0x7, 0xc, 0x2, 0x2, 0xd3, 0xd8, 0x7, 0x37, 
    0x2, 0x2, 0xd4, 0xd5, 0x7, 0x9, 0x2, 0x2, 0xd5, 0xd7, 0x7, 0xa, 0x2, 
    0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 
    0xdb, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 
    0x7, 0x24, 0x2, 0x2, 0xdc, 0xde, 0x7, 0xc, 0x2, 0x2, 0xdd, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xca, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xdd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xec, 0x5, 0x20, 0x11, 0x2, 0xe0, 
    0xe1, 0x7, 0x6, 0x2, 0x2, 0xe1, 0xe6, 0x5, 0x20, 0x11, 0x2, 0xe2, 0xe3, 
    0x7, 0xb, 0x2, 0x2, 0xe3, 0xe5, 0x5, 0x20, 0x11, 0x2, 0xe4, 0xe2, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x7, 0x2, 0x2, 
    0xea, 0xec, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 
    0x7, 0x8, 0x2, 0x2, 0xee, 0xef, 0x5, 0x16, 0xc, 0x2, 0xef, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xf1, 0x9, 0x4, 0x2, 0x2, 0xf1, 0xf3, 0x7, 0xd, 
    0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf9, 0x5, 0x22, 0x12, 0x2, 
    0xf5, 0xf6, 0x7, 0xd, 0x2, 0x2, 0xf6, 0xf8, 0x5, 0x22, 0x12, 0x2, 0xf7, 
    0xf5, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf7, 
    0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x103, 0x7, 0x24, 
    0x2, 0x2, 0xfd, 0xfe, 0x7, 0x9, 0x2, 0x2, 0xfe, 0xff, 0x5, 0x16, 0xc, 
    0x2, 0xff, 0x100, 0x7, 0xa, 0x2, 0x2, 0x100, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x101, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x102, 0x105, 0x3, 0x2, 0x2, 0x2, 0x103, 
    0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 
    0x5, 0x20, 0x11, 0x2, 0x107, 0x108, 0x7, 0xd, 0x2, 0x2, 0x108, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x106, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x115, 
    0x5, 0x28, 0x15, 0x2, 0x10c, 0x10d, 0x7, 0x3b, 0x2, 0x2, 0x10d, 0x10e, 
    0x7, 0x6, 0x2, 0x2, 0x10e, 0x115, 0x7, 0x7, 0x2, 0x2, 0x10f, 0x110, 
    0x7, 0x3c, 0x2, 0x2, 0x110, 0x111, 0x7, 0x6, 0x2, 0x2, 0x111, 0x112, 
    0x5, 0x16, 0xc, 0x2, 0x112, 0x113, 0x7, 0x7, 0x2, 0x2, 0x113, 0x115, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x109, 0x3, 0x2, 0x2, 0x2, 0x114, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x115, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x116, 0x119, 0x7, 0x9, 0x2, 0x2, 0x117, 0x11a, 0x5, 
    0x16, 0xc, 0x2, 0x118, 0x11a, 0x5, 0x26, 0x14, 0x2, 0x119, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x11b, 0x11e, 0x7, 0xb, 0x2, 0x2, 0x11c, 0x11f, 0x5, 
    0x16, 0xc, 0x2, 0x11d, 0x11f, 0x5, 0x26, 0x14, 0x2, 0x11e, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x11e, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x121, 0x3, 
    0x2, 0x2, 0x2, 0x120, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x121, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x3, 
    0x2, 0x2, 0x2, 0x123, 0x125, 0x3, 0x2, 0x2, 0x2, 0x124, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0xa, 0x2, 0x2, 0x126, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x127, 0x128, 0x7, 0x24, 0x2, 0x2, 0x128, 0x12a, 0x7, 0x6, 
    0x2, 0x2, 0x129, 0x12b, 0x5, 0x2a, 0x16, 0x2, 0x12a, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x12c, 0x12d, 0x7, 0x7, 0x2, 0x2, 0x12d, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x12e, 0x134, 0x5, 0x16, 0xc, 0x2, 0x12f, 0x130, 0x5, 0x16, 0xc, 
    0x2, 0x130, 0x131, 0x7, 0xb, 0x2, 0x2, 0x131, 0x132, 0x5, 0x2a, 0x16, 
    0x2, 0x132, 0x134, 0x3, 0x2, 0x2, 0x2, 0x133, 0x12e, 0x3, 0x2, 0x2, 
    0x2, 0x133, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x134, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x135, 0x136, 0x7, 0x3e, 0x2, 0x2, 0x136, 0x139, 0x5, 0x16, 0xc, 0x2, 
    0x137, 0x13a, 0x5, 0xc, 0x7, 0x2, 0x138, 0x13a, 0x5, 0x1c, 0xf, 0x2, 
    0x139, 0x137, 0x3, 0x2, 0x2, 0x2, 0x139, 0x138, 0x3, 0x2, 0x2, 0x2, 
    0x13a, 0x140, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13e, 0x7, 0x3f, 0x2, 0x2, 
    0x13c, 0x13f, 0x5, 0xc, 0x7, 0x2, 0x13d, 0x13f, 0x5, 0x1c, 0xf, 0x2, 
    0x13e, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13d, 0x3, 0x2, 0x2, 0x2, 
    0x13f, 0x141, 0x3, 0x2, 0x2, 0x2, 0x140, 0x13b, 0x3, 0x2, 0x2, 0x2, 
    0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x149, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x143, 0x7, 0x40, 0x2, 0x2, 0x143, 0x144, 0x5, 0x20, 0x11, 0x2, 
    0x144, 0x145, 0x7, 0x4, 0x2, 0x2, 0x145, 0x146, 0x5, 0x2e, 0x18, 0x2, 
    0x146, 0x147, 0x7, 0x5, 0x2, 0x2, 0x147, 0x149, 0x3, 0x2, 0x2, 0x2, 
    0x148, 0x135, 0x3, 0x2, 0x2, 0x2, 0x148, 0x142, 0x3, 0x2, 0x2, 0x2, 
    0x149, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x7, 0x41, 0x2, 0x2, 
    0x14b, 0x14c, 0x7, 0x21, 0x2, 0x2, 0x14c, 0x14d, 0x7, 0x3, 0x2, 0x2, 
    0x14d, 0x14f, 0x5, 0xc, 0x7, 0x2, 0x14e, 0x14a, 0x3, 0x2, 0x2, 0x2, 
    0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14e, 0x3, 0x2, 0x2, 0x2, 
    0x150, 0x151, 0x3, 0x2, 0x2, 0x2, 0x151, 0x155, 0x3, 0x2, 0x2, 0x2, 
    0x152, 0x153, 0x7, 0x42, 0x2, 0x2, 0x153, 0x154, 0x7, 0x3, 0x2, 0x2, 
    0x154, 0x156, 0x5, 0xc, 0x7, 0x2, 0x155, 0x152, 0x3, 0x2, 0x2, 0x2, 
    0x155, 0x156, 0x3, 0x2, 0x2, 0x2, 0x156, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x157, 
    0x15c, 0x7, 0x2d, 0x2, 0x2, 0x158, 0x15a, 0x5, 0x1a, 0xe, 0x2, 0x159, 
    0x158, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15a, 
    0x15b, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15d, 0x5, 0x1e, 0x10, 0x2, 0x15c, 
    0x159, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15d, 
    0x15e, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x7, 0xc, 0x2, 0x2, 0x15f, 
    0x160, 0x5, 0x16, 0xc, 0x2, 0x160, 0x162, 0x7, 0xc, 0x2, 0x2, 0x161, 
    0x163, 0x5, 0x1e, 0x10, 0x2, 0x162, 0x161, 0x3, 0x2, 0x2, 0x2, 0x162, 
    0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 
    0x165, 0x5, 0xc, 0x7, 0x2, 0x165, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x166, 
    0x167, 0x7, 0x2e, 0x2, 0x2, 0x167, 0x16a, 0x5, 0x16, 0xc, 0x2, 0x168, 
    0x16b, 0x5, 0xc, 0x7, 0x2, 0x169, 0x16b, 0x5, 0x1c, 0xf, 0x2, 0x16a, 
    0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x16d, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x157, 0x3, 0x2, 0x2, 0x2, 0x16c, 
    0x166, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x31, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 
    0x9, 0x5, 0x2, 0x2, 0x16f, 0x33, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x9, 
    0x6, 0x2, 0x2, 0x171, 0x35, 0x3, 0x2, 0x2, 0x2, 0x172, 0x177, 0x5, 0x38, 
    0x1d, 0x2, 0x173, 0x177, 0x5, 0x3e, 0x20, 0x2, 0x174, 0x177, 0x5, 0x3a, 
    0x1e, 0x2, 0x175, 0x177, 0x5, 0x3c, 0x1f, 0x2, 0x176, 0x172, 0x3, 0x2, 
    0x2, 0x2, 0x176, 0x173, 0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 0x3, 0x2, 
    0x2, 0x2, 0x176, 0x175, 0x3, 0x2, 0x2, 0x2, 0x177, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x179, 0x9, 0x7, 0x2, 0x2, 0x179, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x17a, 0x17b, 0x9, 0x8, 0x2, 0x2, 0x17b, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x17c, 
    0x17d, 0x9, 0x9, 0x2, 0x2, 0x17d, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 
    0x9, 0xa, 0x2, 0x2, 0x17f, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x43, 0x47, 
    0x4d, 0x53, 0x5c, 0x62, 0x68, 0x6c, 0x71, 0x73, 0x80, 0x8c, 0x93, 0x97, 
    0x9f, 0xa7, 0xb8, 0xc0, 0xd8, 0xdd, 0xe6, 0xeb, 0xf2, 0xf9, 0x103, 0x109, 
    0x114, 0x119, 0x11e, 0x122, 0x12a, 0x133, 0x139, 0x13e, 0x140, 0x148, 
    0x150, 0x155, 0x159, 0x15c, 0x162, 0x16a, 0x16c, 0x176, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

LULUParser::Initializer LULUParser::_init;
