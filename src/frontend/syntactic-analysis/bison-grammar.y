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
	int truedata;
	int datatype;
	int simplevalues;
	int complexdatatype;
	int argumentosparadeclarar;
	int startprograma;
	int programa;
	int trueprogram;
	int variableoper;
	int avariable;
	int declararvar;
	int valorvar;
	int subvalorvar;
	int operation;
	int asignarvar;
	int checkearvar;
	int valorrel;
	int operrel;
	int complexvar;
	int complexch;
	int declarearray;
	int asignsimplearr;
	int asigncpxarr;
	int returnfunction;
	int argumentos;
	int functionnames;
	int aconditional;
	int ifelse;
	int elseiter;
	int condition;
	int dowhile;
	int foriter;
	int argfor1;
	int argfor3;
	int freeendlines;

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

%token <token> INTDT

%token <token> ENDLINE
%token <token> PUNTOCOMA

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
%token <token>   STRDT
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

%token <token>    RET
%token <token>    POINT

// Tipos de dato para los no-terminales generados desde Bison.
%type <program> program
%type <expression> expression
%type <factor> factor
%type <constant> constant
%type <mainprogram> mainprogram
%type <crearfunct> crearfunct
%type <truedata> truedata
%type <datatype> datatype
%type <simplevalues> simplevalues
%type <complexdatatype> complexdatatype
%type <argumentosparadeclarar> argumentosparadeclarar
%type <startprograma> startprograma
%type <programa> programa
%type <trueprogram> trueprogram
%type <variableoper> variableoper
%type <avariable> avariable
%type <declararvar> declararvar
%type <valorvar> valorvar
%type <subvalorvar> subvalorvar
%type <operation> operation
%type <asignarvar> asignarvar
%type <valorrel> valorrel
%type <checkearvar> checkearvar
%type <operrel> operrel
%type <complexvar> complexvar
%type <complexch> complexch
%type <declarearray> declarearray
%type <asignsimplearr> asignsimplearr
%type <asigncpxarr> asigncpxarr
%type <returnfunction> returnfunction
%type <argumentos> argumentos
%type <functionnames> functionnames
%type <aconditional> aconditional
%type <ifelse> ifelse
%type <elseiter> elseiter
%type <condition> condition
%type <dowhile> dowhile
%type <foriter> foriter
%type <argfor1> argfor1
%type <argfor3> argfor3
%type <freeendlines> freeendlines

// Reglas de asociatividad y precedencia (de menor a mayor).
%left ADD SUB
%left MUL DIV

// El símbolo inicial de la gramatica.
%start mainprogram

%%

mainprogram: startprograma | crearfunct freeendlines mainprogram ;	{;}

freeendlines: /*lambda*/ | ENDLINE | ENDLINE freeendlines ;

crearfunct: FUNCT truedata CADENA OPEN_PARENTHESIS argumentosparadeclarar CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES ; {;}

truedata: datatype | complexdatatype ;			{;}

datatype: INTDT | STRDT  ;	{;}

simplevalues: INTEGER | STR ; {;}

complexdatatype : STAT | STATS | ITEM | MOSNTER | MODIF | CHARAC | PARTY | NPC | RAZGO | SHEET ; {;}

argumentosparadeclarar: truedata CADENA COMMA argumentosparadeclarar | truedata CADENA ;		{;}

startprograma: INTDT START OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_LLAVES freeendlines trueprogram freeendlines RET OPEN_PARENTHESIS INTEGER CLOSE_PARENTHESIS PUNTOCOMA freeendlines CLOSE_LLAVES ; {;}

programa: trueprogram freeendlines RET OPEN_PARENTHESIS CADENA CLOSE_PARENTHESIS PUNTOCOMA | trueprogram freeendlines RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA;		{;}

trueprogram: variableoper trueprogram | returnfunction trueprogram | aconditional trueprogram | variableoper | returnfunction | aconditional | /*lambda*/ ;		{;}

variableoper: avariable freeendlines ;				{;}

avariable: declararvar | asignarvar | complexvar | complexch | declarearray | asignsimplearr | asigncpxarr;			{;}

declararvar: datatype CADENA IGUAL valorvar PUNTOCOMA | datatype CADENA PUNTOCOMA ;				{;}

valorvar: simplevalues operation valorvar | returnfunction operation valorvar | OPEN_PARENTHESIS valorvar CLOSE_PARENTHESIS | subvalorvar | CADENA operation valorvar;				{;}

subvalorvar: simplevalues | returnfunction | CADENA;		{;}

operation: ADD | SUB | MUL | DIV ;					{;}

asignarvar: CADENA IGUAL valorvar PUNTOCOMA | CADENA IGUAL CADENA PUNTOCOMA ;		{;}

checkearvar: valorrel operrel valorrel ;	{;}

valorrel: simplevalues | returnfunction | OPEN_PARENTHESIS asignarvar CLOSE_PARENTHESIS ;	{;}

operrel: GREATER | LESSER | GREATorEQ | LESSorEQ | EQUA | NOTEQ ; {;}

complexvar: complexdatatype CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA | complexdatatype CADENA PUNTOCOMA | CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA;		{;}

complexch: CADENA IGUAL CADENA PUNTOCOMA | CADENA POINT complexch | CADENA IGUAL valorvar PUNTOCOMA | CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA ;		{;}

declarearray: truedata CADENA OPEN_CORCHETES CLOSE_CORCHETES IGUAL NEW truedata OPEN_CORCHETES INTEGER CLOSE_CORCHETES PUNTOCOMA ;		{;}

asignsimplearr: CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL valorvar PUNTOCOMA | CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL CADENA PUNTOCOMA ;		{;}

asigncpxarr: CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA | CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL CADENA PUNTOCOMA | CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES POINT complexch ;		{;}

returnfunction: CADENA OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA freeendlines | functionnames OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA freeendlines ;		{;}

argumentos: valorvar | valorvar COMMA argumentos;		{;}

functionnames: PRINT | CCHAR | CMONS | CRACE | CCLASS | CITEM | CNPC | CFEAT | CPARTY | ASTAT | ACINFO | ACBACK | ASPBK | ASTSPBK | ARMOD | ACMOD | ANPCINF | AMINF | AITDES | AITINF | APMEM | RMPMEM | CHEXP | CHCLEV | CHCLASS | CHLEV | CHRACE | BHCMULCL | CHITCLASS | CHITRAR | CHITREQ | CHNPCCLASS | EQITEM | UEQIT | CHKCLASS | CHKLEVL | CHKEXP | CHKSPLS | CHKITEM | CHKRACE | CHKITREST | CHKFEAT | CHKMONSINF | CHKPARTY | EXPSH | GETSH ;		{;}

aconditional: ifelse | dowhile | foriter;		{;}

ifelse: IFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES elseiter freeendlines;		{;}

elseiter: freeendlines | ELSECOND OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES | ELSIFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES elseiter;	{;}

condition: checkearvar AND condition | checkearvar OR condition | checkearvar | OPEN_PARENTHESIS condition CLOSE_PARENTHESIS ; 	{;}

dowhile: DOCOND OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES WHILECOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS PUNTOCOMA freeendlines | WHILECOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES freeendlines	{;}

foriter: FORCOND OPEN_PARENTHESIS argfor1 PUNTOCOMA condition PUNTOCOMA argfor3 CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES freeendlines ; {;}

argfor1: | asignarvar | datatype CADENA IGUAL valorvar PUNTOCOMA ;	{;}

argfor3: | asignarvar | simplevalues operation valorvar | returnfunction operation valorvar | OPEN_PARENTHESIS valorvar CLOSE_PARENTHESIS ;	{;}

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
