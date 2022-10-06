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

%token <token> ALPHAVAL
%token <token> YYUNDEF

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

%token <ifelse>    IFCOND
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

mainprogram: aux					{return a("Start");} 
			;

aux: startprograma 					{return b("Aux");}
	/*| crearfunct freeendlines aux 	{return b("Crearnuevafunction");}*/
	;

freeendlines: ENDLINE 						{return b("FreeLines");}
			| ENDLINE ENDLINE freeendlines 	{return b("FreeLines");}
			| /**/							{return b("FreeLines");}
			;

/*crearfunct: FUNCT truedata CADENA OPEN_PARENTHESIS argumentosparadeclarar CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES  {return b("crearfunct");} 
			;*/

/*truedata: datatype 					{return b("truedatadatatype");}
		| complexdatatype 			{return b("truedatacomplexdata");}*/
		;

datatype: INTDT 					{return b("IntegerType");}
		//| STRDT  					{return b("StringType");}
		;

simplevalues: INTEGER 				{return b("integer");}
			//| STR 	 				{return b("string");}
			;

/*complexdatatype : /*STAT 				{return b("STAT");}
				| STATS 			{return b("STATS");}
				| ITEM 				{return b("ITEM");}
				| MOSNTER 			{return b("MOSNTER");}
				| MODIF 			{return b("MODIF");}
				| CHARAC 			{return b("CHARAC");}
				| PARTY 			{return b("PARTY");}
				| NPC 				{return b("NPC");}
				| RAZGO 			{return b("RAZGO");}
				| SHEET  			{return b("SHEET");}
				;*/

/*argumentosparadeclarar: truedata CADENA COMMA argumentosparadeclarar 		{return b("argumetosparadeclararrec");}
						| truedata CADENA 									{return b("argumetoultimoparadeclarar");}
						;*/

startprograma: INTDT START OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_LLAVES freeendlines trueprogram RET OPEN_PARENTHESIS INTEGER CLOSE_PARENTHESIS PUNTOCOMA freeendlines CLOSE_LLAVES 		{return b("startPrograma");}
				/*| INTDT START OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_LLAVES freeendlines RET OPEN_PARENTHESIS INTEGER CLOSE_PARENTHESIS PUNTOCOMA freeendlines CLOSE_LLAVES 							{return b("startProgramavacio");}*/
				;

/*programa: trueprogram RET OPEN_PARENTHESIS CADENA CLOSE_PARENTHESIS PUNTOCOMA 		{return b("programaretornocadena");}
		| trueprogram RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA 	{return b("programaretornovalor");}
		| RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA								{return b("programasintrueprogram");}
		;*/

/*programacond: trueprogram 																			{return b("programacondsinret");}
			| trueprogram RET OPEN_PARENTHESIS CADENA CLOSE_PARENTHESIS PUNTOCOMA freeendlines		{return b("programacondconretcadea");}
			| trueprogram RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA freeendlines				{return b("programacondconretvalor");}
			| RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA freeendlines								{return b("programacondconsoloret");}
			;*/

trueprogram: variableoper freeendlines								{return b("variableoper");}
			/*|variableoper freeendlines trueprogram 					{return b("variableoper truep");} 	
			| returnfunction PUNTOCOMA freeendlines trueprogram 	{return b("returnfunction truep");}	
			| aconditional freeendlines trueprogram 				{return b("aconditional truep");}	*/
			/*| returnfunction PUNTOCOMA freeendlines					{return b("returnfunction");}	
			| aconditional freeendlines								{return b("aconditional");}	*/
			;

variableoper: avariable 		{return b("variableopertrue");}
			;

avariable: declararvar 				{return b("declararvar");}
		/*| complexvar 				{return b("complexvar");}
		| complexch 				{return b("complexch");}
		| declarearray 				{return b("declarearray");}
		| declarearraycmpx			{return b("declarearraycmpx");}
		| asignsimplearr 			{return b("assignsimplearray");}
		| asigncpxarr				{return b("assigncomplexarray");}
		| complexdeclar           	{return b("complexdeclar");}*/
		;

