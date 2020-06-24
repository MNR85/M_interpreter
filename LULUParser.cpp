
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
    setState(61); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(60);
      ft_def();
      setState(63); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__9)
      | (1ULL << LULUParser::T__10)
      | (1ULL << LULUParser::T__11)
      | (1ULL << LULUParser::T__12)
      | (1ULL << LULUParser::T__14)
      | (1ULL << LULUParser::T__16)
      | (1ULL << LULUParser::ID))) != 0));
   
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
    setState(67);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::T__9:
      case LULUParser::T__10:
      case LULUParser::T__11:
      case LULUParser::T__12:
      case LULUParser::ID: {
        setState(65);
        type_def();
        break;
      }

      case LULUParser::T__14:
      case LULUParser::T__16: {
        setState(66);
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
    setState(69);
    type();
    setState(70);
    match(LULUParser::ID);
    setState(73);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LULUParser::T__0) {
      setState(71);
      match(LULUParser::T__0);
      setState(72);
      match(LULUParser::ID);
    }
    setState(75);
    match(LULUParser::T__1);
    setState(77); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(76);
      component();
      setState(79); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__3)
      | (1ULL << LULUParser::T__4)
      | (1ULL << LULUParser::T__5)
      | (1ULL << LULUParser::T__6)
      | (1ULL << LULUParser::T__9)
      | (1ULL << LULUParser::T__10)
      | (1ULL << LULUParser::T__11)
      | (1ULL << LULUParser::T__12)
      | (1ULL << LULUParser::T__14)
      | (1ULL << LULUParser::T__16)
      | (1ULL << LULUParser::ID))) != 0));
    setState(81);
    match(LULUParser::T__2);
   
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
  enterRule(_localctx, 6, LULUParser::RuleComponent);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__3)
      | (1ULL << LULUParser::T__4)
      | (1ULL << LULUParser::T__5))) != 0)) {
      setState(83);
      access_modifier();
    }
    setState(88);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::T__6:
      case LULUParser::T__9:
      case LULUParser::T__10:
      case LULUParser::T__11:
      case LULUParser::T__12:
      case LULUParser::ID: {
        setState(86);
        var_def();
        break;
      }

      case LULUParser::T__14:
      case LULUParser::T__16: {
        setState(87);
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

//----------------- Access_modifierContext ------------------------------------------------------------------

LULUParser::Access_modifierContext::Access_modifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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
  enterRule(_localctx, 8, LULUParser::RuleAccess_modifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__3)
      | (1ULL << LULUParser::T__4)
      | (1ULL << LULUParser::T__5))) != 0))) {
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
  enterRule(_localctx, 10, LULUParser::RuleVar_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LULUParser::T__6) {
      setState(92);
      match(LULUParser::T__6);
    }
    setState(95);
    type();
    setState(96);
    var_val();
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LULUParser::T__7) {
      setState(97);
      match(LULUParser::T__7);
      setState(98);
      var_val();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(104);
    match(LULUParser::T__8);
   
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
  enterRule(_localctx, 12, LULUParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__9)
      | (1ULL << LULUParser::T__10)
      | (1ULL << LULUParser::T__11)
      | (1ULL << LULUParser::T__12)
      | (1ULL << LULUParser::ID))) != 0))) {
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
  enterRule(_localctx, 14, LULUParser::RuleVar_val);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    ref();
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LULUParser::T__13) {
      setState(109);
      match(LULUParser::T__13);
      setState(110);
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

//----------------- Fun_defContext ------------------------------------------------------------------

LULUParser::Fun_defContext::Fun_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LULUParser::Fun_defContext::ID() {
  return getToken(LULUParser::ID, 0);
}

LULUParser::BlockContext* LULUParser::Fun_defContext::block() {
  return getRuleContext<LULUParser::BlockContext>(0);
}

std::vector<LULUParser::Args_varContext *> LULUParser::Fun_defContext::args_var() {
  return getRuleContexts<LULUParser::Args_varContext>();
}

LULUParser::Args_varContext* LULUParser::Fun_defContext::args_var(size_t i) {
  return getRuleContext<LULUParser::Args_varContext>(i);
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
  enterRule(_localctx, 16, LULUParser::RuleFun_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LULUParser::T__14) {
      setState(113);
      match(LULUParser::T__14);
      setState(114);
      args_var(0);
      setState(115);
      match(LULUParser::T__15);
      setState(116);
      match(LULUParser::T__13);
    }
    setState(120);
    match(LULUParser::T__16);
    setState(121);
    match(LULUParser::ID);
    setState(122);
    match(LULUParser::T__14);
    setState(124);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__9)
      | (1ULL << LULUParser::T__10)
      | (1ULL << LULUParser::T__11)
      | (1ULL << LULUParser::T__12)
      | (1ULL << LULUParser::ID))) != 0)) {
      setState(123);
      args_var(0);
    }
    setState(126);
    match(LULUParser::T__15);
    setState(127);
    block();
   
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
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, LULUParser::RuleArgs_var, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(130);
    type();
    setState(135);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LULUParser::T__17) {
      setState(131);
      match(LULUParser::T__17);
      setState(132);
      match(LULUParser::T__18);
      setState(137);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(138);
    match(LULUParser::ID);
    _ctx->stop = _input->LT(-1);
    setState(154);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Args_varContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleArgs_var);
        setState(140);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(141);
        match(LULUParser::T__7);
        setState(142);
        type();
        setState(147);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LULUParser::T__17) {
          setState(143);
          match(LULUParser::T__17);
          setState(144);
          match(LULUParser::T__18);
          setState(149);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(150);
        match(LULUParser::ID); 
      }
      setState(156);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
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
  enterRule(_localctx, 20, LULUParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(LULUParser::T__1);
    setState(162);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__6)
      | (1ULL << LULUParser::T__9)
      | (1ULL << LULUParser::T__10)
      | (1ULL << LULUParser::T__11)
      | (1ULL << LULUParser::T__12)
      | (1ULL << LULUParser::T__14)
      | (1ULL << LULUParser::T__19)
      | (1ULL << LULUParser::T__20)
      | (1ULL << LULUParser::T__21)
      | (1ULL << LULUParser::T__22)
      | (1ULL << LULUParser::T__23)
      | (1ULL << LULUParser::T__27)
      | (1ULL << LULUParser::T__28)
      | (1ULL << LULUParser::T__29)
      | (1ULL << LULUParser::T__31)
      | (1ULL << LULUParser::T__34)
      | (1ULL << LULUParser::T__35)
      | (1ULL << LULUParser::ID))) != 0)) {
      setState(160);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(158);
        var_def();
        break;
      }

      case 2: {
        setState(159);
        stmt();
        break;
      }

      }
      setState(164);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(165);
    match(LULUParser::T__2);
   
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
  enterRule(_localctx, 22, LULUParser::RuleStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(189);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(167);
      assign();
      setState(168);
      match(LULUParser::T__8);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(170);
      func_call();
      setState(171);
      match(LULUParser::T__8);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(173);
      cond_stmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(174);
      loop_stmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(175);
      match(LULUParser::T__19);
      setState(176);
      match(LULUParser::T__8);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(177);
      match(LULUParser::T__20);
      setState(178);
      match(LULUParser::T__8);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(179);
      match(LULUParser::T__21);
      setState(184);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LULUParser::T__17) {
        setState(180);
        match(LULUParser::T__17);
        setState(181);
        match(LULUParser::T__18);
        setState(186);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(187);
      match(LULUParser::ID);
      setState(188);
      match(LULUParser::T__8);
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
  enterRule(_localctx, 24, LULUParser::RuleAssign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::T__22:
      case LULUParser::T__23:
      case LULUParser::ID: {
        setState(191);
        var();
        break;
      }

      case LULUParser::T__14: {
        setState(192);
        match(LULUParser::T__14);
        setState(193);
        var();
        setState(198);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LULUParser::T__7) {
          setState(194);
          match(LULUParser::T__7);
          setState(195);
          var();
          setState(200);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(201);
        match(LULUParser::T__15);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(205);
    match(LULUParser::T__13);
    setState(206);
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
  enterRule(_localctx, 26, LULUParser::RuleVar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(210);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LULUParser::T__22

    || _la == LULUParser::T__23) {
      setState(208);
      _la = _input->LA(1);
      if (!(_la == LULUParser::T__22

      || _la == LULUParser::T__23)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(209);
      match(LULUParser::T__24);
    }
    setState(212);
    ref();
    setState(217);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(213);
        match(LULUParser::T__24);
        setState(214);
        ref(); 
      }
      setState(219);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
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
  enterRule(_localctx, 28, LULUParser::RuleRef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(LULUParser::ID);
    setState(227);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(221);
        match(LULUParser::T__17);
        setState(222);
        expr(0);
        setState(223);
        match(LULUParser::T__18); 
      }
      setState(229);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
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
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, LULUParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(245);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(231);
      match(LULUParser::T__14);
      setState(232);
      expr(0);
      setState(233);
      match(LULUParser::T__15);
      break;
    }

    case 2: {
      setState(235);
      unary_op();
      setState(236);
      expr(7);
      break;
    }

    case 3: {
      setState(238);
      const_val();
      break;
    }

    case 4: {
      setState(239);
      match(LULUParser::T__25);
      setState(240);
      handle_call();
      break;
    }

    case 5: {
      setState(241);
      func_call();
      break;
    }

    case 6: {
      setState(242);
      var();
      break;
    }

    case 7: {
      setState(243);
      list();
      break;
    }

    case 8: {
      setState(244);
      match(LULUParser::T__26);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(253);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpr);
        setState(247);

        if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
        setState(248);
        binary_op();
        setState(249);
        expr(10); 
      }
      setState(255);
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
  enterRule(_localctx, 32, LULUParser::RuleFunc_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(270);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::T__22:
      case LULUParser::T__23:
      case LULUParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(259);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          setState(256);
          var();
          setState(257);
          match(LULUParser::T__24);
          break;
        }

        }
        setState(261);
        handle_call();
        break;
      }

      case LULUParser::T__27: {
        enterOuterAlt(_localctx, 2);
        setState(262);
        match(LULUParser::T__27);
        setState(263);
        match(LULUParser::T__14);
        setState(264);
        match(LULUParser::T__15);
        break;
      }

      case LULUParser::T__28: {
        enterOuterAlt(_localctx, 3);
        setState(265);
        match(LULUParser::T__28);
        setState(266);
        match(LULUParser::T__14);
        setState(267);
        expr(0);
        setState(268);
        match(LULUParser::T__15);
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
  enterRule(_localctx, 34, LULUParser::RuleList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    match(LULUParser::T__17);
    setState(275);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(273);
      expr(0);
      break;
    }

    case 2: {
      setState(274);
      list();
      break;
    }

    }
    setState(284);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LULUParser::T__7) {
      setState(277);
      match(LULUParser::T__7);
      setState(280);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
      case 1: {
        setState(278);
        expr(0);
        break;
      }

      case 2: {
        setState(279);
        list();
        break;
      }

      }
      setState(286);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(287);
    match(LULUParser::T__18);
   
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
  enterRule(_localctx, 36, LULUParser::RuleHandle_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(289);
    match(LULUParser::ID);
    setState(290);
    match(LULUParser::T__14);
    setState(292);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__14)
      | (1ULL << LULUParser::T__17)
      | (1ULL << LULUParser::T__22)
      | (1ULL << LULUParser::T__23)
      | (1ULL << LULUParser::T__25)
      | (1ULL << LULUParser::T__26)
      | (1ULL << LULUParser::T__27)
      | (1ULL << LULUParser::T__28)
      | (1ULL << LULUParser::T__36)
      | (1ULL << LULUParser::T__37)
      | (1ULL << LULUParser::T__38)
      | (1ULL << LULUParser::INT_CONST)
      | (1ULL << LULUParser::REAL_CONST)
      | (1ULL << LULUParser::BOOL_CONST)
      | (1ULL << LULUParser::ID)
      | (1ULL << LULUParser::STRING_CONST))) != 0)) {
      setState(291);
      params();
    }
    setState(294);
    match(LULUParser::T__15);
   
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
  enterRule(_localctx, 38, LULUParser::RuleParams);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(301);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(296);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(297);
      expr(0);
      setState(298);
      match(LULUParser::T__7);
      setState(299);
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
  enterRule(_localctx, 40, LULUParser::RuleCond_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(322);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::T__29: {
        enterOuterAlt(_localctx, 1);
        setState(303);
        match(LULUParser::T__29);
        setState(304);
        expr(0);
        setState(307);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case LULUParser::T__1: {
            setState(305);
            block();
            break;
          }

          case LULUParser::T__14:
          case LULUParser::T__19:
          case LULUParser::T__20:
          case LULUParser::T__21:
          case LULUParser::T__22:
          case LULUParser::T__23:
          case LULUParser::T__27:
          case LULUParser::T__28:
          case LULUParser::T__29:
          case LULUParser::T__31:
          case LULUParser::T__34:
          case LULUParser::T__35:
          case LULUParser::ID: {
            setState(306);
            stmt();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(314);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
        case 1: {
          setState(309);
          match(LULUParser::T__30);
          setState(312);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case LULUParser::T__1: {
              setState(310);
              block();
              break;
            }

            case LULUParser::T__14:
            case LULUParser::T__19:
            case LULUParser::T__20:
            case LULUParser::T__21:
            case LULUParser::T__22:
            case LULUParser::T__23:
            case LULUParser::T__27:
            case LULUParser::T__28:
            case LULUParser::T__29:
            case LULUParser::T__31:
            case LULUParser::T__34:
            case LULUParser::T__35:
            case LULUParser::ID: {
              setState(311);
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

      case LULUParser::T__31: {
        enterOuterAlt(_localctx, 2);
        setState(316);
        match(LULUParser::T__31);
        setState(317);
        var();
        setState(318);
        match(LULUParser::T__1);
        setState(319);
        switch_body();
        setState(320);
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
  enterRule(_localctx, 42, LULUParser::RuleSwitch_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(324);
      match(LULUParser::T__32);
      setState(325);
      match(LULUParser::INT_CONST);
      setState(326);
      match(LULUParser::T__0);
      setState(327);
      block();
      setState(330); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LULUParser::T__32);
    setState(335);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LULUParser::T__33) {
      setState(332);
      match(LULUParser::T__33);
      setState(333);
      match(LULUParser::T__0);
      setState(334);
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
  enterRule(_localctx, 44, LULUParser::RuleLoop_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(358);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::T__34: {
        enterOuterAlt(_localctx, 1);
        setState(337);
        match(LULUParser::T__34);
        setState(342);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << LULUParser::T__9)
          | (1ULL << LULUParser::T__10)
          | (1ULL << LULUParser::T__11)
          | (1ULL << LULUParser::T__12)
          | (1ULL << LULUParser::T__14)
          | (1ULL << LULUParser::T__22)
          | (1ULL << LULUParser::T__23)
          | (1ULL << LULUParser::ID))) != 0)) {
          setState(339);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
          case 1: {
            setState(338);
            type();
            break;
          }

          }
          setState(341);
          assign();
        }
        setState(344);
        match(LULUParser::T__8);
        setState(345);
        expr(0);
        setState(346);
        match(LULUParser::T__8);
        setState(348);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << LULUParser::T__14)
          | (1ULL << LULUParser::T__22)
          | (1ULL << LULUParser::T__23)
          | (1ULL << LULUParser::ID))) != 0)) {
          setState(347);
          assign();
        }
        setState(350);
        block();
        break;
      }

      case LULUParser::T__35: {
        enterOuterAlt(_localctx, 2);
        setState(352);
        match(LULUParser::T__35);
        setState(353);
        expr(0);
        setState(356);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case LULUParser::T__1: {
            setState(354);
            block();
            break;
          }

          case LULUParser::T__14:
          case LULUParser::T__19:
          case LULUParser::T__20:
          case LULUParser::T__21:
          case LULUParser::T__22:
          case LULUParser::T__23:
          case LULUParser::T__27:
          case LULUParser::T__28:
          case LULUParser::T__29:
          case LULUParser::T__31:
          case LULUParser::T__34:
          case LULUParser::T__35:
          case LULUParser::ID: {
            setState(355);
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
  enterRule(_localctx, 46, LULUParser::RuleConst_val);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
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
  enterRule(_localctx, 48, LULUParser::RuleUnary_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__36)
      | (1ULL << LULUParser::T__37)
      | (1ULL << LULUParser::T__38))) != 0))) {
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
  enterRule(_localctx, 50, LULUParser::RuleBinary_op);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(368);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LULUParser::T__36:
      case LULUParser::T__39:
      case LULUParser::T__40:
      case LULUParser::T__41:
      case LULUParser::T__42: {
        enterOuterAlt(_localctx, 1);
        setState(364);
        arithmetic();
        break;
      }

      case LULUParser::T__47:
      case LULUParser::T__48:
      case LULUParser::T__49:
      case LULUParser::T__50:
      case LULUParser::T__51:
      case LULUParser::T__52: {
        enterOuterAlt(_localctx, 2);
        setState(365);
        relational();
        break;
      }

      case LULUParser::T__43:
      case LULUParser::T__44: {
        enterOuterAlt(_localctx, 3);
        setState(366);
        bitwise();
        break;
      }

      case LULUParser::T__45:
      case LULUParser::T__46: {
        enterOuterAlt(_localctx, 4);
        setState(367);
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
  enterRule(_localctx, 52, LULUParser::RuleArithmetic);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(370);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__36)
      | (1ULL << LULUParser::T__39)
      | (1ULL << LULUParser::T__40)
      | (1ULL << LULUParser::T__41)
      | (1ULL << LULUParser::T__42))) != 0))) {
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
  enterRule(_localctx, 54, LULUParser::RuleBitwise);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(372);
    _la = _input->LA(1);
    if (!(_la == LULUParser::T__43

    || _la == LULUParser::T__44)) {
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
  enterRule(_localctx, 56, LULUParser::RuleLogical);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    _la = _input->LA(1);
    if (!(_la == LULUParser::T__45

    || _la == LULUParser::T__46)) {
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
  enterRule(_localctx, 58, LULUParser::RuleRelational);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LULUParser::T__47)
      | (1ULL << LULUParser::T__48)
      | (1ULL << LULUParser::T__49)
      | (1ULL << LULUParser::T__50)
      | (1ULL << LULUParser::T__51)
      | (1ULL << LULUParser::T__52))) != 0))) {
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
    case 9: return args_varSempred(dynamic_cast<Args_varContext *>(context), predicateIndex);
    case 15: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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
  "program", "ft_def", "type_def", "component", "access_modifier", "var_def", 
  "type", "var_val", "fun_def", "args_var", "block", "stmt", "assign", "var", 
  "ref", "expr", "func_call", "list", "handle_call", "params", "cond_stmt", 
  "switch_body", "loop_stmt", "const_val", "unary_op", "binary_op", "arithmetic", 
  "bitwise", "logical", "relational"
};

