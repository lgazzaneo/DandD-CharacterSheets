#include "../../backend/support/logger.h"
#include "flex-actions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Implementación de "flex-actions.h".
 *
 * Cada función debe realizar 2 operaciones básicas para lograr el streaming
 * de tokens hacia Bison:
 *
 *	1) Computar los atributos del token y almacenarlos donde sea conveniente
 *		(en la tabla de símbolos, en "yylval", o en ambos).
 *	2) Retornar el token que identifica el terminal identificado.
 *
 * Bison utilizará el token retornado en el punto (2) para matchear dicho
 * terminal en la gramática. Por otro lado, el valor almacenado en "yylval" es
 * el que Bison proveerá como valor semántico al realizar una reducción
 * (mediante $1, $2, $3, etc.).
 */

void BeginCommentPatternAction() {
	LogDebug("BeginCommentPatternAction.");
}

void EndCommentPatternAction() {
	LogDebug("EndCommentPatternAction.");
}

token AdditionOperatorPatternAction(const char * lexeme) {
	LogDebug("AdditionOperatorPatternAction: '%s'.", lexeme);
	yylval.token = ADD;
	return ADD;
}

token CloseParenthesisPatternAction(const char * lexeme) {
	LogDebug("CloseParenthesisPatternAction: '%s'.", lexeme);
	yylval.token = CLOSE_PARENTHESIS;
	return CLOSE_PARENTHESIS;
}

token CloseLlavesPatternAction(const char * lexeme) {
	LogDebug("CloseLlavesPatternAction: '%s'.", lexeme);
	yylval.token = CLOSE_LLAVES;
	return CLOSE_LLAVES;
}

token CloseCorchetesPatternAction(const char * lexeme) {
	LogDebug("CloseCorchetesPatternAction: '%s'.", lexeme);
	yylval.token = CLOSE_CORCHETES;
	return CLOSE_CORCHETES;
}

token DivisionOperatorPatternAction(const char * lexeme) {
	LogDebug("DivisionOperatorPatternAction: '%s'.", lexeme);
	yylval.token = DIV;
	return DIV;
}

token IntegerPatternAction(const char * lexeme, const int length) {
	LogDebug("IntegerPatternAction: '%s' (length = %d).", lexeme, length);
	// Reservar memoria para el lexema identificado y el \0 final:
    char * text = (char *) calloc(length + 1, sizeof(char));
    // Copiar el lexema y \0 para evitar segmentation-faults:
    strncpy(text, lexeme, length);
	Constant * aux = malloc(sizeof(Constant));
    // Convertir el lexema en un entero de verdad:
    aux->value = atoi(text);
	yylval.value = aux;
    // Liberar la memoria, ya que solo nos interesa el resultado de atoi(.)
    // (no debería llamar a free(.), si “text” debe ser utilizado en Bison):
    free(text);

	//yylval.token = INTEGER;
	return INTEGER;
}

token AlphavalPatternAction(const char * lexeme, const int length) {
	LogDebug("AlphavalPatternAction: '%s' (length = %d).", lexeme, length);
	yylval.token = ALPHAVAL;
	return ALPHAVAL;
}

token DiceDamage(const char * lexeme, const int length) {
	LogDebug("DiceDamage: '%s'", lexeme);
	// Reservar memoria para el lexema identificado y el \0 final:
    char * text = (char *) calloc(length + 1, sizeof(char));
    // Copiar el lexema y \0 para evitar segmentation-faults:
    strncpy(text, lexeme, length);
    
	int i = 0;
	int cambio = 1;
	while (text[i] != 'd'){
		i++;
	}
	int j = i + 1;
	while (text[j] != 0 || text[j] != '+' || text[j] != '-'){
		j++;
	}
	if (text[j] == '+' || text[j] != '-'){
		if(text[j] == '-')
			cambio = -1;
		int x = j + 1;
		while (text[x] != 0){
			x++;
		}
		x = x - j - 1;
	}
	j = j - i - 1;
	
	char delimitadores[] = "+-d ";
	char * tok;

	DiceDmg * aux2 = malloc(sizeof(DiceDmg));

	tok = strtok(text, delimitadores);
	if (tok != NULL)
		aux2->cantDice = atoi(tok);
	tok = strtok(NULL, delimitadores);
	if(tok != NULL)
		aux2->typeofdice = atoi(tok);
	tok = strtok(NULL, delimitadores);
	if(tok != NULL)
		aux2->modif = cambio * atoi(tok);

	yylval.damage = aux2;
    // Liberar la memoria, ya que solo nos interesa el resultado de atoi(.)
    // (no debería llamar a free(.), si “text” debe ser utilizado en Bison):
    free(text);
	//yylval.token = DICEDMG;
	return DICEDMG;
}


