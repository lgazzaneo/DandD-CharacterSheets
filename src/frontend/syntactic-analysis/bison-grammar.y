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
	int aux;
	int programacond;
	int complexdeclar;
	int declarearraycmpx;

	// Terminales.
	int token;
}

// IDs y tipos de los tokens terminales generados desde Flex.
%token <token> ADD
%token <token> SUB
%token <token> MUL
%token <token> DIV

%token <token> ALPHAVAL
%token <token> OPEN_PARENTHESIS
%token <token> CLOSE_PARENTHESIS

%token <token> OPEN_LLAVES
%token <token> CLOSE_LLAVES

%token <token> OPEN_CORCHETES
%token <token> CLOSE_CORCHETES

%token <token> INTEGER

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
%type <programacond> programacond
%type <complexdeclar> complexdeclar
%type <declarearraycmpx> declarearraycmpx
%type <aux> aux

// Reglas de asociatividad y precedencia (de menor a mayor).
%left ADD SUB
%left MUL DIV

// El símbolo inicial de la gramatica.
%start mainprogram

%%

mainprogram: aux					{$$ = a("Start");} 
			;

aux: startprograma 					{$$ =  b("Aux");}
	| crearfunct freeendlines aux 	{$$ = b("Crearnuevafunction");}
	;

crearfunct: FUNCT truedata CADENA OPEN_PARENTHESIS argumentosparadeclarar CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES  {$$ = b("crearfunct");} 
			;

truedata: datatype 					{$$ = b("truedatadatatype");}
		| complexdatatype 			{$$ = b("truedatacomplexdata");}
		;


complexdatatype : STAT 				{$$ = b("STAT");}
				| STATS 			{$$ = b("STATS");}
				| ITEM 				{$$ = b("ITEM");}
				| MOSNTER 			{$$ = b("MOSNTER");}
				| MODIF 			{$$ = b("MODIF");}
				| CHARAC 			{$$ = b("CHARAC");}
				| PARTY 			{$$ = b("PARTY");}
				| NPC 				{$$ = b("NPC");}
				| RAZGO 			{$$ = b("RAZGO");}
				| SHEET  			{$$ = b("SHEET");}
				;

argumentosparadeclarar: truedata CADENA COMMA argumentosparadeclarar 		{$$ = b("argumetosparadeclararrec");}
						| truedata CADENA 									{$$ = b("argumetoultimoparadeclarar");}
						;

startprograma: INTDT START OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_LLAVES freeendlines trueprogram RET OPEN_PARENTHESIS INTEGER CLOSE_PARENTHESIS PUNTOCOMA freeendlines CLOSE_LLAVES 		{$$ =  b("startPrograma");}
				| INTDT START OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_LLAVES freeendlines RET OPEN_PARENTHESIS INTEGER CLOSE_PARENTHESIS PUNTOCOMA freeendlines CLOSE_LLAVES 				{$$ = b("startProgramavacio");}
				;

programa: trueprogram RET OPEN_PARENTHESIS CADENA CLOSE_PARENTHESIS PUNTOCOMA 		{$$ = b("programaretornocadena");}
		| trueprogram RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA 	{$$ = b("programaretornovalor");}
		| RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA								{$$ = b("programasintrueprogram");}
		;

programacond: trueprogram 																			{$$ = b("programacondsinret");}
			| trueprogram RET OPEN_PARENTHESIS CADENA CLOSE_PARENTHESIS PUNTOCOMA freeendlines		{$$ = b("programacondconretcadea");}
			| trueprogram RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA freeendlines				{$$ = b("programacondconretvalor");}
			| RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA freeendlines								{$$ = b("programacondconsoloret");}
			;

trueprogram: variableoper freeendlines								{$$ =  b("variableoper");}
			|variableoper freeendlines trueprogram 					{$$ = b("variableoper truep");} 	
			| returnfunction PUNTOCOMA freeendlines trueprogram 	{$$ = b("returnfunction truep");}	
			| aconditional freeendlines trueprogram 				{$$ = b("aconditional truep");}	
			| returnfunction PUNTOCOMA freeendlines					{$$ = b("returnfunction");}	
			| aconditional freeendlines								{$$ = b("aconditional");}	
			;

variableoper: avariable 		{$$ =  b("variableopertrue");}
			;

avariable: declararvar 				{$$ =  b("declararvar");}
		| complexvar 				{$$ = b("complexvar");}
		| complexch 				{$$ = b("complexch");}
		| declarearray 				{$$ = b("declarearray");}
		| declarearraycmpx			{$$ = b("declarearraycmpx");}
		| asignsimplearr 			{$$ = b("assignsimplearray");}
		| asigncpxarr				{$$ = b("assigncomplexarray");}
		| complexdeclar           	{$$ = b("complexdeclar");}
		;

