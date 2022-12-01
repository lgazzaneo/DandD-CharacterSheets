#include "../../backend/domain-specific/calculator.h"
#include "../../backend/support/logger.h"
#include "bison-actions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Implementación de "bison-grammar.h".
 */

/**
* Esta función se ejecuta cada vez que se emite un error de sintaxis.
*/
void yyerror(const char * string) {
	LogError("Mensaje: '%s' debido a '%s' (linea %d).", string, yytext, yylineno);
	LogError("En ASCII es:");
	LogErrorRaw("\t");
	const int length = strlen(yytext);
	for (int i = 0; i < length; ++i) {
		LogErrorRaw("[%d]", yytext[i]);
	}
	LogErrorRaw("\n\n");
}

/**
* Esta acción se corresponde con el no-terminal que representa el símbolo
* inicial de la gramática, y por ende, es el último en ser ejecutado, lo que
* indica que efectivamente el programa de entrada se pudo generar con esta
* gramática, o lo que es lo mismo, que el programa pertenece al lenguaje.
*/
int ProgramGrammarAction(const int value) {
	LogDebug("\tProgramGrammarAction(%d)", value);
	/*
	* "state" es una variable global que almacena el estado del compilador,
	* cuyo campo "succeed" indica si la compilación fue o no exitosa, la cual
	* es utilizada en la función "main".
	*/
/*
	program * p = malloc(sizeof(program));

*/
	state.succeed = true;
	/*
	* Por otro lado, "result" contiene el resultado de aplicar el análisis
	* sintáctico mediante Bison, y almacenar el nood raíz del AST construido
	* en esta variable. Para el ejemplo de la calculadora, no hay AST porque
	* la expresión se computa on-the-fly, y es la razón por la cual esta
	* variable es un simple entero, en lugar de un nodo.
	*/
	state.result = value;
	return value;
}

int AdditionExpressionGrammarAction(const int leftValue, const int rightValue) {
	LogDebug("\tAdditionExpressionGrammarAction(%d, %d)", leftValue, rightValue);
	return Add(leftValue, rightValue);
}

int SubtractionExpressionGrammarAction(const int leftValue, const int rightValue) {
	LogDebug("\tSubtractionExpressionGrammarAction(%d, %d)", leftValue, rightValue);
	return Subtract(leftValue, rightValue);
}

int MultiplicationExpressionGrammarAction(const int leftValue, const int rightValue) {
	LogDebug("\tMultiplicationExpressionGrammarAction(%d, %d)", leftValue, rightValue);
	return Multiply(leftValue, rightValue);
}

int DivisionExpressionGrammarAction(const int leftValue, const int rightValue) {
	LogDebug("\tDivisionExpressionGrammarAction(%d, %d)", leftValue, rightValue);
	return Divide(leftValue, rightValue);
}

int FactorExpressionGrammarAction(const int value) {
	LogDebug("\tFactorExpressionGrammarAction(%d)", value);
	return value;
}

int ExpressionFactorGrammarAction(const int value) {
	LogDebug("\tExpressionFactorGrammarAction(%d)", value);
	return value;
}

int ConstantFactorGrammarAction(const int value) {
	LogDebug("\tConstantFactorGrammarAction(%d)", value);
	return value;
}

int IntegerConstantGrammarAction(const int value) {
	LogDebug("\tIntegerConstantGrammarAction(%d)", value);
	return value;
}

int StartProgramAction(const int value){
	LogDebug("\tStartProgramAction(%d)", value);
	return value;
}

int CrearnuevafunctionAction(const int value){
	LogDebug("\tCrearnuevafunctionAction(%d)", value);
	return value;
}

int a(char * string){
	state.succeed = true; 
	printf(string);
	return 0;
}

int b(char * str){
	printf(str);
	return 0;
}


//main Functions
mainprogram * ProgramStart(Sheet * sheet){
	mainprogram * mainprogram = malloc(sizeof(mainprogram));
	mainprogram->sheet = sheet;
	return mainprogram;
}

freeendlines * EndLines(freemode modes, freeendlines * freeendlin){
	freeendlines * t = malloc(sizeof(freeendlines));
	if(modes == ZEROENDLINES){
		int a[1] = {0};
		t->mode = ZEROENDLINES;
		t->freeendlines = NULL;
		t->Endlines = a;
	}else if (modes == ONEENDLINE){
		int b[1] = {1};
		t->mode = ONEENDLINE;
		t->freeendlines = NULL;
		t->Endlines = b;
	}else{
		int c[1] = {2};
		int aux[1];
		t->mode = TWOORMOREENDLINES;
		t->freeendlines = freeendlin;
		aux[0] = t->freeendlines->Endlines[0] + c[0];
		t->Endlines = aux;
	}
	return t;
}

