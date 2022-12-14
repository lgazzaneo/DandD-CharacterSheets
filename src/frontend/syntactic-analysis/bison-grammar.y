%{

#include "bison-actions.h"

%}

// Tipos de dato utilizados en las variables semánticas ($$, $1, $2, etc.).
%union {
	// No-terminales (backend).
	/*
	Program * program;
	Expression expression;
	Factor factor;
	Constant constant;
	...
	*/

	// No-terminales (frontend).
	mainprogram * mainprogram;
	freeendlines * freeendlines;
	Sheet * Sheet;
	Body * MainBody;
	nameCharac * Characname;
	levelCharac * levelCharac;
	classCharac * classCharac;
	backgroundCharac * backgroundCharac;
	playername * playername;
	characrace * characrace;
	alignmentCharac * alignmentCharac;
	exppointsCharac * exppointsCharac;
	restofbodyCharac * restofbodyCharac;
	statsSpread * statsSpread;
	ArmorClass * ArmorClass;
	Initiative * Initiative;
	Speed * Speed;
	CharacBackStory * CharacBackStory;
	proficienciesCh * proficienciesCh;
	featuresCh * featuresCh;
	itemsCh * itemsCh;
	equipmentCh * equipmentCh;
	Spellbook * Spellbook;
	spellcasterspells * spellcasterspells;
	//LevelSplb * LevelSplb;
	Spell * Spell;
	NPCBody * NPCBody;
	Merchant * Merchant;
	Store * Store;
	ItemstoSell * ItemstoSell;
	ItemBody * ItemBody;
	ItemName * ItemName;
	ItemRarity * ItemRarity;
	ItemDescription * ItemDescription;
	MonsterBody * MonsterBody;
	TypeofMonster * TypeofMonster;
	MonsterAttacks * MonsterAttacks;
	ListofAttacks * ListofAttacks;


	// Terminales.
	int token;
	Constant * value;
	objecttext * text;
	DiceDmg * damage;
}

// IDs y tipos de los tokens terminales generados desde Flex.
%token <token> ADD
%token <token> SUB
%token <token> MUL
%token <token> DIV

%token <token> AND
%token <token> OR

%token <token> UNKNOWN_ERROR

%token <token> ALPHAVAL
%token <token> OPEN_PARENTHESIS
%token <token> CLOSE_PARENTHESIS

%token <token> OPEN_LLAVES
%token <token> CLOSE_LLAVES

%token <token> OPEN_CORCHETES
%token <token> CLOSE_CORCHETES

%token <value> INTEGER

%token <token> INTDT

%token <token> ENDLINE
%token <token> PUNTOCOMA

%token <damage>  DICEDMG

%token <token>    FUNCT
%token <token>    NEW
%token <token>    START

%token <token>    CHARAC
%token <text>   STR
%token <token>   STRDT
%token <token>   ITEM
%token <token>    STATS
%token <token>    NPC
%token <token>    MOSNTER
%token <token>    RAZGO
%token <token>    MODIF
%token <token>    SHEET


%token <token>    DOSPTS
%token <token>    CADENA
%token <token>    COMMA

%token <token>    NAME
%token <token>    CLASS
%token <token>    DUALCLASS
%token <token>    LVL
%token <token>    BKGR
%token <token>    PLYNAME
%token <token>    RACE
%token <token>    ALIGN
%token <token>    EXP
%token <token>    ACLASS
%token <token>    INIT
%token <token>    SPD
%token <token>    PROF
%token <token>    FEAT
%token <token>    EQUIP
%token <token>    ITEMS
%token <token>    BACKSTORY
%token <token>    SPLLBOOK
%token <token>    STORE
%token <token>    ITEMNAME
%token <token>    RAR
%token <token>    DES
%token <token>    TYPEMONS
%token <token>    ATTACKS



