%{

#include "flex-actions.h"

%}

/* Obliga a crear una regla explícita para manejar lexemas desconocidos. */
%option nodefault

/* Escanea un único archivo y se detiene. */
%option noyywrap

/* Dispone una variable global "yylineno" con el número de línea actual. */
%option yylineno

/* Contextos de Flex. */
%x COMMENT

/* Patrones reutilizables. */
digit			[0-9]
endline			[\n]
whitespace		[ \f\n\r\t\v]
alphaval        [0-9A-Za-z]
cadena          [A-Za-z]

%%

"/*"										{ BEGIN(COMMENT); BeginCommentPatternAction(); }
<COMMENT>.									{ ; }
<COMMENT>{endline}							{ ; }
<COMMENT>"*/"								{ EndCommentPatternAction(); BEGIN(INITIAL); }

"+"											{ return AdditionOperatorPatternAction(yytext); }
"-"											{ return SubtractionOperatorPatternAction(yytext); }
"*"											{ return MultiplicationOperatorPatternAction(yytext); }
"/"											{ return DivisionOperatorPatternAction(yytext); }

"="                                         {return IgualOperacion(yytext);}

"("											{ return OpenParenthesisPatternAction(yytext); }
")"											{ return CloseParenthesisPatternAction(yytext); }

"{"                                         { return OpenLlavesPatternAction(yytext); }
"}"                                         { return CloseLlavesPatternAction(yytext); }

"["                                         { return OpenCorchetesPatternAction(yytext); }
"]"                                         { return CloseCorchetesPatternAction(yytext); }

{digit}+									{ return IntegerPatternAction(yytext, yyleng); }

{alphaval}+                                 { return AlphavalPatternAction(yytext, yyleng); }

-{alphaval}+                                { return AlphavalPatternAction(yytext, yyleng); }

{whitespace}								{ IgnoredPatternAction(yytext, yyleng); }

.											{ return UnknownPatternAction(yytext, yyleng); }

";"                                         {return PuntoComa(yytext); }

","                                         {return CommaAction(yytext);}

{endline}                                   {return EndlineAction(yytext); }

{cadena}+                                   {return cadena(yytext); } 

"&&"                                        {return ANDOperator(yytext); }
"||"                                        {return OROperator(yytext); }

"createCharacter"                           {return CCharAction(yytext); }
"createMonster"                             {return CMonsAction(yytext); }
"createRace"                                {return CRaceAction(yytext); }   
"createClass"                               {return CClassAction(yytext); }
"createItem"                                {return CItemAction(yytext); }
"createNPC"                                 {return CNPCAction(yytext); }
"createFeature"                             {return CFeatureAction(yytext); }
"createParty"                               {return CPartyAction(yytext); }

"addStats"                                  {return AddStatsAction(yytext); }
"addCharacterInfo"                          {return AddCharcInfoAction(yytext); }
"addCharacterBackground"                    {return AddCharcBackgAction(yytext); }
"addSpellBook"                              {return AddSpellbookAction(yytext); }
"addSpelltoSpellbook"                       {return AddSpelltoSpellbookAction(yytext); }
"addRaceModif"                              {return AddRaceModifAction(yytext); }
"addClassModif"                             {return AddClassModifAction(yytext); }
"addNPCInfo"                                {return AddNPCInfoAction(yytext); }

"addMonsterInfo"                            {return AddMonsterInfoAction(yytext); }

"addItemDescr"                              {return AddItemDescAction(yytext); }
"addItemInfo"                               {return AddItemInfoAction(yytext); }

"addPartyMember"                            {return AddPartyMemAction(yytext); }
"removePartyMember"                         {return RemPartyMemAction(yytext); }

"changeExp"                                 {return ChangeExpAction(yytext); }
"changeLevel"                               {return ChangeLevelAction(yytext); }
"changeClassLevel"                          {return ChangeClassLevAction(yytext); }
"changeClass"                               {return ChangeClassAction(yytext); }
"changeRace"                                {return ChangeRaceAction(yytext); }
"becomeMulticlass"                          {return BecomeMultiClassAction(yytext); }

"changeItemClass"                           {return ChangeItemClassAction(yytext); }
"changeItemRarity"                          {return ChangeItemRarAction(yytext); }
"changeItemsRequirements"                   {return ChangeItemReqAction(yytext); }

"changeNPCClass"                            {return ChangeNPCClassAction(yytext); }

"equipItem"                                 {return EqItemAction(yytext); }
"unequipItem"                               {return UneqItemAction(yytext); }


"checkClass"                                {return ChkClassAction(yytext); }
"checkLevel"                                {return ChkLevelAction(yytext); }
"checkExp"                                  {return ChkExpAction(yytext); }
"checkSpells"                               {return ChkSpellsAction(yytext); }
"checkItems"                                {return ChkItemAction(yytext); }
"checkRace"                                 {return ChkRaceDescAction(yytext); }
"checkItemRestrictions"                     {return ChkItemRestrAction(yytext); }
"checkFeatures"                             {return ChkFeatAction(yytext); }
"checkMonsterInfo"                          {return ChkMonsInfAction(yytext); }
"checkParty"                                {return ChkPartyAction(yytext); }

"exportSheet"                               {return ExportSheetAction(yytext); }
"getSheet"                                  {return GetSheetAction(yytext); }

"function"                                  {return FunctionPatternAction(yytext); }
"new"                                       {return NewPatternAction(yytext); }
"start"                                     {return StartPatternAction(yytext); }

"Party"                                     {return PartyTypePatternAction(yytext); }
"Character"                                 {return CharcterTypePatternAction(yytext); }
"Item"                                      {return ItemTypePatternAction(yytext); }
"String"                                    {return StringPatternAction(yytext); }
"Stats"                                     {return StatsTypePatternAction(yytext); }
"stat"                                      {return StatTypePatternAction(yytext); }
"NPC"                                       {return NPCTypePatternAction(yytext); }
"Monster"                                   {return MonsterTypePatternAction(yytext); }
"Razgo"                                     {return RazgoTypePatternAction(yytext); }
"Modificator"                               {return ModifTypePatternAction(yytext); }
"Sheet"                                     {return SheetTypePatternAction(yytext); }

"if"                                        {return IfConditionalPatternAction(yytext); }
"else"                                      {return ElseConditionalPatternAction(yytext); }
"elsif"                                     {return ElsifConditionalPatternAction(yytext); }
"do"                                        {return DoConditionalPatternAction(yytext); }
"while"                                     {return WhileConditionalPatternAction(yytext); }
"for"                                       {return ForConditionalPatternAction(yytext); }

">="                                        {return GreaterorEqualComparativeAction(yytext); }
"<="                                        {return LesserorEqualComparativeAction(yytext); }
"=="                                        {return EqualsComparativeAction(yytext); }
"!="                                        {return NotEqualsComparativeAction(yytext); }
"<"                                         {return LesserComparativeAction(yytext); }
">"                                         {return GreaterComparativeAction(yytext); }

"print"                                     {return PrintAction(yytext); }

%%