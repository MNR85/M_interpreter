grammar LULU;

/////////////////////////////////Grammer////////////////////////////////////////
program:         ft_def+; //1
ft_def:          ( type_def | fun_def ); //1
type_def:        type ID ( ':' ID )? '{' component+ '}';//1
fun_def:         ( '(' args_var ')' '=' )? FUNCTION ID '(' args_varP? ')' block;//1
component:       access_modifier? ( var_def | fun_def );//1
block:           '{' ( var_def | stmt )* '}';//1
args_varP: args_var;
args_var:        type('['']')*ID//1
        |        args_var ','type ( '[' ']' )* ID;
var_def:         CONST? type var_val ( ',' var_val )* ';';//1
var_val:         ref ('=' expr)?;//1
expr:            expr  binary_op  expr
    |            '(' expr ')'
    |            unary_op expr
    |            const_val
    |            ALLOCATE handle_call
    |            func_call
    |            var
    |            list
    |            NIL;

access_modifier: ( PRIVATE| PUBLIC | PROTECTED);//1
type:            INT | BOOL | FLOAT | STRING | ID;//1
stmt:            assign ';' //1
    |            func_call ';'
    |            cond_stmt
    |            loop_stmt
    |            BREAK ';'
    |            CONTINUE ';'
    |            DESTRUCT ( '[' ']' )* ID ';';
assign:          ( var | '(' var ( ',' var )* ')' ) '=' expr;
var:             ( ( THIS | SUPER ) '.' )? ref ( '.' ref )*;
ref:             ID ( '[' expr ']' )*;

func_call:       ( var '.' )? handle_call | READ '(' ')' | WRITE '(' expr ')';
list:            '[' ( expr | list ) ( ','( expr | list ) )* ']';
handle_call:     ID '(' params? ')';
params:          expr
      |          expr ',' params;
cond_stmt:       IF expr ( block | stmt ) ( ELSE ( block | stmt ) )?
         |       SWITCH var '{' switch_body '}';
switch_body:     ( CASEOF INT_CONST ':' block )+ ( DEFAULT ':' block )?;
loop_stmt:       FOR (type? assign )? ';' expr ';' assign? block
         |       WHILE expr ( block | stmt );
const_val:       INT_CONST
         |       REAL_CONST
         |       BOOL_CONST
         |       STRING_CONST;
unary_op:        '-' | '!' | '~';
binary_op:       arithmetic | relational | bitwise | logical;
arithmetic:      '+' | '-' | '*' | '/' | '%';
bitwise:         '&' | '|';
logical:         '||' | '&&';
relational:      '==' | '!=' | '<=' | '>=' | '<' | '>' ;

/////////////////////////////////Skip///////////////////////////////////////////
WHITESPACE: [ \t\r\n] -> skip ;
COMMENT:    '$$' .*? '$$'-> skip;

/////////////////////////////////Tokens/////////////////////////////////////////
INT_CONST:        '0'[Hh]HEX+ | DIGIT+;
REAL_CONST:       INT_CONST '.' INT_CONST? REAL_EXP?
          |       INT_CONST REAL_EXP
          |       '.' INT_CONST REAL_EXP?;
BOOL_CONST:       'true' | 'false';

ID:               LETTER (LETTER|DIGIT)* ;
STRING_CONST:     '\'' (ESC | LETTER | SPACE)+ '\'' ;
RELATIONAL:       '==' | '!=' | '<=' | '>=' | '<' | '>';
ARITHMETIC:       '+' | '-' | '*' | '/' | '%';
LOGICAL:          '||' | '&&';
BITWISE:          '&' | '|';
/////////////////////////////////Words////////////////////////////////////////
PRIVATE: 'private';
PUBLIC: 'public';
PROTECTED: 'protected';
FOR: 'for';
WHILE: 'while';
INT: 'int';
BOOL: 'bool';
FLOAT: 'float';
STRING: 'string';
CONST: 'const';
FUNCTION: 'function';
BREAK: 'break';
CONTINUE: 'continue';
DESTRUCT: 'destruct';
THIS: 'this';
SUPER: 'super';
ALLOCATE: 'allocate';
READ: 'read';
WRITE: 'write';
NIL:'nil';
IF: 'if';
ELSE: 'else';
SWITCH: 'switch';
CASEOF: 'caseof';
DEFAULT: 'default';
/////////////////////////////////Fragments////////////////////////////-//////////
fragment DIGIT:            [0-9];
fragment HEX:              [a-fA-F0-9];
fragment LETTER:           [a-zA-Z_#];
fragment ESC:              '\\n' | '\\r' | '\\t' | '\\\\' | '\\0' | '\\\'' | '\\' [Hh] HEX HEX;
fragment REAL_EXP:         '^' [+-]? INT_CONST;
fragment SPACE:            ' ';


// fragment REAL_DECIMAL:     (REAL_DECIMAL_L | REAL_DECIMAL_R) REAL_DECIMAL_EXP?;
// fragment REAL_HEX:         '0'[xX] (REAL_HEX_L | REAL_HEX_R) REAL_HEX_EXP?;
// fragment REAL_DECIMAL_L:   (DIGIT+) '.' (DIGIT+)?;
// fragment REAL_DECIMAL_R:   (DIGIT+)? '.' (DIGIT+);
// fragment REAL_DECIMAL_EXP: ('^'[+-]? DIGIT+);
// fragment REAL_HEX_L:       (HEX+) '.' (HEX+)?;
// fragment REAL_HEX_R:       (HEX+)? '.' (HEX+);
// fragment REAL_HEX_EXP:     ('^'[+-]? HEX+);
