/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "../src/frontend/syntactic-analysis/bison-grammar.y"


#include "bison-actions.h"


#line 77 "../src/frontend/syntactic-analysis/bison-parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "bison-parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ADD = 3,                        /* ADD  */
  YYSYMBOL_SUB = 4,                        /* SUB  */
  YYSYMBOL_MUL = 5,                        /* MUL  */
  YYSYMBOL_DIV = 6,                        /* DIV  */
  YYSYMBOL_AND = 7,                        /* AND  */
  YYSYMBOL_OR = 8,                         /* OR  */
  YYSYMBOL_UNKNOWN_ERROR = 9,              /* UNKNOWN_ERROR  */
  YYSYMBOL_ALPHAVAL = 10,                  /* ALPHAVAL  */
  YYSYMBOL_OPEN_PARENTHESIS = 11,          /* OPEN_PARENTHESIS  */
  YYSYMBOL_CLOSE_PARENTHESIS = 12,         /* CLOSE_PARENTHESIS  */
  YYSYMBOL_OPEN_LLAVES = 13,               /* OPEN_LLAVES  */
  YYSYMBOL_CLOSE_LLAVES = 14,              /* CLOSE_LLAVES  */
  YYSYMBOL_OPEN_CORCHETES = 15,            /* OPEN_CORCHETES  */
  YYSYMBOL_CLOSE_CORCHETES = 16,           /* CLOSE_CORCHETES  */
  YYSYMBOL_INTEGER = 17,                   /* INTEGER  */
  YYSYMBOL_INTDT = 18,                     /* INTDT  */
  YYSYMBOL_ENDLINE = 19,                   /* ENDLINE  */
  YYSYMBOL_PUNTOCOMA = 20,                 /* PUNTOCOMA  */
  YYSYMBOL_DICEDMG = 21,                   /* DICEDMG  */
  YYSYMBOL_FUNCT = 22,                     /* FUNCT  */
  YYSYMBOL_NEW = 23,                       /* NEW  */
  YYSYMBOL_START = 24,                     /* START  */
  YYSYMBOL_CHARAC = 25,                    /* CHARAC  */
  YYSYMBOL_STR = 26,                       /* STR  */
  YYSYMBOL_STRDT = 27,                     /* STRDT  */
  YYSYMBOL_ITEM = 28,                      /* ITEM  */
  YYSYMBOL_STATS = 29,                     /* STATS  */
  YYSYMBOL_NPC = 30,                       /* NPC  */
  YYSYMBOL_MOSNTER = 31,                   /* MOSNTER  */
  YYSYMBOL_RAZGO = 32,                     /* RAZGO  */
  YYSYMBOL_MODIF = 33,                     /* MODIF  */
  YYSYMBOL_SHEET = 34,                     /* SHEET  */
  YYSYMBOL_DOSPTS = 35,                    /* DOSPTS  */
  YYSYMBOL_CADENA = 36,                    /* CADENA  */
  YYSYMBOL_COMMA = 37,                     /* COMMA  */
  YYSYMBOL_NAME = 38,                      /* NAME  */
  YYSYMBOL_CLASS = 39,                     /* CLASS  */
  YYSYMBOL_DUALCLASS = 40,                 /* DUALCLASS  */
  YYSYMBOL_LVL = 41,                       /* LVL  */
  YYSYMBOL_BKGR = 42,                      /* BKGR  */
  YYSYMBOL_PLYNAME = 43,                   /* PLYNAME  */
  YYSYMBOL_RACE = 44,                      /* RACE  */
  YYSYMBOL_ALIGN = 45,                     /* ALIGN  */
  YYSYMBOL_EXP = 46,                       /* EXP  */
  YYSYMBOL_ACLASS = 47,                    /* ACLASS  */
  YYSYMBOL_INIT = 48,                      /* INIT  */
  YYSYMBOL_SPD = 49,                       /* SPD  */
  YYSYMBOL_PROF = 50,                      /* PROF  */
  YYSYMBOL_FEAT = 51,                      /* FEAT  */
  YYSYMBOL_EQUIP = 52,                     /* EQUIP  */
  YYSYMBOL_ITEMS = 53,                     /* ITEMS  */
  YYSYMBOL_BACKSTORY = 54,                 /* BACKSTORY  */
  YYSYMBOL_SPLLBOOK = 55,                  /* SPLLBOOK  */
  YYSYMBOL_STORE = 56,                     /* STORE  */
  YYSYMBOL_ITEMNAME = 57,                  /* ITEMNAME  */
  YYSYMBOL_RAR = 58,                       /* RAR  */
  YYSYMBOL_DES = 59,                       /* DES  */
  YYSYMBOL_TYPEMONS = 60,                  /* TYPEMONS  */
  YYSYMBOL_ATTACKS = 61,                   /* ATTACKS  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_mainprogram = 63,               /* mainprogram  */
  YYSYMBOL_freeendlines = 64,              /* freeendlines  */
  YYSYMBOL_sheet = 65,                     /* sheet  */
  YYSYMBOL_body = 66,                      /* body  */
  YYSYMBOL_name = 67,                      /* name  */
  YYSYMBOL_level = 68,                     /* level  */
  YYSYMBOL_class = 69,                     /* class  */
  YYSYMBOL_background = 70,                /* background  */
  YYSYMBOL_playername = 71,                /* playername  */
  YYSYMBOL_race = 72,                      /* race  */
  YYSYMBOL_alignment = 73,                 /* alignment  */
  YYSYMBOL_exppoints = 74,                 /* exppoints  */
  YYSYMBOL_restofbody = 75,                /* restofbody  */
  YYSYMBOL_stats = 76,                     /* stats  */
  YYSYMBOL_armorclass = 77,                /* armorclass  */
  YYSYMBOL_initiative = 78,                /* initiative  */
  YYSYMBOL_speed = 79,                     /* speed  */
  YYSYMBOL_proficiencies = 80,             /* proficiencies  */
  YYSYMBOL_features = 81,                  /* features  */
  YYSYMBOL_equipment = 82,                 /* equipment  */
  YYSYMBOL_items = 83,                     /* items  */
  YYSYMBOL_backstory = 84,                 /* backstory  */
  YYSYMBOL_spellbook = 85,                 /* spellbook  */
  YYSYMBOL_spellcasterspells = 86,         /* spellcasterspells  */
  YYSYMBOL_spell = 87,                     /* spell  */
  YYSYMBOL_npcbody = 88,                   /* npcbody  */
  YYSYMBOL_merchantbody = 89,              /* merchantbody  */
  YYSYMBOL_store = 90,                     /* store  */
  YYSYMBOL_itemtosell = 91,                /* itemtosell  */
  YYSYMBOL_itembody = 92,                  /* itembody  */
  YYSYMBOL_itemname = 93,                  /* itemname  */
  YYSYMBOL_rarity = 94,                    /* rarity  */
  YYSYMBOL_description = 95,               /* description  */
  YYSYMBOL_monsterbody = 96,               /* monsterbody  */
  YYSYMBOL_typeofmonster = 97,             /* typeofmonster  */
  YYSYMBOL_attacks = 98,                   /* attacks  */
  YYSYMBOL_listofat = 99                   /* listofat  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
static const yytype_int16 yyrline[] =
{
       0,   192,   192,   195,   196,   197,   200,   201,   202,   203,
     206,   209,   212,   215,   216,   219,   222,   225,   228,   231,
     234,   235,   238,   241,   244,   247,   250,   251,   254,   255,
     258,   259,   262,   263,   266,   269,   270,   273,   274,   281,
     284,   287,   290,   291,   294,   299,   302,   305,   308,   313,
     316,   319,   322,   323
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ADD", "SUB", "MUL",
  "DIV", "AND", "OR", "UNKNOWN_ERROR", "ALPHAVAL", "OPEN_PARENTHESIS",
  "CLOSE_PARENTHESIS", "OPEN_LLAVES", "CLOSE_LLAVES", "OPEN_CORCHETES",
  "CLOSE_CORCHETES", "INTEGER", "INTDT", "ENDLINE", "PUNTOCOMA", "DICEDMG",
  "FUNCT", "NEW", "START", "CHARAC", "STR", "STRDT", "ITEM", "STATS",
  "NPC", "MOSNTER", "RAZGO", "MODIF", "SHEET", "DOSPTS", "CADENA", "COMMA",
  "NAME", "CLASS", "DUALCLASS", "LVL", "BKGR", "PLYNAME", "RACE", "ALIGN",
  "EXP", "ACLASS", "INIT", "SPD", "PROF", "FEAT", "EQUIP", "ITEMS",
  "BACKSTORY", "SPLLBOOK", "STORE", "ITEMNAME", "RAR", "DES", "TYPEMONS",
  "ATTACKS", "$accept", "mainprogram", "freeendlines", "sheet", "body",
  "name", "level", "class", "background", "playername", "race",
  "alignment", "exppoints", "restofbody", "stats", "armorclass",
  "initiative", "speed", "proficiencies", "features", "equipment", "items",
  "backstory", "spellbook", "spellcasterspells", "spell", "npcbody",
  "merchantbody", "store", "itemtosell", "itembody", "itemname", "rarity",
  "description", "monsterbody", "typeofmonster", "attacks", "listofat", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-67)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
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
static const yytype_int8 yydefact[] =
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
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    18,     3,    24,    25,    43,    65,    89,   106,
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    65,    65,    65,    65,
      66,    67,    68,    69,    69,    70,    71,    72,    73,    74,
      75,    75,    76,    77,    78,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    85,    85,    86,    86,    87,
      88,    89,    90,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     0,     6,     6,     6,     6,
      17,     4,     4,     4,     5,     4,     4,     4,     4,     4,
      15,     0,    14,     4,     4,     4,    10,     9,     8,     7,
      10,     9,     8,     7,     4,     1,     0,     7,     5,     6,
       1,     3,     5,     3,     4,     6,     4,     4,     4,    10,
       4,     3,     8,     7
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
  case 2: /* mainprogram: sheet  */
