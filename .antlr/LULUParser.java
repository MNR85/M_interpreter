// Generated from /home/ali/maryam_antlr/LULU.g4 by ANTLR 4.8
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class LULUParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, WHITESPACE=29, COMMENT=30, INT_CONST=31, 
		REAL_CONST=32, BOOL_CONST=33, ID=34, STRING_CONST=35, RELATIONAL=36, ARITHMETIC=37, 
		LOGICAL=38, BITWISE=39, PRIVATE=40, PUBLIC=41, PROTECTED=42, FOR=43, WHILE=44, 
		INT=45, BOOL=46, FLOAT=47, STRING=48, CONST=49, FUNCTION=50, BREAK=51, 
		CONTINUE=52, DESTRUCT=53, THIS=54, SUPER=55, ALLOCATE=56, READ=57, WRITE=58, 
		NIL=59, IF=60, ELSE=61, SWITCH=62, CASEOF=63, DEFAULT=64;
	public static final int
		RULE_program = 0, RULE_ft_def = 1, RULE_type_def = 2, RULE_fun_def = 3, 
		RULE_component = 4, RULE_block = 5, RULE_args_varP = 6, RULE_args_var = 7, 
		RULE_var_def = 8, RULE_var_val = 9, RULE_expr = 10, RULE_access_modifier = 11, 
		RULE_type = 12, RULE_stmt = 13, RULE_assign = 14, RULE_var = 15, RULE_ref = 16, 
		RULE_func_call = 17, RULE_list = 18, RULE_handle_call = 19, RULE_params = 20, 
		RULE_cond_stmt = 21, RULE_switch_body = 22, RULE_loop_stmt = 23, RULE_const_val = 24, 
		RULE_unary_op = 25, RULE_binary_op = 26, RULE_arithmetic = 27, RULE_bitwise = 28, 
		RULE_logical = 29, RULE_relational = 30;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "ft_def", "type_def", "fun_def", "component", "block", "args_varP", 
			"args_var", "var_def", "var_val", "expr", "access_modifier", "type", 
			"stmt", "assign", "var", "ref", "func_call", "list", "handle_call", "params", 
			"cond_stmt", "switch_body", "loop_stmt", "const_val", "unary_op", "binary_op", 
			"arithmetic", "bitwise", "logical", "relational"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "':'", "'{'", "'}'", "'('", "')'", "'='", "'['", "']'", "','", 
			"';'", "'.'", "'-'", "'!'", "'~'", "'+'", "'*'", "'/'", "'%'", "'&'", 
			"'|'", "'||'", "'&&'", "'=='", "'!='", "'<='", "'>='", "'<'", "'>'", 
			null, null, null, null, null, null, null, null, null, null, null, "'private'", 
			"'public'", "'protected'", "'for'", "'while'", "'int'", "'bool'", "'float'", 
			"'string'", "'const'", "'function'", "'break'", "'continue'", "'destruct'", 
			"'this'", "'super'", "'allocate'", "'read'", "'write'", "'nil'", "'if'", 
			"'else'", "'switch'", "'caseof'", "'default'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, "WHITESPACE", "COMMENT", "INT_CONST", "REAL_CONST", 
			"BOOL_CONST", "ID", "STRING_CONST", "RELATIONAL", "ARITHMETIC", "LOGICAL", 
			"BITWISE", "PRIVATE", "PUBLIC", "PROTECTED", "FOR", "WHILE", "INT", "BOOL", 
			"FLOAT", "STRING", "CONST", "FUNCTION", "BREAK", "CONTINUE", "DESTRUCT", 
			"THIS", "SUPER", "ALLOCATE", "READ", "WRITE", "NIL", "IF", "ELSE", "SWITCH", 
			"CASEOF", "DEFAULT"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "LULU.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public LULUParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class ProgramContext extends ParserRuleContext {
		public List<Ft_defContext> ft_def() {
			return getRuleContexts(Ft_defContext.class);
		}
		public Ft_defContext ft_def(int i) {
			return getRuleContext(Ft_defContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(63); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(62);
				ft_def();
				}
				}
				setState(65); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__3) | (1L << ID) | (1L << INT) | (1L << BOOL) | (1L << FLOAT) | (1L << STRING) | (1L << FUNCTION))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ft_defContext extends ParserRuleContext {
		public Type_defContext type_def() {
			return getRuleContext(Type_defContext.class,0);
		}
		public Fun_defContext fun_def() {
			return getRuleContext(Fun_defContext.class,0);
		}
		public Ft_defContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ft_def; }
	}

	public final Ft_defContext ft_def() throws RecognitionException {
		Ft_defContext _localctx = new Ft_defContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_ft_def);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(69);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
			case INT:
			case BOOL:
			case FLOAT:
			case STRING:
				{
				setState(67);
				type_def();
				}
				break;
			case T__3:
			case FUNCTION:
				{
				setState(68);
				fun_def();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Type_defContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public List<TerminalNode> ID() { return getTokens(LULUParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(LULUParser.ID, i);
		}
		public List<ComponentContext> component() {
			return getRuleContexts(ComponentContext.class);
		}
		public ComponentContext component(int i) {
			return getRuleContext(ComponentContext.class,i);
		}
		public Type_defContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_def; }
	}

	public final Type_defContext type_def() throws RecognitionException {
		Type_defContext _localctx = new Type_defContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_type_def);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(71);
			type();
			setState(72);
			match(ID);
			setState(75);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(73);
				match(T__0);
				setState(74);
				match(ID);
				}
			}

			setState(77);
			match(T__1);
			setState(79); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(78);
				component();
				}
				}
				setState(81); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__3) | (1L << ID) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << PROTECTED) | (1L << INT) | (1L << BOOL) | (1L << FLOAT) | (1L << STRING) | (1L << CONST) | (1L << FUNCTION))) != 0) );
			setState(83);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Fun_defContext extends ParserRuleContext {
		public TerminalNode FUNCTION() { return getToken(LULUParser.FUNCTION, 0); }
		public TerminalNode ID() { return getToken(LULUParser.ID, 0); }
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public Args_varContext args_var() {
			return getRuleContext(Args_varContext.class,0);
		}
		public Args_varPContext args_varP() {
			return getRuleContext(Args_varPContext.class,0);
		}
		public Fun_defContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fun_def; }
	}

	public final Fun_defContext fun_def() throws RecognitionException {
		Fun_defContext _localctx = new Fun_defContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_fun_def);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(90);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__3) {
				{
				setState(85);
				match(T__3);
				setState(86);
				args_var(0);
				setState(87);
				match(T__4);
				setState(88);
				match(T__5);
				}
			}

			setState(92);
			match(FUNCTION);
			setState(93);
			match(ID);
			setState(94);
			match(T__3);
			setState(96);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ID) | (1L << INT) | (1L << BOOL) | (1L << FLOAT) | (1L << STRING))) != 0)) {
				{
				setState(95);
				args_varP();
				}
			}

			setState(98);
			match(T__4);
			setState(99);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ComponentContext extends ParserRuleContext {
		public Var_defContext var_def() {
			return getRuleContext(Var_defContext.class,0);
		}
		public Fun_defContext fun_def() {
			return getRuleContext(Fun_defContext.class,0);
		}
		public Access_modifierContext access_modifier() {
			return getRuleContext(Access_modifierContext.class,0);
		}
		public ComponentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_component; }
	}

	public final ComponentContext component() throws RecognitionException {
		ComponentContext _localctx = new ComponentContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_component);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(102);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << PRIVATE) | (1L << PUBLIC) | (1L << PROTECTED))) != 0)) {
				{
				setState(101);
				access_modifier();
				}
			}

			setState(106);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
			case INT:
			case BOOL:
			case FLOAT:
			case STRING:
			case CONST:
				{
				setState(104);
				var_def();
				}
				break;
			case T__3:
			case FUNCTION:
				{
				setState(105);
				fun_def();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockContext extends ParserRuleContext {
		public List<Var_defContext> var_def() {
			return getRuleContexts(Var_defContext.class);
		}
		public Var_defContext var_def(int i) {
			return getRuleContext(Var_defContext.class,i);
		}
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(108);
			match(T__1);
			setState(113);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__3) | (1L << ID) | (1L << FOR) | (1L << WHILE) | (1L << INT) | (1L << BOOL) | (1L << FLOAT) | (1L << STRING) | (1L << CONST) | (1L << BREAK) | (1L << CONTINUE) | (1L << DESTRUCT) | (1L << THIS) | (1L << SUPER) | (1L << READ) | (1L << WRITE) | (1L << IF) | (1L << SWITCH))) != 0)) {
				{
				setState(111);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
				case 1:
					{
					setState(109);
					var_def();
					}
					break;
				case 2:
					{
					setState(110);
					stmt();
					}
					break;
				}
				}
				setState(115);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(116);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Args_varPContext extends ParserRuleContext {
		public Args_varContext args_var() {
			return getRuleContext(Args_varContext.class,0);
		}
		public Args_varPContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_args_varP; }
	}

	public final Args_varPContext args_varP() throws RecognitionException {
		Args_varPContext _localctx = new Args_varPContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_args_varP);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(118);
			args_var(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Args_varContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ID() { return getToken(LULUParser.ID, 0); }
		public Args_varContext args_var() {
			return getRuleContext(Args_varContext.class,0);
		}
		public Args_varContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_args_var; }
	}

	public final Args_varContext args_var() throws RecognitionException {
		return args_var(0);
	}

	private Args_varContext args_var(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Args_varContext _localctx = new Args_varContext(_ctx, _parentState);
		Args_varContext _prevctx = _localctx;
		int _startState = 14;
		enterRecursionRule(_localctx, 14, RULE_args_var, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(121);
			type();
			setState(126);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__6) {
				{
				{
				setState(122);
				match(T__6);
				setState(123);
				match(T__7);
				}
				}
				setState(128);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(129);
			match(ID);
			}
			_ctx.stop = _input.LT(-1);
			setState(145);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Args_varContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_args_var);
					setState(131);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(132);
					match(T__8);
					setState(133);
					type();
					setState(138);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__6) {
						{
						{
						setState(134);
						match(T__6);
						setState(135);
						match(T__7);
						}
						}
						setState(140);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(141);
					match(ID);
					}
					} 
				}
				setState(147);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Var_defContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public List<Var_valContext> var_val() {
			return getRuleContexts(Var_valContext.class);
		}
		public Var_valContext var_val(int i) {
			return getRuleContext(Var_valContext.class,i);
		}
		public TerminalNode CONST() { return getToken(LULUParser.CONST, 0); }
		public Var_defContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var_def; }
	}

	public final Var_defContext var_def() throws RecognitionException {
		Var_defContext _localctx = new Var_defContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_var_def);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==CONST) {
				{
				setState(148);
				match(CONST);
				}
			}

			setState(151);
			type();
			setState(152);
			var_val();
			setState(157);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__8) {
				{
				{
				setState(153);
				match(T__8);
				setState(154);
				var_val();
				}
				}
				setState(159);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(160);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Var_valContext extends ParserRuleContext {
		public RefContext ref() {
			return getRuleContext(RefContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Var_valContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var_val; }
	}

	public final Var_valContext var_val() throws RecognitionException {
		Var_valContext _localctx = new Var_valContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_var_val);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162);
			ref();
			setState(165);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__5) {
				{
				setState(163);
				match(T__5);
				setState(164);
				expr(0);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Unary_opContext unary_op() {
			return getRuleContext(Unary_opContext.class,0);
		}
		public Const_valContext const_val() {
			return getRuleContext(Const_valContext.class,0);
		}
		public TerminalNode ALLOCATE() { return getToken(LULUParser.ALLOCATE, 0); }
		public Handle_callContext handle_call() {
			return getRuleContext(Handle_callContext.class,0);
		}
		public Func_callContext func_call() {
			return getRuleContext(Func_callContext.class,0);
		}
		public VarContext var() {
			return getRuleContext(VarContext.class,0);
		}
		public ListContext list() {
			return getRuleContext(ListContext.class,0);
		}
		public TerminalNode NIL() { return getToken(LULUParser.NIL, 0); }
		public Binary_opContext binary_op() {
			return getRuleContext(Binary_opContext.class,0);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 20;
		enterRecursionRule(_localctx, 20, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(182);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(168);
				match(T__3);
				setState(169);
				expr(0);
				setState(170);
				match(T__4);
				}
				break;
			case 2:
				{
				setState(172);
				unary_op();
				setState(173);
				expr(7);
				}
				break;
			case 3:
				{
				setState(175);
				const_val();
				}
				break;
			case 4:
				{
				setState(176);
				match(ALLOCATE);
				setState(177);
				handle_call();
				}
				break;
			case 5:
				{
				setState(178);
				func_call();
				}
				break;
			case 6:
				{
				setState(179);
				var();
				}
				break;
			case 7:
				{
				setState(180);
				list();
				}
				break;
			case 8:
				{
				setState(181);
				match(NIL);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(190);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_expr);
					setState(184);
					if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
					setState(185);
					binary_op();
					setState(186);
					expr(10);
					}
					} 
				}
				setState(192);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Access_modifierContext extends ParserRuleContext {
		public TerminalNode PRIVATE() { return getToken(LULUParser.PRIVATE, 0); }
		public TerminalNode PUBLIC() { return getToken(LULUParser.PUBLIC, 0); }
		public TerminalNode PROTECTED() { return getToken(LULUParser.PROTECTED, 0); }
		public Access_modifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_access_modifier; }
	}

	public final Access_modifierContext access_modifier() throws RecognitionException {
		Access_modifierContext _localctx = new Access_modifierContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_access_modifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(193);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << PRIVATE) | (1L << PUBLIC) | (1L << PROTECTED))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(LULUParser.INT, 0); }
		public TerminalNode BOOL() { return getToken(LULUParser.BOOL, 0); }
		public TerminalNode FLOAT() { return getToken(LULUParser.FLOAT, 0); }
		public TerminalNode STRING() { return getToken(LULUParser.STRING, 0); }
		public TerminalNode ID() { return getToken(LULUParser.ID, 0); }
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(195);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ID) | (1L << INT) | (1L << BOOL) | (1L << FLOAT) | (1L << STRING))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtContext extends ParserRuleContext {
		public AssignContext assign() {
			return getRuleContext(AssignContext.class,0);
		}
		public Func_callContext func_call() {
			return getRuleContext(Func_callContext.class,0);
		}
		public Cond_stmtContext cond_stmt() {
			return getRuleContext(Cond_stmtContext.class,0);
		}
		public Loop_stmtContext loop_stmt() {
			return getRuleContext(Loop_stmtContext.class,0);
		}
		public TerminalNode BREAK() { return getToken(LULUParser.BREAK, 0); }
		public TerminalNode CONTINUE() { return getToken(LULUParser.CONTINUE, 0); }
		public TerminalNode DESTRUCT() { return getToken(LULUParser.DESTRUCT, 0); }
		public TerminalNode ID() { return getToken(LULUParser.ID, 0); }
		public StmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmt; }
	}

	public final StmtContext stmt() throws RecognitionException {
		StmtContext _localctx = new StmtContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_stmt);
		int _la;
		try {
			setState(219);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(197);
				assign();
				setState(198);
				match(T__9);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(200);
				func_call();
				setState(201);
				match(T__9);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(203);
				cond_stmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(204);
				loop_stmt();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(205);
				match(BREAK);
				setState(206);
				match(T__9);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(207);
				match(CONTINUE);
				setState(208);
				match(T__9);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(209);
				match(DESTRUCT);
				setState(214);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__6) {
					{
					{
					setState(210);
					match(T__6);
					setState(211);
					match(T__7);
					}
					}
					setState(216);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(217);
				match(ID);
				setState(218);
				match(T__9);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<VarContext> var() {
			return getRuleContexts(VarContext.class);
		}
		public VarContext var(int i) {
			return getRuleContext(VarContext.class,i);
		}
		public AssignContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assign; }
	}

	public final AssignContext assign() throws RecognitionException {
		AssignContext _localctx = new AssignContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_assign);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(233);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
			case THIS:
			case SUPER:
				{
				setState(221);
				var();
				}
				break;
			case T__3:
				{
				setState(222);
				match(T__3);
				setState(223);
				var();
				setState(228);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__8) {
					{
					{
					setState(224);
					match(T__8);
					setState(225);
					var();
					}
					}
					setState(230);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(231);
				match(T__4);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(235);
			match(T__5);
			setState(236);
			expr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarContext extends ParserRuleContext {
		public List<RefContext> ref() {
			return getRuleContexts(RefContext.class);
		}
		public RefContext ref(int i) {
			return getRuleContext(RefContext.class,i);
		}
		public TerminalNode THIS() { return getToken(LULUParser.THIS, 0); }
		public TerminalNode SUPER() { return getToken(LULUParser.SUPER, 0); }
		public VarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var; }
	}

	public final VarContext var() throws RecognitionException {
		VarContext _localctx = new VarContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_var);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(240);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==THIS || _la==SUPER) {
				{
				setState(238);
				_la = _input.LA(1);
				if ( !(_la==THIS || _la==SUPER) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(239);
				match(T__10);
				}
			}

			setState(242);
			ref();
			setState(247);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(243);
					match(T__10);
					setState(244);
					ref();
					}
					} 
				}
				setState(249);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RefContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(LULUParser.ID, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public RefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ref; }
	}

	public final RefContext ref() throws RecognitionException {
		RefContext _localctx = new RefContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_ref);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(250);
			match(ID);
			setState(257);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(251);
					match(T__6);
					setState(252);
					expr(0);
					setState(253);
					match(T__7);
					}
					} 
				}
				setState(259);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Func_callContext extends ParserRuleContext {
		public Handle_callContext handle_call() {
			return getRuleContext(Handle_callContext.class,0);
		}
		public VarContext var() {
			return getRuleContext(VarContext.class,0);
		}
		public TerminalNode READ() { return getToken(LULUParser.READ, 0); }
		public TerminalNode WRITE() { return getToken(LULUParser.WRITE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Func_callContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_call; }
	}

	public final Func_callContext func_call() throws RecognitionException {
		Func_callContext _localctx = new Func_callContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_func_call);
		try {
			setState(274);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
			case THIS:
			case SUPER:
				enterOuterAlt(_localctx, 1);
				{
				setState(263);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
				case 1:
					{
					setState(260);
					var();
					setState(261);
					match(T__10);
					}
					break;
				}
				setState(265);
				handle_call();
				}
				break;
			case READ:
				enterOuterAlt(_localctx, 2);
				{
				setState(266);
				match(READ);
				setState(267);
				match(T__3);
				setState(268);
				match(T__4);
				}
				break;
			case WRITE:
				enterOuterAlt(_localctx, 3);
				{
				setState(269);
				match(WRITE);
				setState(270);
				match(T__3);
				setState(271);
				expr(0);
				setState(272);
				match(T__4);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ListContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<ListContext> list() {
			return getRuleContexts(ListContext.class);
		}
		public ListContext list(int i) {
			return getRuleContext(ListContext.class,i);
		}
		public ListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_list; }
	}

	public final ListContext list() throws RecognitionException {
		ListContext _localctx = new ListContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(276);
			match(T__6);
			setState(279);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
			case 1:
				{
				setState(277);
				expr(0);
				}
				break;
			case 2:
				{
				setState(278);
				list();
				}
				break;
			}
			setState(288);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__8) {
				{
				{
				setState(281);
				match(T__8);
				setState(284);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
				case 1:
					{
					setState(282);
					expr(0);
					}
					break;
				case 2:
					{
					setState(283);
					list();
					}
					break;
				}
				}
				}
				setState(290);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(291);
			match(T__7);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Handle_callContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(LULUParser.ID, 0); }
		public ParamsContext params() {
			return getRuleContext(ParamsContext.class,0);
		}
		public Handle_callContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_handle_call; }
	}

	public final Handle_callContext handle_call() throws RecognitionException {
		Handle_callContext _localctx = new Handle_callContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_handle_call);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(293);
			match(ID);
			setState(294);
			match(T__3);
			setState(296);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__3) | (1L << T__6) | (1L << T__11) | (1L << T__12) | (1L << T__13) | (1L << INT_CONST) | (1L << REAL_CONST) | (1L << BOOL_CONST) | (1L << ID) | (1L << STRING_CONST) | (1L << THIS) | (1L << SUPER) | (1L << ALLOCATE) | (1L << READ) | (1L << WRITE) | (1L << NIL))) != 0)) {
				{
				setState(295);
				params();
				}
			}

			setState(298);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParamsContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ParamsContext params() {
			return getRuleContext(ParamsContext.class,0);
		}
		public ParamsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_params; }
	}

	public final ParamsContext params() throws RecognitionException {
		ParamsContext _localctx = new ParamsContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_params);
		try {
			setState(305);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(300);
				expr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(301);
				expr(0);
				setState(302);
				match(T__8);
				setState(303);
				params();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Cond_stmtContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(LULUParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<BlockContext> block() {
			return getRuleContexts(BlockContext.class);
		}
		public BlockContext block(int i) {
			return getRuleContext(BlockContext.class,i);
		}
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public TerminalNode ELSE() { return getToken(LULUParser.ELSE, 0); }
		public TerminalNode SWITCH() { return getToken(LULUParser.SWITCH, 0); }
		public VarContext var() {
			return getRuleContext(VarContext.class,0);
		}
		public Switch_bodyContext switch_body() {
			return getRuleContext(Switch_bodyContext.class,0);
		}
		public Cond_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cond_stmt; }
	}

	public final Cond_stmtContext cond_stmt() throws RecognitionException {
		Cond_stmtContext _localctx = new Cond_stmtContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_cond_stmt);
		try {
			setState(326);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IF:
				enterOuterAlt(_localctx, 1);
				{
				setState(307);
				match(IF);
				setState(308);
				expr(0);
				setState(311);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__1:
					{
					setState(309);
					block();
					}
					break;
				case T__3:
				case ID:
				case FOR:
				case WHILE:
				case BREAK:
				case CONTINUE:
				case DESTRUCT:
				case THIS:
				case SUPER:
				case READ:
				case WRITE:
				case IF:
				case SWITCH:
					{
					setState(310);
					stmt();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(318);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
				case 1:
					{
					setState(313);
					match(ELSE);
					setState(316);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case T__1:
						{
						setState(314);
						block();
						}
						break;
					case T__3:
					case ID:
					case FOR:
					case WHILE:
					case BREAK:
					case CONTINUE:
					case DESTRUCT:
					case THIS:
					case SUPER:
					case READ:
					case WRITE:
					case IF:
					case SWITCH:
						{
						setState(315);
						stmt();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					}
					break;
				}
				}
				break;
			case SWITCH:
				enterOuterAlt(_localctx, 2);
				{
				setState(320);
				match(SWITCH);
				setState(321);
				var();
				setState(322);
				match(T__1);
				setState(323);
				switch_body();
				setState(324);
				match(T__2);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Switch_bodyContext extends ParserRuleContext {
		public List<TerminalNode> CASEOF() { return getTokens(LULUParser.CASEOF); }
		public TerminalNode CASEOF(int i) {
			return getToken(LULUParser.CASEOF, i);
		}
		public List<TerminalNode> INT_CONST() { return getTokens(LULUParser.INT_CONST); }
		public TerminalNode INT_CONST(int i) {
			return getToken(LULUParser.INT_CONST, i);
		}
		public List<BlockContext> block() {
			return getRuleContexts(BlockContext.class);
		}
		public BlockContext block(int i) {
			return getRuleContext(BlockContext.class,i);
		}
		public TerminalNode DEFAULT() { return getToken(LULUParser.DEFAULT, 0); }
		public Switch_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_switch_body; }
	}

	public final Switch_bodyContext switch_body() throws RecognitionException {
		Switch_bodyContext _localctx = new Switch_bodyContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_switch_body);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(332); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(328);
				match(CASEOF);
				setState(329);
				match(INT_CONST);
				setState(330);
				match(T__0);
				setState(331);
				block();
				}
				}
				setState(334); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==CASEOF );
			setState(339);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DEFAULT) {
				{
				setState(336);
				match(DEFAULT);
				setState(337);
				match(T__0);
				setState(338);
				block();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Loop_stmtContext extends ParserRuleContext {
		public TerminalNode FOR() { return getToken(LULUParser.FOR, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public List<AssignContext> assign() {
			return getRuleContexts(AssignContext.class);
		}
		public AssignContext assign(int i) {
			return getRuleContext(AssignContext.class,i);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode WHILE() { return getToken(LULUParser.WHILE, 0); }
		public StmtContext stmt() {
			return getRuleContext(StmtContext.class,0);
		}
		public Loop_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loop_stmt; }
	}

	public final Loop_stmtContext loop_stmt() throws RecognitionException {
		Loop_stmtContext _localctx = new Loop_stmtContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_loop_stmt);
		int _la;
		try {
			setState(362);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case FOR:
				enterOuterAlt(_localctx, 1);
				{
				setState(341);
				match(FOR);
				setState(346);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__3) | (1L << ID) | (1L << INT) | (1L << BOOL) | (1L << FLOAT) | (1L << STRING) | (1L << THIS) | (1L << SUPER))) != 0)) {
					{
					setState(343);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
					case 1:
						{
						setState(342);
						type();
						}
						break;
					}
					setState(345);
					assign();
					}
				}

				setState(348);
				match(T__9);
				setState(349);
				expr(0);
				setState(350);
				match(T__9);
				setState(352);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__3) | (1L << ID) | (1L << THIS) | (1L << SUPER))) != 0)) {
					{
					setState(351);
					assign();
					}
				}

				setState(354);
				block();
				}
				break;
			case WHILE:
				enterOuterAlt(_localctx, 2);
				{
				setState(356);
				match(WHILE);
				setState(357);
				expr(0);
				setState(360);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__1:
					{
					setState(358);
					block();
					}
					break;
				case T__3:
				case ID:
				case FOR:
				case WHILE:
				case BREAK:
				case CONTINUE:
				case DESTRUCT:
				case THIS:
				case SUPER:
				case READ:
				case WRITE:
				case IF:
				case SWITCH:
					{
					setState(359);
					stmt();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Const_valContext extends ParserRuleContext {
		public TerminalNode INT_CONST() { return getToken(LULUParser.INT_CONST, 0); }
		public TerminalNode REAL_CONST() { return getToken(LULUParser.REAL_CONST, 0); }
		public TerminalNode BOOL_CONST() { return getToken(LULUParser.BOOL_CONST, 0); }
		public TerminalNode STRING_CONST() { return getToken(LULUParser.STRING_CONST, 0); }
		public Const_valContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_const_val; }
	}

	public final Const_valContext const_val() throws RecognitionException {
		Const_valContext _localctx = new Const_valContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_const_val);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(364);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT_CONST) | (1L << REAL_CONST) | (1L << BOOL_CONST) | (1L << STRING_CONST))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Unary_opContext extends ParserRuleContext {
		public Unary_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unary_op; }
	}

	public final Unary_opContext unary_op() throws RecognitionException {
		Unary_opContext _localctx = new Unary_opContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_unary_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(366);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << T__12) | (1L << T__13))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Binary_opContext extends ParserRuleContext {
		public ArithmeticContext arithmetic() {
			return getRuleContext(ArithmeticContext.class,0);
		}
		public RelationalContext relational() {
			return getRuleContext(RelationalContext.class,0);
		}
		public BitwiseContext bitwise() {
			return getRuleContext(BitwiseContext.class,0);
		}
		public LogicalContext logical() {
			return getRuleContext(LogicalContext.class,0);
		}
		public Binary_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_binary_op; }
	}

	public final Binary_opContext binary_op() throws RecognitionException {
		Binary_opContext _localctx = new Binary_opContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_binary_op);
		try {
			setState(372);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__11:
			case T__14:
			case T__15:
			case T__16:
			case T__17:
				enterOuterAlt(_localctx, 1);
				{
				setState(368);
				arithmetic();
				}
				break;
			case T__22:
			case T__23:
			case T__24:
			case T__25:
			case T__26:
			case T__27:
				enterOuterAlt(_localctx, 2);
				{
				setState(369);
				relational();
				}
				break;
			case T__18:
			case T__19:
				enterOuterAlt(_localctx, 3);
				{
				setState(370);
				bitwise();
				}
				break;
			case T__20:
			case T__21:
				enterOuterAlt(_localctx, 4);
				{
				setState(371);
				logical();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArithmeticContext extends ParserRuleContext {
		public ArithmeticContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arithmetic; }
	}

	public final ArithmeticContext arithmetic() throws RecognitionException {
		ArithmeticContext _localctx = new ArithmeticContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_arithmetic);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(374);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BitwiseContext extends ParserRuleContext {
		public BitwiseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bitwise; }
	}

	public final BitwiseContext bitwise() throws RecognitionException {
		BitwiseContext _localctx = new BitwiseContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_bitwise);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(376);
			_la = _input.LA(1);
			if ( !(_la==T__18 || _la==T__19) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LogicalContext extends ParserRuleContext {
		public LogicalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logical; }
	}

	public final LogicalContext logical() throws RecognitionException {
		LogicalContext _localctx = new LogicalContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_logical);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(378);
			_la = _input.LA(1);
			if ( !(_la==T__20 || _la==T__21) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RelationalContext extends ParserRuleContext {
		public RelationalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relational; }
	}

	public final RelationalContext relational() throws RecognitionException {
		RelationalContext _localctx = new RelationalContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_relational);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(380);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__27))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 7:
			return args_var_sempred((Args_varContext)_localctx, predIndex);
		case 10:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean args_var_sempred(Args_varContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 9);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3B\u0181\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \3\2"+
		"\6\2B\n\2\r\2\16\2C\3\3\3\3\5\3H\n\3\3\4\3\4\3\4\3\4\5\4N\n\4\3\4\3\4"+
		"\6\4R\n\4\r\4\16\4S\3\4\3\4\3\5\3\5\3\5\3\5\3\5\5\5]\n\5\3\5\3\5\3\5\3"+
		"\5\5\5c\n\5\3\5\3\5\3\5\3\6\5\6i\n\6\3\6\3\6\5\6m\n\6\3\7\3\7\3\7\7\7"+
		"r\n\7\f\7\16\7u\13\7\3\7\3\7\3\b\3\b\3\t\3\t\3\t\3\t\7\t\177\n\t\f\t\16"+
		"\t\u0082\13\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\7\t\u008b\n\t\f\t\16\t\u008e"+
		"\13\t\3\t\3\t\7\t\u0092\n\t\f\t\16\t\u0095\13\t\3\n\5\n\u0098\n\n\3\n"+
		"\3\n\3\n\3\n\7\n\u009e\n\n\f\n\16\n\u00a1\13\n\3\n\3\n\3\13\3\13\3\13"+
		"\5\13\u00a8\n\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3"+
		"\f\3\f\5\f\u00b9\n\f\3\f\3\f\3\f\3\f\7\f\u00bf\n\f\f\f\16\f\u00c2\13\f"+
		"\3\r\3\r\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3"+
		"\17\3\17\3\17\3\17\3\17\7\17\u00d7\n\17\f\17\16\17\u00da\13\17\3\17\3"+
		"\17\5\17\u00de\n\17\3\20\3\20\3\20\3\20\3\20\7\20\u00e5\n\20\f\20\16\20"+
		"\u00e8\13\20\3\20\3\20\5\20\u00ec\n\20\3\20\3\20\3\20\3\21\3\21\5\21\u00f3"+
		"\n\21\3\21\3\21\3\21\7\21\u00f8\n\21\f\21\16\21\u00fb\13\21\3\22\3\22"+
		"\3\22\3\22\3\22\7\22\u0102\n\22\f\22\16\22\u0105\13\22\3\23\3\23\3\23"+
		"\5\23\u010a\n\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\5\23\u0115"+
		"\n\23\3\24\3\24\3\24\5\24\u011a\n\24\3\24\3\24\3\24\5\24\u011f\n\24\7"+
		"\24\u0121\n\24\f\24\16\24\u0124\13\24\3\24\3\24\3\25\3\25\3\25\5\25\u012b"+
		"\n\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\5\26\u0134\n\26\3\27\3\27\3\27"+
		"\3\27\5\27\u013a\n\27\3\27\3\27\3\27\5\27\u013f\n\27\5\27\u0141\n\27\3"+
		"\27\3\27\3\27\3\27\3\27\3\27\5\27\u0149\n\27\3\30\3\30\3\30\3\30\6\30"+
		"\u014f\n\30\r\30\16\30\u0150\3\30\3\30\3\30\5\30\u0156\n\30\3\31\3\31"+
		"\5\31\u015a\n\31\3\31\5\31\u015d\n\31\3\31\3\31\3\31\3\31\5\31\u0163\n"+
		"\31\3\31\3\31\3\31\3\31\3\31\3\31\5\31\u016b\n\31\5\31\u016d\n\31\3\32"+
		"\3\32\3\33\3\33\3\34\3\34\3\34\3\34\5\34\u0177\n\34\3\35\3\35\3\36\3\36"+
		"\3\37\3\37\3 \3 \3 \2\4\20\26!\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36"+
		" \"$&(*,.\60\62\64\668:<>\2\13\3\2*,\4\2$$/\62\3\289\4\2!#%%\3\2\16\20"+
		"\4\2\16\16\21\24\3\2\25\26\3\2\27\30\3\2\31\36\2\u019b\2A\3\2\2\2\4G\3"+
		"\2\2\2\6I\3\2\2\2\b\\\3\2\2\2\nh\3\2\2\2\fn\3\2\2\2\16x\3\2\2\2\20z\3"+
		"\2\2\2\22\u0097\3\2\2\2\24\u00a4\3\2\2\2\26\u00b8\3\2\2\2\30\u00c3\3\2"+
		"\2\2\32\u00c5\3\2\2\2\34\u00dd\3\2\2\2\36\u00eb\3\2\2\2 \u00f2\3\2\2\2"+
		"\"\u00fc\3\2\2\2$\u0114\3\2\2\2&\u0116\3\2\2\2(\u0127\3\2\2\2*\u0133\3"+
		"\2\2\2,\u0148\3\2\2\2.\u014e\3\2\2\2\60\u016c\3\2\2\2\62\u016e\3\2\2\2"+
		"\64\u0170\3\2\2\2\66\u0176\3\2\2\28\u0178\3\2\2\2:\u017a\3\2\2\2<\u017c"+
		"\3\2\2\2>\u017e\3\2\2\2@B\5\4\3\2A@\3\2\2\2BC\3\2\2\2CA\3\2\2\2CD\3\2"+
		"\2\2D\3\3\2\2\2EH\5\6\4\2FH\5\b\5\2GE\3\2\2\2GF\3\2\2\2H\5\3\2\2\2IJ\5"+
		"\32\16\2JM\7$\2\2KL\7\3\2\2LN\7$\2\2MK\3\2\2\2MN\3\2\2\2NO\3\2\2\2OQ\7"+
		"\4\2\2PR\5\n\6\2QP\3\2\2\2RS\3\2\2\2SQ\3\2\2\2ST\3\2\2\2TU\3\2\2\2UV\7"+
		"\5\2\2V\7\3\2\2\2WX\7\6\2\2XY\5\20\t\2YZ\7\7\2\2Z[\7\b\2\2[]\3\2\2\2\\"+
		"W\3\2\2\2\\]\3\2\2\2]^\3\2\2\2^_\7\64\2\2_`\7$\2\2`b\7\6\2\2ac\5\16\b"+
		"\2ba\3\2\2\2bc\3\2\2\2cd\3\2\2\2de\7\7\2\2ef\5\f\7\2f\t\3\2\2\2gi\5\30"+
		"\r\2hg\3\2\2\2hi\3\2\2\2il\3\2\2\2jm\5\22\n\2km\5\b\5\2lj\3\2\2\2lk\3"+
		"\2\2\2m\13\3\2\2\2ns\7\4\2\2or\5\22\n\2pr\5\34\17\2qo\3\2\2\2qp\3\2\2"+
		"\2ru\3\2\2\2sq\3\2\2\2st\3\2\2\2tv\3\2\2\2us\3\2\2\2vw\7\5\2\2w\r\3\2"+
		"\2\2xy\5\20\t\2y\17\3\2\2\2z{\b\t\1\2{\u0080\5\32\16\2|}\7\t\2\2}\177"+
		"\7\n\2\2~|\3\2\2\2\177\u0082\3\2\2\2\u0080~\3\2\2\2\u0080\u0081\3\2\2"+
		"\2\u0081\u0083\3\2\2\2\u0082\u0080\3\2\2\2\u0083\u0084\7$\2\2\u0084\u0093"+
		"\3\2\2\2\u0085\u0086\f\3\2\2\u0086\u0087\7\13\2\2\u0087\u008c\5\32\16"+
		"\2\u0088\u0089\7\t\2\2\u0089\u008b\7\n\2\2\u008a\u0088\3\2\2\2\u008b\u008e"+
		"\3\2\2\2\u008c\u008a\3\2\2\2\u008c\u008d\3\2\2\2\u008d\u008f\3\2\2\2\u008e"+
		"\u008c\3\2\2\2\u008f\u0090\7$\2\2\u0090\u0092\3\2\2\2\u0091\u0085\3\2"+
		"\2\2\u0092\u0095\3\2\2\2\u0093\u0091\3\2\2\2\u0093\u0094\3\2\2\2\u0094"+
		"\21\3\2\2\2\u0095\u0093\3\2\2\2\u0096\u0098\7\63\2\2\u0097\u0096\3\2\2"+
		"\2\u0097\u0098\3\2\2\2\u0098\u0099\3\2\2\2\u0099\u009a\5\32\16\2\u009a"+
		"\u009f\5\24\13\2\u009b\u009c\7\13\2\2\u009c\u009e\5\24\13\2\u009d\u009b"+
		"\3\2\2\2\u009e\u00a1\3\2\2\2\u009f\u009d\3\2\2\2\u009f\u00a0\3\2\2\2\u00a0"+
		"\u00a2\3\2\2\2\u00a1\u009f\3\2\2\2\u00a2\u00a3\7\f\2\2\u00a3\23\3\2\2"+
		"\2\u00a4\u00a7\5\"\22\2\u00a5\u00a6\7\b\2\2\u00a6\u00a8\5\26\f\2\u00a7"+
		"\u00a5\3\2\2\2\u00a7\u00a8\3\2\2\2\u00a8\25\3\2\2\2\u00a9\u00aa\b\f\1"+
		"\2\u00aa\u00ab\7\6\2\2\u00ab\u00ac\5\26\f\2\u00ac\u00ad\7\7\2\2\u00ad"+
		"\u00b9\3\2\2\2\u00ae\u00af\5\64\33\2\u00af\u00b0\5\26\f\t\u00b0\u00b9"+
		"\3\2\2\2\u00b1\u00b9\5\62\32\2\u00b2\u00b3\7:\2\2\u00b3\u00b9\5(\25\2"+
		"\u00b4\u00b9\5$\23\2\u00b5\u00b9\5 \21\2\u00b6\u00b9\5&\24\2\u00b7\u00b9"+
		"\7=\2\2\u00b8\u00a9\3\2\2\2\u00b8\u00ae\3\2\2\2\u00b8\u00b1\3\2\2\2\u00b8"+
		"\u00b2\3\2\2\2\u00b8\u00b4\3\2\2\2\u00b8\u00b5\3\2\2\2\u00b8\u00b6\3\2"+
		"\2\2\u00b8\u00b7\3\2\2\2\u00b9\u00c0\3\2\2\2\u00ba\u00bb\f\13\2\2\u00bb"+
		"\u00bc\5\66\34\2\u00bc\u00bd\5\26\f\f\u00bd\u00bf\3\2\2\2\u00be\u00ba"+
		"\3\2\2\2\u00bf\u00c2\3\2\2\2\u00c0\u00be\3\2\2\2\u00c0\u00c1\3\2\2\2\u00c1"+
		"\27\3\2\2\2\u00c2\u00c0\3\2\2\2\u00c3\u00c4\t\2\2\2\u00c4\31\3\2\2\2\u00c5"+
		"\u00c6\t\3\2\2\u00c6\33\3\2\2\2\u00c7\u00c8\5\36\20\2\u00c8\u00c9\7\f"+
		"\2\2\u00c9\u00de\3\2\2\2\u00ca\u00cb\5$\23\2\u00cb\u00cc\7\f\2\2\u00cc"+
		"\u00de\3\2\2\2\u00cd\u00de\5,\27\2\u00ce\u00de\5\60\31\2\u00cf\u00d0\7"+
		"\65\2\2\u00d0\u00de\7\f\2\2\u00d1\u00d2\7\66\2\2\u00d2\u00de\7\f\2\2\u00d3"+
		"\u00d8\7\67\2\2\u00d4\u00d5\7\t\2\2\u00d5\u00d7\7\n\2\2\u00d6\u00d4\3"+
		"\2\2\2\u00d7\u00da\3\2\2\2\u00d8\u00d6\3\2\2\2\u00d8\u00d9\3\2\2\2\u00d9"+
		"\u00db\3\2\2\2\u00da\u00d8\3\2\2\2\u00db\u00dc\7$\2\2\u00dc\u00de\7\f"+
		"\2\2\u00dd\u00c7\3\2\2\2\u00dd\u00ca\3\2\2\2\u00dd\u00cd\3\2\2\2\u00dd"+
		"\u00ce\3\2\2\2\u00dd\u00cf\3\2\2\2\u00dd\u00d1\3\2\2\2\u00dd\u00d3\3\2"+
		"\2\2\u00de\35\3\2\2\2\u00df\u00ec\5 \21\2\u00e0\u00e1\7\6\2\2\u00e1\u00e6"+
		"\5 \21\2\u00e2\u00e3\7\13\2\2\u00e3\u00e5\5 \21\2\u00e4\u00e2\3\2\2\2"+
		"\u00e5\u00e8\3\2\2\2\u00e6\u00e4\3\2\2\2\u00e6\u00e7\3\2\2\2\u00e7\u00e9"+
		"\3\2\2\2\u00e8\u00e6\3\2\2\2\u00e9\u00ea\7\7\2\2\u00ea\u00ec\3\2\2\2\u00eb"+
		"\u00df\3\2\2\2\u00eb\u00e0\3\2\2\2\u00ec\u00ed\3\2\2\2\u00ed\u00ee\7\b"+
		"\2\2\u00ee\u00ef\5\26\f\2\u00ef\37\3\2\2\2\u00f0\u00f1\t\4\2\2\u00f1\u00f3"+
		"\7\r\2\2\u00f2\u00f0\3\2\2\2\u00f2\u00f3\3\2\2\2\u00f3\u00f4\3\2\2\2\u00f4"+
		"\u00f9\5\"\22\2\u00f5\u00f6\7\r\2\2\u00f6\u00f8\5\"\22\2\u00f7\u00f5\3"+
		"\2\2\2\u00f8\u00fb\3\2\2\2\u00f9\u00f7\3\2\2\2\u00f9\u00fa\3\2\2\2\u00fa"+
		"!\3\2\2\2\u00fb\u00f9\3\2\2\2\u00fc\u0103\7$\2\2\u00fd\u00fe\7\t\2\2\u00fe"+
		"\u00ff\5\26\f\2\u00ff\u0100\7\n\2\2\u0100\u0102\3\2\2\2\u0101\u00fd\3"+
		"\2\2\2\u0102\u0105\3\2\2\2\u0103\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104"+
		"#\3\2\2\2\u0105\u0103\3\2\2\2\u0106\u0107\5 \21\2\u0107\u0108\7\r\2\2"+
		"\u0108\u010a\3\2\2\2\u0109\u0106\3\2\2\2\u0109\u010a\3\2\2\2\u010a\u010b"+
		"\3\2\2\2\u010b\u0115\5(\25\2\u010c\u010d\7;\2\2\u010d\u010e\7\6\2\2\u010e"+
		"\u0115\7\7\2\2\u010f\u0110\7<\2\2\u0110\u0111\7\6\2\2\u0111\u0112\5\26"+
		"\f\2\u0112\u0113\7\7\2\2\u0113\u0115\3\2\2\2\u0114\u0109\3\2\2\2\u0114"+
		"\u010c\3\2\2\2\u0114\u010f\3\2\2\2\u0115%\3\2\2\2\u0116\u0119\7\t\2\2"+
		"\u0117\u011a\5\26\f\2\u0118\u011a\5&\24\2\u0119\u0117\3\2\2\2\u0119\u0118"+
		"\3\2\2\2\u011a\u0122\3\2\2\2\u011b\u011e\7\13\2\2\u011c\u011f\5\26\f\2"+
		"\u011d\u011f\5&\24\2\u011e\u011c\3\2\2\2\u011e\u011d\3\2\2\2\u011f\u0121"+
		"\3\2\2\2\u0120\u011b\3\2\2\2\u0121\u0124\3\2\2\2\u0122\u0120\3\2\2\2\u0122"+
		"\u0123\3\2\2\2\u0123\u0125\3\2\2\2\u0124\u0122\3\2\2\2\u0125\u0126\7\n"+
		"\2\2\u0126\'\3\2\2\2\u0127\u0128\7$\2\2\u0128\u012a\7\6\2\2\u0129\u012b"+
		"\5*\26\2\u012a\u0129\3\2\2\2\u012a\u012b\3\2\2\2\u012b\u012c\3\2\2\2\u012c"+
		"\u012d\7\7\2\2\u012d)\3\2\2\2\u012e\u0134\5\26\f\2\u012f\u0130\5\26\f"+
		"\2\u0130\u0131\7\13\2\2\u0131\u0132\5*\26\2\u0132\u0134\3\2\2\2\u0133"+
		"\u012e\3\2\2\2\u0133\u012f\3\2\2\2\u0134+\3\2\2\2\u0135\u0136\7>\2\2\u0136"+
		"\u0139\5\26\f\2\u0137\u013a\5\f\7\2\u0138\u013a\5\34\17\2\u0139\u0137"+
		"\3\2\2\2\u0139\u0138\3\2\2\2\u013a\u0140\3\2\2\2\u013b\u013e\7?\2\2\u013c"+
		"\u013f\5\f\7\2\u013d\u013f\5\34\17\2\u013e\u013c\3\2\2\2\u013e\u013d\3"+
		"\2\2\2\u013f\u0141\3\2\2\2\u0140\u013b\3\2\2\2\u0140\u0141\3\2\2\2\u0141"+
		"\u0149\3\2\2\2\u0142\u0143\7@\2\2\u0143\u0144\5 \21\2\u0144\u0145\7\4"+
		"\2\2\u0145\u0146\5.\30\2\u0146\u0147\7\5\2\2\u0147\u0149\3\2\2\2\u0148"+
		"\u0135\3\2\2\2\u0148\u0142\3\2\2\2\u0149-\3\2\2\2\u014a\u014b\7A\2\2\u014b"+
		"\u014c\7!\2\2\u014c\u014d\7\3\2\2\u014d\u014f\5\f\7\2\u014e\u014a\3\2"+
		"\2\2\u014f\u0150\3\2\2\2\u0150\u014e\3\2\2\2\u0150\u0151\3\2\2\2\u0151"+
		"\u0155\3\2\2\2\u0152\u0153\7B\2\2\u0153\u0154\7\3\2\2\u0154\u0156\5\f"+
		"\7\2\u0155\u0152\3\2\2\2\u0155\u0156\3\2\2\2\u0156/\3\2\2\2\u0157\u015c"+
		"\7-\2\2\u0158\u015a\5\32\16\2\u0159\u0158\3\2\2\2\u0159\u015a\3\2\2\2"+
		"\u015a\u015b\3\2\2\2\u015b\u015d\5\36\20\2\u015c\u0159\3\2\2\2\u015c\u015d"+
		"\3\2\2\2\u015d\u015e\3\2\2\2\u015e\u015f\7\f\2\2\u015f\u0160\5\26\f\2"+
		"\u0160\u0162\7\f\2\2\u0161\u0163\5\36\20\2\u0162\u0161\3\2\2\2\u0162\u0163"+
		"\3\2\2\2\u0163\u0164\3\2\2\2\u0164\u0165\5\f\7\2\u0165\u016d\3\2\2\2\u0166"+
		"\u0167\7.\2\2\u0167\u016a\5\26\f\2\u0168\u016b\5\f\7\2\u0169\u016b\5\34"+
		"\17\2\u016a\u0168\3\2\2\2\u016a\u0169\3\2\2\2\u016b\u016d\3\2\2\2\u016c"+
		"\u0157\3\2\2\2\u016c\u0166\3\2\2\2\u016d\61\3\2\2\2\u016e\u016f\t\5\2"+
		"\2\u016f\63\3\2\2\2\u0170\u0171\t\6\2\2\u0171\65\3\2\2\2\u0172\u0177\5"+
		"8\35\2\u0173\u0177\5> \2\u0174\u0177\5:\36\2\u0175\u0177\5<\37\2\u0176"+
		"\u0172\3\2\2\2\u0176\u0173\3\2\2\2\u0176\u0174\3\2\2\2\u0176\u0175\3\2"+
		"\2\2\u0177\67\3\2\2\2\u0178\u0179\t\7\2\2\u01799\3\2\2\2\u017a\u017b\t"+
		"\b\2\2\u017b;\3\2\2\2\u017c\u017d\t\t\2\2\u017d=\3\2\2\2\u017e\u017f\t"+
		"\n\2\2\u017f?\3\2\2\2.CGMS\\bhlqs\u0080\u008c\u0093\u0097\u009f\u00a7"+
		"\u00b8\u00c0\u00d8\u00dd\u00e6\u00eb\u00f2\u00f9\u0103\u0109\u0114\u0119"+
		"\u011e\u0122\u012a\u0133\u0139\u013e\u0140\u0148\u0150\u0155\u0159\u015c"+
		"\u0162\u016a\u016c\u0176";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}