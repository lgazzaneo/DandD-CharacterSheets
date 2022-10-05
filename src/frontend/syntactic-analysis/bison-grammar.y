%{

#include "bison-actions.h"

%}

// Tipos de dato utilizados en las variables semánticas ($$, $1, $2, etc.).
%union {
	// No-terminales (backend).
	/*
	Program program;
	Expression expression;
	Factor factor;
	Constant constant;
	...
	*/

	// No-terminales (frontend).
	int program;
	int expression;
	int factor;
	int constant;
	int mainprogram;
	int crearfunct;
	int datatype;
	int argumentosparadeclarar;

	// Terminales.
	token token;
	int integer;
}

// IDs y tipos de los tokens terminales generados desde Flex.
%token <token> ADD
%token <token> SUB
%token <token> MUL
%token <token> DIV

%token <token> OPEN_PARENTHESIS
%token <token> CLOSE_PARENTHESIS

%token <token> OPEN_LLAVES
%token <token> CLOSE_LLAVES

%token <token> OPEN_CORCHETES
%token <token> CLOSE_CORCHETES

%token <integer> INTEGER

%token <token> ENDLINE
%token <token> PUNTOCOMA

%token <token>	ALPHAVAL
%token <token>    CCHAR
%token <token>    CMONS
%token <token>    CRACE
%token <token>    CCLASS
%token <token>    CITEM
%token <token>    CNPC
%token <token>    CFEAT
%token <token>    CPARTY
%token <token>    ASTAT
%token <token>    ACINFO
%token <token>    ACBACK
%token <token>    ASPBK
%token <token>   ASTSPBK
%token <token>    ARMOD
%token <token>    ACMOD
%token <token>    ANPCINF
%token <token>    AMINF
%token <token>    AITDES
%token <token>   AITINF
%token <token>   APMEM
%token <token>    RMPMEM
%token <token>   CHEXP
%token <token>   CHLEV
%token <token>   CHCLEV
%token <token>    CHCLASS
%token <token>    CHRACE
%token <token>   BHCMULCL
%token <token>    CHITCLASS
%token <token>   CHITRAR
%token <token>    CHITREQ
%token <token>   CHNPCCLASS
%token <token>    EQITEM
%token <token>    UEQIT
%token <token>    CHKCLASS
%token <token>    CHKLEVL
%token <token>    CHKEXP
%token <token>    CHKSPLS
%token <token>    CHKITEM
%token <token>    CHKRACE
%token <token>    CHKITREST
%token <token>    CHKFEAT
%token <token>    CHKMONSINF
%token <token>    CHKPARTY
    
%token <token>    EXPSH
%token <token>    GETSH

%token <token>    FUNCT
%token <token>    NEW
%token <token>    START

%token <token>    CHARAC
%token <token>   STR
%token <token>    PARTY
%token <token>   ITEM
%token <token>    STATS
%token <token>    STAT
%token <token>    NPC
%token <token>    MOSNTER
%token <token>    RAZGO
%token <token>    MODIF
%token <token>    SHEET

%token <token>    IFCOND
%token <token>    ELSECOND
%token <token>    ELSIFCOND
%token <token>    DOCOND
%token <token>    WHILECOND
%token <token>    FORCOND

%token <token>    GREATorEQ
%token <token>    LESSorEQ
%token <token>    EQUA
%token <token>    NOTEQ
%token <token>    LESSER
%token <token>    GREATER

%token <token>    PRINT
%token <token>    CADENA
%token <token>    COMMA
%token <token>    IGUAL

%token <token>    AND
%token <token>    OR

// Tipos de dato para los no-terminales generados desde Bison.
%type <program> program
%type <expression> expression
%type <factor> factor
%type <constant> constant

// Reglas de asociatividad y precedencia (de menor a mayor).
%left ADD SUB
%left MUL DIV

// El símbolo inicial de la gramatica.
%start mainprogram

%%

mainprogram: programa | crearfunct ENDLINE mainprogram ;

crearfunct: FUNCT datatype CADENA OPEN_PARENTHESIS argumentosparadeclarar CLOSE_PARENTHESIS OPEN_LLAVES ENDLINE program ENDLINE CLOSE_LLAVES ;

datatype: INTEGER | STR | CADENA | STAT | STATS | ITEM | MOSNTER | MODIF | CHARAC | PARTY | NPC | RAZGO | SHEET ;