std::vector<std::string> LULUParser::_literalNames = {
  "", "':'", "'{'", "'}'", "'private'", "'public'", "' protected'", "'const'", 
  "','", "';'", "'int'", "'bool'", "'float'", "'string'", "'='", "'('", 
  "')'", "'function'", "'['", "']'", "'break'", "'continue'", "'destruct'", 
  "'this'", "'super'", "'.'", "'allocate'", "'nil'", "'read'", "'write'", 
  "'if'", "'else'", "'switch'", "'caseof'", "'default'", "'for'", "'while'", 
  "'-'", "'!'", "'~'", "'+'", "'*'", "'/'", "'%'", "'&'", "'|'", "'||'", 
  "'&&'", "'=='", "'!='", "'<='", "'>='", "'<'", "'>'"
};

std::vector<std::string> LULUParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "WHITESPACE", "COMMENT", "INT_CONST", "REAL_CONST", "BOOL_CONST", "ID", 
  "STRING_CONST", "RELATIONAL", "ARITHMETIC", "LOGICAL", "BITWISE"
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
    0x3, 0x42, 0x17d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x3, 0x2, 0x6, 0x2, 0x40, 0xa, 0x2, 0xd, 0x2, 0xe, 
    0x2, 0x41, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x46, 0xa, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x4c, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x6, 0x4, 0x50, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x51, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x5, 0x5, 0x5, 0x57, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x5b, 
    0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x5, 0x7, 0x60, 0xa, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x66, 0xa, 0x7, 0xc, 0x7, 
    0xe, 0x7, 0x69, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x72, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x79, 0xa, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x7f, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x88, 0xa, 
    0xb, 0xc, 0xb, 0xe, 0xb, 0x8b, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x94, 0xa, 0xb, 0xc, 
    0xb, 0xe, 0xb, 0x97, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x9b, 0xa, 
    0xb, 0xc, 0xb, 0xe, 0xb, 0x9e, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x7, 0xc, 0xa3, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xa6, 0xb, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xb9, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xbc, 
    0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xc0, 0xa, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xc7, 0xa, 0xe, 0xc, 0xe, 
    0xe, 0xe, 0xca, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xce, 0xa, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xd5, 0xa, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xda, 0xa, 0xf, 0xc, 0xf, 
    0xe, 0xf, 0xdd, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0xe4, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xe7, 0xb, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xf8, 0xa, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xfe, 0xa, 0x11, 0xc, 0x11, 0xe, 
    0x11, 0x101, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x106, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x111, 0xa, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x116, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x11b, 0xa, 0x13, 0x7, 0x13, 0x11d, 
    0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x120, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x127, 0xa, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 
    0x15, 0x130, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x5, 0x16, 0x136, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x13b, 0xa, 0x16, 0x5, 0x16, 0x13d, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x145, 0xa, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x6, 0x17, 0x14b, 0xa, 0x17, 
    0xd, 0x17, 0xe, 0x17, 0x14c, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 
    0x152, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x156, 0xa, 0x18, 
    0x3, 0x18, 0x5, 0x18, 0x159, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x5, 0x18, 0x15f, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x167, 0xa, 0x18, 0x5, 0x18, 
    0x169, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x173, 0xa, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x2, 0x4, 0x14, 0x20, 0x20, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 
    0x3c, 0x2, 0xb, 0x3, 0x2, 0x6, 0x8, 0x4, 0x2, 0xc, 0xf, 0x3d, 0x3d, 
    0x3, 0x2, 0x19, 0x1a, 0x4, 0x2, 0x3a, 0x3c, 0x3e, 0x3e, 0x3, 0x2, 0x27, 
    0x29, 0x4, 0x2, 0x27, 0x27, 0x2a, 0x2d, 0x3, 0x2, 0x2e, 0x2f, 0x3, 0x2, 
    0x30, 0x31, 0x3, 0x2, 0x32, 0x37, 0x2, 0x198, 0x2, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x45, 0x3, 0x2, 0x2, 0x2, 0x6, 0x47, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x78, 0x3, 0x2, 0x2, 0x2, 0x14, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x18, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xde, 0x3, 0x2, 0x2, 0x2, 0x20, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x110, 0x3, 0x2, 0x2, 0x2, 0x24, 0x112, 0x3, 0x2, 0x2, 0x2, 0x26, 0x123, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x144, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x168, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x32, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x172, 0x3, 0x2, 0x2, 0x2, 0x36, 0x174, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x176, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x178, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x17a, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x5, 0x4, 0x3, 0x2, 0x3f, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x43, 0x46, 0x5, 0x6, 0x4, 0x2, 0x44, 0x46, 0x5, 0x12, 0xa, 
    0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x5, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x5, 0xe, 0x8, 0x2, 0x48, 
    0x4b, 0x7, 0x3d, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x3, 0x2, 0x2, 0x4a, 0x4c, 
    0x7, 0x3d, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 0x7, 0x4, 
    0x2, 0x2, 0x4e, 0x50, 0x5, 0x8, 0x5, 0x2, 0x4f, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x54, 0x7, 0x5, 0x2, 0x2, 0x54, 0x7, 0x3, 0x2, 0x2, 0x2, 0x55, 0x57, 
    0x5, 0xa, 0x6, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5b, 0x5, 0xc, 
    0x7, 0x2, 0x59, 0x5b, 0x5, 0x12, 0xa, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x5d, 0x9, 0x2, 0x2, 0x2, 0x5d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x60, 0x7, 0x9, 0x2, 0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x5, 
    0xe, 0x8, 0x2, 0x62, 0x67, 0x5, 0x10, 0x9, 0x2, 0x63, 0x64, 0x7, 0xa, 
    0x2, 0x2, 0x64, 0x66, 0x5, 0x10, 0x9, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0xb, 0x2, 0x2, 0x6b, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x9, 0x3, 0x2, 0x2, 0x6d, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x71, 0x5, 0x1e, 0x10, 0x2, 0x6f, 0x70, 0x7, 0x10, 
    0x2, 0x2, 0x70, 0x72, 0x5, 0x20, 0x11, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x74, 0x7, 0x11, 0x2, 0x2, 0x74, 0x75, 0x5, 0x14, 0xb, 0x2, 0x75, 
    0x76, 0x7, 0x12, 0x2, 0x2, 0x76, 0x77, 0x7, 0x10, 0x2, 0x2, 0x77, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x73, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x13, 
    0x2, 0x2, 0x7b, 0x7c, 0x7, 0x3d, 0x2, 0x2, 0x7c, 0x7e, 0x7, 0x11, 0x2, 
    0x2, 0x7d, 0x7f, 0x5, 0x14, 0xb, 0x2, 0x7e, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x81, 0x7, 0x12, 0x2, 0x2, 0x81, 0x82, 0x5, 0x16, 0xc, 0x2, 0x82, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x8, 0xb, 0x1, 0x2, 0x84, 0x89, 0x5, 
    0xe, 0x8, 0x2, 0x85, 0x86, 0x7, 0x14, 0x2, 0x2, 0x86, 0x88, 0x7, 0x15, 
    0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x8d, 0x7, 0x3d, 0x2, 0x2, 0x8d, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 
    0xc, 0x3, 0x2, 0x2, 0x8f, 0x90, 0x7, 0xa, 0x2, 0x2, 0x90, 0x95, 0x5, 
    0xe, 0x8, 0x2, 0x91, 0x92, 0x7, 0x14, 0x2, 0x2, 0x92, 0x94, 0x7, 0x15, 
    0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0x98, 0x3, 0x2, 0x2, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x99, 0x7, 0x3d, 0x2, 0x2, 0x99, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x8e, 
    0x3, 0x2, 0x2, 0x2, 0x9b, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa4, 0x7, 0x4, 0x2, 
    0x2, 0xa0, 0xa3, 0x5, 0xc, 0x7, 0x2, 0xa1, 0xa3, 0x5, 0x18, 0xd, 0x2, 
    0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xa6, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 
    0x3, 0x2, 0x2, 0x2, 0xa5, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 
    0x2, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x5, 0x2, 0x2, 0xa8, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0xaa, 0x5, 0x1a, 0xe, 0x2, 0xaa, 0xab, 0x7, 0xb, 0x2, 
    0x2, 0xab, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x5, 0x22, 0x12, 0x2, 
    0xad, 0xae, 0x7, 0xb, 0x2, 0x2, 0xae, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xc0, 0x5, 0x2a, 0x16, 0x2, 0xb0, 0xc0, 0x5, 0x2e, 0x18, 0x2, 0xb1, 
    0xb2, 0x7, 0x16, 0x2, 0x2, 0xb2, 0xc0, 0x7, 0xb, 0x2, 0x2, 0xb3, 0xb4, 
    0x7, 0x17, 0x2, 0x2, 0xb4, 0xc0, 0x7, 0xb, 0x2, 0x2, 0xb5, 0xba, 0x7, 
    0x18, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x14, 0x2, 0x2, 0xb7, 0xb9, 0x7, 0x15, 
    0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xbe, 0x7, 0x3d, 0x2, 0x2, 0xbe, 0xc0, 0x7, 0xb, 0x2, 0x2, 0xbf, 0xa9, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xac, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xaf, 0x3, 
    0x2, 0x2, 0x2, 0xbf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xce, 0x5, 0x1c, 0xf, 0x2, 
    0xc2, 0xc3, 0x7, 0x11, 0x2, 0x2, 0xc3, 0xc8, 0x5, 0x1c, 0xf, 0x2, 0xc4, 
    0xc5, 0x7, 0xa, 0x2, 0x2, 0xc5, 0xc7, 0x5, 0x1c, 0xf, 0x2, 0xc6, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xca, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x12, 0x2, 
    0x2, 0xcc, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc1, 0x3, 0x2, 0x2, 0x2, 
    0xcd, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 
    0xd0, 0x7, 0x10, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x20, 0x11, 0x2, 0xd1, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x9, 0x4, 0x2, 0x2, 0xd3, 0xd5, 0x7, 
    0x1b, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xdb, 0x5, 0x1e, 0x10, 
    0x2, 0xd7, 0xd8, 0x7, 0x1b, 0x2, 0x2, 0xd8, 0xda, 0x5, 0x1e, 0x10, 0x2, 
    0xd9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe5, 0x7, 
    0x3d, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x14, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0x20, 
    0x11, 0x2, 0xe1, 0xe2, 0x7, 0x15, 0x2, 0x2, 0xe2, 0xe4, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 
    0x8, 0x11, 0x1, 0x2, 0xe9, 0xea, 0x7, 0x11, 0x2, 0x2, 0xea, 0xeb, 0x5, 
    0x20, 0x11, 0x2, 0xeb, 0xec, 0x7, 0x12, 0x2, 0x2, 0xec, 0xf8, 0x3, 0x2, 
    0x2, 0x2, 0xed, 0xee, 0x5, 0x32, 0x1a, 0x2, 0xee, 0xef, 0x5, 0x20, 0x11, 
    0x9, 0xef, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf8, 0x5, 0x30, 0x19, 0x2, 
    0xf1, 0xf2, 0x7, 0x1c, 0x2, 0x2, 0xf2, 0xf8, 0x5, 0x26, 0x14, 0x2, 0xf3, 
    0xf8, 0x5, 0x22, 0x12, 0x2, 0xf4, 0xf8, 0x5, 0x1c, 0xf, 0x2, 0xf5, 0xf8, 
    0x5, 0x24, 0x13, 0x2, 0xf6, 0xf8, 0x7, 0x1d, 0x2, 0x2, 0xf7, 0xe8, 0x3, 
    0x2, 0x2, 0x2, 0xf7, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf0, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf3, 0x3, 0x2, 0x2, 
    0x2, 0xf7, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf5, 0x3, 0x2, 0x2, 0x2, 
    0xf7, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xff, 0x3, 0x2, 0x2, 0x2, 0xf9, 
    0xfa, 0xc, 0xb, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x34, 0x1b, 0x2, 0xfb, 0xfc, 
    0x5, 0x20, 0x11, 0xc, 0xfc, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xf9, 0x3, 
    0x2, 0x2, 0x2, 0xfe, 0x101, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 
    0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x5, 0x1c, 0xf, 
    0x2, 0x103, 0x104, 0x7, 0x1b, 0x2, 0x2, 0x104, 0x106, 0x3, 0x2, 0x2, 
    0x2, 0x105, 0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 
    0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x111, 0x5, 0x26, 0x14, 
    0x2, 0x108, 0x109, 0x7, 0x1e, 0x2, 0x2, 0x109, 0x10a, 0x7, 0x11, 0x2, 
    0x2, 0x10a, 0x111, 0x7, 0x12, 0x2, 0x2, 0x10b, 0x10c, 0x7, 0x1f, 0x2, 
    0x2, 0x10c, 0x10d, 0x7, 0x11, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0x20, 0x11, 
    0x2, 0x10e, 0x10f, 0x7, 0x12, 0x2, 0x2, 0x10f, 0x111, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x105, 0x3, 0x2, 0x2, 0x2, 0x110, 0x108, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x111, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x112, 0x115, 0x7, 0x14, 0x2, 0x2, 0x113, 0x116, 0x5, 0x20, 0x11, 0x2, 
    0x114, 0x116, 0x5, 0x24, 0x13, 0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 0x2, 
    0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x11e, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x11a, 0x7, 0xa, 0x2, 0x2, 0x118, 0x11b, 0x5, 0x20, 0x11, 0x2, 
    0x119, 0x11b, 0x5, 0x24, 0x13, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 
    0x11a, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11d, 0x3, 0x2, 0x2, 0x2, 
    0x11c, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x120, 0x3, 0x2, 0x2, 0x2, 
    0x11e, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x3, 0x2, 0x2, 0x2, 
    0x11f, 0x121, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0x122, 0x7, 0x15, 0x2, 0x2, 0x122, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x123, 0x124, 0x7, 0x3d, 0x2, 0x2, 0x124, 0x126, 0x7, 0x11, 0x2, 0x2, 
    0x125, 0x127, 0x5, 0x28, 0x15, 0x2, 0x126, 0x125, 0x3, 0x2, 0x2, 0x2, 
    0x126, 0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 
    0x128, 0x129, 0x7, 0x12, 0x2, 0x2, 0x129, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x12a, 0x130, 0x5, 0x20, 0x11, 0x2, 0x12b, 0x12c, 0x5, 0x20, 0x11, 0x2, 
    0x12c, 0x12d, 0x7, 0xa, 0x2, 0x2, 0x12d, 0x12e, 0x5, 0x28, 0x15, 0x2, 
    0x12e, 0x130, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12a, 0x3, 0x2, 0x2, 0x2, 
    0x12f, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x130, 0x29, 0x3, 0x2, 0x2, 0x2, 0x131, 
    0x132, 0x7, 0x20, 0x2, 0x2, 0x132, 0x135, 0x5, 0x20, 0x11, 0x2, 0x133, 
    0x136, 0x5, 0x16, 0xc, 0x2, 0x134, 0x136, 0x5, 0x18, 0xd, 0x2, 0x135, 
    0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x134, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x13c, 0x3, 0x2, 0x2, 0x2, 0x137, 0x13a, 0x7, 0x21, 0x2, 0x2, 0x138, 
    0x13b, 0x5, 0x16, 0xc, 0x2, 0x139, 0x13b, 0x5, 0x18, 0xd, 0x2, 0x13a, 
    0x138, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 
    0x13d, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x137, 0x3, 0x2, 0x2, 0x2, 0x13c, 
    0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x145, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x13f, 0x7, 0x22, 0x2, 0x2, 0x13f, 0x140, 0x5, 0x1c, 0xf, 0x2, 0x140, 
    0x141, 0x7, 0x4, 0x2, 0x2, 0x141, 0x142, 0x5, 0x2c, 0x17, 0x2, 0x142, 
    0x143, 0x7, 0x5, 0x2, 0x2, 0x143, 0x145, 0x3, 0x2, 0x2, 0x2, 0x144, 
    0x131, 0x3, 0x2, 0x2, 0x2, 0x144, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x145, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x7, 0x23, 0x2, 0x2, 0x147, 
    0x148, 0x7, 0x3a, 0x2, 0x2, 0x148, 0x149, 0x7, 0x3, 0x2, 0x2, 0x149, 
    0x14b, 0x5, 0x16, 0xc, 0x2, 0x14a, 0x146, 0x3, 0x2, 0x2, 0x2, 0x14b, 
    0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14c, 
    0x14d, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x151, 0x3, 0x2, 0x2, 0x2, 0x14e, 
    0x14f, 0x7, 0x24, 0x2, 0x2, 0x14f, 0x150, 0x7, 0x3, 0x2, 0x2, 0x150, 
    0x152, 0x5, 0x16, 0xc, 0x2, 0x151, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x151, 
    0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x153, 0x158, 
    0x7, 0x25, 0x2, 0x2, 0x154, 0x156, 0x5, 0xe, 0x8, 0x2, 0x155, 0x154, 
    0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 
    0x3, 0x2, 0x2, 0x2, 0x157, 0x159, 0x5, 0x1a, 0xe, 0x2, 0x158, 0x155, 
    0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 
    0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x7, 0xb, 0x2, 0x2, 0x15b, 0x15c, 
    0x5, 0x20, 0x11, 0x2, 0x15c, 0x15e, 0x7, 0xb, 0x2, 0x2, 0x15d, 0x15f, 
    0x5, 0x1a, 0xe, 0x2, 0x15e, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 
    0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 
    0x5, 0x16, 0xc, 0x2, 0x161, 0x169, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 
    0x7, 0x26, 0x2, 0x2, 0x163, 0x166, 0x5, 0x20, 0x11, 0x2, 0x164, 0x167, 
    0x5, 0x16, 0xc, 0x2, 0x165, 0x167, 0x5, 0x18, 0xd, 0x2, 0x166, 0x164, 
    0x3, 0x2, 0x2, 0x2, 0x166, 0x165, 0x3, 0x2, 0x2, 0x2, 0x167, 0x169, 
    0x3, 0x2, 0x2, 0x2, 0x168, 0x153, 0x3, 0x2, 0x2, 0x2, 0x168, 0x162, 
    0x3, 0x2, 0x2, 0x2, 0x169, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x9, 
    0x5, 0x2, 0x2, 0x16b, 0x31, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x9, 0x6, 
    0x2, 0x2, 0x16d, 0x33, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x173, 0x5, 0x36, 
    0x1c, 0x2, 0x16f, 0x173, 0x5, 0x3c, 0x1f, 0x2, 0x170, 0x173, 0x5, 0x38, 
    0x1d, 0x2, 0x171, 0x173, 0x5, 0x3a, 0x1e, 0x2, 0x172, 0x16e, 0x3, 0x2, 
    0x2, 0x2, 0x172, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 
    0x2, 0x2, 0x172, 0x171, 0x3, 0x2, 0x2, 0x2, 0x173, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x174, 0x175, 0x9, 0x7, 0x2, 0x2, 0x175, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x176, 0x177, 0x9, 0x8, 0x2, 0x2, 0x177, 0x39, 0x3, 0x2, 0x2, 0x2, 0x178, 
    0x179, 0x9, 0x9, 0x2, 0x2, 0x179, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 
    0x9, 0xa, 0x2, 0x2, 0x17b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x41, 0x45, 
    0x4b, 0x51, 0x56, 0x5a, 0x5f, 0x67, 0x71, 0x78, 0x7e, 0x89, 0x95, 0x9c, 
    0xa2, 0xa4, 0xba, 0xbf, 0xc8, 0xcd, 0xd4, 0xdb, 0xe5, 0xf7, 0xff, 0x105, 
    0x110, 0x115, 0x11a, 0x11e, 0x126, 0x12f, 0x135, 0x13a, 0x13c, 0x144, 
    0x14c, 0x151, 0x155, 0x158, 0x15e, 0x166, 0x168, 0x172, 
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