// Tipos de dato para los no-terminales generados desde Bison.
%type <mainprogram> mainprogram
%type <freeendlines> freeendlines
%type <Sheet> sheet
%type <MainBody> body
%type <Characname> name
%type <levelCharac> level
%type <classCharac> class
%type <backgroundCharac> background
%type <playername> playername
%type <characrace> race
%type <alignmentCharac> alignment
%type <exppointsCharac> exppoints
%type <restofbodyCharac> restofbody
%type <statsSpread> stats
%type <ArmorClass> armorclass
%type <Initiative> initiative
%type <Speed> speed
%type <CharacBackStory> backstory
%type <proficienciesCh> proficiencies
%type <featuresCh> features
%type <itemsCh> items
%type <equipmentCh> equipment
%type <Spellbook> spellbook
%type <spellcasterspells> spellcasterspells
//%type <LevelSplb> levelsplb
%type <Spell> spell
%type <NPCBody> npcbody
%type <Merchant> merchantbody
%type <Store> store
%type <ItemstoSell> itemtosell
%type <ItemBody> itembody
%type <ItemName> itemname
%type <ItemRarity> rarity
%type <ItemDescription> description
%type <MonsterBody> monsterbody
%type <TypeofMonster> typeofmonster
%type <MonsterAttacks> attacks
%type <ListofAttacks> listofat

// Reglas de asociatividad y precedencia (de menor a mayor).
%left ADD SUB
%left MUL DIV

// El símbolo inicial de la gramatica.
%start mainprogram

%%

mainprogram: sheet					{$$ = ProgramStart($1);} 
;

freeendlines: ENDLINE 						{$$ = EndLines(ONEENDLINE, NULL);}
			| ENDLINE ENDLINE freeendlines 	{$$ = EndLines(TWOORMOREENDLINES, $3);}
			| /**/  						{$$ = EndLines(ZEROENDLINES, NULL);}
;

sheet: NEW CHARAC DOSPTS INTEGER freeendlines body				{$$ = SheetFunction($4, CHARACTERSH, $6, NULL, NULL, NULL);}
	| NEW MOSNTER DOSPTS INTEGER freeendlines monsterbody		{$$ = SheetFunction($4, MOSNTERSH, NULL, $6, NULL, NULL);}
	| NEW ITEM DOSPTS INTEGER freeendlines itembody				{$$ = SheetFunction($4, ITEMSH, NULL, NULL, $6, NULL);}
	| NEW NPC DOSPTS INTEGER freeendlines npcbody				{$$ = SheetFunction($4, NPCSH, NULL, NULL, NULL, $6);}
;

body: name freeendlines level freeendlines class freeendlines background freeendlines playername freeendlines race freeendlines alignment freeendlines exppoints freeendlines restofbody	{$$ = CharacBodyFunction($1,$3,$5,$7,$9,$11,$13,$15,$17);}
;

name: NAME DOSPTS STR PUNTOCOMA		{$$ = nameCharacFunction($3);}
;

level: LVL DOSPTS INTEGER PUNTOCOMA		{$$ = levelCharacFunction($3);}
;

class: CLASS DOSPTS STR PUNTOCOMA		{$$ = classCharacFunction(NODUALCLASS, $3, NULL);}
	| DUALCLASS DOSPTS STR COMMA STR	{$$ = classCharacFunction(SIDUALCLASS, $3, $5);}
;

background: BKGR DOSPTS STR PUNTOCOMA 	{$$ = backgroundCharacFunction($3);}
;

playername: PLYNAME DOSPTS STR PUNTOCOMA	{$$ = playernameFunction($3);}
;

race: RACE DOSPTS STR PUNTOCOMA				{$$ = characraceFunction($3);}
;

alignment: ALIGN DOSPTS STR PUNTOCOMA		{$$ = alignmentCharacFunction($3);}
;

exppoints: EXP DOSPTS INTEGER PUNTOCOMA		{$$ = exppointsCharacFunction($3);}
;

restofbody: stats freeendlines armorclass freeendlines initiative freeendlines speed freeendlines proficiencies features equipment items backstory freeendlines spellbook 	{$$ = restofbodyCharacFunction($1,$3,$5,$7,$9,$10,$11,$12,$13,$15);}
		| /**/
;

stats: STATS DOSPTS INTEGER COMMA INTEGER COMMA INTEGER COMMA INTEGER COMMA INTEGER COMMA INTEGER PUNTOCOMA 	{$$ = statsSpreadFunction($3,$5,$7,$9,$11,$13);}
;

