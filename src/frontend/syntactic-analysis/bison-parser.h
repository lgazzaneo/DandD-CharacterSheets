/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_SRC_FRONTEND_SYNTACTIC_ANALYSIS_BISON_PARSER_H_INCLUDED
# define YY_YY_SRC_FRONTEND_SYNTACTIC_ANALYSIS_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ADD = 258,
    SUB = 259,
    MUL = 260,
    DIV = 261,
    AND = 262,
    OR = 263,
    UNKNOWN_ERROR = 264,
    ALPHAVAL = 265,
    OPEN_PARENTHESIS = 266,
    CLOSE_PARENTHESIS = 267,
    OPEN_LLAVES = 268,
    CLOSE_LLAVES = 269,
    OPEN_CORCHETES = 270,
    CLOSE_CORCHETES = 271,
    INTEGER = 272,
    INTDT = 273,
    ENDLINE = 274,
    PUNTOCOMA = 275,
    DICEDMG = 276,
    FUNCT = 277,
    NEW = 278,
    START = 279,
    CHARAC = 280,
    STR = 281,
    STRDT = 282,
    ITEM = 283,
    STATS = 284,
    NPC = 285,
    MOSNTER = 286,
    RAZGO = 287,
    MODIF = 288,
    SHEET = 289,
    DOSPTS = 290,
    CADENA = 291,
    COMMA = 292,
    NAME = 293,
    CLASS = 294,
    DUALCLASS = 295,
    LVL = 296,
    BKGR = 297,
    PLYNAME = 298,
    RACE = 299,
    ALIGN = 300,
    EXP = 301,
    ACLASS = 302,
    INIT = 303,
    SPD = 304,
    PROF = 305,
    FEAT = 306,
    EQUIP = 307,
    ITEMS = 308,
    BACKSTORY = 309,
    SPLLBOOK = 310,
    STORE = 311,
    ITEMNAME = 312,
    RAR = 313,
    DES = 314,
    TYPEMONS = 315,
    ATTACKS = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1921  */

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

#line 178 "../src/frontend/syntactic-analysis/bison-parser.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_FRONTEND_SYNTACTIC_ANALYSIS_BISON_PARSER_H_INCLUDED  */
