/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:337  */


#include "bison-actions.h"


#line 76 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison-parser.h".  */
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
#line 8 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:352  */

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

#line 239 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_FRONTEND_SYNTACTIC_ANALYSIS_BISON_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   231

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

#define YYUNDEFTOK  2
#define YYMAXUTOK   316

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   192,   192,   195,   196,   197,   200,   201,   202,   203,
     206,   209,   212,   215,   216,   219,   222,   225,   228,   231,
     234,   235,   238,   241,   244,   247,   250,   251,   254,   255,
     258,   259,   262,   263,   266,   269,   270,   273,   274,   281,
     284,   287,   290,   291,   294,   299,   302,   305,   308,   313,
     316,   319,   322,   323
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD", "SUB", "MUL", "DIV", "AND", "OR",
  "UNKNOWN_ERROR", "ALPHAVAL", "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS",
  "OPEN_LLAVES", "CLOSE_LLAVES", "OPEN_CORCHETES", "CLOSE_CORCHETES",
  "INTEGER", "INTDT", "ENDLINE", "PUNTOCOMA", "DICEDMG", "FUNCT", "NEW",
  "START", "CHARAC", "STR", "STRDT", "ITEM", "STATS", "NPC", "MOSNTER",
  "RAZGO", "MODIF", "SHEET", "DOSPTS", "CADENA", "COMMA", "NAME", "CLASS",
  "DUALCLASS", "LVL", "BKGR", "PLYNAME", "RACE", "ALIGN", "EXP", "ACLASS",
  "INIT", "SPD", "PROF", "FEAT", "EQUIP", "ITEMS", "BACKSTORY", "SPLLBOOK",
  "STORE", "ITEMNAME", "RAR", "DES", "TYPEMONS", "ATTACKS", "$accept",
  "mainprogram", "freeendlines", "sheet", "body", "name", "level", "class",
  "background", "playername", "race", "alignment", "exppoints",
  "restofbody", "stats", "armorclass", "initiative", "speed",
  "proficiencies", "features", "equipment", "items", "backstory",
  "spellbook", "spellcasterspells", "spell", "npcbody", "merchantbody",
  "store", "itemtosell", "itembody", "itemname", "rarity", "description",
  "monsterbody", "typeofmonster", "attacks", "listofat", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

