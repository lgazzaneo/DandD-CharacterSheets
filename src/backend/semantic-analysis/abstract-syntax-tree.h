#ifndef ABSTRACT_SYNTAX_TREE_HEADER
#define ABSTRACT_SYNTAX_TREE_HEADER

/**
* Se realiza este tipo de definiciones cuando el tipo de dato debe
* auto-referenciarse, como es el caso de una "Expression", que está compuesta
* de otras 2 expresiones.
*/
typedef struct Expression Expression;
typedef struct freeendlines freeendlines;
typedef struct spellcasterspells spellcasterspells;
//typedef struct LevelSplb LevelSplb;
typedef struct proficienciesCh proficienciesCh;
typedef struct featuresCh featuresCh;
typedef struct equipmentCh equipmentCh;
typedef struct itemsCh itemsCh;
typedef struct Store Store;
typedef struct ListofAttacks ListofAttacks;

/**
* Para cada no-terminal se define una nueva estructura que representa su tipo
* de dato y, por lo tanto, su nodo en el AST (Árbol de Sintaxis Abstracta).
*/

typedef struct {
	int value;
} Constant;

typedef struct{
	char * text;
	int len;
}objecttext;

typedef struct{
	char * str;
	int len; 
} Alphaval;

typedef struct{
	int cantDice;
	int modif;
	int typeofdice;
}DiceDmg;


/**
* En caso de que un no-terminal ("Factor" en este caso), posea más de una
* regla de producción asociada, se crea además de la estructura un enumerado
* que identitifque cada reducción posible (cada regla de producción). Luego,
* se agrega una instancia de este enumerado dentro del nodo del no-terminal.
*
* De este modo, al recorrer el AST, es posible determinar qué nodos hijos
* posee según el valor de este enumerado.
*/
typedef enum {
	EXPRESSION,
	CONSTANT
} FactorType;

typedef struct {
	FactorType type;
	Expression * expression;
} Factor;

typedef enum {
	ADDITION,
	SUBTRACTION,
	MULTIPLICATION,
	DIVISION,
	FACTOR
} ExpressionType;

struct Expression {
	ExpressionType type;
	Expression * leftExpression;
	Expression * rightExpression;
};

typedef struct {
	Expression * expression;
} Program;

/*

*/

typedef enum{
	RECURSIVETYPE,
	NORECURTYPE
}IsRecursive;

typedef struct{
	objecttext * NameofItem;
}ItemName;

typedef struct{
	objecttext * RarityofItem;
}ItemRarity;

typedef struct{
	objecttext * DescriptionofItem;
}ItemDescription;

typedef struct{
	ItemName * Itemname;
	ItemRarity * Rarity;
	ItemDescription * ItDescript;
}ItemBody;

//

typedef struct{
	objecttext * Itemname;
	objecttext * Itemdescription;
}ItemstoSell;

struct Store{
	ItemstoSell * items;
	Constant * price;
	Store * NewItem;
	IsRecursive type;
};

typedef struct{
	Store * stpre;
}Merchant;

typedef struct{
	Merchant * merchant;
}NPCBody;

//

typedef struct{
	objecttext * splname;
	objecttext * spldescript;
	DiceDmg * spldamage;
}Spell;

/*typedef enum{
	RECURSIVELVLSPB,
	ONLYONELEVELSPELL
}levelspmode;

struct LevelSplb{
	levelspmode mode;
	Spell * spell;
	LevelSplb * recursivelevelspb;
};*/

typedef enum{
	ONLYONE,
	RECURSPELL
}spellbookmode;

struct spellcasterspells{
	spellbookmode mode;
	spellcasterspells * spellcasterspells;
	Spell * spell;
	Constant * Spellslevel;
};

typedef enum{
	NOSPBOOK,
	SPBOOK
}spbookMode;

typedef struct{
	spbookMode mode;
	spellcasterspells * spbook;
}Spellbook;

// Aca comienzan los menores de restofbody