Sheet * SheetFunction(Constant * id, sheetType type, Body * pos1, MonsterBody * pos2, ItemBody * pos3, NPCBody * pos4){
	Sheet * t = malloc(sizeof(Sheet));
	t->id = id;
	t->body = pos1;
	t->mbody = pos2;
	t->itembody = pos3;
	t->npcbody = pos4;
	t->type = type;
	return t;
}


//CharacterSheetFunctions
Body * CharacBodyFunction(nameCharac * name, levelCharac * level, classCharac * class, backgroundCharac * backround, playername * plyname, characrace * race, alignmentCharac * alignment, exppointsCharac * exppts, restofbodyCharac * restofbody){
	Body * t = malloc(sizeof(Body));
	t->name = name;
	t->level = level;
	t->class = class;
	t->background = backround;
	t->playername = plyname;
	t->race = race;
	t->alignment = alignment;
	t->exppoints = exppts;
	t->restofbody = restofbody;
	return t;
}

nameCharac * nameCharacFunction(objecttext * arg1){
	nameCharac * t = malloc(sizeof(nameCharac));
	t->characname = arg1;
	return t;
}

levelCharac * levelCharacFunction(Constant * arg1){
	levelCharac * t = malloc(sizeof(levelCharac));
	t->levelnum = arg1;
	return t;
}

classCharac * classCharacFunction(hasdualclass mode, objecttext * arg1, objecttext * arg2){
	classCharac * t = malloc(sizeof(classCharac));
	t->classname1 = arg1;
	if (mode == SIDUALCLASS){
		t->mode = SIDUALCLASS;
		t->classname2 = arg2;
	}
	else{
		t->mode = NODUALCLASS;
		t->classname2 = NULL;
	}
	return t;
	
}

backgroundCharac * backgroundCharacFunction(objecttext * arg1){
	backgroundCharac * t = malloc(sizeof(backgroundCharac));
	t->characbackgr = arg1;
	return t;
}

playername * playernameFunction(objecttext * arg1){
	playername * t = malloc(sizeof(playername));
	t->realname = arg1;
	return t;
}

characrace * characraceFunction(objecttext * arg1){
	characrace * t = malloc(sizeof(characrace));
	t->characterrace = arg1;
	return t;
}

alignmentCharac * alignmentCharacFunction(objecttext * arg1){
	alignmentCharac * t = malloc(sizeof(alignmentCharac));
	t->alignment = arg1;
	return t;
}

exppointsCharac * exppointsCharacFunction(Constant * arg1){
	exppointsCharac * t = malloc(sizeof(exppointsCharac));
	t->qexppoint = arg1;
	return t;
}

restofbodyCharac * restofbodyCharacFunction(statsSpread * stats, ArmorClass * AC, Initiative * Init, Speed * spd, proficienciesCh * profic, featuresCh * features, equipmentCh * equipmentCh, itemsCh * items, CharacBackStory * backstory, Spellbook * spellbook){
	restofbodyCharac * t = malloc(sizeof(restofbodyCharac));
	t->armorclass = AC;
	t->backstory = backstory;
	t->equipment = equipmentCh;
	t->features = features;
	t->initiative = Init;
	t->items = items;
	t->proficiencies = profic;
	t->speed = spd;
	t->spellbook = spellbook;
	t->stats = stats;
	return t;
}

statsSpread * statsSpreadFunction(Constant * stat1, Constant * stat2, Constant * stat3, Constant * stat4, Constant * stat5, Constant * stat6){
	statsSpread * t = malloc(sizeof(statsSpread));
	t->strenght = stat1;
	t->strmodif = statmodifcalc(stat1);
	t->dexterity = stat2;
	t->dexmodif = statmodifcalc(stat2);
	t->constitution = stat3;
	t->conmodif = statmodifcalc(stat3);
	t->wisdom = stat4;
	t->wismodif = statmodifcalc(stat4);
	t->intelligence = stat5;
	t->intmodif = statmodifcalc(stat5);
	t->charisma = stat6;
	t->chamodif = statmodifcalc(stat6);
	Constant * a = malloc(sizeof(Constant));
	a->value = 3 + stat3->value;
	t->hp = a;
	return t;
}