declararvar: datatype CADENA IGUAL valorvar PUNTOCOMA 	{$$ =  b("declararvartotal");}
			| datatype CADENA PUNTOCOMA 				{$$ = b("declararvarsimple");}
			;

valorvar: subvalorvar 									{$$ =  b("subvalorvar");}
		| simplevalues operation valorvar 				{$$ = b("opsimplevalues");}
		| returnfunction operation valorvar 			{$$ = b("retfunoper");}
		| OPEN_PARENTHESIS valorvar CLOSE_PARENTHESIS 	{$$ = b("valorvarparentesis");}
		| CADENA operation valorvar 					{$$ = b("cadenaoperacionvalorvar");}
		;

subvalorvar: simplevalues 		{$$ = b("simplevaluessubvalorar");}
			| returnfunction 	{$$ = b("returnfunctionsub");}
			| CADENA 			{$$ = b("cadenasub");}
			| DICEDMG 			{$$ = b("dicedmgsub");}
			| ALPHAVAL          {$$ = b("alphavalsub");}
			;

simplevalues: INTEGER 				{$$ = b("integer");}
			| STR 	 				{$$ = b("string");}
			;

datatype: INTDT 					{$$ = b("IntegerType");}
		| STRDT  					{$$ = b("StringType");}
		;

freeendlines: ENDLINE 						{$$ = b("FreeLines1");}
			| ENDLINE ENDLINE freeendlines 	{$$ = b("FreeLines2");}
			| /**/  						{$$ = b("FreeLines3");}
			;

operation: ADD 				{$$ = b("suma");}
		| SUB 				{$$ = b("resta");}
		| MUL 				{$$ = b("multiplicacion");}
		| DIV    			{$$ = b("division");}
		;

asignarvar: CADENA IGUAL valorvar PUNTOCOMA 	{$$ = b("aignarvarcadenavalor");}
		;

checkearvar: valorrel operrel valorrel 		{$$ = b("checkarvar");}
			;

valorrel: simplevalues 										{$$ = b("simplevaluesvalorrel");}
		| returnfunction 									{$$ = b("returnfuncvalorrel");}
		| OPEN_PARENTHESIS asignarvar CLOSE_PARENTHESIS 	{$$ = b("parentesisvalorrel");}
		;

operrel: GREATER		{$$ = b("greater");} 
		| LESSER 		{$$ = b("lesser");}
		| GREATorEQ 	{$$ = b("greateroreq");}
		| LESSorEQ 		{$$ = b("lesseroreq");}
		| EQUA 			{$$ = b("equals");}
		| NOTEQ  		{$$ = b("noteq");}
		;

complexvar: complexdatatype CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA 	{$$ = b("complexvariniti");}
		| complexdatatype CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS CLOSE_PARENTHESIS PUNTOCOMA					{$$ = b("complexvarinitisinarg");}
		| complexdatatype CADENA PUNTOCOMA 																				{$$ = b("complexvarsininit");}
		;

complexdeclar: CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA 	{$$ = b("complexvariniti");}
			| CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS CLOSE_PARENTHESIS PUNTOCOMA					{$$ = b("complexvardeclarsinarg");}
				;

complexch: CADENA POINT complexch 																			{$$ = b("complexch2");}
		| asignarvar 																						{$$ = b("complexch3");}
		;

declarearray: datatype CADENA OPEN_CORCHETES CLOSE_CORCHETES IGUAL NEW datatype OPEN_CORCHETES INTEGER CLOSE_CORCHETES PUNTOCOMA 		{$$ = b("declarearray");}
				;

declarearraycmpx: complexdatatype CADENA OPEN_CORCHETES CLOSE_CORCHETES IGUAL NEW complexdatatype OPEN_CORCHETES INTEGER CLOSE_CORCHETES PUNTOCOMA 		{$$ = b("declarearraycmpx");}
				;

asignsimplearr: CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL valorvar PUNTOCOMA 		{$$ = b("assignsimplarrvalor");}
			;

asigncpxarr: CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA 				{$$ = b("assigncmparr1");}
			| CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL NEW complexdatatype OPEN_PARENTHESIS CLOSE_PARENTHESIS PUNTOCOMA							{$$ = b("assigncmparrsinarg");}
			| CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES POINT complexch 																				{$$ = b("assigncmparr3");}
			| CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES POINT complexdeclar																				{$$ = b("assigncmparr2");}
			;

returnfunction: CADENA OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS  						{$$ = b("returnfunct3");}
			| functionnames OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS 					{$$ = b("retunrfunct4");}
			;

argumentos: valorvar 						{$$ = b("argvalor1");}
		| valorvar COMMA argumentos		{$$ = b("argvalor2omas");}
		;