token IntegerDataTypeAction(const char * lexeme) {
	LogDebug("IntegerDataTypeAction: '%s'", lexeme);
	yylval.token = INTDT;
	return INTDT;
}


token StringPatternAction(const char * lexeme, const int length) {
	LogDebug("StringPatternAction: '%s'", lexeme);
	objecttext * aux3 = malloc(sizeof(objecttext));
	aux3->text = calloc(length + 1, 1);
	strncpy(aux3->text, lexeme, length);
	aux3->len = length;
	yylval.text = aux3;
	//yylval.token = STR;
	return STR;
}

token StringTypeDataAction(const char * lexeme) {
	LogDebug("StringTypeDataAction: '%s'", lexeme);
	yylval.token = STRDT;
	return STRDT;
}

token CommaAction(const char * lexeme) {
	LogDebug("CommaAction: '%s'", lexeme);
	yylval.token = COMMA;
	return COMMA;
}

token OROperator(const char * lexeme) {
	LogDebug("OrOperator: '%s'", lexeme);
	yylval.token = OR;
	return OR;
}

token ANDOperator(const char * lexeme) {
	LogDebug("AndOperator: '%s'", lexeme);
	yylval.token = AND;
	return AND;
}

token MultiplicationOperatorPatternAction(const char * lexeme) {
	LogDebug("MultiplicationOperatorPatternAction: '%s'.", lexeme);
	yylval.token = MUL;
	return MUL;
}

token OpenParenthesisPatternAction(const char * lexeme) {
	LogDebug("OpenParenthesisPatternAction: '%s'.", lexeme);
	yylval.token = OPEN_PARENTHESIS;
	return OPEN_PARENTHESIS;
}

token OpenLlavesPatternAction(const char * lexeme) {
	LogDebug("OpenLlavesPatternAction: '%s'.", lexeme);
	yylval.token = OPEN_LLAVES;
	return OPEN_LLAVES;
}

token OpenCorchetesPatternAction(const char * lexeme) {
	LogDebug("OpenCorchetesPatternAction: '%s'.", lexeme);
	yylval.token = OPEN_CORCHETES;
	return OPEN_CORCHETES;
}

token SubtractionOperatorPatternAction(const char * lexeme) {
	LogDebug("SubtractionOperatorPatternAction: '%s'.", lexeme);
	yylval.token = SUB;
	return SUB;
}

token UnknownPatternAction(const char * lexeme, const int length) {
	LogDebug("UnknownPatternAction: '%s' (length = %d).", lexeme, length);
	yylval.token = UNKNOWN_ERROR;
	// Al emitir este token, el compilador aborta la ejecución.
	return UNKNOWN_ERROR;
}

token PuntoComa(const char * lexeme){
	LogDebug("PuntoComaOperator: %s", lexeme);
	yylval.token = PUNTOCOMA;
	return PUNTOCOMA;
}

token EndlineAction(const char * lexeme){
	LogDebug("EndlineAction");
	yylval.token = ENDLINE;
	return ENDLINE;
}

/*
token CCharAction(const char * lexeme){
	LogDebug("CreateCharAction: %s", lexeme);
	yylval.token = CCHAR;
	return CCHAR;
}
*/
token Cadena(const char * lexeme){
	LogDebug("Cadena: %s", lexeme);
	yylval.token = CADENA;
	return CADENA;
}

token DosPuntosAction(const char * lexeme){
	LogDebug("dospts: %s", lexeme);
	yylval.token = DOSPTS;
	return DOSPTS;
}