#line 192 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                        {(yyval.mainprogram) = ProgramStart((yyvsp[0].Sheet));}
#line 1305 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 3: /* freeendlines: ENDLINE  */
#line 195 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                {(yyval.freeendlines) = EndLines(ONEENDLINE, NULL);}
#line 1311 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 4: /* freeendlines: ENDLINE ENDLINE freeendlines  */
#line 196 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                        {(yyval.freeendlines) = EndLines(TWOORMOREENDLINES, (yyvsp[0].freeendlines));}
#line 1317 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 5: /* freeendlines: %empty  */
#line 197 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                {(yyval.freeendlines) = EndLines(ZEROENDLINES, NULL);}
#line 1323 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 6: /* sheet: NEW CHARAC DOSPTS INTEGER freeendlines body  */
#line 200 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                {(yyval.Sheet) = SheetFunction((yyvsp[-2].value), CHARACTERSH, (yyvsp[0].MainBody), NULL, NULL, NULL);}
#line 1329 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 7: /* sheet: NEW MOSNTER DOSPTS INTEGER freeendlines monsterbody  */
#line 201 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                        {(yyval.Sheet) = SheetFunction((yyvsp[-2].value), MOSNTERSH, NULL, (yyvsp[0].MonsterBody), NULL, NULL);}
#line 1335 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 8: /* sheet: NEW ITEM DOSPTS INTEGER freeendlines itembody  */
#line 202 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                {(yyval.Sheet) = SheetFunction((yyvsp[-2].value), ITEMSH, NULL, NULL, (yyvsp[0].ItemBody), NULL);}
#line 1341 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 9: /* sheet: NEW NPC DOSPTS INTEGER freeendlines npcbody  */
#line 203 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                {(yyval.Sheet) = SheetFunction((yyvsp[-2].value), NPCSH, NULL, NULL, NULL, (yyvsp[0].NPCBody));}
#line 1347 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 10: /* body: name freeendlines level freeendlines class freeendlines background freeendlines playername freeendlines race freeendlines alignment freeendlines exppoints freeendlines restofbody  */
#line 206 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                                                                                                                {(yyval.MainBody) = CharacBodyFunction((yyvsp[-16].Characname),(yyvsp[-14].levelCharac),(yyvsp[-12].classCharac),(yyvsp[-10].backgroundCharac),(yyvsp[-8].playername),(yyvsp[-6].characrace),(yyvsp[-4].alignmentCharac),(yyvsp[-2].exppointsCharac),(yyvsp[0].restofbodyCharac));}
#line 1353 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 11: /* name: NAME DOSPTS STR PUNTOCOMA  */
#line 209 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                        {(yyval.Characname) = nameCharacFunction((yyvsp[-1].text));}
#line 1359 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 12: /* level: LVL DOSPTS INTEGER PUNTOCOMA  */
#line 212 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                {(yyval.levelCharac) = levelCharacFunction((yyvsp[-1].value));}
#line 1365 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 13: /* class: CLASS DOSPTS STR PUNTOCOMA  */
#line 215 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                {(yyval.classCharac) = classCharacFunction(NODUALCLASS, (yyvsp[-1].text), NULL);}
#line 1371 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 14: /* class: DUALCLASS DOSPTS STR COMMA STR  */
#line 216 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                {(yyval.classCharac) = classCharacFunction(SIDUALCLASS, (yyvsp[-2].text), (yyvsp[0].text));}
#line 1377 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 15: /* background: BKGR DOSPTS STR PUNTOCOMA  */
#line 219 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                        {(yyval.backgroundCharac) = backgroundCharacFunction((yyvsp[-1].text));}
#line 1383 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 16: /* playername: PLYNAME DOSPTS STR PUNTOCOMA  */
#line 222 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                {(yyval.playername) = playernameFunction((yyvsp[-1].text));}
#line 1389 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 17: /* race: RACE DOSPTS STR PUNTOCOMA  */
#line 225 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                        {(yyval.characrace) = characraceFunction((yyvsp[-1].text));}
#line 1395 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 18: /* alignment: ALIGN DOSPTS STR PUNTOCOMA  */
#line 228 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                {(yyval.alignmentCharac) = alignmentCharacFunction((yyvsp[-1].text));}
#line 1401 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 19: /* exppoints: EXP DOSPTS INTEGER PUNTOCOMA  */
#line 231 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                {(yyval.exppointsCharac) = exppointsCharacFunction((yyvsp[-1].value));}
#line 1407 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 20: /* restofbody: stats freeendlines armorclass freeendlines initiative freeendlines speed freeendlines proficiencies features equipment items backstory freeendlines spellbook  */
#line 234 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                                                                                                {(yyval.restofbodyCharac) = restofbodyCharacFunction((yyvsp[-14].statsSpread),(yyvsp[-12].ArmorClass),(yyvsp[-10].Initiative),(yyvsp[-8].Speed),(yyvsp[-6].proficienciesCh),(yyvsp[-5].featuresCh),(yyvsp[-4].equipmentCh),(yyvsp[-3].itemsCh),(yyvsp[-2].CharacBackStory),(yyvsp[0].Spellbook));}
#line 1413 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 22: /* stats: STATS DOSPTS INTEGER COMMA INTEGER COMMA INTEGER COMMA INTEGER COMMA INTEGER COMMA INTEGER PUNTOCOMA  */
#line 238 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                                {(yyval.statsSpread) = statsSpreadFunction((yyvsp[-11].value),(yyvsp[-9].value),(yyvsp[-7].value),(yyvsp[-5].value),(yyvsp[-3].value),(yyvsp[-1].value));}
#line 1419 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 23: /* armorclass: ACLASS DOSPTS INTEGER PUNTOCOMA  */
#line 241 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                        {(yyval.ArmorClass) = ArmorClassFunction((yyvsp[-1].value));}
#line 1425 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 24: /* initiative: INIT DOSPTS INTEGER PUNTOCOMA  */
#line 244 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                        {(yyval.Initiative) = InitiativeFunction((yyvsp[-1].value));}
#line 1431 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 25: /* speed: SPD DOSPTS INTEGER PUNTOCOMA  */
#line 247 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                {(yyval.Speed) = SpeedFunction((yyvsp[-1].value));}
#line 1437 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 26: /* proficiencies: PROF DOSPTS STR DOSPTS STR COMMA INTEGER COMMA freeendlines proficiencies  */
#line 250 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                                        {(yyval.proficienciesCh) = proficienciesChFunction(RECURSIVETYPE, (yyvsp[-7].text), (yyvsp[-5].text), (yyvsp[-3].value), (yyvsp[0].proficienciesCh));}
#line 1443 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 27: /* proficiencies: PROF DOSPTS STR DOSPTS STR COMMA INTEGER PUNTOCOMA freeendlines  */
#line 251 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                                                                {(yyval.proficienciesCh) = proficienciesChFunction(NORECURTYPE, (yyvsp[-6].text), (yyvsp[-4].text), (yyvsp[-2].value), NULL);}
#line 1449 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 28: /* features: FEAT DOSPTS STR COMMA STR PUNTOCOMA freeendlines features  */
#line 254 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                {(yyval.featuresCh) = featuresChFunction(RECURSIVETYPE, (yyvsp[-5].text), (yyvsp[-3].text), (yyvsp[0].featuresCh));}
#line 1455 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 29: /* features: FEAT DOSPTS STR COMMA STR PUNTOCOMA freeendlines  */
#line 255 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                                {(yyval.featuresCh) = featuresChFunction(NORECURTYPE, (yyvsp[-4].text), (yyvsp[-2].text), NULL);}
#line 1461 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 30: /* equipment: EQUIP DOSPTS STR COMMA STR COMMA STR PUNTOCOMA freeendlines equipment  */
#line 258 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                {(yyval.equipmentCh) = equipmentChFunction(RECURSIVETYPE, (yyvsp[-7].text), (yyvsp[-5].text), (yyvsp[-3].text), (yyvsp[0].equipmentCh));}
#line 1467 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 31: /* equipment: EQUIP DOSPTS STR COMMA STR COMMA STR PUNTOCOMA freeendlines  */
#line 259 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                                {(yyval.equipmentCh) = equipmentChFunction(NORECURTYPE, (yyvsp[-6].text), (yyvsp[-4].text), (yyvsp[-2].text), NULL);}
#line 1473 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 32: /* items: ITEMS DOSPTS STR COMMA STR PUNTOCOMA freeendlines items  */
#line 262 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                                        {(yyval.itemsCh) = itemsChFunction(RECURSIVETYPE, (yyvsp[-5].text), (yyvsp[-3].text), (yyvsp[0].itemsCh));}
#line 1479 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 33: /* items: ITEMS DOSPTS STR COMMA STR PUNTOCOMA freeendlines  */
#line 263 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                                                {(yyval.itemsCh) = itemsChFunction(NORECURTYPE, (yyvsp[-4].text), (yyvsp[-2].text), NULL);}
#line 1485 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 34: /* backstory: BACKSTORY DOSPTS STR PUNTOCOMA  */
#line 266 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                {(yyval.CharacBackStory) = CharacBackStoryFunction((yyvsp[-1].text));}
#line 1491 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 35: /* spellbook: spellcasterspells  */
#line 269 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                        {(yyval.Spellbook) = SpellbookFunction(SPBOOK, (yyvsp[0].spellcasterspells));}
#line 1497 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 36: /* spellbook: %empty  */
#line 270 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                {(yyval.Spellbook) = SpellbookFunction(NOSPBOOK, NULL);}
#line 1503 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 37: /* spellcasterspells: SPLLBOOK DOSPTS INTEGER DOSPTS spell freeendlines spellcasterspells  */
#line 273 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                {(yyval.spellcasterspells) = spellcasterspellsFunction(RECURSPELL, (yyvsp[-2].Spell), (yyvsp[-4].value), (yyvsp[0].spellcasterspells));}
#line 1509 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 38: /* spellcasterspells: SPLLBOOK DOSPTS INTEGER DOSPTS spell  */
#line 274 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                                                                {(yyval.spellcasterspells) = spellcasterspellsFunction(ONLYONE, (yyvsp[0].Spell), (yyvsp[-2].value), NULL);}
#line 1515 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 39: /* spell: STR COMMA STR COMMA DICEDMG PUNTOCOMA  */
#line 281 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                        {(yyval.Spell) = SpellFunction((yyvsp[-5].text), (yyvsp[-3].text), (yyvsp[-1].damage));}
#line 1521 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 40: /* npcbody: merchantbody  */
#line 284 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                {(yyval.NPCBody) = NPCBodyFunction((yyvsp[0].Merchant));}
#line 1527 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 41: /* merchantbody: STORE DOSPTS store  */
#line 287 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                        {(yyval.Merchant) = MerchantFunction((yyvsp[0].Store));}
#line 1533 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 42: /* store: itemtosell INTEGER PUNTOCOMA freeendlines store  */
#line 290 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                {(yyval.Store) = StoreFunction(RECURSIVETYPE, (yyvsp[-4].ItemstoSell), (yyvsp[-3].value), (yyvsp[0].Store));}
#line 1539 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 43: /* store: itemtosell INTEGER PUNTOCOMA  */
#line 291 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                        {(yyval.Store) = StoreFunction(NORECURTYPE, (yyvsp[-2].ItemstoSell), (yyvsp[-1].value), NULL);}
#line 1545 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 44: /* itemtosell: STR COMMA STR COMMA  */
#line 294 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                        {(yyval.ItemstoSell) = ItemstoSellFunction((yyvsp[-3].text), (yyvsp[-1].text));}
#line 1551 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 45: /* itembody: itemname freeendlines rarity freeendlines description freeendlines  */
#line 299 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                {(yyval.ItemBody) = ItemBodyFunction((yyvsp[-5].ItemName), (yyvsp[-1].ItemDescription), (yyvsp[-3].ItemRarity));}
#line 1557 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 46: /* itemname: ITEMNAME DOSPTS STR PUNTOCOMA  */
#line 302 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                {(yyval.ItemName) = ItemNameFunction((yyvsp[-1].text));}
#line 1563 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 47: /* rarity: RAR DOSPTS STR PUNTOCOMA  */
#line 305 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                        {(yyval.ItemRarity) = ItemRarityFunction((yyvsp[-1].text));}
#line 1569 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 48: /* description: DES DOSPTS STR PUNTOCOMA  */
#line 308 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                {(yyval.ItemDescription) = ItemDescriptionFunction((yyvsp[-1].text));}
#line 1575 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 49: /* monsterbody: name freeendlines typeofmonster freeendlines stats freeendlines backstory freeendlines attacks spellbook  */
#line 313 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                                                {(yyval.MonsterBody) = MonsterBodyFunction((yyvsp[-9].Characname), (yyvsp[-7].TypeofMonster), (yyvsp[-5].statsSpread), (yyvsp[-3].CharacBackStory), (yyvsp[-1].MonsterAttacks), (yyvsp[0].Spellbook));}
#line 1581 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 50: /* typeofmonster: TYPEMONS DOSPTS STR PUNTOCOMA  */
#line 316 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                        {(yyval.TypeofMonster) = TypeofMonsterFunction((yyvsp[-1].text));}
#line 1587 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 51: /* attacks: ATTACKS DOSPTS listofat  */
#line 319 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                        {(yyval.MonsterAttacks) = MonsterAttacksFunction((yyvsp[0].ListofAttacks));}
#line 1593 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 52: /* listofat: STR COMMA STR COMMA DICEDMG PUNTOCOMA freeendlines listofat  */
#line 322 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                        {(yyval.ListofAttacks) = ListofAttacksFunction(RECURSIVETYPE, (yyvsp[-3].damage), (yyvsp[-7].text), (yyvsp[-5].text), (yyvsp[0].ListofAttacks));}
#line 1599 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;

  case 53: /* listofat: STR COMMA STR COMMA DICEDMG PUNTOCOMA freeendlines  */
#line 323 "../src/frontend/syntactic-analysis/bison-grammar.y"
                                                                                                                        {(yyval.ListofAttacks) = ListofAttacksFunction(NORECURTYPE, (yyvsp[-2].damage), (yyvsp[-6].text), (yyvsp[-4].text), NULL);}
#line 1605 "../src/frontend/syntactic-analysis/bison-parser.c"
    break;


#line 1609 "../src/frontend/syntactic-analysis/bison-parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 578 "../src/frontend/syntactic-analysis/bison-grammar.y"