armorclass: ACLASS DOSPTS INTEGER PUNTOCOMA		{$$ = ArmorClassFunction($3);}
;

initiative: INIT DOSPTS INTEGER PUNTOCOMA		{$$ = InitiativeFunction($3);}
;

speed: SPD DOSPTS INTEGER PUNTOCOMA				{$$ = SpeedFunction($3);}
;

proficiencies: PROF DOSPTS STR DOSPTS STR COMMA INTEGER COMMA freeendlines proficiencies				{$$ = proficienciesChFunction(RECURSIVETYPE, $3, $5, $7, $10);}
			|  PROF DOSPTS STR DOSPTS STR COMMA INTEGER PUNTOCOMA freeendlines							{$$ = proficienciesChFunction(NORECURTYPE, $3, $5, $7, NULL);}
;

features: FEAT DOSPTS STR COMMA STR PUNTOCOMA freeendlines features				{$$ = featuresChFunction(RECURSIVETYPE, $3, $5, $8);}
		| FEAT DOSPTS STR COMMA STR PUNTOCOMA freeendlines						{$$ = featuresChFunction(NORECURTYPE, $3, $5, NULL);}
;

equipment: EQUIP DOSPTS STR COMMA STR COMMA STR PUNTOCOMA freeendlines equipment		{$$ = equipmentChFunction(RECURSIVETYPE, $3, $5, $7, $10);}
		|  EQUIP DOSPTS STR COMMA STR COMMA STR PUNTOCOMA freeendlines					{$$ = equipmentChFunction(NORECURTYPE, $3, $5, $7, NULL);}
;

items: ITEMS DOSPTS STR COMMA STR PUNTOCOMA freeendlines items								{$$ = itemsChFunction(RECURSIVETYPE, $3, $5, $8);}
		|  ITEMS DOSPTS STR COMMA STR PUNTOCOMA freeendlines								{$$ = itemsChFunction(NORECURTYPE, $3, $5, NULL);}
;

backstory: BACKSTORY DOSPTS STR PUNTOCOMA			{$$ = CharacBackStoryFunction($3);}
;

spellbook: spellcasterspells						{$$ = SpellbookFunction(SPBOOK, $1);}
		|  /**/										{$$ = SpellbookFunction(NOSPBOOK, NULL);}
;

spellcasterspells: SPLLBOOK DOSPTS INTEGER DOSPTS spell freeendlines spellcasterspells		{$$ = spellcasterspellsFunction(RECURSPELL, $5, $3, $7);}
				|  SPLLBOOK DOSPTS INTEGER DOSPTS spell										{$$ = spellcasterspellsFunction(ONLYONE, $5, $3, NULL);}
;
/*
levelsplb: spell freeendlines levelsplb				{$$ = LevelSplbFunction(RECURSIVELVLSPB, $1, $3);}
		| spell 									{$$ = LevelSplbFunction(ONLYONELEVELSPELL, $1, NULL);}
;*/

spell: STR COMMA STR COMMA DICEDMG PUNTOCOMA		{$$ = SpellFunction($1, $3, $5);}
;
//startofnpc
npcbody: merchantbody								{$$ = NPCBodyFunction($1);}
;

merchantbody: STORE DOSPTS store					{$$ = MerchantFunction($3);}
;

store: itemtosell INTEGER PUNTOCOMA freeendlines store		{$$ = StoreFunction(RECURSIVETYPE, $1, $2, $5);}
	| itemtosell INTEGER PUNTOCOMA							{$$ = StoreFunction(NORECURTYPE, $1, $2, NULL);}
;	

itemtosell: STR COMMA STR COMMA								{$$ = ItemstoSellFunction($1, $3);}
;
//end npc

//startitem
itembody: itemname freeendlines rarity freeendlines description freeendlines	{$$ = ItemBodyFunction($1, $5, $3);}
;

itemname: ITEMNAME DOSPTS STR PUNTOCOMA				{$$ = ItemNameFunction($3);}
;

