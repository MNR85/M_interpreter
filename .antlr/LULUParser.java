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
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		T__31=32, T__32=33, T__33=34, T__34=35, T__35=36, T__36=37, T__37=38, 
		T__38=39, T__39=40, T__40=41, T__41=42, T__42=43, T__43=44, T__44=45, 
		T__45=46, T__46=47, T__47=48, T__48=49, T__49=50, T__50=51, T__51=52, 
		T__52=53, WHITESPACE=54, COMMENT=55, INT_CONST=56, REAL_CONST=57, BOOL_CONST=58, 
		ID=59, STRING_CONST=60, RELATIONAL=61, ARITHMETIC=62, LOGICAL=63, BITWISE=64;
	public static final int
		RULE_program = 0, RULE_ft_def = 1, RULE_type_def = 2, RULE_component = 3, 
		RULE_access_modifier = 4, RULE_var_def = 5, RULE_type = 6, RULE_var_val = 7, 
		RULE_fun_def = 8, RULE_args_var = 9, RULE_block = 10, RULE_stmt = 11, 
		RULE_assign = 12, RULE_var = 13, RULE_ref = 14, RULE_expr = 15, RULE_func_call = 16, 
		RULE_list = 17, RULE_handle_call = 18, RULE_params = 19, RULE_cond_stmt = 20, 
		RULE_switch_body = 21, RULE_loop_stmt = 22, RULE_const_val = 23, RULE_unary_op = 24, 
		RULE_binary_op = 25, RULE_arithmetic = 26, RULE_bitwise = 27, RULE_logical = 28, 
		RULE_relational = 29;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "ft_def", "type_def", "component", "access_modifier", "var_def", 
			"type", "var_val", "fun_def", "args_var", "block", "stmt", "assign", 
			"var", "ref", "expr", "func_call", "list", "handle_call", "params", "cond_stmt", 
			"switch_body", "loop_stmt", "const_val", "unary_op", "binary_op", "arithmetic", 
			"bitwise", "logical", "relational"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "':'", "'{'", "'}'", "'private'", "'public'", "' protected'", "'const'", 
			"','", "';'", "'int'", "'bool'", "'float'", "'string'", "'='", "'('", 
			"')'", "'function'", "'['", "']'", "'break'", "'continue'", "'destruct'", 
			"'this'", "'super'", "'.'", "'allocate'", "'nil'", "'read'", "'write'", 
			"'if'", "'else'", "'switch'", "'caseof'", "'default'", "'for'", "'while'", 
			"'-'", "'!'", "'~'", "'+'", "'*'", "'/'", "'%'", "'&'", "'|'", "'||'", 
			"'&&'", "'=='", "'!='", "'<='", "'>='", "'<'", "'>'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, "WHITESPACE", "COMMENT", "INT_CONST", 
			"REAL_CONST", "BOOL_CONST", "ID", "STRING_CONST", "RELATIONAL", "ARITHMETIC", 
			"LOGICAL", "BITWISE"
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
			setState(61); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(60);
				ft_def();
				}
				}
				setState(63); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__14) | (1L << T__16) | (1L << ID))) != 0) );
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
			setState(67);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__9:
			case T__10:
			case T__11:
			case T__12:
			case ID:
				{
				setState(65);
				type_def();
				}
				break;
			case T__14:
			case T__16:
				{
				setState(66);
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
			setState(69);
			type();
			setState(70);
			match(ID);
			setState(73);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(71);
				match(T__0);
				setState(72);
				match(ID);
				}
			}

			setState(75);
			match(T__1);
			setState(77); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(76);
				component();
				}
				}
				setState(79); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__3) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__14) | (1L << T__16) | (1L << ID))) != 0) );
			setState(81);
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
		enterRule(_localctx, 6, RULE_component);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(84);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__3) | (1L << T__4) | (1L << T__5))) != 0)) {
				{
				setState(83);
				access_modifier();
				}
			}

			setState(88);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__6:
			case T__9:
			case T__10:
			case T__11:
			case T__12:
			case ID:
				{
				setState(86);
				var_def();
				}
				break;
			case T__14:
			case T__16:
				{
				setState(87);
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

	public static class Access_modifierContext extends ParserRuleContext {
		public Access_modifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_access_modifier; }
	}

	public final Access_modifierContext access_modifier() throws RecognitionException {
		Access_modifierContext _localctx = new Access_modifierContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_access_modifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(90);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__3) | (1L << T__4) | (1L << T__5))) != 0)) ) {
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
		public Var_defContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var_def; }
	}

	public final Var_defContext var_def() throws RecognitionException {
		Var_defContext _localctx = new Var_defContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_var_def);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(93);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__6) {
				{
				setState(92);
				match(T__6);
				}
			}

			setState(95);
			type();
			setState(96);
			var_val();
			setState(101);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__7) {
				{
				{
				setState(97);
				match(T__7);
				setState(98);
				var_val();
				}
				}
				setState(103);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(104);
			match(T__8);
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
		public TerminalNode ID() { return getToken(LULUParser.ID, 0); }
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(106);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << ID))) != 0)) ) {
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
		enterRule(_localctx, 14, RULE_var_val);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(108);
			ref();
			setState(111);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__13) {
				{
				setState(109);
				match(T__13);
				setState(110);
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

	public static class Fun_defContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(LULUParser.ID, 0); }
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public List<Args_varContext> args_var() {
			return getRuleContexts(Args_varContext.class);
		}
		public Args_varContext args_var(int i) {
			return getRuleContext(Args_varContext.class,i);
		}
		public Fun_defContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fun_def; }
	}

	public final Fun_defContext fun_def() throws RecognitionException {
		Fun_defContext _localctx = new Fun_defContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_fun_def);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(118);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__14) {
				{
				setState(113);
				match(T__14);
				setState(114);
				args_var(0);
				setState(115);
				match(T__15);
				setState(116);
				match(T__13);
				}
			}

			setState(120);
			match(T__16);
			setState(121);
			match(ID);
			setState(122);
			match(T__14);
			setState(124);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << ID))) != 0)) {
				{
				setState(123);
				args_var(0);
				}
			}

			setState(126);
			match(T__15);
			setState(127);
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
		int _startState = 18;
		enterRecursionRule(_localctx, 18, RULE_args_var, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(130);
			type();
			setState(135);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__17) {
				{
				{
				setState(131);
				match(T__17);
				setState(132);
				match(T__18);
				}
				}
				setState(137);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(138);
			match(ID);
			}
			_ctx.stop = _input.LT(-1);
			setState(154);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Args_varContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_args_var);
					setState(140);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(141);
					match(T__7);
					setState(142);
					type();
					setState(147);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__17) {
						{
						{
						setState(143);
						match(T__17);
						setState(144);
						match(T__18);
						}
						}
						setState(149);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(150);
					match(ID);
					}
					} 
				}
				setState(156);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
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
		enterRule(_localctx, 20, RULE_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(157);
			match(T__1);
			setState(162);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__6) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__14) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__31) | (1L << T__34) | (1L << T__35) | (1L << ID))) != 0)) {
				{
				setState(160);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
				case 1:
					{
					setState(158);
					var_def();
					}
					break;
				case 2:
					{
					setState(159);
					stmt();
					}
					break;
				}
				}
				setState(164);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(165);
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
		public TerminalNode ID() { return getToken(LULUParser.ID, 0); }
		public StmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmt; }
	}

	public final StmtContext stmt() throws RecognitionException {
		StmtContext _localctx = new StmtContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_stmt);
		int _la;
		try {
			setState(189);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(167);
				assign();
				setState(168);
				match(T__8);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(170);
				func_call();
				setState(171);
				match(T__8);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(173);
				cond_stmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(174);
				loop_stmt();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(175);
				match(T__19);
				setState(176);
				match(T__8);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(177);
				match(T__20);
				setState(178);
				match(T__8);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(179);
				match(T__21);
				setState(184);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__17) {
					{
					{
					setState(180);
					match(T__17);
					setState(181);
					match(T__18);
					}
					}
					setState(186);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(187);
				match(ID);
				setState(188);
				match(T__8);
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
		enterRule(_localctx, 24, RULE_assign);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(203);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__22:
			case T__23:
			case ID:
				{
				setState(191);
				var();
				}
				break;
			case T__14:
				{
				setState(192);
				match(T__14);
				setState(193);
				var();
				setState(198);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__7) {
					{
					{
					setState(194);
					match(T__7);
					setState(195);
					var();
					}
					}
					setState(200);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(201);
				match(T__15);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(205);
			match(T__13);
			setState(206);
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
		public VarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var; }
	}

	public final VarContext var() throws RecognitionException {
		VarContext _localctx = new VarContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_var);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(210);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__22 || _la==T__23) {
				{
				setState(208);
				_la = _input.LA(1);
				if ( !(_la==T__22 || _la==T__23) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(209);
				match(T__24);
				}
			}

			setState(212);
			ref();
			setState(217);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(213);
					match(T__24);
					setState(214);
					ref();
					}
					} 
				}
				setState(219);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
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
		enterRule(_localctx, 28, RULE_ref);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(220);
			match(ID);
			setState(227);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(221);
					match(T__17);
					setState(222);
					expr(0);
					setState(223);
					match(T__18);
					}
					} 
				}
				setState(229);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
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
		int _startState = 30;
		enterRecursionRule(_localctx, 30, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(245);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
			case 1:
				{
				setState(231);
				match(T__14);
				setState(232);
				expr(0);
				setState(233);
				match(T__15);
				}
				break;
			case 2:
				{
				setState(235);
				unary_op();
				setState(236);
				expr(7);
				}
				break;
			case 3:
				{
				setState(238);
				const_val();
				}
				break;
			case 4:
				{
				setState(239);
				match(T__25);
				setState(240);
				handle_call();
				}
				break;
			case 5:
				{
				setState(241);
				func_call();
				}
				break;
			case 6:
				{
				setState(242);
				var();
				}
				break;
			case 7:
				{
				setState(243);
				list();
				}
				break;
			case 8:
				{
				setState(244);
				match(T__26);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(253);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_expr);
					setState(247);
					if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
					setState(248);
					binary_op();
					setState(249);
					expr(10);
					}
					} 
				}
				setState(255);
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
			unrollRecursionContexts(_parentctx);
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
		enterRule(_localctx, 32, RULE_func_call);
		try {
			setState(270);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__22:
			case T__23:
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(259);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
				case 1:
					{
					setState(256);
					var();
					setState(257);
					match(T__24);
					}
					break;
				}
				setState(261);
				handle_call();
				}
				break;
			case T__27:
				enterOuterAlt(_localctx, 2);
				{
				setState(262);
				match(T__27);
				setState(263);
				match(T__14);
				setState(264);
				match(T__15);
				}
				break;
			case T__28:
				enterOuterAlt(_localctx, 3);
				{
				setState(265);
				match(T__28);
				setState(266);
				match(T__14);
				setState(267);
				expr(0);
				setState(268);
				match(T__15);
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
		enterRule(_localctx, 34, RULE_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(272);
			match(T__17);
			setState(275);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
			case 1:
				{
				setState(273);
				expr(0);
				}
				break;
			case 2:
				{
				setState(274);
				list();
				}
				break;
			}
			setState(284);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__7) {
				{
				{
				setState(277);
				match(T__7);
				setState(280);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
				case 1:
					{
					setState(278);
					expr(0);
					}
					break;
				case 2:
					{
					setState(279);
					list();
					}
					break;
				}
				}
				}
				setState(286);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(287);
			match(T__18);
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
		enterRule(_localctx, 36, RULE_handle_call);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(289);
			match(ID);
			setState(290);
			match(T__14);
			setState(292);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__14) | (1L << T__17) | (1L << T__22) | (1L << T__23) | (1L << T__25) | (1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << INT_CONST) | (1L << REAL_CONST) | (1L << BOOL_CONST) | (1L << ID) | (1L << STRING_CONST))) != 0)) {
				{
				setState(291);
				params();
				}
			}

			setState(294);
			match(T__15);
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
		enterRule(_localctx, 38, RULE_params);
		try {
			setState(301);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(296);
				expr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(297);
				expr(0);
				setState(298);
				match(T__7);
				setState(299);
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
		enterRule(_localctx, 40, RULE_cond_stmt);
		try {
			setState(322);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__29:
				enterOuterAlt(_localctx, 1);
				{
				setState(303);
				match(T__29);
				setState(304);
				expr(0);
				setState(307);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__1:
					{
					setState(305);
					block();
					}
					break;
				case T__14:
				case T__19:
				case T__20:
				case T__21:
				case T__22:
				case T__23:
				case T__27:
				case T__28:
				case T__29:
				case T__31:
				case T__34:
				case T__35:
				case ID:
					{
					setState(306);
					stmt();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(314);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
				case 1:
					{
					setState(309);
					match(T__30);
					setState(312);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case T__1:
						{
						setState(310);
						block();
						}
						break;
					case T__14:
					case T__19:
					case T__20:
					case T__21:
					case T__22:
					case T__23:
					case T__27:
					case T__28:
					case T__29:
					case T__31:
					case T__34:
					case T__35:
					case ID:
						{
						setState(311);
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
			case T__31:
				enterOuterAlt(_localctx, 2);
				{
				setState(316);
				match(T__31);
				setState(317);
				var();
				setState(318);
				match(T__1);
				setState(319);
				switch_body();
				setState(320);
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
		public Switch_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_switch_body; }
	}

	public final Switch_bodyContext switch_body() throws RecognitionException {
		Switch_bodyContext _localctx = new Switch_bodyContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_switch_body);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(328); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(324);
				match(T__32);
				setState(325);
				match(INT_CONST);
				setState(326);
				match(T__0);
				setState(327);
				block();
				}
				}
				setState(330); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==T__32 );
			setState(335);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__33) {
				{
				setState(332);
				match(T__33);
				setState(333);
				match(T__0);
				setState(334);
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
		enterRule(_localctx, 44, RULE_loop_stmt);
		int _la;
		try {
			setState(358);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__34:
				enterOuterAlt(_localctx, 1);
				{
				setState(337);
				match(T__34);
				setState(342);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__14) | (1L << T__22) | (1L << T__23) | (1L << ID))) != 0)) {
					{
					setState(339);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
					case 1:
						{
						setState(338);
						type();
						}
						break;
					}
					setState(341);
					assign();
					}
				}

				setState(344);
				match(T__8);
				setState(345);
				expr(0);
				setState(346);
				match(T__8);
				setState(348);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__14) | (1L << T__22) | (1L << T__23) | (1L << ID))) != 0)) {
					{
					setState(347);
					assign();
					}
				}

				setState(350);
				block();
				}
				break;
			case T__35:
				enterOuterAlt(_localctx, 2);
				{
				setState(352);
				match(T__35);
				setState(353);
				expr(0);
				setState(356);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__1:
					{
					setState(354);
					block();
					}
					break;
				case T__14:
				case T__19:
				case T__20:
				case T__21:
				case T__22:
				case T__23:
				case T__27:
				case T__28:
				case T__29:
				case T__31:
				case T__34:
				case T__35:
				case ID:
					{
					setState(355);
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
		enterRule(_localctx, 46, RULE_const_val);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(360);
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
		enterRule(_localctx, 48, RULE_unary_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(362);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__36) | (1L << T__37) | (1L << T__38))) != 0)) ) {
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
		enterRule(_localctx, 50, RULE_binary_op);
		try {
			setState(368);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__36:
			case T__39:
			case T__40:
			case T__41:
			case T__42:
				enterOuterAlt(_localctx, 1);
				{
				setState(364);
				arithmetic();
				}
				break;
			case T__47:
			case T__48:
			case T__49:
			case T__50:
			case T__51:
			case T__52:
				enterOuterAlt(_localctx, 2);
				{
				setState(365);
				relational();
				}
				break;
			case T__43:
			case T__44:
				enterOuterAlt(_localctx, 3);
				{
				setState(366);
				bitwise();
				}
				break;
			case T__45:
			case T__46:
				enterOuterAlt(_localctx, 4);
				{
				setState(367);
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
		enterRule(_localctx, 52, RULE_arithmetic);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(370);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__36) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__42))) != 0)) ) {
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
		enterRule(_localctx, 54, RULE_bitwise);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(372);
			_la = _input.LA(1);
			if ( !(_la==T__43 || _la==T__44) ) {
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
		enterRule(_localctx, 56, RULE_logical);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(374);
			_la = _input.LA(1);
			if ( !(_la==T__45 || _la==T__46) ) {
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
		enterRule(_localctx, 58, RULE_relational);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(376);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52))) != 0)) ) {
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
		case 9:
			return args_var_sempred((Args_varContext)_localctx, predIndex);
		case 15:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3B\u017d\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\3\2\6\2@"+
		"\n\2\r\2\16\2A\3\3\3\3\5\3F\n\3\3\4\3\4\3\4\3\4\5\4L\n\4\3\4\3\4\6\4P"+
		"\n\4\r\4\16\4Q\3\4\3\4\3\5\5\5W\n\5\3\5\3\5\5\5[\n\5\3\6\3\6\3\7\5\7`"+
		"\n\7\3\7\3\7\3\7\3\7\7\7f\n\7\f\7\16\7i\13\7\3\7\3\7\3\b\3\b\3\t\3\t\3"+
		"\t\5\tr\n\t\3\n\3\n\3\n\3\n\3\n\5\ny\n\n\3\n\3\n\3\n\3\n\5\n\177\n\n\3"+
		"\n\3\n\3\n\3\13\3\13\3\13\3\13\7\13\u0088\n\13\f\13\16\13\u008b\13\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\7\13\u0094\n\13\f\13\16\13\u0097\13"+
		"\13\3\13\3\13\7\13\u009b\n\13\f\13\16\13\u009e\13\13\3\f\3\f\3\f\7\f\u00a3"+
		"\n\f\f\f\16\f\u00a6\13\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\7\r\u00b9\n\r\f\r\16\r\u00bc\13\r\3\r\3\r\5\r\u00c0"+
		"\n\r\3\16\3\16\3\16\3\16\3\16\7\16\u00c7\n\16\f\16\16\16\u00ca\13\16\3"+
		"\16\3\16\5\16\u00ce\n\16\3\16\3\16\3\16\3\17\3\17\5\17\u00d5\n\17\3\17"+
		"\3\17\3\17\7\17\u00da\n\17\f\17\16\17\u00dd\13\17\3\20\3\20\3\20\3\20"+
		"\3\20\7\20\u00e4\n\20\f\20\16\20\u00e7\13\20\3\21\3\21\3\21\3\21\3\21"+
		"\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\21\5\21\u00f8\n\21\3\21"+
		"\3\21\3\21\3\21\7\21\u00fe\n\21\f\21\16\21\u0101\13\21\3\22\3\22\3\22"+
		"\5\22\u0106\n\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\5\22\u0111"+
		"\n\22\3\23\3\23\3\23\5\23\u0116\n\23\3\23\3\23\3\23\5\23\u011b\n\23\7"+
		"\23\u011d\n\23\f\23\16\23\u0120\13\23\3\23\3\23\3\24\3\24\3\24\5\24\u0127"+
		"\n\24\3\24\3\24\3\25\3\25\3\25\3\25\3\25\5\25\u0130\n\25\3\26\3\26\3\26"+
		"\3\26\5\26\u0136\n\26\3\26\3\26\3\26\5\26\u013b\n\26\5\26\u013d\n\26\3"+
		"\26\3\26\3\26\3\26\3\26\3\26\5\26\u0145\n\26\3\27\3\27\3\27\3\27\6\27"+
		"\u014b\n\27\r\27\16\27\u014c\3\27\3\27\3\27\5\27\u0152\n\27\3\30\3\30"+
		"\5\30\u0156\n\30\3\30\5\30\u0159\n\30\3\30\3\30\3\30\3\30\5\30\u015f\n"+
		"\30\3\30\3\30\3\30\3\30\3\30\3\30\5\30\u0167\n\30\5\30\u0169\n\30\3\31"+
		"\3\31\3\32\3\32\3\33\3\33\3\33\3\33\5\33\u0173\n\33\3\34\3\34\3\35\3\35"+
		"\3\36\3\36\3\37\3\37\3\37\2\4\24  \2\4\6\b\n\f\16\20\22\24\26\30\32\34"+
		"\36 \"$&(*,.\60\62\64\668:<\2\13\3\2\6\b\4\2\f\17==\3\2\31\32\4\2:<>>"+
		"\3\2\')\4\2\'\'*-\3\2./\3\2\60\61\3\2\62\67\2\u0198\2?\3\2\2\2\4E\3\2"+
		"\2\2\6G\3\2\2\2\bV\3\2\2\2\n\\\3\2\2\2\f_\3\2\2\2\16l\3\2\2\2\20n\3\2"+
		"\2\2\22x\3\2\2\2\24\u0083\3\2\2\2\26\u009f\3\2\2\2\30\u00bf\3\2\2\2\32"+
		"\u00cd\3\2\2\2\34\u00d4\3\2\2\2\36\u00de\3\2\2\2 \u00f7\3\2\2\2\"\u0110"+
		"\3\2\2\2$\u0112\3\2\2\2&\u0123\3\2\2\2(\u012f\3\2\2\2*\u0144\3\2\2\2,"+
		"\u014a\3\2\2\2.\u0168\3\2\2\2\60\u016a\3\2\2\2\62\u016c\3\2\2\2\64\u0172"+
		"\3\2\2\2\66\u0174\3\2\2\28\u0176\3\2\2\2:\u0178\3\2\2\2<\u017a\3\2\2\2"+
		">@\5\4\3\2?>\3\2\2\2@A\3\2\2\2A?\3\2\2\2AB\3\2\2\2B\3\3\2\2\2CF\5\6\4"+
		"\2DF\5\22\n\2EC\3\2\2\2ED\3\2\2\2F\5\3\2\2\2GH\5\16\b\2HK\7=\2\2IJ\7\3"+
		"\2\2JL\7=\2\2KI\3\2\2\2KL\3\2\2\2LM\3\2\2\2MO\7\4\2\2NP\5\b\5\2ON\3\2"+
		"\2\2PQ\3\2\2\2QO\3\2\2\2QR\3\2\2\2RS\3\2\2\2ST\7\5\2\2T\7\3\2\2\2UW\5"+
		"\n\6\2VU\3\2\2\2VW\3\2\2\2WZ\3\2\2\2X[\5\f\7\2Y[\5\22\n\2ZX\3\2\2\2ZY"+
		"\3\2\2\2[\t\3\2\2\2\\]\t\2\2\2]\13\3\2\2\2^`\7\t\2\2_^\3\2\2\2_`\3\2\2"+
		"\2`a\3\2\2\2ab\5\16\b\2bg\5\20\t\2cd\7\n\2\2df\5\20\t\2ec\3\2\2\2fi\3"+
		"\2\2\2ge\3\2\2\2gh\3\2\2\2hj\3\2\2\2ig\3\2\2\2jk\7\13\2\2k\r\3\2\2\2l"+
		"m\t\3\2\2m\17\3\2\2\2nq\5\36\20\2op\7\20\2\2pr\5 \21\2qo\3\2\2\2qr\3\2"+
		"\2\2r\21\3\2\2\2st\7\21\2\2tu\5\24\13\2uv\7\22\2\2vw\7\20\2\2wy\3\2\2"+
		"\2xs\3\2\2\2xy\3\2\2\2yz\3\2\2\2z{\7\23\2\2{|\7=\2\2|~\7\21\2\2}\177\5"+
		"\24\13\2~}\3\2\2\2~\177\3\2\2\2\177\u0080\3\2\2\2\u0080\u0081\7\22\2\2"+
		"\u0081\u0082\5\26\f\2\u0082\23\3\2\2\2\u0083\u0084\b\13\1\2\u0084\u0089"+
		"\5\16\b\2\u0085\u0086\7\24\2\2\u0086\u0088\7\25\2\2\u0087\u0085\3\2\2"+
		"\2\u0088\u008b\3\2\2\2\u0089\u0087\3\2\2\2\u0089\u008a\3\2\2\2\u008a\u008c"+
		"\3\2\2\2\u008b\u0089\3\2\2\2\u008c\u008d\7=\2\2\u008d\u009c\3\2\2\2\u008e"+
		"\u008f\f\3\2\2\u008f\u0090\7\n\2\2\u0090\u0095\5\16\b\2\u0091\u0092\7"+
		"\24\2\2\u0092\u0094\7\25\2\2\u0093\u0091\3\2\2\2\u0094\u0097\3\2\2\2\u0095"+
		"\u0093\3\2\2\2\u0095\u0096\3\2\2\2\u0096\u0098\3\2\2\2\u0097\u0095\3\2"+
		"\2\2\u0098\u0099\7=\2\2\u0099\u009b\3\2\2\2\u009a\u008e\3\2\2\2\u009b"+
		"\u009e\3\2\2\2\u009c\u009a\3\2\2\2\u009c\u009d\3\2\2\2\u009d\25\3\2\2"+
		"\2\u009e\u009c\3\2\2\2\u009f\u00a4\7\4\2\2\u00a0\u00a3\5\f\7\2\u00a1\u00a3"+
		"\5\30\r\2\u00a2\u00a0\3\2\2\2\u00a2\u00a1\3\2\2\2\u00a3\u00a6\3\2\2\2"+
		"\u00a4\u00a2\3\2\2\2\u00a4\u00a5\3\2\2\2\u00a5\u00a7\3\2\2\2\u00a6\u00a4"+
		"\3\2\2\2\u00a7\u00a8\7\5\2\2\u00a8\27\3\2\2\2\u00a9\u00aa\5\32\16\2\u00aa"+
		"\u00ab\7\13\2\2\u00ab\u00c0\3\2\2\2\u00ac\u00ad\5\"\22\2\u00ad\u00ae\7"+
		"\13\2\2\u00ae\u00c0\3\2\2\2\u00af\u00c0\5*\26\2\u00b0\u00c0\5.\30\2\u00b1"+
		"\u00b2\7\26\2\2\u00b2\u00c0\7\13\2\2\u00b3\u00b4\7\27\2\2\u00b4\u00c0"+
		"\7\13\2\2\u00b5\u00ba\7\30\2\2\u00b6\u00b7\7\24\2\2\u00b7\u00b9\7\25\2"+
		"\2\u00b8\u00b6\3\2\2\2\u00b9\u00bc\3\2\2\2\u00ba\u00b8\3\2\2\2\u00ba\u00bb"+
		"\3\2\2\2\u00bb\u00bd\3\2\2\2\u00bc\u00ba\3\2\2\2\u00bd\u00be\7=\2\2\u00be"+
		"\u00c0\7\13\2\2\u00bf\u00a9\3\2\2\2\u00bf\u00ac\3\2\2\2\u00bf\u00af\3"+
		"\2\2\2\u00bf\u00b0\3\2\2\2\u00bf\u00b1\3\2\2\2\u00bf\u00b3\3\2\2\2\u00bf"+
		"\u00b5\3\2\2\2\u00c0\31\3\2\2\2\u00c1\u00ce\5\34\17\2\u00c2\u00c3\7\21"+
		"\2\2\u00c3\u00c8\5\34\17\2\u00c4\u00c5\7\n\2\2\u00c5\u00c7\5\34\17\2\u00c6"+
		"\u00c4\3\2\2\2\u00c7\u00ca\3\2\2\2\u00c8\u00c6\3\2\2\2\u00c8\u00c9\3\2"+
		"\2\2\u00c9\u00cb\3\2\2\2\u00ca\u00c8\3\2\2\2\u00cb\u00cc\7\22\2\2\u00cc"+
		"\u00ce\3\2\2\2\u00cd\u00c1\3\2\2\2\u00cd\u00c2\3\2\2\2\u00ce\u00cf\3\2"+
		"\2\2\u00cf\u00d0\7\20\2\2\u00d0\u00d1\5 \21\2\u00d1\33\3\2\2\2\u00d2\u00d3"+
		"\t\4\2\2\u00d3\u00d5\7\33\2\2\u00d4\u00d2\3\2\2\2\u00d4\u00d5\3\2\2\2"+
		"\u00d5\u00d6\3\2\2\2\u00d6\u00db\5\36\20\2\u00d7\u00d8\7\33\2\2\u00d8"+
		"\u00da\5\36\20\2\u00d9\u00d7\3\2\2\2\u00da\u00dd\3\2\2\2\u00db\u00d9\3"+
		"\2\2\2\u00db\u00dc\3\2\2\2\u00dc\35\3\2\2\2\u00dd\u00db\3\2\2\2\u00de"+
		"\u00e5\7=\2\2\u00df\u00e0\7\24\2\2\u00e0\u00e1\5 \21\2\u00e1\u00e2\7\25"+
		"\2\2\u00e2\u00e4\3\2\2\2\u00e3\u00df\3\2\2\2\u00e4\u00e7\3\2\2\2\u00e5"+
		"\u00e3\3\2\2\2\u00e5\u00e6\3\2\2\2\u00e6\37\3\2\2\2\u00e7\u00e5\3\2\2"+
		"\2\u00e8\u00e9\b\21\1\2\u00e9\u00ea\7\21\2\2\u00ea\u00eb\5 \21\2\u00eb"+
		"\u00ec\7\22\2\2\u00ec\u00f8\3\2\2\2\u00ed\u00ee\5\62\32\2\u00ee\u00ef"+
		"\5 \21\t\u00ef\u00f8\3\2\2\2\u00f0\u00f8\5\60\31\2\u00f1\u00f2\7\34\2"+
		"\2\u00f2\u00f8\5&\24\2\u00f3\u00f8\5\"\22\2\u00f4\u00f8\5\34\17\2\u00f5"+
		"\u00f8\5$\23\2\u00f6\u00f8\7\35\2\2\u00f7\u00e8\3\2\2\2\u00f7\u00ed\3"+
		"\2\2\2\u00f7\u00f0\3\2\2\2\u00f7\u00f1\3\2\2\2\u00f7\u00f3\3\2\2\2\u00f7"+
		"\u00f4\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f7\u00f6\3\2\2\2\u00f8\u00ff\3\2"+
		"\2\2\u00f9\u00fa\f\13\2\2\u00fa\u00fb\5\64\33\2\u00fb\u00fc\5 \21\f\u00fc"+
		"\u00fe\3\2\2\2\u00fd\u00f9\3\2\2\2\u00fe\u0101\3\2\2\2\u00ff\u00fd\3\2"+
		"\2\2\u00ff\u0100\3\2\2\2\u0100!\3\2\2\2\u0101\u00ff\3\2\2\2\u0102\u0103"+
		"\5\34\17\2\u0103\u0104\7\33\2\2\u0104\u0106\3\2\2\2\u0105\u0102\3\2\2"+
		"\2\u0105\u0106\3\2\2\2\u0106\u0107\3\2\2\2\u0107\u0111\5&\24\2\u0108\u0109"+
		"\7\36\2\2\u0109\u010a\7\21\2\2\u010a\u0111\7\22\2\2\u010b\u010c\7\37\2"+
		"\2\u010c\u010d\7\21\2\2\u010d\u010e\5 \21\2\u010e\u010f\7\22\2\2\u010f"+
		"\u0111\3\2\2\2\u0110\u0105\3\2\2\2\u0110\u0108\3\2\2\2\u0110\u010b\3\2"+
		"\2\2\u0111#\3\2\2\2\u0112\u0115\7\24\2\2\u0113\u0116\5 \21\2\u0114\u0116"+
		"\5$\23\2\u0115\u0113\3\2\2\2\u0115\u0114\3\2\2\2\u0116\u011e\3\2\2\2\u0117"+
		"\u011a\7\n\2\2\u0118\u011b\5 \21\2\u0119\u011b\5$\23\2\u011a\u0118\3\2"+
		"\2\2\u011a\u0119\3\2\2\2\u011b\u011d\3\2\2\2\u011c\u0117\3\2\2\2\u011d"+
		"\u0120\3\2\2\2\u011e\u011c\3\2\2\2\u011e\u011f\3\2\2\2\u011f\u0121\3\2"+
		"\2\2\u0120\u011e\3\2\2\2\u0121\u0122\7\25\2\2\u0122%\3\2\2\2\u0123\u0124"+
		"\7=\2\2\u0124\u0126\7\21\2\2\u0125\u0127\5(\25\2\u0126\u0125\3\2\2\2\u0126"+
		"\u0127\3\2\2\2\u0127\u0128\3\2\2\2\u0128\u0129\7\22\2\2\u0129\'\3\2\2"+
		"\2\u012a\u0130\5 \21\2\u012b\u012c\5 \21\2\u012c\u012d\7\n\2\2\u012d\u012e"+
		"\5(\25\2\u012e\u0130\3\2\2\2\u012f\u012a\3\2\2\2\u012f\u012b\3\2\2\2\u0130"+
		")\3\2\2\2\u0131\u0132\7 \2\2\u0132\u0135\5 \21\2\u0133\u0136\5\26\f\2"+
		"\u0134\u0136\5\30\r\2\u0135\u0133\3\2\2\2\u0135\u0134\3\2\2\2\u0136\u013c"+
		"\3\2\2\2\u0137\u013a\7!\2\2\u0138\u013b\5\26\f\2\u0139\u013b\5\30\r\2"+
		"\u013a\u0138\3\2\2\2\u013a\u0139\3\2\2\2\u013b\u013d\3\2\2\2\u013c\u0137"+
		"\3\2\2\2\u013c\u013d\3\2\2\2\u013d\u0145\3\2\2\2\u013e\u013f\7\"\2\2\u013f"+
		"\u0140\5\34\17\2\u0140\u0141\7\4\2\2\u0141\u0142\5,\27\2\u0142\u0143\7"+
		"\5\2\2\u0143\u0145\3\2\2\2\u0144\u0131\3\2\2\2\u0144\u013e\3\2\2\2\u0145"+
		"+\3\2\2\2\u0146\u0147\7#\2\2\u0147\u0148\7:\2\2\u0148\u0149\7\3\2\2\u0149"+
		"\u014b\5\26\f\2\u014a\u0146\3\2\2\2\u014b\u014c\3\2\2\2\u014c\u014a\3"+
		"\2\2\2\u014c\u014d\3\2\2\2\u014d\u0151\3\2\2\2\u014e\u014f\7$\2\2\u014f"+
		"\u0150\7\3\2\2\u0150\u0152\5\26\f\2\u0151\u014e\3\2\2\2\u0151\u0152\3"+
		"\2\2\2\u0152-\3\2\2\2\u0153\u0158\7%\2\2\u0154\u0156\5\16\b\2\u0155\u0154"+
		"\3\2\2\2\u0155\u0156\3\2\2\2\u0156\u0157\3\2\2\2\u0157\u0159\5\32\16\2"+
		"\u0158\u0155\3\2\2\2\u0158\u0159\3\2\2\2\u0159\u015a\3\2\2\2\u015a\u015b"+
		"\7\13\2\2\u015b\u015c\5 \21\2\u015c\u015e\7\13\2\2\u015d\u015f\5\32\16"+
		"\2\u015e\u015d\3\2\2\2\u015e\u015f\3\2\2\2\u015f\u0160\3\2\2\2\u0160\u0161"+
		"\5\26\f\2\u0161\u0169\3\2\2\2\u0162\u0163\7&\2\2\u0163\u0166\5 \21\2\u0164"+
		"\u0167\5\26\f\2\u0165\u0167\5\30\r\2\u0166\u0164\3\2\2\2\u0166\u0165\3"+
		"\2\2\2\u0167\u0169\3\2\2\2\u0168\u0153\3\2\2\2\u0168\u0162\3\2\2\2\u0169"+
		"/\3\2\2\2\u016a\u016b\t\5\2\2\u016b\61\3\2\2\2\u016c\u016d\t\6\2\2\u016d"+
		"\63\3\2\2\2\u016e\u0173\5\66\34\2\u016f\u0173\5<\37\2\u0170\u0173\58\35"+
		"\2\u0171\u0173\5:\36\2\u0172\u016e\3\2\2\2\u0172\u016f\3\2\2\2\u0172\u0170"+
		"\3\2\2\2\u0172\u0171\3\2\2\2\u0173\65\3\2\2\2\u0174\u0175\t\7\2\2\u0175"+
		"\67\3\2\2\2\u0176\u0177\t\b\2\2\u01779\3\2\2\2\u0178\u0179\t\t\2\2\u0179"+
		";\3\2\2\2\u017a\u017b\t\n\2\2\u017b=\3\2\2\2.AEKQVZ_gqx~\u0089\u0095\u009c"+
		"\u00a2\u00a4\u00ba\u00bf\u00c8\u00cd\u00d4\u00db\u00e5\u00f7\u00ff\u0105"+
		"\u0110\u0115\u011a\u011e\u0126\u012f\u0135\u013a\u013c\u0144\u014c\u0151"+
		"\u0155\u0158\u015e\u0166\u0168\u0172";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}