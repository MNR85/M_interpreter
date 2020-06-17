grammar LULU;

/////////////////////////////////Grammer////////////////////////////////////////
program:         ft_def+;
ft_def:          ( type_def | fun_def );
type_def:        type ID ( ':' ID )? '{' component+ '}';
component:       access_modifier? ( var_def | fun_def );
access_modifier: ('private' | 'public' |' protected');
var_def:         'const'? type var_val ( ',' var_val )* ';';
type:            'int' | 'bool' | 'float' | 'string' | ID;
var_val:         ref ('=' expr)?;
fun_def:         ( '(' args_var ')' '=' )? 'function' ID '(' args_var? ')' block;
args_var:        type('['']')*ID
        |        args_var ','type ( '[' ']' )* ID;
block:           '{' ( var_def | stmt )* '}';
stmt:            assign ';'
    |            func_call ';'
    |            cond_stmt
    |            loop_stmt
    |            'break' ';'
    |            'continue' ';'
    |            'destruct' ( '[' ']' )* ID ';';
assign:          ( var | '(' var ( ',' var )* ')' ) '=' expr;
var:             ( ( 'this' | 'super' ) '.' )? ref ( '.' ref )*;
ref:             ID ( '[' expr ']' )*;
expr:            expr  binary_op  expr
    |            '(' expr ')'
    |            unary_op expr
    |            const_val
    |            'allocate' handle_call
    |            func_call
    |            var
    |            list
    |            'nil';
func_call:       ( var '.' )? handle_call | 'read' '(' ')' | 'write' '(' expr ')';
list:            '[' ( expr | list ) ( ','( expr | list ) )* ']';
handle_call:     ID '(' params? ')';
params:          expr
      |          expr ',' params;
cond_stmt:       'if' expr ( block | stmt ) ( 'else' ( block | stmt ) )?
         |       'switch' var '{' switch_body '}';
switch_body:     ( 'caseof' INT_CONST ':' block )+ ( 'default' ':' block )?;
loop_stmt:       'for' (type? assign )? ';' expr ';' assign? block
         |       'while' expr ( block | stmt );
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