token NameAction(const char * lexeme, const int lenght){
	LogDebug("nameAction: %s", lexeme);
	yylval.token = NAME;
	return NAME;
}
token LevelAction(const char * lexeme, const int lenght){
	LogDebug("LevelAction: %s", lexeme);
	yylval.token = LVL;
	return LVL;
}
token ClassAction(const char * lexeme, const int lenght){
	LogDebug("ClassAction: %s", lexeme);
	yylval.token = CLASS;
	return CLASS;
}
token DualClassAction(const char * lexeme, const int lenght){
	LogDebug("DualClassAction: %s", lexeme);
	yylval.token = DUALCLASS;
	return DUALCLASS;
}
token BackgroundAction(const char * lexeme, const int lenght){
	LogDebug("BackgroundAction: %s", lexeme);
	yylval.token = BKGR;
	return BKGR;
}
token PlayerNameAction(const char * lexeme, const int lenght){
	LogDebug("PlayernameAction: %s", lexeme);
	yylval.token = PLYNAME;
	return PLYNAME;
}
token RaceAction(const char * lexeme, const int lenght){
	LogDebug("RaceAction: %s", lexeme);
	yylval.token = RACE;
	return RACE;
}
token AlignmentAction(const char * lexeme, const int lenght){
	LogDebug("AlignmentAction: %s", lexeme);
	yylval.token = ALIGN;
	return ALIGN;
}
token ExperienceAction(const char * lexeme, const int lenght){
	LogDebug("ExpAction: %s", lexeme);
	yylval.token = EXP;
	return EXP;
}
token ACAction(const char * lexeme, const int lenght){
	LogDebug("ACAction: %s", lexeme);
	yylval.token = ACLASS;
	return ACLASS;
}
token InitiativeAction(const char * lexeme, const int lenght){
	LogDebug("InititiveAction: %s", lexeme);
	yylval.token = INIT;
	return INIT;
}
token SpeedAction(const char * lexeme, const int lenght){
	LogDebug("SpeedAction: %s", lexeme);
	yylval.token = SPD;
	return SPD;
}
token ProficiencyAction(const char * lexeme, const int lenght){
	LogDebug("ProficienciesAction: %s", lexeme);
	yylval.token = PROF;
	return PROF;
}
token FeaturesAction(const char * lexeme, const int lenght){
	LogDebug("FeaturesAction: %s", lexeme);
	yylval.token = FEAT;
	return FEAT;
}
token EquipmentAction(const char * lexeme, const int lenght){
	LogDebug("EquipmentAction: %s", lexeme);
	yylval.token = EQUIP;
	return EQUIP;
}
token ItemsAction(const char * lexeme, const int lenght){
	LogDebug("ItemsAction: %s", lexeme);
	yylval.token = ITEMS;
	return ITEMS;
}
token BackstoryAction(const char * lexeme, const int lenght){
	LogDebug("BackstoryAction: %s", lexeme);
	yylval.token = BACKSTORY;
	return BACKSTORY;
}
token SpellcasterBookAction(const char * lexeme, const int lenght){
	LogDebug("SpellBookAction: %s", lexeme);
	yylval.token = SPLLBOOK;
	return SPLLBOOK;
}
token StoreAction(const char * lexeme, const int lenght){
	LogDebug("StoreAction: %s", lexeme);
	yylval.token = STORE;
	return STORE;
}
token ItemnameAction(const char * lexeme, const int lenght){
	LogDebug("ItemNameAction: %s", lexeme);
	yylval.token = ITEMNAME;
	return ITEMNAME;
}
token RarityAction(const char * lexeme, const int lenght){
	LogDebug("RarityAction: %s", lexeme);
	yylval.token = RAR;
	return RAR;
}
token DescriptionAction(const char * lexeme, const int lenght){
	LogDebug("DescriptionAction: %s", lexeme);
	yylval.token = DES;
	return DES;
}
token TypeMonsterAction(const char * lexeme, const int lenght){
	LogDebug("TypeMonsterAction: %s", lexeme);
	yylval.token = TYPEMONS;
	return TYPEMONS;
}
token AttacksAction(const char * lexeme, const int lenght){
	LogDebug("AttacksAction: %s", lexeme);
	yylval.token = ATTACKS;
	return ATTACKS;
}
/*
token CMonsAction(const char * lexeme){
	LogDebug("CreateMosnterAction: %s", lexeme);
	yylval.token = CMONS;
	return CMONS;
}

token CRaceAction(const char * lexeme){
	LogDebug("CreateRaceAction: %s", lexeme);
	yylval.token = CRACE;
	return CRACE;
}

token CClassAction(const char * lexeme){
	LogDebug("CreateClassAction: %s", lexeme);
	yylval.token = CCLASS;
	return CCLASS;
}

token CItemAction(const char * lexeme){
	LogDebug("CreateItemAction: %s", lexeme);
	yylval.token = CITEM;
	return CITEM;
}

token CNPCAction(const char * lexeme){
	LogDebug("CreateNPCAction: %s", lexeme);
	yylval.token = CNPC;
	return CNPC;
}

token CFeatureAction(const char * lexeme){
	LogDebug("CreateFeatureAction: %s", lexeme);
	yylval.token = CFEAT;
	return CFEAT;
}

token CPartyAction(const char * lexeme){
	LogDebug("CreatePartyAction: %s", lexeme);
	yylval.token = CPARTY;
	return CPARTY;
}

token AddStatsAction(const char * lexeme){
	LogDebug("AddStatsAction: %s", lexeme);
	yylval.token = ASTAT;
	return ASTAT;
}

token AddCharcInfoAction(const char * lexeme){
	LogDebug("AddCharcInfoAction: %s", lexeme);
	yylval.token = ACINFO;
	return ACINFO;
}

token AddCharcBackgAction(const char * lexeme){
	LogDebug("AddCharacBackgroundAction: %s", lexeme);
	yylval.token = ACBACK;
	return ACBACK;
}

token AddSpellbookAction(const char * lexeme){
	LogDebug("AddSpellbookAction: %s", lexeme);
	yylval.token = ASPBK;
	return ASPBK;
}

token AddSpelltoSpellbookAction(const char * lexeme){
	LogDebug("AddSpelltoSpellbookAction: %s", lexeme);
	yylval.token = ASTSPBK;
	return ASTSPBK;
}

token AddRaceModifAction(const char * lexeme){
	LogDebug("AddRaceModifierAction: %s", lexeme);
	yylval.token = ARMOD;
	return ARMOD;
}

token AddClassModifAction(const char * lexeme){
	LogDebug("AddClassModifierAction: %s", lexeme);
	yylval.token = ACMOD;
	return ACMOD;
}

token AddNPCInfoAction(const char * lexeme){
	LogDebug("AddNPCInfoAction: %s", lexeme);
	yylval.token = ANPCINF;
	return ANPCINF;
}

token AddMonsterInfoAction(const char * lexeme){
	LogDebug("AddMonsterInfoAction: %s", lexeme);
	yylval.token = AMINF;
	return AMINF;
}

token AddItemDescAction(const char * lexeme){
	LogDebug("AddItemDescriptionAction: %s", lexeme);
	yylval.token = AITDES;
	return AITDES;
}

token AddItemInfoAction(const char * lexeme){
	LogDebug("AddItemInfoAction: %s", lexeme);
	yylval.token = AITINF;
	return AITINF;
}

token AddPartyMemAction(const char * lexeme){
	LogDebug("AddPartyMemberAction: %s", lexeme);
	yylval.token = APMEM;
	return APMEM;
}

token RemPartyMemAction(const char * lexeme){
	LogDebug("RemovePartyMemberAction: %s", lexeme);
	yylval.token = RMPMEM;
	return RMPMEM;
}

token ChangeExpAction(const char * lexeme){
	LogDebug("ChangeExpAction: %s", lexeme);
	yylval.token = CHEXP;
	return CHEXP;
}

token ChangeLevelAction(const char * lexeme){
	LogDebug("ChangeLevelAction: %s", lexeme);
	yylval.token = CHLEV;
	return CHLEV;
}

token ChangeClassLevAction(const char * lexeme){
	LogDebug("ChangeClassLevelAction: %s", lexeme);
	yylval.token = CHCLEV;
	return CHCLEV;
}

token ChangeClassAction(const char * lexeme){
	LogDebug("ChangeClassAction: %s", lexeme);
	yylval.token = CHCLASS;
	return CHCLASS;
}

token ChangeRaceAction(const char * lexeme){
	LogDebug("ChangeRaceAction: %s", lexeme);
	yylval.token = CHRACE;
	return CHRACE;
}

token BecomeMultiClassAction(const char * lexeme){
	LogDebug("BecomeMultiClassAction: %s", lexeme);
	yylval.token = BHCMULCL;
	return BHCMULCL;
}

token ChangeItemClassAction(const char * lexeme){
	LogDebug("ChangeItemClassAction: %s", lexeme);
	yylval.token = CHITCLASS;
	return CHITCLASS;
}

token ChangeItemRarAction(const char * lexeme){
	LogDebug("ChangeItemRarityAction: %s", lexeme);
	yylval.token = CHITRAR;
	return CHITRAR;
}

token ChangeItemReqAction(const char * lexeme){
	LogDebug("ChangeItemRequierementsAction: %s", lexeme);
	yylval.token = CHITREQ;
	return CHITREQ;
}

token ChangeNPCClassAction(const char * lexeme){
	LogDebug("ChangeNPCClassAction: %s", lexeme);
	yylval.token = CHNPCCLASS;
	return CHNPCCLASS;
}

token EqItemAction(const char * lexeme){
	LogDebug("EquipItemAction: %s", lexeme);
	yylval.token = EQITEM;
	return EQITEM;
}

token UneqItemAction(const char * lexeme){
	LogDebug("UnequipItemAction: %s", lexeme);
	yylval.token = UEQIT;
	return UEQIT;
}

token ChkClassAction(const char * lexeme){
	LogDebug("CheckClassAction: %s", lexeme);
	yylval.token = CHKCLASS;
	return CHKCLASS;
}

token ChkLevelAction(const char * lexeme){
	LogDebug("CheckLevelAction: %s", lexeme);
	yylval.token = CHKLEVL;
	return CHKLEVL;
}

token ChkExpAction(const char * lexeme){
	LogDebug("CheckExpAction: %s", lexeme);
	yylval.token = CHKEXP;
	return CHKEXP;
}

token ChkSpellsAction(const char * lexeme){
	LogDebug("CheckSpellsAction: %s", lexeme);
	yylval.token = CHKSPLS;
	return CHKSPLS;
}

token ChkItemAction(const char * lexeme){
	LogDebug("CheckItemAction: %s", lexeme);
	yylval.token = CHKITEM;
	return CHKITEM;
}

token ChkItemRestrAction(const char * lexeme){
	LogDebug("CheckItemRestrictionAction: %s", lexeme);
	yylval.token = CHKITREST;
	return CHKITREST;
}

token ChkRaceDescAction(const char * lexeme){
	LogDebug("CheckRaceDescriptonAction: %s", lexeme);
	yylval.token = CHKRACE;
	return CHKRACE;
}

token ChkFeatAction(const char * lexeme){
	LogDebug("CheckFeatureAction: %s", lexeme);
	yylval.token = CHKFEAT;
	return CHKFEAT;
}

token ChkMonsInfAction(const char * lexeme){
	LogDebug("CheckMonsterInfoAction: %s", lexeme);
	yylval.token = CHKMONSINF;
	return CHKMONSINF;
}

token ChkPartyAction(const char * lexeme){
	LogDebug("CheckPartyAction: %s", lexeme);
	yylval.token = CHKPARTY;
	return CHKPARTY;
}

token ChkStat(const char * lexeme){
	LogDebug("ChkStat: %s", lexeme);
	yylval.token = CHKSTAT;
	return CHKSTAT;
}

token ChkStats(const char * lexeme){
	LogDebug("ChkStats: %s", lexeme);
	yylval.token = CHKSTATS;
	return CHKSTATS;
}

token ExportSheetAction(const char * lexeme){
	LogDebug("ExportSheetAction: %s", lexeme);
	yylval.token = EXPSH;
	return EXPSH;
}

token GetSheetAction(const char * lexeme){
	LogDebug("GetSheetAction: %s", lexeme);
	yylval.token = GETSH;
	return GETSH;
}

token AddCharctoSheet(const char * lexeme){
	LogDebug("AddCharctoSheet: %s", lexeme);
	yylval.token = ACTSH;
	return ACTSH;
}

token ChangeTempSheet(const char * lexeme){
	LogDebug("AddCharctoSheet: %s", lexeme);
	yylval.token = CHTPSH;
	return CHTPSH;
}
*/
token FunctionPatternAction(const char * lexeme){
	LogDebug("FunctionPatternAction: %s", lexeme);
	yylval.token = FUNCT;
	return FUNCT;
}

