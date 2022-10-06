#ifndef FLEX_ACTIONS_HEADER
#define FLEX_ACTIONS_HEADER

#include "../../backend/support/shared.h"
#include "../syntactic-analysis/bison-parser.h"

/**
 * Se definen las acciones a ejecutar sobre cada patrón hallado mediante el
 * analizador léxico Flex. Este analizador solo puede identificar
 * construcciones regulares, ya que utiliza un autómata finito determinístico
 * (a.k.a. DFA), como mecanismo de escaneo y reconocimiento.
 *
 * Debería existir una acción por cada patrón disponible en Flex (es decir,
 * por cada regla).
 *
 * Solo aquellas acciones que tengan interés en conocer el largo del lexema
 * emplean el parámetro adicional "length". Esto es útil cuando se desea
 * asignar memoria dinámica, y por lo tanto, se debe saber exactamente el
 * largo de aquello que se va a almacenar.
 */

// Bloque de comentarios multilínea.
void BeginCommentPatternAction();
void EndCommentPatternAction();

// Patrones terminales del lenguaje diseñado.
token AdditionOperatorPatternAction(const char * lexeme);
token CloseParenthesisPatternAction(const char * lexeme);
token DivisionOperatorPatternAction(const char * lexeme);
token IntegerPatternAction(const char * lexeme, const int length);
token MultiplicationOperatorPatternAction(const char * lexeme);
token OpenParenthesisPatternAction(const char * lexeme);
token SubtractionOperatorPatternAction(const char * lexeme);
token IgualOperacion(const char * lexeme);
token OpenLlavesPatternAction(const char * lexeme);
token CloseLlavesPatternAction(const char * lexeme);
token CloseParenthesisPatternAction(const char * lexeme);
token OpenCorchetesPatternAction(const char * lexeme);
token CloseCorchetesPatternAction(const char * lexeme);
token PuntoComa(const char * lexeme);
token CommaAction(const char * lexeme);
token PointAction(const char * lexeme);
token ANDOperator(const char * lexeme);
token OROperator(const char * lexeme);
token CCharAction(const char * lexeme);
token CMonsAction(const char * lexeme);
token CRaceAction(const char * lexeme);
token CClassAction(const char * lexeme);
token CItemAction(const char * lexeme);
token CNPCAction(const char * lexeme);
token CFeatureAction(const char * lexeme);
token AddStatsAction(const char * lexeme);
token CPartyAction(const char * lexeme);
token AddCharcInfoAction(const char * lexeme);
token AddCharcBackgAction(const char * lexeme);
token AddSpellbookAction(const char * lexeme);
token AddSpelltoSpellbookAction(const char * lexeme);
token AddRaceModifAction(const char * lexeme);

token AddClassModifAction(const char * lexeme);
token AddNPCInfoAction(const char * lexeme);
token AddMonsterInfoAction(const char * lexeme);
token AddItemDescAction(const char * lexeme);
token AddItemInfoAction(const char * lexeme);
token AddPartyMemAction(const char * lexeme);
token RemPartyMemAction(const char * lexeme);
token ChangeExpAction(const char * lexeme);
token ChangeLevelAction(const char * lexeme);
token ChangeClassLevAction(const char * lexeme);

token ChangeClassAction(const char * lexeme);
token ChangeRaceAction(const char * lexeme);
token BecomeMultiClassAction(const char * lexeme);
token ChangeItemClassAction(const char * lexeme);
token ChangeItemRarAction(const char * lexeme);
token ChangeItemReqAction(const char * lexeme);
token ChangeNPCClassAction(const char * lexeme);
token EqItemAction(const char * lexeme);
token UneqItemAction(const char * lexeme);
token ChkClassAction(const char * lexeme);

token ChkLevelAction(const char * lexeme);
token ChkExpAction(const char * lexeme);
token ChkSpellsAction(const char * lexeme);
token ChkItemAction(const char * lexeme);
token ChkRaceDescAction(const char * lexeme);
token ChkItemRestrAction(const char * lexeme);
token ChkFeatAction(const char * lexeme);
token ChkMonsInfAction(const char * lexeme);
token ChkPartyAction(const char * lexeme);
token ChkStat(const char * lexeme);

token ChkStats(const char * lexeme);
token ExportSheetAction(const char * lexeme);
token GetSheetAction(const char * lexeme);
token AddCharctoSheet(const char * lexeme);
token ChangeTempSheet(const char * lexeme);
token FunctionPatternAction(const char * lexeme);
token NewPatternAction(const char * lexeme);
token StartPatternAction(const char * lexeme);
token PartyTypePatternAction(const char * lexeme);
token CharcterTypePatternAction(const char * lexeme);

token ItemTypePatternAction(const char * lexeme);
token StringTypeDataAction(const char * lexeme);
token StatsTypePatternAction(const char * lexeme);
token StatTypePatternAction(const char * lexeme);
token NPCTypePatternAction(const char * lexeme);
token MonsterTypePatternAction(const char * lexeme);
token RazgoTypePatternAction(const char * lexeme);
token ModifTypePatternAction(const char * lexeme);
token SheetTypePatternAction(const char * lexeme);
token IntegerDataTypeAction(const char * lexeme);

token IfConditionalPatternAction(const char * lexeme);
token ElseConditionalPatternAction(const char * lexeme);
token ElsifConditionalPatternAction(const char * lexeme);
token DoConditionalPatternAction(const char * lexeme);
token WhileConditionalPatternAction(const char * lexeme);
token ForConditionalPatternAction(const char * lexeme);
token GreaterorEqualComparativeAction(const char * lexeme);
token LesserorEqualComparativeAction(const char * lexeme);
token EqualsComparativeAction(const char * lexeme);
token NotEqualsComparativeAction(const char * lexeme);

token LesserComparativeAction(const char * lexeme);
token GreaterComparativeAction(const char * lexeme);
token PrintAction(const char * lexeme);
token ReturnAction(const char * lexeme);
token AlphavalPatternAction(const char * lexeme, const int lenght);
token StringPatternAction(const char * lexeme);
token EndlineAction(const char * lexeme);
token Cadena(const char * lexeme);
token DiceDamage(const char * lexeme);
token IfElseConditionalPatternAction(const char * lexeme);

// Patrón desconocido, permite abortar debido a un error de sintaxis.
token UnknownPatternAction(const char * lexeme, const int length);

// Regla que no hace nada, permite ignorar parte de la entrada.
void IgnoredPatternAction(const char * lexeme, const int length);

#endif
