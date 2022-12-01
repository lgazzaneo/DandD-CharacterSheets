/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_FRONTEND_SYNTACTIC_ANALYSIS_BISON_PARSER_H_INCLUDED
# define YY_YY_SRC_FRONTEND_SYNTACTIC_ANALYSIS_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ADD = 258,                     /* ADD  */
    SUB = 259,                     /* SUB  */
    MUL = 260,                     /* MUL  */
    DIV = 261,                     /* DIV  */
    AND = 262,                     /* AND  */
    OR = 263,                      /* OR  */
    UNKNOWN_ERROR = 264,           /* UNKNOWN_ERROR  */
    ALPHAVAL = 265,                /* ALPHAVAL  */
    OPEN_PARENTHESIS = 266,        /* OPEN_PARENTHESIS  */
    CLOSE_PARENTHESIS = 267,       /* CLOSE_PARENTHESIS  */
    OPEN_LLAVES = 268,             /* OPEN_LLAVES  */
    CLOSE_LLAVES = 269,            /* CLOSE_LLAVES  */
    OPEN_CORCHETES = 270,          /* OPEN_CORCHETES  */
    CLOSE_CORCHETES = 271,         /* CLOSE_CORCHETES  */
    INTEGER = 272,                 /* INTEGER  */
    INTDT = 273,                   /* INTDT  */
    ENDLINE = 274,                 /* ENDLINE  */
    PUNTOCOMA = 275,               /* PUNTOCOMA  */
    DICEDMG = 276,                 /* DICEDMG  */
    FUNCT = 277,                   /* FUNCT  */
    NEW = 278,                     /* NEW  */
    START = 279,                   /* START  */
    CHARAC = 280,                  /* CHARAC  */
    STR = 281,                     /* STR  */
    STRDT = 282,                   /* STRDT  */
    ITEM = 283,                    /* ITEM  */
    STATS = 284,                   /* STATS  */
    NPC = 285,                     /* NPC  */
    MOSNTER = 286,                 /* MOSNTER  */
    RAZGO = 287,                   /* RAZGO  */
    MODIF = 288,                   /* MODIF  */
    SHEET = 289,                   /* SHEET  */
    DOSPTS = 290,                  /* DOSPTS  */
    CADENA = 291,                  /* CADENA  */
    COMMA = 292,                   /* COMMA  */
    NAME = 293,                    /* NAME  */
    CLASS = 294,                   /* CLASS  */
    DUALCLASS = 295,               /* DUALCLASS  */
    LVL = 296,                     /* LVL  */
    BKGR = 297,                    /* BKGR  */
    PLYNAME = 298,                 /* PLYNAME  */
    RACE = 299,                    /* RACE  */
    ALIGN = 300,                   /* ALIGN  */
    EXP = 301,                     /* EXP  */
    ACLASS = 302,                  /* ACLASS  */
    INIT = 303,                    /* INIT  */
    SPD = 304,                     /* SPD  */
    PROF = 305,                    /* PROF  */
    FEAT = 306,                    /* FEAT  */
    EQUIP = 307,                   /* EQUIP  */
    ITEMS = 308,                   /* ITEMS  */
    BACKSTORY = 309,               /* BACKSTORY  */
    SPLLBOOK = 310,                /* SPLLBOOK  */
    STORE = 311,                   /* STORE  */
    ITEMNAME = 312,                /* ITEMNAME  */
    RAR = 313,                     /* RAR  */
    DES = 314,                     /* DES  */
    TYPEMONS = 315,                /* TYPEMONS  */
    ATTACKS = 316                  /* ATTACKS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "../src/frontend/syntactic-analysis/bison-grammar.y"

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

#line 183 "../src/frontend/syntactic-analysis/bison-parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_FRONTEND_SYNTACTIC_ANALYSIS_BISON_PARSER_H_INCLUDED  */