token NewPatternAction(const char * lexeme){
	LogDebug("NewPatternAction: %s", lexeme);
	yylval.token = NEW;
	return NEW;
}

token StartPatternAction(const char * lexeme){
	LogDebug("StartPatternAction: %s", lexeme);
	yylval.token = START;
	return START;
}


token CharcterTypePatternAction(const char * lexeme){
	LogDebug("CharaterTypePatternAction: %s", lexeme);
	yylval.token = CHARAC;
	return CHARAC;
}

token ItemTypePatternAction(const char * lexeme){
	LogDebug("ItemTypePatternAction: %s", lexeme);
	yylval.token = ITEM;
	return ITEM;
}

token StatsTypePatternAction(const char * lexeme){
	LogDebug("StatsTypePatternAction: %s", lexeme);
	yylval.token = STATS;
	return STATS;
}


token NPCTypePatternAction(const char * lexeme){
	LogDebug("NPCTypePatternAction: %s", lexeme);
	yylval.token = NPC;
	return NPC;
}

token MonsterTypePatternAction(const char * lexeme){
	LogDebug("MonsterTypePatternAction: %s", lexeme);
	yylval.token = MOSNTER;
	return MOSNTER;
}

token RazgoTypePatternAction(const char * lexeme){
	LogDebug("RazgoTypePatternAction: %s", lexeme);
	yylval.token = RAZGO;
	return RAZGO;
}