Constant * statmodifcalc(Constant * stat1){
	Constant * x1 = malloc(sizeof(Constant));
	if(stat1->value == 2 || stat1->value == 3){
		x1->value = -4;
	}else if (stat1->value == 4 || stat1->value == 5){
		x1->value = -3;
	}else if (stat1->value == 7 || stat1->value == 6){
		x1->value = -2;
	}else if (stat1->value == 8 || stat1->value == 9){
		x1->value = -1;
	}else if (stat1->value == 10 || stat1->value == 11){
		x1->value = 0;
	}else if (stat1->value == 12 || stat1->value == 13){
		x1->value = 1;
	}else if (stat1->value == 14 || stat1->value == 15){
		x1->value = 2;
	}else if (stat1->value == 16 || stat1->value == 17){
		x1->value = 3;
	}else if (stat1->value == 18 || stat1->value == 19){
		x1->value = 4;
	}
	return x1;
}

ArmorClass * ArmorClassFunction(Constant * arg1){
	ArmorClass * t = malloc(sizeof(ArmorClass));
	t->ArmorClass = arg1;
	return t;
}

Initiative * InitiativeFunction(Constant * arg1){
	Initiative * t = malloc(sizeof(Initiative));
	t->intiative = arg1;
	return t;
}

Speed * SpeedFunction(Constant * arg1){
	Speed * t = malloc(sizeof(Speed));
	t->speed = arg1;
	return t;
}

CharacBackStory * CharacBackStoryFunction(objecttext * arg1){
	CharacBackStory * t = malloc(sizeof(CharacBackStory));
	t->Cbackstory = arg1;
	return t;
}

proficienciesCh * proficienciesChFunction(IsRecursive type, objecttext * arg1, objecttext * arg2, Constant * arg3, proficienciesCh * proficienciesC){
	proficienciesCh * t = malloc(sizeof(proficienciesCh));
	t->profDescription = arg2;
	t->nameProf = arg1;
	t->valueProf = arg3;
	if(type == RECURSIVETYPE){
		t->type = RECURSIVETYPE;
		t->profCh = proficienciesC;
	}
	else{
		t->type = NORECURTYPE;
		t->profCh = NULL;
	}
	return t;
}

featuresCh * featuresChFunction(IsRecursive type, objecttext * arg1, objecttext * arg2, featuresCh * featuresRecursive){
	featuresCh * t = malloc(sizeof(featuresCh));
	t->featDescription = arg2;
	t->nameFeat = arg1;
	if(type == RECURSIVETYPE){
		t->type = RECURSIVETYPE;
		t->featCh = featuresRecursive;
	}
	else{
		t->type = NORECURTYPE;
		t->featCh = NULL;
	}
	return t;
}

itemsCh * itemsChFunction(IsRecursive type, objecttext * arg1, objecttext * arg2, itemsCh * itemsChRecursive){
	itemsCh * t = malloc(sizeof(itemsCh));
	t->featDescription = arg2;
	t->nameFeat = arg1;
	if(type == RECURSIVETYPE){
		t->type = RECURSIVETYPE;
		t->itemCh = itemsChRecursive;
	}
	else{
		t->type = NORECURTYPE;
		t->itemCh = NULL;
	}
	return t;
}

equipmentCh * equipmentChFunction(IsRecursive type, objecttext * name, objecttext * location, objecttext * desc, equipmentCh * profChRecursive){
	equipmentCh * t = malloc(sizeof(equipmentCh));
	t->equipmentDescription = desc;
	t->partofbody = location;
	t->equipmentName = name;
	if(type == RECURSIVETYPE){
		t->type = RECURSIVETYPE;
		t->profCh = profChRecursive;
	}
	else{
		t->type = NORECURTYPE;
		t->profCh = NULL;
	}
	return t;
}

Spellbook * SpellbookFunction(spbookMode mode, spellcasterspells * spellcasterspeels){
	Spellbook * t = malloc(sizeof(Spellbook));
	if(mode == NOSPBOOK){
		t->mode = NOSPBOOK;
		t->spbook = NULL;
	}
	else{
		t->mode = SPBOOK;
		t->spbook = spellcasterspeels;
	}
	return t;
}

spellcasterspells * spellcasterspellsFunction(spellbookmode mode, LevelSplb * levelspells, Constant * level, spellcasterspells * recursive){
	spellcasterspells * t = malloc(sizeof(spellcasterspells));
	t->Spellslevel = level;
	t->levelspellbook = levelspells;
	if(mode == RECURSPELL){
		t->spellcasterspells = recursive;
		t->mode = RECURSPELL;
	}
	else{
		t->spellcasterspells = NULL;
		t->mode = ONLYONE;
	}
	return t;
}

