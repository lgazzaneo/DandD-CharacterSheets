#ifndef BISON_ACTIONS_HEADER
#define BISON_ACTIONS_HEADER

#include "../../backend/support/shared.h"
#include "../../backend/semantic-analysis/abstract-syntax-tree.h"

/**
 * Se definen las acciones a ejecutar sobre cada regla de producción de la
 * gramática. El objetivo de cada acción debe ser el de construir el nodo
 * adecuado que almacene la información requerida en el árbol de sintaxis
 * abstracta (i.e., el AST).
 */

// Programa.
int ProgramGrammarAction(const int value);

// Expresión.
int AdditionExpressionGrammarAction(const int leftValue, const int rightValue);
int SubtractionExpressionGrammarAction(const int leftValue, const int rightValue);
int MultiplicationExpressionGrammarAction(const int leftValue, const int rightValue);
int DivisionExpressionGrammarAction(const int leftValue, const int rightValue);
int FactorExpressionGrammarAction(const int value);
int a(char * str);
int b(char * str);

// Factores.
int ExpressionFactorGrammarAction(const int value);
int ConstantFactorGrammarAction(const int value);

// Constantes.
int IntegerConstantGrammarAction(const int value);

//Mi programa:

mainprogram * ProgramStart(Sheet * sheet);
freeendlines * EndLines(freemode mode, freeendlines * freeendlines);
Sheet * SheetFunction(Constant * id, sheetType type, Body * pos1, MonsterBody * pos2, ItemBody * pos3, NPCBody * pos4);

//Character Sheet Functions
Body * CharacBodyFunction(nameCharac * name, levelCharac * level, classCharac * class, backgroundCharac * backround, playername * plyname, characrace * race, alignmentCharac * alignment, exppointsCharac * exppts, restofbodyCharac * restofbody);
nameCharac * nameCharacFunction(objecttext * arg1);
levelCharac * levelCharacFunction(Constant * arg1);
classCharac * classCharacFunction(hasdualclass mode, objecttext * arg1, objecttext * arg2);
backgroundCharac * backgroundCharacFunction(objecttext * arg1);
playername * playernameFunction(objecttext * arg1);
characrace * characraceFunction(objecttext * arg1);
alignmentCharac * alignmentCharacFunction(objecttext * arg1);
exppointsCharac * exppointsCharacFunction(Constant * arg1);
restofbodyCharac * restofbodyCharacFunction(statsSpread * stats, ArmorClass * AC, Initiative * Init, Speed * spd, proficienciesCh * profic, featuresCh * features, equipmentCh * equipmentCh, itemsCh * items, CharacBackStory * backstory, Spellbook * spellbook);
statsSpread * statsSpreadFunction(Constant * stat1, Constant * stat2, Constant * stat3, Constant * stat4, Constant * stat5, Constant * stat6);
ArmorClass * ArmorClassFunction(Constant * arg1);
Initiative * InitiativeFunction(Constant * arg1);
Speed * SpeedFunction(Constant * arg1);
CharacBackStory * CharacBackStoryFunction(objecttext * arg1);
proficienciesCh * proficienciesChFunction(IsRecursive type, objecttext * arg1, objecttext * arg2, Constant * arg3, proficienciesCh * proficienciesCh);
featuresCh * featuresChFunction(IsRecursive type, objecttext * arg1, objecttext * arg2, featuresCh * featuresRecursive);
itemsCh * itemsChFunction(IsRecursive type, objecttext * arg1, objecttext * arg2, itemsCh * itemsChRecursive);
equipmentCh * equipmentChFunction(IsRecursive type, objecttext * arg1, objecttext * arg2, objecttext * arg3, equipmentCh * profChRecursive);
Spellbook * SpellbookFunction(spbookMode mode, spellcasterspells * spellcasterspeels);
spellcasterspells * spellcasterspellsFunction(spellbookmode mode, LevelSplb * levelspells, Constant * level, spellcasterspells * recursive);
LevelSplb * LevelSplbFunction(levelspmode mode, Spell * spell, LevelSplb * recursive);
Spell * SpellFunction(objecttext * splname, objecttext * spldesc, DiceDmg * spldamage);

//NPC Sheet Functions
NPCBody * NPCBodyFunction(Merchant * merchant);
Merchant * MerchantFunction(Store * store);
Store * StoreFunction(IsRecursive type, ItemstoSell * itemstosell, Constant * price, Store * newItem);
ItemstoSell * ItemstoSellFunction(objecttext * ItemName, objecttext * ItemDesc);

//Item Sheet Functions
ItemBody * ItemBodyFunction(ItemName * itemname, ItemDescription * itemdesc, ItemRarity * itemrarity);
ItemName * ItemNameFunction(objecttext * name);
ItemRarity * ItemRarityFunction(objecttext * rarity);
ItemDescription * ItemDescriptionFunction(objecttext * descript);

//Monster Sheet Functions
MonsterBody * MonsterBodyFunction(nameCharac * monsName, TypeofMonster * typeofmons, statsSpread * monsstats, CharacBackStory * monsBackstory, MonsterAttacks * monsAttacks, Spellbook * spellbook);
MonsterAttacks * MonsterAttacksFunction(ListofAttacks * attacks);
ListofAttacks * ListofAttacksFunction(IsRecursive type, DiceDmg * attackdmg, objecttext * nameofAt, objecttext * descofAt, ListofAttacks * OtherAt);
TypeofMonster * TypeofMonsterFunction(objecttext * typemons);

Constant * statmodifcalc(Constant * stat1);


#endif