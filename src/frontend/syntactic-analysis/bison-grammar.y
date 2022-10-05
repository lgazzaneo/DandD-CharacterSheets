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

%token <token>  DICEDMG

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
%token <token>    CHKSTATS
%token <token>    CHKSTAT

%token <token>    EXPSH
%token <token>    GETSH    
%token <token>    ACTSH
%token <token>    CHTPSH

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

mainprogram: aux;					{state.succeed = true;}

aux: startprograma 					{return 0;}
	| crearfunct freeendlines aux; 	{return 0;}

freeendlines: ENDLINE 				{return 0;}
			| ENDLINE freeendlines 	{return 0;}
			| /**/ ;				{return 0;}

crearfunct: FUNCT truedata CADENA OPEN_PARENTHESIS argumentosparadeclarar CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES ; {return 0;}

truedata: datatype 					{return 0;}
		| complexdatatype ;			{return 0;}

datatype: INTDT 					{return 0;}
		| STRDT  ;					{return 0;}

simplevalues: INTEGER 				{return 0;}
			| STR ; 				{return 0;}

complexdatatype : STAT 				{return 0;}
				| STATS 			{return 0;}
				| ITEM 				{return 0;}
				| MOSNTER 			{return 0;}
				| MODIF 			{return 0;}
				| CHARAC 			{return 0;}
				| PARTY 			{return 0;}
				| NPC 				{return 0;}
				| RAZGO 			{return 0;}
				| SHEET ; 			{return 0;}

argumentosparadeclarar: truedata CADENA COMMA argumentosparadeclarar 		{return 0;}
						| truedata CADENA ;									{return 0;}

startprograma: INTDT START OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_LLAVES freeendlines trueprogram freeendlines RET OPEN_PARENTHESIS INTEGER CLOSE_PARENTHESIS PUNTOCOMA freeendlines CLOSE_LLAVES ; 		{return 0;}

programa: trueprogram freeendlines RET OPEN_PARENTHESIS CADENA CLOSE_PARENTHESIS PUNTOCOMA 		{return 0;}
		| trueprogram freeendlines RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA 	{return 0;}
		| freeendlines RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA;				{return 0;}

programacond: trueprogram freeendlines;

trueprogram: variableoper trueprogram 		{return 0;}	
			| returnfunction trueprogram 	{return 0;}	
			| aconditional trueprogram 		{return 0;}	
			| variableoper 					{return 0;}	
			| returnfunction 				{return 0;}	
			| aconditional 					{return 0;}	
			| /*lambda*/ ;					{return 0;}	

variableoper: avariable freeendlines ;		{return 0;}

avariable: declararvar 				{return 0;}
		| asignarvar 				{return 0;}
		| complexvar 				{return 0;}
		| complexch 				{return 0;}
		| declarearray 				{return 0;}
		| asignsimplearr 			{return 0;}
		| asigncpxarr;				{return 0;}

declararvar: datatype CADENA IGUAL valorvar PUNTOCOMA 	{return 0;}
			| datatype CADENA PUNTOCOMA ;				{return 0;}

valorvar: simplevalues operation valorvar 				{return 0;}
		| returnfunction operation valorvar 			{return 0;}
		| OPEN_PARENTHESIS valorvar CLOSE_PARENTHESIS 	{return 0;}
		| subvalorvar 									{return 0;}
		| CADENA operation valorvar ;					{return 0;}

subvalorvar: simplevalues 		{return 0;}
			| returnfunction 	{return 0;}
			| CADENA 			{return 0;}
			| DICEDMG ;			{return 0;}

operation: ADD 				{return 0;}
		| SUB 				{return 0;}
		| MUL 				{return 0;}
		| DIV ;				{return 0;}

asignarvar: CADENA IGUAL valorvar PUNTOCOMA 	{return 0;}
		| CADENA IGUAL CADENA PUNTOCOMA ;		{return 0;}

checkearvar: valorrel operrel valorrel ;		{return 0;}

valorrel: simplevalues 										{return 0;}
		| returnfunction 									{return 0;}
		| OPEN_PARENTHESIS asignarvar CLOSE_PARENTHESIS ;	{return 0;}

operrel: GREATER		{return 0;} 
		| LESSER 		{return 0;}
		| GREATorEQ 	{return 0;}
		| LESSorEQ 		{return 0;}
		| EQUA 			{return 0;}
		| NOTEQ ; 		{return 0;}

complexvar: complexdatatype CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA 	{return 0;}
		| complexdatatype CADENA PUNTOCOMA 																				{return 0;}
		| CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA;						{return 0;}

complexch: CADENA IGUAL CADENA PUNTOCOMA 																	{return 0;}
		| CADENA POINT complexch 																			{return 0;}
		| CADENA IGUAL valorvar PUNTOCOMA 																	{return 0;}
		| CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA ;		{return 0;}