LevelSplb * LevelSplbFunction(levelspmode mode, Spell * spell, LevelSplb * recursive){
	LevelSplb * t = malloc(sizeof(LevelSplb));
	t->spell = spell;
	if (mode == RECURSIVELVLSPB){
		t->recursivelevelspb = recursive;
		t->mode = RECURSIVELVLSPB;
	}
	else{
		t->recursivelevelspb = NULL;
		t->mode = ONLYONELEVELSPELL;
	}
	return t;
}

Spell * SpellFunction(objecttext * splname, objecttext * spldesc, DiceDmg * spldamage){
	Spell * t = malloc(sizeof(Spell));
	t->spldamage = spldamage;
	t->spldescript = spldesc;
	t->splname = splname;
	return t;
}

//NPC Sheet Functions
NPCBody * NPCBodyFunction(Merchant * merchant){
	NPCBody * t = malloc(sizeof(NPCBody));
	t->merchant = merchant;
	return t;
}

Merchant * MerchantFunction(Store * store){
	Merchant * t = malloc(sizeof(Merchant));
	t->stpre = store;
	return t;
}

Store * StoreFunction(IsRecursive type, ItemstoSell * itemstosell, Constant * price, Store * newItem){
	Store * t = malloc(sizeof(Store));
	t->items = itemstosell;
	t->price = price;
	if(type == RECURSIVETYPE){
		t->NewItem = newItem;
		t->type = RECURSIVETYPE;
	}
	else{
		t->NewItem = NULL;
		t->type = NORECURTYPE;
	}
	return t;
}

ItemstoSell * ItemstoSellFunction(objecttext * ItemName, objecttext * ItemDesc){
	ItemstoSell * t = malloc(sizeof(ItemstoSell));
	t->Itemdescription = ItemDesc;
	t->Itemname = ItemName;
	return t;
}

//Item Sheet Functions
ItemBody * ItemBodyFunction(ItemName * itemname, ItemDescription * itemdesc, ItemRarity * itemrarity){
	ItemBody * toret = malloc(sizeof(ItemBody));
	toret->ItDescript = itemdesc;
	toret->Itemname = itemname;
	toret->Rarity = itemrarity;
	return toret;
}

ItemName * ItemNameFunction(objecttext * name){
	ItemName * toret = malloc(sizeof(ItemName));
	toret->NameofItem = name;
	return toret;
}

ItemRarity * ItemRarityFunction(objecttext * rarity){
	ItemRarity * toRet = malloc(sizeof(ItemRarity));

	toRet->RarityofItem = rarity;

	return toRet;
}

ItemDescription * ItemDescriptionFunction(objecttext * descript){
	ItemDescription * toRet = malloc(sizeof(ItemDescription));

	toRet->DescriptionofItem = descript;

	return toRet;
}

//Monster Sheet Functions
MonsterBody * MonsterBodyFunction(nameCharac * monsName, TypeofMonster * typeofmons, statsSpread * monsstats, CharacBackStory * monsBackstory, MonsterAttacks * monsAttacks, Spellbook * spellbook){
	MonsterBody * toRet = malloc(sizeof(MonsterBody));

	toRet->attacksMonst = monsAttacks;
	toRet->backstoryMonster = monsBackstory;
	toRet->nameMonster = monsName;
	toRet->spellbook = spellbook;
	toRet->statsMonster = monsstats;
	toRet->typeMonster = typeofmons;

	return toRet;
}

MonsterAttacks * MonsterAttacksFunction(ListofAttacks * attacks){
	MonsterAttacks * toReturn = malloc(sizeof(MonsterAttacks));
	toReturn->listAttack = attacks;
	return toReturn;
}

ListofAttacks * ListofAttacksFunction(IsRecursive type, DiceDmg * attackdmg, objecttext * nameofAt, objecttext * descofAt, ListofAttacks * OtherAt){
	ListofAttacks * toReturn = malloc(sizeof(ListofAttacks));
	
	if(type == RECURSIVETYPE){
		toReturn->OtherAttack = OtherAt;
		toReturn->type = RECURSIVETYPE;
	}
	else if (type == NORECURTYPE){
		toReturn->OtherAttack = NULL;
		toReturn->type = NORECURTYPE;
	}

	toReturn->attackDamage = attackdmg;
	toReturn->attackDesc = descofAt;
	toReturn->nameofAttack = nameofAt;
	
	return toReturn;
}

TypeofMonster * TypeofMonsterFunction(objecttext * typemons){
	TypeofMonster * toReturn = malloc(sizeof(TypeofMonster));
	toReturn->typeofMons->len = typemons->len;
	toReturn->typeofMons->text = typemons->text;
	return toReturn;
}