typedef struct{
	Constant * hp;
	Constant * strenght;
	Constant * dexterity;
	Constant * constitution;
	Constant * intelligence;
	Constant * wisdom;
	Constant * charisma;
	Constant * strmodif;
	Constant * dexmodif;
	Constant * conmodif;
	Constant * intmodif;
	Constant * wismodif;
	Constant * chamodif;
}statsSpread;

typedef struct{
	Constant * ArmorClass;
}ArmorClass;

typedef struct{
	Constant * intiative;
}Initiative;

typedef struct{
	Constant * speed;
}Speed;

typedef struct{
	objecttext * Cbackstory;
}CharacBackStory;

struct proficienciesCh{
	IsRecursive type;
	objecttext * nameProf;
	objecttext * profDescription;
	Constant * valueProf;
	proficienciesCh * profCh;
};

struct featuresCh{
	IsRecursive type;
	objecttext * nameFeat;
	objecttext * featDescription;
	featuresCh * featCh;
};

struct itemsCh{
	IsRecursive type;
	objecttext * nameFeat;
	objecttext * featDescription;
	itemsCh * itemCh;
};

struct equipmentCh{
	IsRecursive type;
	objecttext * equipmentName;
	objecttext * equipmentDescription;
	objecttext * partofbody;
	equipmentCh * profCh;
};

// Aca termina los menores no terminales de restofbody

typedef struct{
	statsSpread * stats;
	ArmorClass * armorclass;
	Initiative * initiative;
	Speed * speed;
	proficienciesCh * proficiencies;
	featuresCh * features;
	equipmentCh * equipment;
	itemsCh * items;
	CharacBackStory * backstory;
	Spellbook * spellbook;
}restofbodyCharac;

// Desde aca menores no terminales de Body

typedef enum{
	NODUALCLASS,
	SIDUALCLASS
}hasdualclass;

typedef struct{
	objecttext * characname;
}nameCharac;

typedef struct{
	Constant * levelnum;
}levelCharac;

typedef struct{
	hasdualclass mode;
	objecttext * classname1;
	objecttext * classname2;
}classCharac;

typedef struct{
	objecttext * characbackgr;
}backgroundCharac;

typedef struct{
	objecttext * realname;
}playername;

typedef struct{
	objecttext * characterrace;
}characrace;

typedef struct{
	objecttext * alignment;
}alignmentCharac;

typedef struct{
	Constant * qexppoint;
}exppointsCharac;


// Aca se terminan los menores no terminales de body

typedef enum{
	CHARACTERSH,
	MOSNTERSH,
	ITEMSH,
	NPCSH
}sheetType;

typedef struct{
	nameCharac * name;
	levelCharac * level;
	classCharac * class;
	backgroundCharac * background;
	playername * playername;
	characrace * race;
	alignmentCharac * alignment;
	exppointsCharac * exppoints;
	restofbodyCharac * restofbody;
}Body;

//

typedef struct{
	objecttext * typeofMons;
}TypeofMonster;

typedef struct{
	ListofAttacks * listAttack;
}MonsterAttacks;

struct ListofAttacks{
	ListofAttacks * OtherAttack;
	objecttext * nameofAttack;
	objecttext * attackDesc;
	DiceDmg * attackDamage;
	IsRecursive type;
};

typedef struct{
	nameCharac * nameMonster;
	TypeofMonster * typeMonster;
	statsSpread * statsMonster;
	CharacBackStory * backstoryMonster;
	MonsterAttacks * attacksMonst;
	Spellbook * spellbook;	
}MonsterBody;

//

typedef enum{
	ZEROENDLINES,
	ONEENDLINE,
	TWOORMOREENDLINES
}freemode;

struct freeendlines{
	freemode mode;
	freeendlines * freeendlines;
	int * Endlines;
};

typedef struct{
	sheetType type;
	Body * body;
	MonsterBody * mbody;
	ItemBody * itembody;
	NPCBody * npcbody;
	Constant * id;
}Sheet;

typedef struct{
	Sheet * sheet;
}mainprogram;



#endif