rarity: RAR DOSPTS STR PUNTOCOMA					{$$ = ItemRarityFunction($3);}
;

description: DES DOSPTS STR PUNTOCOMA				{$$ = ItemDescriptionFunction($3);}
;
//enditem 

//startmonster
monsterbody: name freeendlines typeofmonster freeendlines stats freeendlines backstory freeendlines attacks spellbook		{$$ = MonsterBodyFunction($1, $3, $5, $7, $9, $10);}
;

typeofmonster: TYPEMONS DOSPTS STR PUNTOCOMA		{$$ = TypeofMonsterFunction($3);}
;

attacks: ATTACKS DOSPTS listofat					{$$ = MonsterAttacksFunction($3);}
;

listofat: STR COMMA STR COMMA DICEDMG PUNTOCOMA freeendlines listofat			{$$ = ListofAttacksFunction(RECURSIVETYPE, $5, $1, $3, $8);}
		| STR COMMA STR COMMA DICEDMG PUNTOCOMA	freeendlines							{$$ = ListofAttacksFunction(NORECURTYPE, $5, $1, $3, NULL);}
;
//endmonster

/*aux: startprograma 					{$$ = StartProgramAction($1);}
	| crearfunct freeendlines aux 	{$$ = CrearnuevafunctionAction($1);}
	;

crearfunct: FUNCT truedata CADENA OPEN_PARENTHESIS argumentosparadeclarar CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programa freeendlines CLOSE_LLAVES  {$$ = b("crearfunct     ");} 
			;

truedata: datatype 					{$$ = b("truedatadatatype     ");}
		| complexdatatype 			{$$ = b("truedatacomplexdata     ");}
		;


complexdatatype : STAT 				{$$ = b("STAT     ");}
				| STATS 			{$$ = b("STATS     ");}
				| ITEM 				{$$ = b("ITEM     ");}
				| MOSNTER 			{$$ = b("MOSNTER     ");}
				| MODIF 			{$$ = b("MODIF     ");}
				| CHARAC 			{$$ = b("CHARAC     ");}
				| PARTY 			{$$ = b("PARTY     ");}
				| NPC 				{$$ = b("NPC     ");}
				| RAZGO 			{$$ = b("RAZGO     ");}
				| SHEET  			{$$ = b("SHEET     ");}
				;

argumentosparadeclarar: truedata CADENA COMMA argumentosparadeclarar 		{$$ = b("argumetosparadeclararrec  ");}
						| truedata CADENA 									{$$ = b("argumetoultimoparadeclarar   ");}
						;

startprograma: INTDT START OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_LLAVES freeendlines trueprogram RET OPEN_PARENTHESIS INTEGER CLOSE_PARENTHESIS PUNTOCOMA freeendlines CLOSE_LLAVES 		{$$ =  b("startPrograma   ");}
				| INTDT START OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_LLAVES freeendlines RET OPEN_PARENTHESIS INTEGER CLOSE_PARENTHESIS PUNTOCOMA freeendlines CLOSE_LLAVES 				{$$ = b("startProgramavacio   ");}
				;

programa: trueprogram RET OPEN_PARENTHESIS CADENA CLOSE_PARENTHESIS PUNTOCOMA 		{$$ = b("programaretornocadena    ");}
		| trueprogram RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA 	{$$ = b("programaretornovalor    ");}
		| RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA								{$$ = b("programasintrueprogram    ");}
		;

programacond: trueprogram 																			{$$ = b("programacondsinret    ");}
			| trueprogram RET OPEN_PARENTHESIS CADENA CLOSE_PARENTHESIS PUNTOCOMA freeendlines		{$$ = b("programacondconretcadea    ");}
			| trueprogram RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA freeendlines				{$$ = b("programacondconretvalor    ");}
			| RET OPEN_PARENTHESIS valorrel CLOSE_PARENTHESIS PUNTOCOMA freeendlines								{$$ = b("programacondconsoloret    ");}
			;

trueprogram: variableoper freeendlines								{$$ =  b("variableoper  ");}
			|variableoper freeendlines trueprogram 					{$$ = b("variableoper truep  ");} 	
			| returnfunction PUNTOCOMA freeendlines trueprogram 	{$$ = b("returnfunction truep  ");}	
			| aconditional freeendlines trueprogram 				{$$ = b("aconditional truep  ");}	
			| returnfunction PUNTOCOMA freeendlines					{$$ = b("returnfunction  ");}	
			| aconditional freeendlines								{$$ = b("aconditional  ");}	
			;

variableoper: avariable 		{$$ =  b("variableopertrue  ");}
			;

avariable: declararvar 				{$$ =  b("declararvar  ");}
		| complexvar 				{$$ = b("complexvar  ");}
		| complexch 				{$$ = b("complexch  ");}
		| declarearray 				{$$ = b("declarearray  ");}
		| declarearraycmpx			{$$ = b("declarearraycmpx  ");}
		| asignsimplearr 			{$$ = b("assignsimplearray  ");}
		| asigncpxarr				{$$ = b("assigncomplexarray  ");}
		| complexdeclar           	{$$ = b("complexdeclar  ");}
		;

declararvar: datatype CADENA IGUAL valorvar PUNTOCOMA 	{$$ =  b("declararvartotal  ");}
			| datatype CADENA PUNTOCOMA 				{$$ = b("declararvarsimple  ");}
			;

valorvar: subvalorvar 									{$$ =  b("subvalorvar  ");}
		| simplevalues operation valorvar 				{$$ = b("opsimplevalues  ");}
		| returnfunction operation valorvar 			{$$ = b("retfunoper  ");}
		| OPEN_PARENTHESIS valorvar CLOSE_PARENTHESIS 	{$$ = b("valorvarparentesis  ");}
		| CADENA operation valorvar 					{$$ = b("cadenaoperacionvalorvar  ");}
		;

subvalorvar: simplevalues 		{$$ = b("simplevaluessubvalorar  ");}
			| returnfunction 	{$$ = b("returnfunctionsub  ");}
			| CADENA 			{$$ = b("cadenasub  ");}
			| DICEDMG 			{$$ = b("dicedmgsub  ");}
			| ALPHAVAL          {$$ = b("alphavalsub  ");}
			;

simplevalues: INTEGER 				{$$ = b("integer  ");}
			| STR 	 				{$$ = b("string  ");}
			;

arrayvalues: INTEGER				{$$ = b("integerforarrays  ");}
			| CADENA				{$$ = b("cadenaforarrays  ");}
			;

datatype: INTDT 					{$$ = b("IntegerType  ");}
		| STRDT  					{$$ = b("StringType  ");}
		;
*/

