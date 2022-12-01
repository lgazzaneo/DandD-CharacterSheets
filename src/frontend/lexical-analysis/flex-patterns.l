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
%x STRING

/* Patrones reutilizables. */
digit			[0-9]
endline			[\n]
whitespace		[ \f\r\t\v]
alphaval        [\-\+]?[0-9A-Za-z]+
cadena          [^"']*
comillas        ["]
names           [a-zA-Z][a-zA-Z0-9_\-]*
dicedamage      [0-9]+[d][0-9]+([\+\-][0-9]+)?

%%

"/*"										{ BEGIN(COMMENT); BeginCommentPatternAction(); }
<COMMENT>.									{ ; }
<COMMENT>{endline}							{ ; }
<COMMENT>"*/"								{ EndCommentPatternAction(); BEGIN(INITIAL); }

"+"											{ return AdditionOperatorPatternAction(yytext); }
"-"											{ return SubtractionOperatorPatternAction(yytext); }
"*"											{ return MultiplicationOperatorPatternAction(yytext); }
"/"											{ return DivisionOperatorPatternAction(yytext); }


"("										    { return OpenParenthesisPatternAction(yytext); }
")"											{ return CloseParenthesisPatternAction(yytext); }

"{"                                         { return OpenLlavesPatternAction(yytext); }
"}"                                         { return CloseLlavesPatternAction(yytext); }

"["                                         { return OpenCorchetesPatternAction(yytext); }
"]"                                         { return CloseCorchetesPatternAction(yytext); }

";"                                         {return PuntoComa(yytext); }

","                                         {return CommaAction(yytext);}


":"                                         {return DosPuntosAction(yytext);}

"&&"                                        {return ANDOperator(yytext); }
"||"                                        {return OROperator(yytext); }


"name"                                            {return NameAction(yytext, yyleng);}                                                 
"level"                                           {return LevelAction(yytext, yyleng);}        
"class"                                           {return ClassAction(yytext, yyleng);}
"dualclass"                                       {return DualClassAction(yytext, yyleng);}
"background"                                      {return BackgroundAction(yytext, yyleng);}
"playername"                                      {return PlayerNameAction(yytext, yyleng);}
"race"                                            {return RaceAction(yytext, yyleng);}
"alignment"                                       {return AlignmentAction(yytext, yyleng);}
"experience"                                      {return ExperienceAction(yytext, yyleng);}
"Armorclass"                                      {return ACAction(yytext, yyleng);}
"initiative"                                      {return InitiativeAction(yytext, yyleng);}
"speed"                                           {return SpeedAction(yytext, yyleng);}
"proficiency"                                     {return ProficiencyAction(yytext, yyleng);}
"features"                                        {return FeaturesAction(yytext, yyleng);}
"equipment"                                       {return EquipmentAction(yytext, yyleng);}
"items"                                           {return ItemsAction(yytext, yyleng);}
"backstory"                                       {return BackstoryAction(yytext, yyleng);}
"spellcasterbook"                                 {return SpellcasterBookAction(yytext, yyleng);}
"store"                                           {return StoreAction(yytext, yyleng);}
"itemname"                                        {return ItemnameAction(yytext, yyleng);}
"rarity"                                          {return RarityAction(yytext, yyleng);}
"description"                                     {return DescriptionAction(yytext, yyleng);}
"typemonster"                                     {return TypeMonsterAction(yytext, yyleng);}
"attacks"                                         {return AttacksAction(yytext, yyleng);}

"function"                                  {return FunctionPatternAction(yytext); }
"new"                                       {return NewPatternAction(yytext); }
"start"                                     {return StartPatternAction(yytext); }

"Character"                                 {return CharcterTypePatternAction(yytext); }
"Item"                                      {return ItemTypePatternAction(yytext); }                                   
"String"                                    {return StringTypeDataAction(yytext);}
"Stats"                                     {return StatsTypePatternAction(yytext); }
"NPC"                                       {return NPCTypePatternAction(yytext); }
"Monster"                                   {return MonsterTypePatternAction(yytext); }
"Razgo"                                     {return RazgoTypePatternAction(yytext); }
"Modificator"                               {return ModifTypePatternAction(yytext); }
"Sheet"                                     {return SheetTypePatternAction(yytext); }
"Integer"                                   {return IntegerDataTypeAction(yytext);}

{digit}+									{ return IntegerPatternAction(yytext, yyleng); }

{dicedamage}                                {return DiceDamage(yytext, yyleng);}

{comillas}                                  {BEGIN(STRING);}
<STRING>{cadena}                            {return StringPatternAction(yytext, yyleng);}
<STRING>{comillas}                          {BEGIN(INITIAL);}       

{names}                                     { return Cadena(yytext); }

{alphaval}                                  { return AlphavalPatternAction(yytext, yyleng); }

{whitespace}+								{ IgnoredPatternAction(yytext, yyleng); }

{endline}                                   {return EndlineAction(yytext); }

.		                                    {return UnknownPatternAction(yytext, yyleng); }

%%