argumentosparadeclarar: datatype CADENA COMMA argumentosparadeclarar | datatype CADENA

programa: INTEGER START OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_LLAVES ENDLINE trueprogram ENDLINE CLOSE_LLAVES ;

trueprogram: avariable | returnfunction | aconditional ;

avariable: declararvar | asignarvar | checkearvar ;

declararvar: datatype CADENA IGUAL valorvar PUNTOCOMA | datatype CADENA PUNTOCOMA ;

valorvar: ALPHAVAL operation valorvar | returnfunction operation valorvar | OPEN_PARENTHESIS valorvar CLOSE_PARENTHESIS | subvalorvar ;

subvalorvar: ALPHAVAL | returnfunction ;

operation: ADD | SUB | MUL | DIV ;

asignarvar: CADENA IGUAL valorvar PUNTOCOMA ;

checkearvar: valorrel operrel valorrel ;

valorrel: CADENA | ALPHAVAL | returnfunction | OPEN_PARENTHESIS asignarvar CLOSE_PARENTHESIS ;

operrel: GREATER | LESSER | GREATorEQ | LESSorEQ | EQUA | NOTEQ ; 

returnfunction: CADENA OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA ENDLINE | functionnames OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA ENDLINE ;

argumentos: valorvar | valorvar COMMA argumentos;

functionnames: PRINT | CCHAR | CMONS | CRACE | CCLASS | CITEM | CNPC | CFEAT | CPARTY | ASTAT | ACINFO | ACBACK | ASPBK | ASTSPBK | ARMOD | ACMOD | ANPCINF | AMINF | AITDES | AITINF | APMEM | RMPMEM | CHEXP | CHCLEV | CHCLASS | CHLEV | CHRACE | BHCMULCL | CHITCLASS | CHITRAR | CHITREQ | CHNPCCLASS | EQITEM | UEQIT | CHKCLASS | CHKLEVL | CHKEXP | CHKSPLS | CHKITEM | CHKRACE | CHKITREST | CHKFEAT | CHKMONSINF | CHKPARTY | EXPSH | GETSH ;

aconditional: ifelse | dowhile | foriter;

ifelse: IFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES ENDLINE programa ENDLINE CLOSE_LLAVES elseiter ENDLINE;

elseiter: ENDLINE | ELSECOND OPEN_LLAVES ENDLINE programa ENDLINE CLOSE_LLAVES | ELSIFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES ENDLINE programa ENDLINE CLOSE_LLAVES elseiter;

condition: checkearvar AND condition | checkearvar OR condition | checkearvar | OPEN_PARENTHESIS condition CLOSE_PARENTHESIS ; 

dowhile: DOCOND OPEN_LLAVES ENDLINE programa ENDLINE CLOSE_LLAVES WHILECOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS PUNTOCOMA ENDLINE | WHILECOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES ENDLINE programa ENDLINE CLOSE_LLAVES ENDLINE;

foriter: FORCOND OPEN_PARENTHESIS argfor1 PUNTOCOMA condition PUNTOCOMA argfor3 CLOSE_PARENTHESIS OPEN_LLAVES ENDLINE programa ENDLINE CLOSE_LLAVES ENDLINE ;

argfor1: | asignarvar | datatype CADENA IGUAL valorvar PUNTOCOMA ;

argfor3: | asignarvar | ALPHAVAL operation valorvar | returnfunction operation valorvar | OPEN_PARENTHESIS valorvar CLOSE_PARENTHESIS ;

program: expression													{ $$ = ProgramGrammarAction($1); }
	;

expression: expression[left] ADD expression[right]					{ $$ = AdditionExpressionGrammarAction($left, $right); }
	| expression[left] SUB expression[right]						{ $$ = SubtractionExpressionGrammarAction($left, $right); }
	| expression[left] MUL expression[right]						{ $$ = MultiplicationExpressionGrammarAction($left, $right); }
	| expression[left] DIV expression[right]						{ $$ = DivisionExpressionGrammarAction($left, $right); }
	| factor														{ $$ = FactorExpressionGrammarAction($1); }
	;

factor: OPEN_PARENTHESIS expression CLOSE_PARENTHESIS				{ $$ = ExpressionFactorGrammarAction($2); }
	| constant														{ $$ = ConstantFactorGrammarAction($1); }
	;

constant: INTEGER													{ $$ = IntegerConstantGrammarAction($1); }
	;

%%