declararvar: datatype CADENA IGUAL valorvar PUNTOCOMA 	{return b("declararvartotal");}
			//| datatype CADENA PUNTOCOMA 				{return b("declararvarsimple");}
			;

valorvar: subvalorvar 									{return b("subvalorvar");}
		/*|simplevalues operation valorvar 				{return b("opsimplevalues");}
		| returnfunction operation valorvar 			{return b("retfunoper");}
		| OPEN_PARENTHESIS valorvar CLOSE_PARENTHESIS 	{return b("valorvarparentesis");}
		| CADENA operation valorvar 					{return b("cadenaoperacionvalorvar");}*/
		;

subvalorvar: simplevalues 		{return b("simplevaluessubvalorar");}
			/*| returnfunction 	{return b("returnfunctionsub");}
			| CADENA 			{return b("cadenasub");}
			| DICEDMG 			{return b("dicedmgsub");}*/
			;

/*operation: ADD 				{return b("suma");}
		| SUB 				{return b("resta");}
		| MUL 				{return b("multiplicacion");}
		| DIV    			{return b("division");}
		;*/

/*asignarvar: CADENA IGUAL valorvar PUNTOCOMA 	{return b("aignarvarcadenavalor");}
		;*/

/*checkearvar: valorrel operrel valorrel 		{return b("checkarvar");}
			;*/

/*valorrel: simplevalues 										{return b("simplevaluesvalorrel");}
		| returnfunction 									{return b("returnfuncvalorrel");}
		| OPEN_PARENTHESIS asignarvar CLOSE_PARENTHESIS 	{return b("parentesisvalorrel");}
		;*/

/*operrel: GREATER		{return b("greater");} 
		| LESSER 		{return b("lesser");}
		| GREATorEQ 	{return b("greateroreq");}
		| LESSorEQ 		{return b("lesseroreq");}
		| EQUA 			{return b("equals");}
		| NOTEQ  		{return b("noteq");}
		;*/

/*complexvar: complexdatatype CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA 	{return b("complexvariniti");}
		| complexdatatype CADENA PUNTOCOMA 																				{return b("complexvarsininit");}
		;*/

/*complexdeclar: CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA 	{return b("complexvariniti");}
				;*/

/*complexch: CADENA POINT complexch 																			{return b("complexch2");}
		| asignarvar 																						{return b("complexch3");}
		;*/

/*declarearray: datatype CADENA OPEN_CORCHETES CLOSE_CORCHETES IGUAL NEW datatype OPEN_CORCHETES INTEGER CLOSE_CORCHETES PUNTOCOMA 		{return b("declarearray");}
				;*/

/*declarearraycmpx: complexdatatype CADENA OPEN_CORCHETES CLOSE_CORCHETES IGUAL NEW complexdatatype OPEN_CORCHETES INTEGER CLOSE_CORCHETES PUNTOCOMA 		{return b("declarearraycmpx");}
				;*/

/*asignsimplearr: CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL valorvar PUNTOCOMA 		{return b("assignsimplarrvalor");}
			;*/

/*asigncpxarr: CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA 				{return b("assigncmparr1");}
			| CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES POINT complexch 																				{return b("assigncmparr3");}
			| CADENA OPEN_CORCHETES INTEGER CLOSE_CORCHETES POINT complexdeclar																				{return b("assigncmparr2");}
			;*/

/*returnfunction: CADENA OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS  						{return b("returnfunct3");}
			| functionnames OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS 					{return b("retunrfunct4");}
			;*/

/*argumentos: valorvar 						{return b("argvalor1");}
		| valorvar COMMA argumentos		{return b("argvalor2omas");}
		;*/