declarearray: truedata CADENA OPEN_CORCHETES CLOSE_CORCHETES IGUAL NEW truedata OPEN_CORCHETES INTEGER CLOSE_CORCHETES PUNTOCOMA ;		{return 0;}

asignsimplearr: CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL valorvar PUNTOCOMA 		{return 0;}
			| CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL CADENA PUNTOCOMA ;		{return 0;}

asigncpxarr: CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA 				{return 0;}
			| CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL CADENA PUNTOCOMA | CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES POINT complexch ;		{return 0;}

returnfunction: CADENA OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA freeendlines 			{return 0;}
			| functionnames OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA freeendlines 		{return 0;}
			| CADENA OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS freeendlines 						{return 0;}
			| functionnames OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS freeendlines ;				{return 0;}

argumentos: valorvar 						{return 0;}
		| valorvar COMMA argumentos;		{return 0;}

functionnames: PRINT 			{return 0;}
			| CCHAR 			{return 0;}
			| CMONS 			{return 0;}
			| CRACE 			{return 0;}
			| CCLASS 			{return 0;}
			| CITEM 			{return 0;}
			| CNPC 				{return 0;}
			| CFEAT 			{return 0;}
			| CPARTY 			{return 0;}
			| ASTAT 			{return 0;}
			| ACINFO 			{return 0;}
			| ACBACK 			{return 0;}
			| ASPBK 			{return 0;}
			| ASTSPBK 			{return 0;}
			| ARMOD 			{return 0;}
			| ACMOD 			{return 0;}
			| ANPCINF 			{return 0;}
			| AMINF 			{return 0;}
			| AITDES 			{return 0;}
			| AITINF 			{return 0;}
			| APMEM 			{return 0;}
			| RMPMEM 			{return 0;}
			| CHEXP 			{return 0;}
			| CHCLEV 			{return 0;}
			| CHCLASS 			{return 0;}
			| CHLEV 			{return 0;}
			| CHRACE 			{return 0;}
			| BHCMULCL 			{return 0;}
			| CHITCLASS 		{return 0;}
			| CHITRAR 			{return 0;}
			| CHITREQ 			{return 0;}
			| CHNPCCLASS 		{return 0;}
			| EQITEM 			{return 0;}
			| UEQIT 			{return 0;}
			| CHKCLASS 			{return 0;}
			| CHKLEVL 			{return 0;}
			| CHKEXP 			{return 0;}
			| CHKSPLS 			{return 0;}
			| CHKITEM 			{return 0;}
			| CHKRACE 			{return 0;}
			| CHKITREST 		{return 0;}
			| CHKFEAT 			{return 0;}
			| CHKMONSINF 		{return 0;}
			| CHKPARTY 			{return 0;}
			| EXPSH 			{return 0;}
			| GETSH 			{return 0;}
			| ACTSH 			{return 0;}
			| CHTPSH 			{return 0;}
			| CHKSTATS 			{return 0;}
			| CHKSTAT ;			{return 0;}

aconditional: ifelse 		{return 0;}
			| dowhile 		{return 0;}
			| foriter;		{return 0;}

ifelse: IFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond freeendlines CLOSE_LLAVES freeendlines elseiter freeendlines;		{return 0;}

elseiter: freeendlines 																															{return 0;}
		| ELSECOND OPEN_LLAVES freeendlines programacond freeendlines CLOSE_LLAVES 																{return 0;}
		| ELSIFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond freeendlines CLOSE_LLAVES elseiter;		{return 0;}

condition: checkearvar AND condition 								{return 0;}
		| checkearvar OR condition 									{return 0;}
		| checkearvar 												{return 0;}
		| OPEN_PARENTHESIS condition CLOSE_PARENTHESIS ; 			{return 0;}

dowhile: DOCOND OPEN_LLAVES freeendlines programacond freeendlines CLOSE_LLAVES WHILECOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS PUNTOCOMA freeendlines 		{return 0;}
		| WHILECOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES freeendlines ;							{return 0;}

foriter: FORCOND OPEN_PARENTHESIS argfor1 PUNTOCOMA condition PUNTOCOMA argfor3 CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES freeendlines ; 	{return 0;}

argfor1: /*lambda*/ 									{return 0;}
		| asignarvar 									{return 0;}
		| datatype CADENA IGUAL valorvar PUNTOCOMA ;	{return 0;}

argfor3: /*lambda*/ 											{return 0;}
		| asignarvar 											{return 0;}
		| simplevalues operation valorvar 						{return 0;}
		| returnfunction operation valorvar 					{return 0;}
		| OPEN_PARENTHESIS valorvar CLOSE_PARENTHESIS ;			{return 0;}


%%