#define YYPACT_NINF -67

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define YYTABLE_NINF -44

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -11,   -15,     9,   -67,   -18,   -16,   -10,    -9,   -67,    10,
      11,    13,    14,     1,     1,     1,     1,     2,    -5,   -23,
     -21,    -5,     1,     5,   -67,     1,     6,   -67,     1,     7,
     -67,   -67,     1,   -67,   -67,    12,    -2,    17,   -22,    18,
     -12,    25,    15,     1,    26,    20,     1,    16,   -67,    30,
      22,     1,   -67,    32,   -34,   -67,    34,    -7,    35,    38,
      36,    37,    43,    29,    33,     1,    45,    39,     1,    40,
       3,    47,    41,     1,   -67,    44,    46,    27,   -67,    52,
     -67,   -67,    18,   -67,    54,    19,    59,    48,    49,     1,
      61,   -67,    50,    51,     1,   -67,    56,    57,    53,   -67,
      71,    63,    42,   -67,    70,    58,     1,    60,    74,    64,
      55,   -67,    65,    62,    78,   -67,    72,    66,   -67,   -67,
      80,    67,     1,    68,    75,   -67,    87,   -67,    81,    69,
      92,    85,    82,    93,    83,     1,    79,    86,    89,   -67,
      94,    73,   105,   103,    88,     4,   106,    95,     1,    90,
     108,   107,    55,   -67,   112,    37,   115,     1,    98,   -67,
     116,   -67,     1,   117,    72,   118,   -67,    91,   -67,   -67,
     120,   109,     1,   -67,   124,    97,   122,   111,     1,   -67,
     130,   100,   131,   119,     1,   -67,   133,   102,   135,   121,
     110,   -67,   127,   125,   113,   128,   136,   132,   104,   140,
     134,   142,   137,    19,   138,   143,   139,   147,     1,   157,
     158,   151,   144,    55,   -13,     1,   145,   153,   -67,     1,
       1,   110,   154,   163,   -67,   102,   -67,   164,     1,   -67,
       1,   104,   113,   -67,   -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     5,     5,     5,     5,     3,     0,     0,
       0,     0,     5,     0,     6,     5,     0,     8,     5,     0,
       9,    40,     5,     7,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     5,     0,    41,     0,
       0,     5,    11,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     5,     0,
       5,     0,     0,     5,    12,     0,     0,     0,    47,     0,
      45,    44,     0,    50,     0,     0,     0,     0,     0,     5,
       0,    42,     0,     0,     5,    13,     0,     0,     0,    48,
       0,     0,     0,    14,     0,     0,     5,     0,     0,     0,
      36,    15,     0,     0,     0,    34,     0,     0,    49,    35,
       0,     0,     5,     0,     0,    51,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     0,    17,
       0,     0,     0,     0,     0,     5,     0,     0,     5,     0,
       0,     0,     0,    18,     0,    21,     0,     5,     0,    37,
       0,    10,     5,     0,    53,     0,    19,     0,    22,    52,
       0,     0,     5,    39,     0,     0,     0,     0,     5,    23,
       0,     0,     0,     0,     5,    24,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     0,
       0,     0,     0,    36,     0,     5,     0,     0,    20,     5,
       5,    29,     0,     0,    27,     0,    28,     0,     5,    26,
       5,    33,    31,    32,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   -14,   -67,   -67,   165,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,    76,   -67,   -67,   -67,   -66,   -36,
     -45,   -43,    -8,   -24,    77,   -67,   -67,   -67,   114,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,    28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    18,     3,    24,    25,    43,    65,    89,   106,
     122,   135,   148,   161,    73,   172,   178,   184,   190,   194,
     198,   203,    94,   118,   119,   145,    30,    31,    48,    49,
      27,    28,    46,    68,    33,    51,   110,   125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    20,    21,   -43,   -38,    63,    64,   219,    34,     8,
       4,    36,     1,     5,    38,     6,     7,     9,    40,    10,
      17,    22,    17,    17,   220,    11,    12,    13,    14,    54,
      15,    16,    57,    23,    26,    29,    45,    61,    41,    42,
      35,    37,    39,    44,    47,    52,    55,    59,    50,    62,
      53,    77,    67,    58,    80,    56,    82,    60,    70,    85,
      66,    69,    71,    74,    75,    78,    72,    83,    76,    88,
      86,    92,    87,    93,    79,    98,    84,    81,    90,    95,
     102,    99,   103,   104,    97,    96,   101,   100,   107,   108,
     111,   120,   113,   112,   115,   123,   105,   114,   124,   116,
     127,   126,   128,   109,   132,   130,   121,   133,   129,   136,
     117,   137,   131,   139,   134,   144,   142,   138,   140,   147,
     146,   141,   149,   143,   150,   151,   153,   156,   157,   160,
     154,   152,   163,   158,   155,   165,   166,   168,   171,   170,
     173,   176,   179,   164,   174,   177,   180,   182,   167,   183,
     188,   185,   189,   195,   186,   191,   192,   202,   175,   229,
     196,   193,   200,   199,   181,   197,   204,   201,   206,   210,
     187,   205,   207,   212,   214,   209,   211,   216,   215,   223,
     227,   217,   222,   228,   230,   226,    32,   234,   233,   218,
       0,     0,   169,     0,   213,   208,    91,     0,     0,     0,
       0,   221,     0,     0,     0,   224,   225,     0,     0,     0,
       0,     0,     0,     0,   231,     0,   232,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   159,
       0,   162
};