/*functionnames: PRINT 			{return b("f1");}
			| CCHAR 			{return b("f2");}
			| CMONS 			{return b("f3");}
			| CRACE 			{return b("f4");}
			| CCLASS 			{return b("f5");}
			| CITEM 			{return b("f6");}
			| CNPC 				{return b("f7");}
			| CFEAT 			{return b("f8");}
			| CPARTY 			{return b("f9");}
			| ASTAT 			{return b("f10");}
			| ACINFO 			{return b("f11");}
			| ACBACK 			{return b("f12");}
			| ASPBK 			{return b("f4");}
			| ASTSPBK 			{return b("f4");}
			| ARMOD 			{return b("f4");}
			| ACMOD 			{return b("f4");}
			| ANPCINF 			{return b("f4");}
			| AMINF 			{return b("f4");}
			| AITDES 			{return b("f4");}
			| AITINF 			{return b("f4");}
			| APMEM 			{return b("f4");}
			| RMPMEM 			{return b("f4");}
			| CHEXP 			{return b("f4");}
			| CHCLEV 			{return b("f4");}
			| CHCLASS 			{return b("f4");}
			| CHLEV 			{return b("f4");}
			| CHRACE 			{return b("f4");}
			| BHCMULCL 			{return b("f4");}
			| CHITCLASS 		{return b("f4");}
			| CHITRAR 			{return b("f4");}
			| CHITREQ 			{return b("f4");}
			| CHNPCCLASS 		{return b("f4");}
			| EQITEM 			{return b("f4");}
			| UEQIT 			{return b("f4");}
			| CHKCLASS 			{return b("f4");}
			| CHKLEVL 			{return b("f4");}
			| CHKEXP 			{return b("f4");}
			| CHKSPLS 			{return b("f4");}
			| CHKITEM 			{return b("f4");}
			| CHKRACE 			{return b("f4");}
			| CHKITREST 		{return b("f4");}
			| CHKFEAT 			{return b("f4");}
			| CHKMONSINF 		{return b("f4");}
			| CHKPARTY 			{return b("f4");}
			| EXPSH 			{return b("f4");}
			| GETSH 			{return b("f4");}
			| ACTSH 			{return b("f4");}
			| CHTPSH 			{return b("f4");}
			| CHKSTATS 			{return b("f4");}
			| CHKSTAT 			{return b("f4");}
			;*/

/*aconditional: ifelse 		{return b("ifelse");}
			| dowhile 		{return b("dowhile");}
			| foriter		{return b("for");}
			;*/

/*ifelse: IFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES			{return b("ifelsepadre");}
		| IFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES elseiter
		;*/

//elseiter: ELSECOND OPEN_LLAVES freeendlines programacond CLOSE_LLAVES 																{return b("elseitersincond");}
//		| ELSIFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES elseiter			{return b("elseiterconcond");}
//		;

//condition: checkearvar AND condition 								{return b("condition and");}
	//	| checkearvar OR condition 									{return b("condition or");}
	//	| checkearvar 												{return b("condition check");}
	//	| OPEN_PARENTHESIS condition CLOSE_PARENTHESIS  			{return b("condition parentesis");}
	//	;

//dowhile: DOCOND OPEN_LLAVES freeendlines programacond  CLOSE_LLAVES WHILECOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS PUNTOCOMA  				{return b("dowhile1");}
		//| WHILECOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond  CLOSE_LLAVES								{return b("while");}
		//;

//foriter: FORCOND OPEN_PARENTHESIS argfor1 PUNTOCOMA condition PUNTOCOMA argfor3 CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES  	{return b("for1");}
		//| FORCOND OPEN_PARENTHESIS PUNTOCOMA condition PUNTOCOMA CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES    				{return b("for2");}
		//| FORCOND OPEN_PARENTHESIS argfor1 PUNTOCOMA condition PUNTOCOMA CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES 			{return b("for3");}
		//| FORCOND OPEN_PARENTHESIS PUNTOCOMA condition PUNTOCOMA argfor3 CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES 			{return b("for4");}
		//;

//argfor1: asignarvar 									{return b("argfor1asignvar");}
		//| datatype CADENA IGUAL valorvar PUNTOCOMA 		{return b("argfor1valor");}
		//;

//argfor3: asignarvar 											{return b("argfor3asignavar");}
		//| simplevalues operation valorvar 						{return b("argfor3simplevalues");}
		//| returnfunction operation valorvar 					{return b("argfor3returnfunction");}
		//| OPEN_PARENTHESIS valorvar CLOSE_PARENTHESIS 			{return b("argfor3parentesis");}
		//;


%%