token ModifTypePatternAction(const char * lexeme){
	LogDebug("ModificatorTypePatternAction: %s", lexeme);
	yylval.token = MODIF;
	return MODIF;
}

token SheetTypePatternAction(const char * lexeme){
	LogDebug("SheetTypePatternAction: %s", lexeme);
	yylval.token = SHEET;
	return SHEET;
}
/*
token IfConditionalPatternAction(const char * lexeme){
	LogDebug("IfConditionalPatternAction: %s", lexeme);
	yylval.token = IFCOND;
	return IFCOND;
}

token ElseConditionalPatternAction(const char * lexeme){
	LogDebug("ElseConditionalPatternAction: %s", lexeme);
	yylval.token = ELSECOND;
	return ELSECOND;
}

token ElsifConditionalPatternAction(const char * lexeme){
	LogDebug("ElsifConditionalPatternAction: %s", lexeme);
	yylval.token = ELSIFCOND;
	return ELSIFCOND;
}

token DoConditionalPatternAction(const char * lexeme){
	LogDebug("DoConditionalPatternAction: %s", lexeme);
	yylval.token = DOCOND;
	return DOCOND;
}

token WhileConditionalPatternAction(const char * lexeme){
	LogDebug("WhileConditionalPatternAction: %s", lexeme);
	yylval.token = WHILECOND;
	return WHILECOND;
}

token ForConditionalPatternAction(const char * lexeme){
	LogDebug("ForConditionalPatternAction: %s", lexeme);
	yylval.token = FORCOND;
	return FORCOND;
}

token PrintAction(const char * lexeme){
	LogDebug("PrintAction: %s", lexeme);
	yylval.token = PRINT;
	return PRINT;
}

token GreaterorEqualComparativeAction(const char * lexeme){
	LogDebug("GreaterorEqualComparativeAction: %s", lexeme);
	yylval.token = GREATorEQ;
	return GREATorEQ;
}

token GreaterComparativeAction(const char * lexeme){
	LogDebug("GreaterComparativeAction: %s", lexeme);
	yylval.token = GREATER;
	return GREATER;
}

token LesserorEqualComparativeAction(const char * lexeme){
	LogDebug("LesserorEqualComparativeAction: %s", lexeme);
	yylval.token = LESSorEQ;
	return LESSorEQ;
}

token LesserComparativeAction(const char * lexeme){
	LogDebug("LesserComparativeAction: %s", lexeme);
	yylval.token = LESSER;
	return LESSER;
}

token EqualsComparativeAction(const char * lexeme){
	LogDebug("EqualsComparativeAction: %s", lexeme);
	yylval.token = EQUA;
	return EQUA;
}

token NotEqualsComparativeAction(const char * lexeme){
	LogDebug("NotEqualsComparativeAction: %s", lexeme);
	yylval.token = NOTEQ;
	return NOTEQ;
}
*/
void IgnoredPatternAction(const char * lexeme, const int length) {
	LogDebug("IgnoredPatternAction: '%s' (length = %d).", lexeme, length);
	// Como no debe hacer nada con el patrón, solo se loguea en consola.
}