/*
operation: ADD 				{$$ = b("suma  ");}
		| SUB 				{$$ = b("resta  ");}
		| MUL 				{$$ = b("multiplicacion   ");}
		| DIV    			{$$ = b("division   ");}
		;

asignarvar: CADENA IGUAL valorvar PUNTOCOMA 	{$$ = b("aignarvarcadenavalor  ");}
		;

checkearvar: valorrel operrel valorrel 		{$$ = b("checkarvar   ");}
			| CADENA operrel CADENA  		{$$ = b("checkarvar2   ");}
			| CADENA operrel valorrel		{$$ = b("checkarvar3   ");}
			;

valorrel: simplevalues 										{$$ = b("simplevaluesvalorrel  ");}
		| returnfunction 									{$$ = b("returnfuncvalorrel  ");}
		| OPEN_PARENTHESIS asignarvar CLOSE_PARENTHESIS 	{$$ = b("parentesisvalorrel  ");}
		;

operrel: GREATER		{$$ = b("greater  ");} 
		| LESSER 		{$$ = b("lesser  ");}
		| GREATorEQ 	{$$ = b("greateroreq  ");}
		| LESSorEQ 		{$$ = b("lesseroreq   ");}
		| EQUA 			{$$ = b("equals  ");}
		| NOTEQ  		{$$ = b("noteq  ");}
		;

complexvar: complexdatatype CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA 	{$$ = b("complexvariniti  ");}
		| complexdatatype CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS CLOSE_PARENTHESIS PUNTOCOMA					{$$ = b("complexvarinitisinarg  ");}
		| complexdatatype CADENA PUNTOCOMA 																				{$$ = b("complexvarsininit  ");}
		;

complexdeclar: CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA 	{$$ = b("complexvariniti  ");}
			| CADENA IGUAL NEW complexdatatype OPEN_PARENTHESIS CLOSE_PARENTHESIS PUNTOCOMA					{$$ = b("complexvardeclarsinarg  ");}
				;

complexch: CADENA POINT complexch 																			{$$ = b("complexch2  ");}
		| asignarvar 																						{$$ = b("complexch3  ");}
		;

declarearray: datatype CADENA OPEN_CORCHETES CLOSE_CORCHETES IGUAL NEW datatype OPEN_CORCHETES INTEGER CLOSE_CORCHETES PUNTOCOMA 		{$$ = b("declarearray  ");}
				;

declarearraycmpx: complexdatatype CADENA OPEN_CORCHETES CLOSE_CORCHETES IGUAL NEW complexdatatype OPEN_CORCHETES INTEGER CLOSE_CORCHETES PUNTOCOMA 		{$$ = b("declarearraycmpx  ");}
				;

asignsimplearr: CADENA OPEN_CORCHETES arrayvalues CLOSE_CORCHETES IGUAL valorvar PUNTOCOMA 		{$$ = b("assignsimplarrvalor  ");}
			;

asigncpxarr: CADENA OPEN_CORCHETES arrayvalues CLOSE_CORCHETES IGUAL NEW complexdatatype OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS PUNTOCOMA 				{$$ = b("assigncmparr1  ");}
			| CADENA OPEN_CORCHETES arrayvalues CLOSE_CORCHETES IGUAL NEW complexdatatype OPEN_PARENTHESIS CLOSE_PARENTHESIS PUNTOCOMA							{$$ = b("assigncmparrsinarg  ");}
			| CADENA OPEN_CORCHETES arrayvalues CLOSE_CORCHETES POINT complexch 																				{$$ = b("assigncmparr3  ");}
			| CADENA OPEN_CORCHETES arrayvalues CLOSE_CORCHETES POINT complexdeclar																				{$$ = b("assigncmparr2  ");}
			;

returnfunction: CADENA OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS  						{$$ = b("returnfunct3  ");}
			| functionnames OPEN_PARENTHESIS argumentos CLOSE_PARENTHESIS 					{$$ = b("retunrfunct4  ");}
			;

argumentos: valorvar 						{$$ = b("argvalor1  ");}
		| valorvar COMMA argumentos		{$$ = b("argvalor2omas  ");}
		;

functionnames: PRINT 			{$$ = b("f1  ");}
			| CCHAR 			{$$ = b("f2  ");}
			| CMONS 			{$$ = b("f3   ");}
			| CRACE 			{$$ = b("f4   ");}
			| CCLASS 			{$$ = b("f5   ");}
			| CITEM 			{$$ = b("f6   ");}
			| CNPC 				{$$ = b("f7   ");}
			| CFEAT 			{$$ = b("f8    ");}
			| CPARTY 			{$$ = b("f9    ");}
			| ASTAT 			{$$ = b("f10    ");}
			| ACINFO 			{$$ = b("f11    ");}
			| ACBACK 			{$$ = b("f12    ");}
			| ASPBK 			{$$ = b("f4    ");}
			| ASTSPBK 			{$$ = b("f4    ");}
			| ARMOD 			{$$ = b("f4    ");}
			| ACMOD 			{$$ = b("f4    ");}
			| ANPCINF 			{$$ = b("f4    ");}
			| AMINF 			{$$ = b("f4    ");}
			| AITDES 			{$$ = b("f4    ");}
			| AITINF 			{$$ = b("f4    ");}
			| APMEM 			{$$ = b("f4    ");}
			| RMPMEM 			{$$ = b("f4    ");}
			| CHEXP 			{$$ = b("f4    ");}
			| CHCLEV 			{$$ = b("f4    ");}
			| CHCLASS 			{$$ = b("f4    ");}
			| CHLEV 			{$$ = b("f4    ");}
			| CHRACE 			{$$ = b("f4    ");}
			| BHCMULCL 			{$$ = b("f4    ");}
			| CHITCLASS 		{$$ = b("f4    ");}
			| CHITRAR 			{$$ = b("f4    ");}
			| CHITREQ 			{$$ = b("f4    ");}
			| CHNPCCLASS 		{$$ = b("f4    ");}
			| EQITEM 			{$$ = b("f4    ");}
			| UEQIT 			{$$ = b("f4    ");}
			| CHKCLASS 			{$$ = b("f4		");}
			| CHKLEVL 			{$$ = b("f4		");}
			| CHKEXP 			{$$ = b("f4		");}
			| CHKSPLS 			{$$ = b("f4		");}
			| CHKITEM 			{$$ = b("f4		");}
			| CHKRACE 			{$$ = b("f4		");}
			| CHKITREST 		{$$ = b("f4		");}
			| CHKFEAT 			{$$ = b("f4		");}
			| CHKMONSINF 		{$$ = b("f4    ");}
			| CHKPARTY 			{$$ = b("f4    ");}
			| EXPSH 			{$$ = b("f4   ");}
			| GETSH 			{$$ = b("f4   ");}
			| ACTSH 			{$$ = b("f4   ");}
			| CHTPSH 			{$$ = b("f4   ");}
			| CHKSTATS 			{$$ = b("f4   ");}
			| CHKSTAT 			{$$ = b("f4   ");}
			;

aconditional: ifelse 		{$$ = b("ifelse  ");}
			| dowhile 		{$$ = b("dowhile  ");}
			| foriter		{$$ = b("for  ");}
			;

ifelse: IFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES elseiter		{$$ = b("ifelsepadreconhijo  ");}
		|IFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES					{$$ = b("ifelsepadre  ");} 
		;

elseiter: ELSECOND OPEN_LLAVES freeendlines programacond CLOSE_LLAVES 																{$$ = b("elseitersincond  ");}
		| ELSIFCOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES elseiter			{$$ = b("elseiterconcond  ");}
		;

condition: checkearvar AND condition 								{$$ = b("condition and  ");}
		| checkearvar OR condition 									{$$ = b("condition or  ");}
		| checkearvar 												{$$ = b("condition check  ");}
		| OPEN_PARENTHESIS condition CLOSE_PARENTHESIS  			{$$ = b("condition parentesis  ");}
		;

dowhile: DOCOND OPEN_LLAVES freeendlines programacond  CLOSE_LLAVES WHILECOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS PUNTOCOMA  				{$$ = b("dowhile1  ");}
		| WHILECOND OPEN_PARENTHESIS condition CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond  CLOSE_LLAVES								{$$ = b("while  ");}
		;

foriter: FORCOND OPEN_PARENTHESIS argfor1 PUNTOCOMA condition PUNTOCOMA argfor3 CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES  	{$$ = b("for1  ");}
		| FORCOND OPEN_PARENTHESIS PUNTOCOMA condition PUNTOCOMA CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES    				{$$ = b("for2  ");}
		| FORCOND OPEN_PARENTHESIS argfor1 PUNTOCOMA condition PUNTOCOMA CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES 			{$$ = b("for3  ");}
		| FORCOND OPEN_PARENTHESIS PUNTOCOMA condition PUNTOCOMA argfor3 CLOSE_PARENTHESIS OPEN_LLAVES freeendlines programacond CLOSE_LLAVES 			{$$ = b("for4  ");}
		;

argfor1: asignarvar 									{$$ = b("argfor1asignvar  ");}
		| datatype CADENA IGUAL valorvar 				{$$ = b("argfor1valor  ");}
		;

argfor3: asignarvar 											{$$ = b("argfor3asignavar  ");}
		| simplevalues operation valorvar 						{$$ = b("argfor3simplevalues  ");}
		| returnfunction operation valorvar 					{$$ = b("argfor3returnfunction  ");}
		| OPEN_PARENTHESIS valorvar CLOSE_PARENTHESIS 			{$$ = b("argfor3parentesis      ");}
		| CADENA IGUAL valorvar									{$$ = b("argfor3default  ");}
		;
*/
%%