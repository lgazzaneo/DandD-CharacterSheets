#include "../../backend/support/logger.h"
#include "flex-actions.h"
#include <stdlib.h>

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

token IgualOperacion(const char * lexeme) {
	LogDebug("IgualOperacion: '%s'.", lexeme);
	yylval.token = IGUAL;
	return IGUAL;
}


token IntegerPatternAction(const char * lexeme, const int length) {
	printf("Soyunnumero");
	LogDebug("IntegerPatternAction: '%s' (length = %d).", lexeme, length);
	yylval.integer = atoi(lexeme);
	return INTEGER;
}

token AlphavalPatternAction(const char * lexeme, const int length) {
	LogDebug("AlphavalPatternAction: '%s' (length = %d).", lexeme, length);
	yylval.token = ALPHAVAL;
	return ALPHAVAL;
}

token DiceDamage(const char * lexeme) {
	LogDebug("DiceDamage: '%s'", lexeme);
	yylval.token = DICEDMG;
	return DICEDMG;
}


token IntegerDataTypeAction(const char * lexeme) {
	printf("Imanumtype");
	LogDebug("IntegerDataTypeAction: '%s'", lexeme);
	yylval.token = INTDT;
	return INTDT;
}

token ReturnAction(const char * lexeme) {
	LogDebug("ReturnAction: '%s'", lexeme);
	yylval.token = RET;
	return RET;
}

token StringPatternAction(const char * lexeme) {
	LogDebug("StringPatternAction: '%s'", lexeme);
	yylval.token = STR;
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
	printf("Holamoriste");
	LogDebug("UnknownPatternAction: '%s' (length = %d).", lexeme, length);
	yylval.token = YYUNDEF;
	// Al emitir este token, el compilador aborta la ejecución.
	return YYUNDEF;
}

token PuntoComa(const char * lexeme){
	LogDebug("PuntoComaOperator: %s", lexeme);
	yylval.token = PUNTOCOMA;
	return PUNTOCOMA;
}

token EndlineAction(const char * lexeme){
	LogDebug("EndlineAction");
	printf("Endlines");
	yylval.token = ENDLINE;
	return ENDLINE;
}

token PointAction(const char * lexeme){
	LogDebug("PointAction: %s", lexeme);
	yylval.token = POINT;
	return POINT;
}

token CCharAction(const char * lexeme){
	LogDebug("CreateCharAction: %s", lexeme);
	yylval.token = CCHAR;
	return CCHAR;
}

token Cadena(const char * lexeme){
	printf("Soyunacadena");
	LogDebug("Cadena: %s", lexeme);
	yylval.token = CADENA;
	return CADENA;
}

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

token PartyTypePatternAction(const char * lexeme){
	LogDebug("PartyTypePatternAction: %s", lexeme);
	yylval.token = PARTY;
	return PARTY;
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

token StatTypePatternAction(const char * lexeme){
	LogDebug("StatTypePatternAction: %s", lexeme);
	yylval.token = STAT;
	return STAT;
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

void IgnoredPatternAction(const char * lexeme, const int length) {
	printf("Holasoymierdaquenoimporta");
	LogDebug("IgnoredPatternAction: '%s' (length = %d).", lexeme, length);
	// Como no debe hacer nada con el patrón, solo se loguea en consola.
}