static const yytype_int16 yycheck[] =
{
      14,    15,    16,     0,     0,    39,    40,    20,    22,     0,
      25,    25,    23,    28,    28,    30,    31,    35,    32,    35,
      19,    19,    19,    19,    37,    35,    35,    17,    17,    43,
      17,    17,    46,    38,    57,    56,    58,    51,    26,    41,
      35,    35,    35,    26,    26,    20,    20,    17,    60,    17,
      35,    65,    59,    37,    68,    35,    70,    35,    20,    73,
      26,    26,    26,    20,    35,    20,    29,    20,    35,    42,
      26,    17,    26,    54,    35,    89,    35,    37,    26,    20,
      94,    20,    26,    26,    35,    37,    35,    37,    17,    26,
      20,    26,   106,    35,    20,    17,    43,    37,    26,    35,
      20,    35,    35,    61,    17,    37,    44,    26,   122,    17,
      55,    26,    37,    20,    45,    26,    37,    35,    35,    46,
      26,   135,    17,    37,    21,    37,    20,    37,    20,    17,
      35,   145,    17,    26,   148,    37,    20,    20,    47,    21,
      20,    17,    20,   157,    35,    48,    35,    17,   162,    49,
      17,    20,    50,    26,    35,    20,    35,    53,   172,   225,
      35,    51,    26,    35,   178,    52,    26,    35,    26,    26,
     184,    37,    35,    26,    17,    37,    37,    26,    20,    26,
      26,    37,    37,    20,    20,   221,    21,   232,   231,   213,
      -1,    -1,   164,    -1,   208,   203,    82,    -1,    -1,    -1,
      -1,   215,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   228,    -1,   230,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      -1,   155
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    63,    65,    25,    28,    30,    31,     0,    35,
      35,    35,    35,    17,    17,    17,    17,    19,    64,    64,
      64,    64,    19,    38,    66,    67,    57,    92,    93,    56,
      88,    89,    67,    96,    64,    35,    64,    35,    64,    35,
      64,    26,    41,    68,    26,    58,    94,    26,    90,    91,
      60,    97,    20,    35,    64,    20,    35,    64,    37,    17,
      35,    64,    17,    39,    40,    69,    26,    59,    95,    26,
      20,    26,    29,    76,    20,    35,    35,    64,    20,    35,
      64,    37,    64,    20,    35,    64,    26,    26,    42,    70,
      26,    90,    17,    54,    84,    20,    37,    35,    64,    20,
      37,    35,    64,    26,    26,    43,    71,    17,    26,    61,
      98,    20,    35,    64,    37,    20,    35,    55,    85,    86,
      26,    44,    72,    17,    26,    99,    35,    20,    35,    64,
      37,    37,    17,    26,    45,    73,    17,    26,    35,    20,
      35,    64,    37,    37,    26,    87,    26,    46,    74,    17,
      21,    37,    64,    20,    35,    64,    37,    20,    26,    86,
      17,    75,    76,    17,    64,    37,    20,    64,    20,    99,
      21,    47,    77,    20,    35,    64,    17,    48,    78,    20,
      35,    64,    17,    49,    79,    20,    35,    64,    17,    50,
      80,    20,    35,    51,    81,    26,    35,    52,    82,    35,
      26,    35,    53,    83,    26,    37,    26,    35,    84,    37,
      26,    37,    26,    64,    17,    20,    26,    37,    85,    20,
      37,    64,    37,    26,    64,    64,    81,    26,    20,    80,
      20,    64,    64,    83,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    65,    65,    65,    65,
      66,    67,    68,    69,    69,    70,    71,    72,    73,    74,
      75,    75,    76,    77,    78,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    85,    85,    86,    86,    87,
      88,    89,    90,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     0,     6,     6,     6,     6,
      17,     4,     4,     4,     5,     4,     4,     4,     4,     4,
      15,     0,    14,     4,     4,     4,    10,     9,     8,     7,
      10,     9,     8,     7,     4,     1,     0,     7,     5,     6,
       1,     3,     5,     3,     4,     6,     4,     4,     4,    10,
       4,     3,     8,     7
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 192 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.mainprogram) = ProgramStart((yyvsp[0].Sheet));}
#line 1481 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 3:
#line 195 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.freeendlines) = EndLines(ONEENDLINE, NULL);}
#line 1487 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 4:
#line 196 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.freeendlines) = EndLines(TWOORMOREENDLINES, (yyvsp[0].freeendlines));}
#line 1493 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 5:
#line 197 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.freeendlines) = EndLines(ZEROENDLINES, NULL);}
#line 1499 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 6:
#line 200 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Sheet) = SheetFunction((yyvsp[-2].value), CHARACTERSH, (yyvsp[0].MainBody), NULL, NULL, NULL);}
#line 1505 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 7:
#line 201 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Sheet) = SheetFunction((yyvsp[-2].value), MOSNTERSH, NULL, (yyvsp[0].MonsterBody), NULL, NULL);}
#line 1511 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 8:
#line 202 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Sheet) = SheetFunction((yyvsp[-2].value), ITEMSH, NULL, NULL, (yyvsp[0].ItemBody), NULL);}
#line 1517 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 9:
#line 203 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Sheet) = SheetFunction((yyvsp[-2].value), NPCSH, NULL, NULL, NULL, (yyvsp[0].NPCBody));}
#line 1523 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 10:
#line 206 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.MainBody) = CharacBodyFunction((yyvsp[-16].Characname),(yyvsp[-14].levelCharac),(yyvsp[-12].classCharac),(yyvsp[-10].backgroundCharac),(yyvsp[-8].playername),(yyvsp[-6].characrace),(yyvsp[-4].alignmentCharac),(yyvsp[-2].exppointsCharac),(yyvsp[0].restofbodyCharac));}
#line 1529 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 11:
#line 209 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Characname) = nameCharacFunction((yyvsp[-1].text));}
#line 1535 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 12:
#line 212 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.levelCharac) = levelCharacFunction((yyvsp[-1].value));}
#line 1541 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 215 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.classCharac) = classCharacFunction(NODUALCLASS, (yyvsp[-1].text), NULL);}
#line 1547 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 216 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.classCharac) = classCharacFunction(SIDUALCLASS, (yyvsp[-2].text), (yyvsp[0].text));}
#line 1553 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 219 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.backgroundCharac) = backgroundCharacFunction((yyvsp[-1].text));}
#line 1559 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 222 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.playername) = playernameFunction((yyvsp[-1].text));}
#line 1565 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 225 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.characrace) = characraceFunction((yyvsp[-1].text));}
#line 1571 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 228 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.alignmentCharac) = alignmentCharacFunction((yyvsp[-1].text));}
#line 1577 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 231 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.exppointsCharac) = exppointsCharacFunction((yyvsp[-1].value));}
#line 1583 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 234 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.restofbodyCharac) = restofbodyCharacFunction((yyvsp[-14].statsSpread),(yyvsp[-12].ArmorClass),(yyvsp[-10].Initiative),(yyvsp[-8].Speed),(yyvsp[-6].proficienciesCh),(yyvsp[-5].featuresCh),(yyvsp[-4].equipmentCh),(yyvsp[-3].itemsCh),(yyvsp[-2].CharacBackStory),(yyvsp[0].Spellbook));}
#line 1589 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 238 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.statsSpread) = statsSpreadFunction((yyvsp[-11].value),(yyvsp[-9].value),(yyvsp[-7].value),(yyvsp[-5].value),(yyvsp[-3].value),(yyvsp[-1].value));}
#line 1595 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 241 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.ArmorClass) = ArmorClassFunction((yyvsp[-1].value));}
#line 1601 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 244 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Initiative) = InitiativeFunction((yyvsp[-1].value));}
#line 1607 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 247 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Speed) = SpeedFunction((yyvsp[-1].value));}
#line 1613 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 26:
#line 250 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.proficienciesCh) = proficienciesChFunction(RECURSIVETYPE, (yyvsp[-7].text), (yyvsp[-5].text), (yyvsp[-3].value), (yyvsp[0].proficienciesCh));}
#line 1619 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 27:
#line 251 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.proficienciesCh) = proficienciesChFunction(NORECURTYPE, (yyvsp[-6].text), (yyvsp[-4].text), (yyvsp[-2].value), NULL);}
#line 1625 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 28:
#line 254 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.featuresCh) = featuresChFunction(RECURSIVETYPE, (yyvsp[-5].text), (yyvsp[-3].text), (yyvsp[0].featuresCh));}
#line 1631 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 29:
#line 255 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.featuresCh) = featuresChFunction(NORECURTYPE, (yyvsp[-4].text), (yyvsp[-2].text), NULL);}
#line 1637 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 30:
#line 258 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.equipmentCh) = equipmentChFunction(RECURSIVETYPE, (yyvsp[-7].text), (yyvsp[-5].text), (yyvsp[-3].text), (yyvsp[0].equipmentCh));}
#line 1643 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 31:
#line 259 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.equipmentCh) = equipmentChFunction(NORECURTYPE, (yyvsp[-6].text), (yyvsp[-4].text), (yyvsp[-2].text), NULL);}
#line 1649 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 32:
#line 262 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.itemsCh) = itemsChFunction(RECURSIVETYPE, (yyvsp[-5].text), (yyvsp[-3].text), (yyvsp[0].itemsCh));}
#line 1655 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 33:
#line 263 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.itemsCh) = itemsChFunction(NORECURTYPE, (yyvsp[-4].text), (yyvsp[-2].text), NULL);}
#line 1661 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 34:
#line 266 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.CharacBackStory) = CharacBackStoryFunction((yyvsp[-1].text));}
#line 1667 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 35:
#line 269 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Spellbook) = SpellbookFunction(SPBOOK, (yyvsp[0].spellcasterspells));}
#line 1673 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 36:
#line 270 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Spellbook) = SpellbookFunction(NOSPBOOK, NULL);}
#line 1679 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 37:
#line 273 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.spellcasterspells) = spellcasterspellsFunction(RECURSPELL, (yyvsp[-2].Spell), (yyvsp[-4].value), (yyvsp[0].spellcasterspells));}
#line 1685 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 38:
#line 274 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.spellcasterspells) = spellcasterspellsFunction(ONLYONE, (yyvsp[0].Spell), (yyvsp[-2].value), NULL);}
#line 1691 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 39:
#line 281 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Spell) = SpellFunction((yyvsp[-5].text), (yyvsp[-3].text), (yyvsp[-1].damage));}
#line 1697 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 40:
#line 284 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.NPCBody) = NPCBodyFunction((yyvsp[0].Merchant));}
#line 1703 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 41:
#line 287 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Merchant) = MerchantFunction((yyvsp[0].Store));}
#line 1709 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 42:
#line 290 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Store) = StoreFunction(RECURSIVETYPE, (yyvsp[-4].ItemstoSell), (yyvsp[-3].value), (yyvsp[0].Store));}
#line 1715 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 43:
#line 291 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.Store) = StoreFunction(NORECURTYPE, (yyvsp[-2].ItemstoSell), (yyvsp[-1].value), NULL);}
#line 1721 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 44:
#line 294 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.ItemstoSell) = ItemstoSellFunction((yyvsp[-3].text), (yyvsp[-1].text));}
#line 1727 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 45:
#line 299 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.ItemBody) = ItemBodyFunction((yyvsp[-5].ItemName), (yyvsp[-1].ItemDescription), (yyvsp[-3].ItemRarity));}
#line 1733 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 46:
#line 302 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.ItemName) = ItemNameFunction((yyvsp[-1].text));}
#line 1739 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 47:
#line 305 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.ItemRarity) = ItemRarityFunction((yyvsp[-1].text));}
#line 1745 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 48:
#line 308 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.ItemDescription) = ItemDescriptionFunction((yyvsp[-1].text));}
#line 1751 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 49:
#line 313 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.MonsterBody) = MonsterBodyFunction((yyvsp[-9].Characname), (yyvsp[-7].TypeofMonster), (yyvsp[-5].statsSpread), (yyvsp[-3].CharacBackStory), (yyvsp[-1].MonsterAttacks), (yyvsp[0].Spellbook));}
#line 1757 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 50:
#line 316 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.TypeofMonster) = TypeofMonsterFunction((yyvsp[-1].text));}
#line 1763 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 51:
#line 319 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.MonsterAttacks) = MonsterAttacksFunction((yyvsp[0].ListofAttacks));}
#line 1769 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 52:
#line 322 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.ListofAttacks) = ListofAttacksFunction(RECURSIVETYPE, (yyvsp[-3].damage), (yyvsp[-7].text), (yyvsp[-5].text), (yyvsp[0].ListofAttacks));}
#line 1775 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;

  case 53:
#line 323 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1652  */
    {(yyval.ListofAttacks) = ListofAttacksFunction(NORECURTYPE, (yyvsp[-2].damage), (yyvsp[-6].text), (yyvsp[-4].text), NULL);}
#line 1781 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
    break;


#line 1785 "../src/frontend/syntactic-analysis/bison-parser.c" /* yacc.c:1652  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 578 "../src/frontend/syntactic-analysis/bison-grammar.y" /* yacc.c:1918  */