functionnames: PRINT 			{$$ = b("f1");}
			| CCHAR 			{$$ = b("f2");}
			| CMONS 			{$$ = b("f3");}
			| CRACE 			{$$ = b("f4");}
			| CCLASS 			{$$ = b("f5");}
			| CITEM 			{$$ = b("f6");}
			| CNPC 				{$$ = b("f7");}
			| CFEAT 			{$$ = b("f8");}
			| CPARTY 			{$$ = b("f9");}
			| ASTAT 			{$$ = b("f10");}
			| ACINFO 			{$$ = b("f11");}
			| ACBACK 			{$$ = b("f12");}
			| ASPBK 			{$$ = b("f4");}
			| ASTSPBK 			{$$ = b("f4");}
			| ARMOD 			{$$ = b("f4");}
			| ACMOD 			{$$ = b("f4");}
			| ANPCINF 			{$$ = b("f4");}
			| AMINF 			{$$ = b("f4");}
			| AITDES 			{$$ = b("f4");}
			| AITINF 			{$$ = b("f4");}
			| APMEM 			{$$ = b("f4");}
			| RMPMEM 			{$$ = b("f4");}
			| CHEXP 			{$$ = b("f4");}
			| CHCLEV 			{$$ = b("f4");}
			| CHCLASS 			{$$ = b("f4");}
			| CHLEV 			{$$ = b("f4");}
			| CHRACE 			{$$ = b("f4");}
			| BHCMULCL 			{$$ = b("f4");}
			| CHITCLASS 		{$$ = b("f4");}
			| CHITRAR 			{$$ = b("f4");}
			| CHITREQ 			{$$ = b("f4");}
			| CHNPCCLASS 		{$$ = b("f4");}
			| EQITEM 			{$$ = b("f4");}
			| UEQIT 			{$$ = b("f4");}
			| CHKCLASS 			{$$ = b("f4");}
			| CHKLEVL 			{$$ = b("f4");}
			| CHKEXP 			{$$ = b("f4");}
			| CHKSPLS 			{$$ = b("f4");}
			| CHKITEM 			{$$ = b("f4");}
			| CHKRACE 			{$$ = b("f4");}
			| CHKITREST 		{$$ = b("f4");}
			| CHKFEAT 			{$$ = b("f4");}
			| CHKMONSINF 		{$$ = b("f4");}
			| CHKPARTY 			{$$ = b("f4");}
			| EXPSH 			{$$ = b("f4");}
			| GETSH 			{$$ = b("f4");}
			| ACTSH 			{$$ = b("f4");}
			| CHTPSH 			{$$ = b("f4");}
			| CHKSTATS 			{$$ = b("f4");}
			| CHKSTAT 			{$$ = b("f4");}
			;

aconditional: ifelse 		{$$ = b("ifelse");}
			| dowhile 		{$$ = b("dowhile");}
			| foriter		{$$ = b("for");}
			;

ifelse: IFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES elseiter		{$$ = b("ifelsepadreconhijo");}
		|IFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES					{$$ = b("ifelsepadre");} 
		;

elseiter: ELSECOND OPEN_LLAVES freeendlines programacond CLOSE_LLAVES 																{$$ = b("elseitersincond");}
		| ELSIFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES elseiter			{$$ = b("elseiterconcond");}
		;

condition: checkearvar AND condition 								{$$ = b("condition and");}
		| checkearvar OR condition 									{$$ = b("condition or");}
		| checkearvar 												{$$ = b("condition check");}
		| OPEN_PARENTHESIS condition CLOSE_PARENTHESIS  			{$$ = b("condition parentesis");}
		;

dowhile: DOCOND OPEN_LLAVES freeendlines programacond  CLOSE_LLAVES WHILECOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS PUNTOCOMA  				{$$ = b("dowhile1");}
		| WHILECOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond  CLOSE_LLAVES								{$$ = b("while");}
		;

foriter: FORCOND OPEN_PARENTHESIS argfor1 PUNTOCOMA condition PUNTOCOMA argfor3 CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES  	{$$ = b("for1");}
		| FORCOND OPEN_PARENTHESIS PUNTOCOMA condition PUNTOCOMA CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES    				{$$ = b("for2");}
		| FORCOND OPEN_PARENTHESIS argfor1 PUNTOCOMA condition PUNTOCOMA CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES 			{$$ = b("for3");}
		| FORCOND OPEN_PARENTHESIS PUNTOCOMA condition PUNTOCOMA argfor3 CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES 			{$$ = b("for4");}
		;

argfor1: asignarvar 									{$$ = b("argfor1asignvar");}
		| datatype CADENA IGUAL valorvar PUNTOCOMA 		{$$ = b("argfor1valor");}
		;

argfor3: asignarvar 											{$$ = b("argfor3asignavar");}
		| simplevalues operation valorvar 						{$$ = b("argfor3simplevalues");}
		| returnfunction operation valorvar 					{$$ = b("argfor3returnfunction");}
		| OPEN_PARENTHESIS valorvar CLOSE_PARENTHESIS 			{$$ = b("argfor3parentesis");}
		;


%%