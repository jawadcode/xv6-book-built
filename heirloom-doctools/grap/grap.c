/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "grap.y"

/*
 * Changes by Gunnar Ritter, Freiburg i. Br., Germany, October 2005.
 *
 * Derived from Plan 9 v4 /sys/src/cmd/grap/
 *
 * Copyright (C) 2003, Lucent Technologies Inc. and others.
 * All Rights Reserved.
 *
 * Distributed under the terms of the Lucent Public License Version 1.02.
 */

/*	Sccsid @(#)grap.y	1.3 (gritter) 10/18/05	*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "grap.h"

#ifndef	RAND_MAX
#define	RAND_MAX 32767	/* if your rand() returns bigger, change this too */
#endif

extern int yylex(void);
extern int yyparse(void);


#line 98 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    FRAME = 258,
    TICKS = 259,
    GRID = 260,
    LABEL = 261,
    COORD = 262,
    LINE = 263,
    ARROW = 264,
    CIRCLE = 265,
    DRAW = 266,
    NEW = 267,
    PLOT = 268,
    NEXT = 269,
    PIC = 270,
    COPY = 271,
    THRU = 272,
    UNTIL = 273,
    FOR = 274,
    FROM = 275,
    TO = 276,
    BY = 277,
    AT = 278,
    WITH = 279,
    IF = 280,
    GRAPH = 281,
    THEN = 282,
    ELSE = 283,
    DOSTR = 284,
    DOT = 285,
    DASH = 286,
    INVIS = 287,
    SOLID = 288,
    TEXT = 289,
    JUST = 290,
    SIZE = 291,
    LOG = 292,
    EXP = 293,
    SIN = 294,
    COS = 295,
    ATAN2 = 296,
    SQRT = 297,
    RAND = 298,
    MAX = 299,
    MIN = 300,
    INT = 301,
    PRINT = 302,
    SPRINTF = 303,
    X = 304,
    Y = 305,
    SIDE = 306,
    IN = 307,
    OUT = 308,
    OFF = 309,
    UP = 310,
    DOWN = 311,
    ACROSS = 312,
    HEIGHT = 313,
    WIDTH = 314,
    RADIUS = 315,
    NUMBER = 316,
    NAME = 317,
    VARNAME = 318,
    DEFNAME = 319,
    STRING = 320,
    ST = 321,
    OR = 322,
    AND = 323,
    GT = 324,
    LT = 325,
    LE = 326,
    GE = 327,
    EQ = 328,
    NE = 329,
    UMINUS = 330,
    NOT = 331
  };
#endif
/* Tokens.  */
#define FRAME 258
#define TICKS 259
#define GRID 260
#define LABEL 261
#define COORD 262
#define LINE 263
#define ARROW 264
#define CIRCLE 265
#define DRAW 266
#define NEW 267
#define PLOT 268
#define NEXT 269
#define PIC 270
#define COPY 271
#define THRU 272
#define UNTIL 273
#define FOR 274
#define FROM 275
#define TO 276
#define BY 277
#define AT 278
#define WITH 279
#define IF 280
#define GRAPH 281
#define THEN 282
#define ELSE 283
#define DOSTR 284
#define DOT 285
#define DASH 286
#define INVIS 287
#define SOLID 288
#define TEXT 289
#define JUST 290
#define SIZE 291
#define LOG 292
#define EXP 293
#define SIN 294
#define COS 295
#define ATAN2 296
#define SQRT 297
#define RAND 298
#define MAX 299
#define MIN 300
#define INT 301
#define PRINT 302
#define SPRINTF 303
#define X 304
#define Y 305
#define SIDE 306
#define IN 307
#define OUT 308
#define OFF 309
#define UP 310
#define DOWN 311
#define ACROSS 312
#define HEIGHT 313
#define WIDTH 314
#define RADIUS 315
#define NUMBER 316
#define NAME 317
#define VARNAME 318
#define DEFNAME 319
#define STRING 320
#define ST 321
#define OR 322
#define AND 323
#define GT 324
#define LT 325
#define LE 326
#define GE 327
#define EQ 328
#define NE 329
#define UMINUS 330
#define NOT 331

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  131
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  200
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  381

#define YYUNDEFTOK  2
#define YYMAXUTOK   331


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    83,     2,     2,
      67,    68,    81,    79,    69,    80,     2,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    86,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    71,    72,    73,    74,    75,    76,    77,    78,
      84,    85
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    68,    68,    69,    70,    74,    75,    76,    79,    83,
      84,    85,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   111,   112,   113,   116,   117,   118,   122,   125,   126,
     127,   130,   131,   132,   133,   137,   138,   141,   142,   143,
     144,   147,   150,   151,   155,   158,   158,   158,   158,   161,
     162,   166,   169,   170,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   185,   186,   189,   190,   193,   195,
     199,   200,   201,   202,   203,   206,   207,   211,   214,   215,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   230,
     231,   234,   235,   236,   240,   241,   244,   245,   247,   251,
     252,   255,   256,   257,   260,   261,   265,   266,   269,   270,
     273,   274,   275,   276,   277,   278,   279,   282,   283,   284,
     285,   286,   290,   291,   292,   296,   297,   298,   301,   302,
     306,   309,   312,   313,   316,   317,   318,   322,   324,   326,
     328,   333,   334,   337,   338,   339,   340,   343,   344,   348,
     349,   352,   356,   357,   361,   362,   363,   364,   365,   366,
     367,   368,   371,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   399,   403,   404,   408,
     409
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FRAME", "TICKS", "GRID", "LABEL",
  "COORD", "LINE", "ARROW", "CIRCLE", "DRAW", "NEW", "PLOT", "NEXT", "PIC",
  "COPY", "THRU", "UNTIL", "FOR", "FROM", "TO", "BY", "AT", "WITH", "IF",
  "GRAPH", "THEN", "ELSE", "DOSTR", "DOT", "DASH", "INVIS", "SOLID",
  "TEXT", "JUST", "SIZE", "LOG", "EXP", "SIN", "COS", "ATAN2", "SQRT",
  "RAND", "MAX", "MIN", "INT", "PRINT", "SPRINTF", "X", "Y", "SIDE", "IN",
  "OUT", "OFF", "UP", "DOWN", "ACROSS", "HEIGHT", "WIDTH", "RADIUS",
  "NUMBER", "NAME", "VARNAME", "DEFNAME", "STRING", "ST", "'('", "')'",
  "','", "'='", "OR", "AND", "GT", "LT", "LE", "GE", "EQ", "NE", "'+'",
  "'-'", "'*'", "'/'", "'%'", "UMINUS", "NOT", "'^'", "$accept", "top",
  "graphseq", "graph", "statlist", "stat", "numlist", "number", "label",
  "lablist", "labattr", "framelist", "frameitem", "side", "optside",
  "linedesc", "linetype", "optdesc", "ticks", "tickdesc", "tickattr",
  "ticklist", "tickpoint", "iterator", "optop", "optstring", "grid",
  "griddesc", "gridattr", "line", "circle", "stringlist", "string",
  "exprlist", "sattrlist", "stringattr", "coord", "coordlist", "coorditem",
  "coordlog", "plot", "draw", "drawtype", "next", "copy", "copylist",
  "copyattr", "for", "if", "if_expr", "string_expr", "point", "comma",
  "optname", "expr", "assign", "name", "optexpr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    40,    41,    44,
      61,   322,   323,   324,   325,   326,   327,   328,   329,    43,
      45,    42,    47,    37,   330,   331,    94
};
# endif

#define YYPACT_NINF (-332)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-199)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     258,  -332,  -332,   197,   721,   -28,   -30,   259,    28,  -332,
    -332,   720,   -30,  -332,     9,   -34,   751,  -332,   720,   -29,
    -332,  -332,  -332,    33,  -332,     5,    23,    50,    75,   362,
     386,    38,   -27,  -332,  -332,  -332,  -332,  -332,  -332,    16,
    -332,  -332,  -332,  -332,   -30,  -332,  -332,  -332,  -332,  -332,
      19,   119,   -30,   -30,   782,   782,   782,  -332,   782,   782,
     782,  -332,    32,   197,  -332,  -332,    57,   -30,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,   782,  -332,
     721,  -332,  -332,  -332,    25,  -332,    48,   -30,  -332,    96,
     -30,   782,    55,    79,    92,    95,   107,   135,   143,   146,
     147,   151,  -332,   158,   751,   782,   782,   782,    17,   829,
    -332,   104,    99,    25,  -332,     9,  -332,     0,   -17,     4,
    -332,  1085,  -332,  1085,   164,  -332,    63,    33,  -332,  -332,
    -332,  -332,   362,   386,   166,  -332,  -332,  -332,   -24,   -30,
    -332,    93,   782,   782,   782,  -332,   165,  -332,   782,   782,
    1085,  1085,  1085,  1085,  1085,  1085,  -332,  -332,  -332,   782,
    1085,  -332,  -332,   160,    71,    -3,    21,    48,  -332,  -332,
     213,   813,   -30,   175,   586,   782,   782,   782,   782,   782,
     782,   168,   782,   782,   782,   169,   861,   153,   153,   153,
     -30,   782,   782,   782,   782,   782,   782,   782,   782,   782,
     782,   782,   782,   782,   782,   220,  -332,   -30,  -332,  -332,
    -332,   782,   782,   180,   181,   227,   202,   202,    60,  -332,
    -332,  -332,  -332,   782,  -332,   386,  -332,  -332,  -332,   209,
      25,   165,  1085,  1085,  1085,  -332,   432,   207,  -332,   829,
     207,   782,    59,  -332,  -332,   241,   243,   -30,  -332,   813,
     -30,  -332,   813,  -332,   -30,   751,   602,   261,   782,   -30,
     877,   893,   909,   925,  1037,   941,  -332,  1053,  1069,   957,
    -332,  -332,  -332,  1100,   274,  1114,  1114,  1114,  1114,  1114,
    1114,   140,   140,   153,   153,   153,   153,   -30,   165,   461,
     477,  -332,  -332,  -332,  -332,  -332,    33,   782,  1085,  -332,
    -332,   -30,   782,  -332,  -332,   235,   238,   782,   398,   782,
     414,   165,   845,   782,   -30,  1085,  -332,  -332,  -332,  -332,
    -332,   782,  -332,   782,   782,  -332,  -332,  -332,   782,   782,
      33,    86,  1085,   782,  -332,  -332,  -332,   495,   782,   524,
     782,  -332,   782,  1085,  -332,   973,   989,  1005,   560,   622,
      33,   782,   543,   782,  1085,   782,  1085,  1021,  -332,  -332,
    -332,    63,  -332,    63,  -332,    33,  1085,    63,  -332,  1085,
    1085,  -332,   782,   782,   782,   641,   657,   829,  -332,  -332,
    -332
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,    46,     0,     0,    53,   163,     0,     0,   138,
     139,     0,   163,    22,     0,     0,     0,     8,     0,     0,
      34,   197,   198,   113,     9,     0,     0,     0,     2,     0,
       5,     0,    26,    31,    15,    13,    14,    18,    19,     0,
     104,    16,    17,    20,   163,    21,    25,    23,    24,    27,
       0,    12,   163,   163,    51,    67,    68,    72,     0,     0,
       0,    73,    64,    61,    62,    70,     0,   163,    55,    56,
      58,    57,    91,    92,    97,    98,    90,    93,   200,    95,
      87,    88,    51,    52,     0,   162,   117,   163,    59,     0,
     163,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,   167,     0,     0,     0,     0,     0,    86,
     165,     0,     0,     0,   144,   141,   142,     0,     0,     0,
     154,   153,    29,    28,     0,   114,    84,   106,   111,    36,
      35,     1,     0,     6,     0,    10,   161,    32,     0,   163,
     105,     0,     0,     0,     0,    45,     0,    50,     0,     0,
      43,    65,    66,    41,    42,    44,    71,    63,    96,     0,
     199,    54,    89,    40,     0,   163,   163,   116,   118,   120,
       0,     0,   163,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   174,   173,   195,
     163,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,   163,   145,   146,
     143,     0,     0,     0,     0,   152,     0,     0,     0,    80,
      81,    82,    83,     0,   112,     7,    11,    33,   132,    59,
       0,    60,   196,    47,    48,    49,     0,    69,    74,    76,
      94,     0,    37,    38,   131,   127,   128,   163,   121,     0,
     163,   122,     0,   119,   163,     0,     0,     0,     0,   163,
       0,     0,     0,     0,     0,     0,   183,     0,     0,     0,
     166,   175,   133,   194,   193,   187,   188,   189,   190,   191,
     192,   168,   169,   170,   171,   172,   178,   163,    60,     0,
       0,   157,   158,   151,   156,   155,   113,     0,   115,   136,
     137,   163,     0,    77,    39,     0,     0,     0,     0,     0,
       0,    60,     0,     0,   163,   102,   101,   176,   177,   179,
     180,     0,   182,     0,     0,   186,   134,   140,     0,     0,
     107,     0,   109,     0,    75,   129,   130,     0,     0,     0,
       0,    99,     0,   159,   100,     0,     0,     0,     0,     0,
     113,     0,    86,     0,   123,     0,   124,     0,   181,   184,
     185,    84,   148,    84,   150,   108,   110,    84,    79,   125,
     126,   160,     0,     0,     0,     0,     0,    86,   147,   149,
      78
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -332,  -332,  -332,   260,   -15,   -20,  -332,   -19,  -332,  -332,
      -2,  -332,  -332,    20,  -332,     7,  -332,  -132,  -332,  -332,
     230,   136,    -8,    11,  -227,  -331,  -332,  -332,   217,  -332,
    -332,     8,    -6,  -332,  -278,  -123,  -332,  -332,   132,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,   185,  -332,  -332,  -332,
     -13,   -60,   -31,    10,   -11,     6,   286,  -332
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    30,    31,    32,    33,    34,   242,
      61,    51,   145,    62,    84,    88,    78,    89,    35,    63,
      64,   237,   238,    65,   223,   205,    36,    80,    81,    37,
      38,    39,    40,   331,   127,   128,    41,   167,   168,   169,
      42,    43,    44,    45,    46,   115,   116,    47,    48,   119,
     185,   170,   313,   171,   239,   110,    50,   161
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     109,   138,    75,   120,   224,   121,    49,   123,   114,   230,
     134,    77,   122,   137,   133,    79,    86,   247,   330,   108,
     211,   368,   111,    82,    76,    83,   112,   113,    21,    22,
     173,   215,    85,   140,    20,    49,    49,    20,   124,   139,
     190,   250,   136,   150,   151,   152,   380,   153,   154,   155,
     131,    90,    25,    26,   141,    25,    26,    19,   147,    85,
     213,   214,   148,   149,    19,    19,   129,   160,   125,   126,
     212,   146,   365,    19,    23,   216,   217,   159,    75,   228,
     174,    23,    23,    85,   130,   164,   156,    77,    91,   142,
      23,    79,   163,   186,   187,   188,   189,   165,   166,   300,
      76,    17,   140,   206,   135,   248,   251,   209,   244,   114,
     241,   158,   257,   134,    58,    59,   172,   225,    60,   227,
     245,   246,   175,    68,    69,    70,    71,   207,   296,   297,
     272,   232,   233,   234,   372,   231,   373,   236,    49,    49,
     374,    19,   219,   220,   221,   222,   176,   288,   229,    68,
      69,    70,    71,   235,   350,   351,   327,   140,    23,   177,
     256,   243,   178,   208,   260,   261,   262,   263,   264,   265,
      82,   267,   268,   269,   179,   249,   252,   143,   144,   341,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   311,    68,    69,    70,    71,   316,
     289,   290,   180,   294,   295,   134,   302,   224,    19,   302,
     181,   241,   298,   182,   183,    58,    59,    52,   184,    60,
      53,   201,   202,   203,   299,    23,   204,   326,  -198,   218,
     150,    49,   226,   303,   254,   258,   266,   270,   308,   204,
     304,   310,   224,   287,   312,   291,   292,   315,    54,    55,
      56,    57,    58,    59,   344,   293,    60,   307,    -3,     1,
     309,     2,     3,     4,     5,     6,     7,   118,     8,     9,
      10,    11,    12,    13,    14,  -135,   136,    15,   305,    87,
     306,   342,   314,    16,    17,   335,   332,   336,   132,    68,
      69,    70,    71,   157,   334,   240,   337,   162,   339,   253,
     210,   117,   343,     0,     0,    18,    19,     0,     0,     0,
     345,   333,   346,   347,     0,     0,     0,   348,   349,    20,
      21,    22,   352,    23,    24,     0,     0,   354,     0,   356,
       0,   357,     0,     0,     0,     0,     0,    25,    26,     0,
     366,     0,   369,     0,   370,     0,   206,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,     0,     0,
     204,   375,   376,   377,     0,     2,     3,     4,     5,     6,
       7,   206,     8,     9,    10,    11,    12,    13,    14,     0,
       0,    15,     0,     0,     0,     0,     0,    16,     0,     2,
       3,     4,     5,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,    15,     0,     0,     0,    18,
      19,    16,     0,     0,     0,     0,     0,     0,     0,   338,
       0,     0,     0,    20,    21,    22,     0,    23,    24,     0,
       0,     0,     0,    18,    19,   340,     0,     0,     0,     0,
       0,    25,    26,     0,     0,     0,     0,    20,    21,    22,
       0,    23,   -30,   301,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,   136,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   328,   136,   204,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   329,     0,
     204,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   353,     0,   204,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   355,     0,   204,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,     0,     0,   204,     0,   367,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,     0,
       0,   204,   361,     0,     0,     0,     0,     0,     0,   362,
       0,    19,     0,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,    23,   259,
     204,     0,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,     0,     0,   204,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   363,     0,   204,     0,     0,     0,
       0,   364,     0,     0,     0,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     378,   136,   204,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   379,     0,   204,     0,
       0,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,     0,   204,     0,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    66,     0,   204,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,    52,     0,   204,    67,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,     0,     0,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,     0,    19,     0,
      72,    73,    54,     0,     0,    74,    58,    59,     0,     0,
      60,   102,    21,   103,     0,    23,     0,   104,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,     0,   105,
     106,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,   102,    21,   103,     0,   118,     0,   104,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,     0,
     105,   106,     0,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,   102,    21,   103,     0,     0,     0,   104,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
       0,   105,   106,     0,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,   102,    21,   103,    19,     0,     0,
     255,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   106,    23,     0,     0,     0,   107,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   271,   136,   204,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   271,
       0,   204,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   317,     0,   204,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   318,     0,   204,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   319,     0,   204,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   320,     0,   204,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   322,
       0,   204,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   325,     0,   204,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   358,     0,   204,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   359,     0,   204,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   360,     0,   204,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   371,
       0,   204,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,     0,   321,   204,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,     0,   323,   204,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,     0,   324,   204,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,     0,     0,   204,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,     0,
       0,   204,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,     0,     0,   204,  -199,  -199,  -199,
    -199,  -199,  -199,   199,   200,   201,   202,   203,     0,     0,
     204
};

static const yytype_int16 yycheck[] =
{
      11,    32,     4,    16,   127,    16,     0,    18,    14,   141,
      30,     4,    18,    32,    29,     4,     6,    20,   296,    11,
      20,   352,    12,    51,     4,     5,    17,    18,    62,    63,
      90,    27,    62,    39,    61,    29,    30,    61,    67,    23,
      23,    20,    69,    54,    55,    56,   377,    58,    59,    60,
       0,    23,    79,    80,    44,    79,    80,    48,    51,    62,
      77,    78,    52,    53,    48,    48,    61,    78,    35,    36,
      70,    51,   350,    48,    65,    71,    72,    67,    80,   139,
      91,    65,    65,    62,    61,    37,    54,    80,    60,    70,
      65,    80,    84,   104,   105,   106,   107,    49,    50,   231,
      80,    26,   108,   109,    66,   165,   166,   113,    37,   115,
      51,    54,   172,   133,    55,    56,    20,   132,    59,   138,
      49,    50,    67,    30,    31,    32,    33,    23,    68,    69,
     190,   142,   143,   144,   361,   141,   363,   148,   132,   133,
     367,    48,    79,    80,    81,    82,    67,   207,   141,    30,
      31,    32,    33,   146,    68,    69,   288,   163,    65,    67,
     171,   163,    67,    64,   175,   176,   177,   178,   179,   180,
      51,   182,   183,   184,    67,   165,   166,    58,    59,   311,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   254,    30,    31,    32,    33,   259,
     211,   212,    67,   216,   217,   225,   237,   330,    48,   240,
      67,    51,   223,    67,    67,    55,    56,    20,    67,    59,
      23,    81,    82,    83,   230,    65,    86,   287,    70,    65,
     241,   225,    66,   239,    21,    60,    68,    68,   249,    86,
     242,   252,   365,    23,   255,    65,    65,   258,    51,    52,
      53,    54,    55,    56,   314,    28,    59,   247,     0,     1,
     250,     3,     4,     5,     6,     7,     8,    65,    10,    11,
      12,    13,    14,    15,    16,    66,    69,    19,    37,    20,
      37,   312,    21,    25,    26,    50,   297,    49,    28,    30,
      31,    32,    33,    63,   302,   159,   307,    80,   309,   167,
     115,    15,   313,    -1,    -1,    47,    48,    -1,    -1,    -1,
     321,   301,   323,   324,    -1,    -1,    -1,   328,   329,    61,
      62,    63,   333,    65,    66,    -1,    -1,   338,    -1,   340,
      -1,   342,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,
     351,    -1,   353,    -1,   355,    -1,   352,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,   372,   373,   374,    -1,     3,     4,     5,     6,     7,
       8,   377,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    19,    -1,    -1,    -1,    47,
      48,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    61,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    47,    48,    21,    -1,    -1,    -1,    -1,
      -1,    79,    80,    -1,    -1,    -1,    -1,    61,    62,    63,
      -1,    65,    66,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    21,    69,    86,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    21,    -1,
      86,    -1,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    21,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    21,    -1,    86,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    86,    -1,    22,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    48,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    65,    23,
      86,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    86,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    22,    -1,    86,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      29,    69,    86,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    29,    -1,    86,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,     4,    -1,    86,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    20,    -1,    86,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      49,    50,    51,    -1,    -1,    54,    55,    56,    -1,    -1,
      59,    61,    62,    63,    -1,    65,    -1,    67,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    79,
      80,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    -1,    65,    -1,    67,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      79,    80,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,    67,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    79,    80,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    48,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    65,    -1,    -1,    -1,    85,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    68,    69,    86,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    68,
      -1,    86,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    68,    -1,    86,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    68,    -1,    86,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    68,    -1,    86,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    68,    -1,    86,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    68,
      -1,    86,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    68,    -1,    86,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    68,    -1,    86,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    68,    -1,    86,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    68,    -1,    86,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    68,
      -1,    86,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    69,    86,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    69,    86,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    69,    86,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,    10,    11,
      12,    13,    14,    15,    16,    19,    25,    26,    47,    48,
      61,    62,    63,    65,    66,    79,    80,    88,    89,    90,
      91,    92,    93,    94,    95,   105,   113,   116,   117,   118,
     119,   123,   127,   128,   129,   130,   131,   134,   135,   142,
     143,    98,    20,    23,    51,    52,    53,    54,    55,    56,
      59,    97,   100,   106,   107,   110,     4,    23,    30,    31,
      32,    33,    49,    50,    54,    97,   100,   102,   103,   110,
     114,   115,    51,   100,   101,    62,   140,    20,   102,   104,
      23,    60,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    61,    63,    67,    79,    80,    85,   118,   141,
     142,   140,    17,    18,   119,   132,   133,   143,    65,   136,
     137,   141,   119,   141,    67,    35,    36,   121,   122,    61,
      61,     0,    90,    91,    92,    66,    69,    94,   139,    23,
     119,   140,    70,    58,    59,    99,   100,   102,   140,   140,
     141,   141,   141,   141,   141,   141,    54,   107,    54,   140,
     141,   144,   115,   118,    37,    49,    50,   124,   125,   126,
     138,   140,    20,   138,   141,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,   137,   141,   141,   141,   141,
      23,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    86,   112,   119,    23,    64,   119,
     133,    20,    70,    77,    78,    27,    71,    72,    65,    79,
      80,    81,    82,   111,   122,    91,    66,    94,   138,   102,
     104,   119,   141,   141,   141,   102,   141,   108,   109,   141,
     108,    51,    96,    97,    37,    49,    50,    20,   138,   140,
      20,   138,   140,   125,    21,    67,   141,   138,    60,    23,
     141,   141,   141,   141,   141,   141,    68,   141,   141,   141,
      68,    68,   138,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,    23,   138,   141,
     141,    65,    65,    28,   137,   137,    68,    69,   141,   119,
     104,    21,   139,   119,    97,    37,    37,   140,   141,   140,
     141,   138,   141,   139,    21,   141,   138,    68,    68,    68,
      68,    69,    68,    69,    69,    68,   138,   104,    21,    21,
     121,   120,   141,   140,   109,    50,    49,   141,    21,   141,
      21,   104,   139,   141,   138,   141,   141,   141,   141,   141,
      68,    69,   141,    21,   141,    21,   141,   141,    68,    68,
      68,    22,    29,    22,    29,   121,   141,    22,   112,   141,
     141,    68,   111,   111,   111,   141,   141,   141,    29,    29,
     112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    89,    89,    89,    90,    91,
      91,    91,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    94,    94,    94,    95,    96,    96,
      96,    97,    97,    97,    97,    98,    98,    99,    99,    99,
      99,   100,   101,   101,   102,   103,   103,   103,   103,   104,
     104,   105,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   111,   111,   111,   112,   112,   113,   114,   114,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   117,   117,   117,   118,   118,   119,   119,   119,   120,
     120,   121,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   125,   125,   125,   125,   125,   126,   126,   126,
     126,   126,   127,   127,   127,   128,   128,   128,   129,   129,
     130,   131,   132,   132,   133,   133,   133,   134,   134,   134,
     134,   135,   135,   136,   136,   136,   136,   137,   137,   138,
     138,   139,   140,   140,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   142,   143,   143,   144,
     144
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     3,     1,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       0,     1,     2,     3,     1,     2,     2,     4,     1,     2,
       0,     2,     2,     2,     2,     2,     0,     2,     2,     2,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       0,     2,     1,     2,     1,     2,     2,     1,     1,     3,
       1,     2,     1,     1,     1,     3,     1,     2,    10,     7,
       1,     1,     1,     1,     0,     1,     0,     2,     1,     2,
       1,     1,     1,     1,     3,     1,     2,     1,     1,     6,
       6,     5,     5,     3,     1,     2,     2,     5,     7,     1,
       3,     1,     2,     0,     1,     3,     3,     2,     1,     2,
       1,     2,     2,     5,     5,     6,     6,     2,     2,     4,
       4,     2,     3,     4,     5,     3,     4,     4,     1,     1,
       5,     2,     1,     2,     1,     2,     2,    10,     7,    10,
       7,     4,     3,     1,     1,     3,     3,     3,     3,     4,
       6,     1,     1,     0,     1,     1,     3,     1,     3,     3,
       3,     3,     3,     2,     2,     3,     4,     4,     3,     4,
       4,     6,     4,     3,     6,     6,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     1,     1,
       0
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
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
  case 2:
#line 68 "grap.y"
                                { if (codegen && !synerr) graph((char *) 0); }
#line 1911 "y.tab.c"
    break;

  case 3:
#line 69 "grap.y"
                                { codegen = 0; }
#line 1917 "y.tab.c"
    break;

  case 4:
#line 70 "grap.y"
                                { codegen = 0; WARNING("syntax error"); }
#line 1923 "y.tab.c"
    break;

  case 8:
#line 79 "grap.y"
                                { graph((yyvsp[0].p)); endstat(); }
#line 1929 "y.tab.c"
    break;

  case 10:
#line 84 "grap.y"
                                { endstat(); }
#line 1935 "y.tab.c"
    break;

  case 11:
#line 85 "grap.y"
                                { endstat(); }
#line 1941 "y.tab.c"
    break;

  case 12:
#line 89 "grap.y"
                                { codegen = 1; }
#line 1947 "y.tab.c"
    break;

  case 13:
#line 90 "grap.y"
                                { codegen = 1; }
#line 1953 "y.tab.c"
    break;

  case 14:
#line 91 "grap.y"
                                { codegen = 1; }
#line 1959 "y.tab.c"
    break;

  case 15:
#line 92 "grap.y"
                                { codegen = 1; }
#line 1965 "y.tab.c"
    break;

  case 17:
#line 94 "grap.y"
                                { codegen = 1; }
#line 1971 "y.tab.c"
    break;

  case 18:
#line 95 "grap.y"
                                { codegen = 1; }
#line 1977 "y.tab.c"
    break;

  case 19:
#line 96 "grap.y"
                                { codegen = 1; }
#line 1983 "y.tab.c"
    break;

  case 21:
#line 98 "grap.y"
                                { codegen = 1; }
#line 1989 "y.tab.c"
    break;

  case 22:
#line 99 "grap.y"
                                { codegen = 1; pic((yyvsp[0].p)); }
#line 1995 "y.tab.c"
    break;

  case 26:
#line 103 "grap.y"
                                { codegen = 1; numlist(); }
#line 2001 "y.tab.c"
    break;

  case 28:
#line 105 "grap.y"
                                { fprintf(stderr, "\t%g\n", (yyvsp[0].f)); }
#line 2007 "y.tab.c"
    break;

  case 29:
#line 106 "grap.y"
                                { fprintf(stderr, "\t%s\n", (yyvsp[0].ap)->sval); freeattr((yyvsp[0].ap)); }
#line 2013 "y.tab.c"
    break;

  case 31:
#line 111 "grap.y"
                                { savenum(0, (yyvsp[0].f)); (yyval.i) = 1; }
#line 2019 "y.tab.c"
    break;

  case 32:
#line 112 "grap.y"
                                { savenum((yyvsp[-1].i), (yyvsp[0].f)); (yyval.i) = (yyvsp[-1].i)+1; }
#line 2025 "y.tab.c"
    break;

  case 33:
#line 113 "grap.y"
                                { savenum((yyvsp[-2].i), (yyvsp[0].f)); (yyval.i) = (yyvsp[-2].i)+1; }
#line 2031 "y.tab.c"
    break;

  case 35:
#line 117 "grap.y"
                                        { (yyval.f) = -(yyvsp[0].f); }
#line 2037 "y.tab.c"
    break;

  case 36:
#line 118 "grap.y"
                                        { (yyval.f) = (yyvsp[0].f); }
#line 2043 "y.tab.c"
    break;

  case 37:
#line 122 "grap.y"
                                                { label((yyvsp[-2].i), (yyvsp[-1].ap)); }
#line 2049 "y.tab.c"
    break;

  case 41:
#line 130 "grap.y"
                                { labelmove((yyvsp[-1].i), (yyvsp[0].f)); }
#line 2055 "y.tab.c"
    break;

  case 42:
#line 131 "grap.y"
                                { labelmove((yyvsp[-1].i), (yyvsp[0].f)); }
#line 2061 "y.tab.c"
    break;

  case 43:
#line 132 "grap.y"
                                { labelmove((yyvsp[-1].i), (yyvsp[0].f)); /* LEFT or RIGHT only */ }
#line 2067 "y.tab.c"
    break;

  case 44:
#line 133 "grap.y"
                                { labelwid((yyvsp[0].f)); }
#line 2073 "y.tab.c"
    break;

  case 46:
#line 138 "grap.y"
                                { (yyval.i) = 0; }
#line 2079 "y.tab.c"
    break;

  case 47:
#line 141 "grap.y"
                                { frameht((yyvsp[0].f)); }
#line 2085 "y.tab.c"
    break;

  case 48:
#line 142 "grap.y"
                                { framewid((yyvsp[0].f)); }
#line 2091 "y.tab.c"
    break;

  case 49:
#line 143 "grap.y"
                                { frameside((yyvsp[-1].i), (yyvsp[0].ap)); }
#line 2097 "y.tab.c"
    break;

  case 50:
#line 144 "grap.y"
                                { frameside(0, (yyvsp[0].ap)); }
#line 2103 "y.tab.c"
    break;

  case 53:
#line 151 "grap.y"
                                { (yyval.i) = 0; }
#line 2109 "y.tab.c"
    break;

  case 54:
#line 155 "grap.y"
                                { (yyval.ap) = makeattr((yyvsp[-1].i), (yyvsp[0].f), (char *) 0, 0, 0); }
#line 2115 "y.tab.c"
    break;

  case 60:
#line 162 "grap.y"
                                { (yyval.ap) = makeattr(0, 0.0, (char *) 0, 0, 0); }
#line 2121 "y.tab.c"
    break;

  case 61:
#line 166 "grap.y"
                                { ticks(); }
#line 2127 "y.tab.c"
    break;

  case 64:
#line 173 "grap.y"
                                { tickside((yyvsp[0].i)); }
#line 2133 "y.tab.c"
    break;

  case 65:
#line 174 "grap.y"
                                { tickdir(IN, (yyvsp[0].f), 1); }
#line 2139 "y.tab.c"
    break;

  case 66:
#line 175 "grap.y"
                                { tickdir(OUT, (yyvsp[0].f), 1); }
#line 2145 "y.tab.c"
    break;

  case 67:
#line 176 "grap.y"
                                { tickdir(IN, 0.0, 0); }
#line 2151 "y.tab.c"
    break;

  case 68:
#line 177 "grap.y"
                                { tickdir(OUT, 0.0, 0); }
#line 2157 "y.tab.c"
    break;

  case 69:
#line 178 "grap.y"
                                { setlist(); ticklist((yyvsp[-1].op), AT); }
#line 2163 "y.tab.c"
    break;

  case 70:
#line 179 "grap.y"
                                { setlist(); ticklist((yyvsp[0].op), AT); }
#line 2169 "y.tab.c"
    break;

  case 71:
#line 180 "grap.y"
                                { tickoff((yyvsp[-1].i)); }
#line 2175 "y.tab.c"
    break;

  case 72:
#line 181 "grap.y"
                                { tickoff(LEFT|RIGHT|TOP|BOT); }
#line 2181 "y.tab.c"
    break;

  case 76:
#line 189 "grap.y"
                                { savetick((yyvsp[0].f), (char *) 0); }
#line 2187 "y.tab.c"
    break;

  case 77:
#line 190 "grap.y"
                                { savetick((yyvsp[-1].f), (yyvsp[0].ap)->sval); }
#line 2193 "y.tab.c"
    break;

  case 78:
#line 194 "grap.y"
                        { iterator((yyvsp[-7].f), (yyvsp[-4].f), (yyvsp[-2].i), (yyvsp[-1].f), (yyvsp[0].p)); (yyval.op) = (yyvsp[-8].op); }
#line 2199 "y.tab.c"
    break;

  case 79:
#line 196 "grap.y"
                        { iterator((yyvsp[-4].f), (yyvsp[-1].f), '+', 1.0, (yyvsp[0].p)); (yyval.op) = (yyvsp[-5].op); }
#line 2205 "y.tab.c"
    break;

  case 80:
#line 199 "grap.y"
                        { (yyval.i) = '+'; }
#line 2211 "y.tab.c"
    break;

  case 81:
#line 200 "grap.y"
                        { (yyval.i) = '-'; }
#line 2217 "y.tab.c"
    break;

  case 82:
#line 201 "grap.y"
                        { (yyval.i) = '*'; }
#line 2223 "y.tab.c"
    break;

  case 83:
#line 202 "grap.y"
                        { (yyval.i) = '/'; }
#line 2229 "y.tab.c"
    break;

  case 84:
#line 203 "grap.y"
                        { (yyval.i) = ' '; }
#line 2235 "y.tab.c"
    break;

  case 85:
#line 206 "grap.y"
                        { (yyval.p) = (yyvsp[0].ap)->sval; }
#line 2241 "y.tab.c"
    break;

  case 86:
#line 207 "grap.y"
                        { (yyval.p) = (char *) 0; }
#line 2247 "y.tab.c"
    break;

  case 87:
#line 211 "grap.y"
                                { ticks(); }
#line 2253 "y.tab.c"
    break;

  case 90:
#line 218 "grap.y"
                                { tickside((yyvsp[0].i)); }
#line 2259 "y.tab.c"
    break;

  case 91:
#line 219 "grap.y"
                                { tickside(BOT); }
#line 2265 "y.tab.c"
    break;

  case 92:
#line 220 "grap.y"
                                { tickside(LEFT); }
#line 2271 "y.tab.c"
    break;

  case 93:
#line 221 "grap.y"
                                { griddesc((yyvsp[0].ap)); }
#line 2277 "y.tab.c"
    break;

  case 94:
#line 222 "grap.y"
                                { setlist(); gridlist((yyvsp[-1].op)); }
#line 2283 "y.tab.c"
    break;

  case 95:
#line 223 "grap.y"
                                { setlist(); gridlist((yyvsp[0].op)); }
#line 2289 "y.tab.c"
    break;

  case 96:
#line 224 "grap.y"
                                { gridtickoff(); }
#line 2295 "y.tab.c"
    break;

  case 97:
#line 225 "grap.y"
                                { gridtickoff(); }
#line 2301 "y.tab.c"
    break;

  case 99:
#line 230 "grap.y"
                                                { line((yyvsp[-5].i), (yyvsp[-3].pt), (yyvsp[-1].pt), (yyvsp[0].ap)); }
#line 2307 "y.tab.c"
    break;

  case 100:
#line 231 "grap.y"
                                                { line((yyvsp[-5].i), (yyvsp[-2].pt), (yyvsp[0].pt), (yyvsp[-4].ap)); }
#line 2313 "y.tab.c"
    break;

  case 101:
#line 234 "grap.y"
                                                { circle((yyvsp[-2].f), (yyvsp[0].pt)); }
#line 2319 "y.tab.c"
    break;

  case 102:
#line 235 "grap.y"
                                                { circle((yyvsp[0].f), (yyvsp[-2].pt)); }
#line 2325 "y.tab.c"
    break;

  case 103:
#line 236 "grap.y"
                                                { circle(0.0, (yyvsp[0].pt)); }
#line 2331 "y.tab.c"
    break;

  case 105:
#line 241 "grap.y"
                                { (yyval.ap) = addattr((yyvsp[-1].ap), (yyvsp[0].ap)); }
#line 2337 "y.tab.c"
    break;

  case 106:
#line 244 "grap.y"
                                { (yyval.ap) = makesattr((yyvsp[-1].p)); }
#line 2343 "y.tab.c"
    break;

  case 107:
#line 246 "grap.y"
                                { (yyval.ap) = makesattr(sprntf((yyvsp[-2].p), (Attr*) 0)); }
#line 2349 "y.tab.c"
    break;

  case 108:
#line 248 "grap.y"
                                { (yyval.ap) = makesattr(sprntf((yyvsp[-4].p), (yyvsp[-2].ap))); }
#line 2355 "y.tab.c"
    break;

  case 109:
#line 251 "grap.y"
                                { (yyval.ap) = makefattr(NUMBER, (yyvsp[0].f)); }
#line 2361 "y.tab.c"
    break;

  case 110:
#line 252 "grap.y"
                                { (yyval.ap) = addattr((yyvsp[-2].ap), makefattr(NUMBER, (yyvsp[0].f))); }
#line 2367 "y.tab.c"
    break;

  case 113:
#line 257 "grap.y"
                                { (yyval.ap) = (Attr *) 0; }
#line 2373 "y.tab.c"
    break;

  case 114:
#line 260 "grap.y"
                                { setjust((yyvsp[0].i)); }
#line 2379 "y.tab.c"
    break;

  case 115:
#line 261 "grap.y"
                                { setsize((yyvsp[-1].i), (yyvsp[0].f)); }
#line 2385 "y.tab.c"
    break;

  case 116:
#line 265 "grap.y"
                                        { coord((yyvsp[-1].op)); }
#line 2391 "y.tab.c"
    break;

  case 117:
#line 266 "grap.y"
                                        { resetcoord((yyvsp[0].op)); }
#line 2397 "y.tab.c"
    break;

  case 120:
#line 273 "grap.y"
                        { coordlog((yyvsp[0].i)); }
#line 2403 "y.tab.c"
    break;

  case 121:
#line 274 "grap.y"
                        { coord_x((yyvsp[0].pt)); }
#line 2409 "y.tab.c"
    break;

  case 122:
#line 275 "grap.y"
                        { coord_y((yyvsp[0].pt)); }
#line 2415 "y.tab.c"
    break;

  case 123:
#line 276 "grap.y"
                                                { coord_x(makepoint((yyvsp[-3].op), (yyvsp[-2].f), (yyvsp[0].f))); }
#line 2421 "y.tab.c"
    break;

  case 124:
#line 277 "grap.y"
                                                { coord_y(makepoint((yyvsp[-3].op), (yyvsp[-2].f), (yyvsp[0].f))); }
#line 2427 "y.tab.c"
    break;

  case 125:
#line 278 "grap.y"
                                                { coord_x(makepoint((yyvsp[-3].op), (yyvsp[-2].f), (yyvsp[0].f))); }
#line 2433 "y.tab.c"
    break;

  case 126:
#line 279 "grap.y"
                                                { coord_y(makepoint((yyvsp[-3].op), (yyvsp[-2].f), (yyvsp[0].f))); }
#line 2439 "y.tab.c"
    break;

  case 127:
#line 282 "grap.y"
                        { (yyval.i) = XFLAG; }
#line 2445 "y.tab.c"
    break;

  case 128:
#line 283 "grap.y"
                        { (yyval.i) = YFLAG; }
#line 2451 "y.tab.c"
    break;

  case 129:
#line 284 "grap.y"
                        { (yyval.i) = XFLAG|YFLAG; }
#line 2457 "y.tab.c"
    break;

  case 130:
#line 285 "grap.y"
                        { (yyval.i) = XFLAG|YFLAG; }
#line 2463 "y.tab.c"
    break;

  case 131:
#line 286 "grap.y"
                        { (yyval.i) = XFLAG|YFLAG; }
#line 2469 "y.tab.c"
    break;

  case 132:
#line 290 "grap.y"
                                        { plot((yyvsp[-2].ap), (yyvsp[0].pt)); }
#line 2475 "y.tab.c"
    break;

  case 133:
#line 291 "grap.y"
                                        { plot((yyvsp[-2].ap), (yyvsp[0].pt)); }
#line 2481 "y.tab.c"
    break;

  case 134:
#line 292 "grap.y"
                                        { plotnum((yyvsp[-3].f), (yyvsp[-2].p), (yyvsp[0].pt)); }
#line 2487 "y.tab.c"
    break;

  case 135:
#line 296 "grap.y"
                                                { drawdesc((yyvsp[-2].i), (yyvsp[-1].op), (yyvsp[0].ap), (char *) 0); }
#line 2493 "y.tab.c"
    break;

  case 136:
#line 297 "grap.y"
                                                { drawdesc((yyvsp[-3].i), (yyvsp[-2].op), (yyvsp[-1].ap), (yyvsp[0].ap)->sval); }
#line 2499 "y.tab.c"
    break;

  case 137:
#line 298 "grap.y"
                                                { drawdesc((yyvsp[-3].i), (yyvsp[-2].op), (yyvsp[0].ap), (yyvsp[-1].ap)->sval); }
#line 2505 "y.tab.c"
    break;

  case 140:
#line 306 "grap.y"
                                                { next((yyvsp[-3].op), (yyvsp[-1].pt), (yyvsp[0].ap)); }
#line 2511 "y.tab.c"
    break;

  case 141:
#line 309 "grap.y"
                                { copy(); }
#line 2517 "y.tab.c"
    break;

  case 144:
#line 316 "grap.y"
                                { copyfile((yyvsp[0].ap)->sval); }
#line 2523 "y.tab.c"
    break;

  case 145:
#line 317 "grap.y"
                                { copydef((yyvsp[0].op)); }
#line 2529 "y.tab.c"
    break;

  case 146:
#line 318 "grap.y"
                                { copyuntil((yyvsp[0].ap)->sval); }
#line 2535 "y.tab.c"
    break;

  case 147:
#line 323 "grap.y"
                { forloop((yyvsp[-8].op), (yyvsp[-6].f), (yyvsp[-4].f), (yyvsp[-2].i), (yyvsp[-1].f), (yyvsp[0].p)); }
#line 2541 "y.tab.c"
    break;

  case 148:
#line 325 "grap.y"
                { forloop((yyvsp[-5].op), (yyvsp[-3].f), (yyvsp[-1].f), '+', 1.0, (yyvsp[0].p)); }
#line 2547 "y.tab.c"
    break;

  case 149:
#line 327 "grap.y"
                { forloop((yyvsp[-8].op), (yyvsp[-6].f), (yyvsp[-4].f), (yyvsp[-2].i), (yyvsp[-1].f), (yyvsp[0].p)); }
#line 2553 "y.tab.c"
    break;

  case 150:
#line 329 "grap.y"
                { forloop((yyvsp[-5].op), (yyvsp[-3].f), (yyvsp[-1].f), '+', 1.0, (yyvsp[0].p)); }
#line 2559 "y.tab.c"
    break;

  case 151:
#line 333 "grap.y"
                                        { (yyval.p) = ifstat((yyvsp[-2].f), (yyvsp[-1].p), (yyvsp[0].p)); }
#line 2565 "y.tab.c"
    break;

  case 152:
#line 334 "grap.y"
                                        { (yyval.p) = ifstat((yyvsp[-1].f), (yyvsp[0].p), (char *) 0); }
#line 2571 "y.tab.c"
    break;

  case 155:
#line 339 "grap.y"
                                        { (yyval.f) = (yyvsp[-2].f) && (yyvsp[0].f); }
#line 2577 "y.tab.c"
    break;

  case 156:
#line 340 "grap.y"
                                        { (yyval.f) = (yyvsp[-2].f) || (yyvsp[0].f); }
#line 2583 "y.tab.c"
    break;

  case 157:
#line 343 "grap.y"
                                { (yyval.f) = strcmp((yyvsp[-2].p),(yyvsp[0].p)) == 0; free((yyvsp[-2].p)); free((yyvsp[0].p)); }
#line 2589 "y.tab.c"
    break;

  case 158:
#line 344 "grap.y"
                                { (yyval.f) = strcmp((yyvsp[-2].p),(yyvsp[0].p)) != 0; free((yyvsp[-2].p)); free((yyvsp[0].p)); }
#line 2595 "y.tab.c"
    break;

  case 159:
#line 348 "grap.y"
                                                { (yyval.pt) = makepoint((yyvsp[-3].op), (yyvsp[-2].f), (yyvsp[0].f)); }
#line 2601 "y.tab.c"
    break;

  case 160:
#line 349 "grap.y"
                                                { (yyval.pt) = makepoint((yyvsp[-5].op), (yyvsp[-3].f), (yyvsp[-1].f)); }
#line 2607 "y.tab.c"
    break;

  case 161:
#line 352 "grap.y"
                        { (yyval.i) = ','; }
#line 2613 "y.tab.c"
    break;

  case 162:
#line 356 "grap.y"
                        { (yyval.op) = (yyvsp[0].op); }
#line 2619 "y.tab.c"
    break;

  case 163:
#line 357 "grap.y"
                        { (yyval.op) = lookup(curr_coord, 1); }
#line 2625 "y.tab.c"
    break;

  case 166:
#line 363 "grap.y"
                                { (yyval.f) = (yyvsp[-1].f); }
#line 2631 "y.tab.c"
    break;

  case 167:
#line 364 "grap.y"
                                { (yyval.f) = getvar((yyvsp[0].op)); }
#line 2637 "y.tab.c"
    break;

  case 168:
#line 365 "grap.y"
                                { (yyval.f) = (yyvsp[-2].f) + (yyvsp[0].f); }
#line 2643 "y.tab.c"
    break;

  case 169:
#line 366 "grap.y"
                                { (yyval.f) = (yyvsp[-2].f) - (yyvsp[0].f); }
#line 2649 "y.tab.c"
    break;

  case 170:
#line 367 "grap.y"
                                { (yyval.f) = (yyvsp[-2].f) * (yyvsp[0].f); }
#line 2655 "y.tab.c"
    break;

  case 171:
#line 368 "grap.y"
                                { if ((yyvsp[0].f) == 0.0) {
					WARNING("division by 0"); (yyvsp[0].f) = 1; }
				  (yyval.f) = (yyvsp[-2].f) / (yyvsp[0].f); }
#line 2663 "y.tab.c"
    break;

  case 172:
#line 371 "grap.y"
                                { if ((long)(yyvsp[0].f) == 0) {
					WARNING("mod division by 0"); (yyvsp[0].f) = 1; }
				  (yyval.f) = (long)(yyvsp[-2].f) % (long)(yyvsp[0].f); }
#line 2671 "y.tab.c"
    break;

  case 173:
#line 374 "grap.y"
                                { (yyval.f) = -(yyvsp[0].f); }
#line 2677 "y.tab.c"
    break;

  case 174:
#line 375 "grap.y"
                                { (yyval.f) = (yyvsp[0].f); }
#line 2683 "y.tab.c"
    break;

  case 175:
#line 376 "grap.y"
                                { (yyval.f) = (yyvsp[-1].f); }
#line 2689 "y.tab.c"
    break;

  case 176:
#line 377 "grap.y"
                                        { (yyval.f) = Log10((yyvsp[-1].f)); }
#line 2695 "y.tab.c"
    break;

  case 177:
#line 378 "grap.y"
                                        { (yyval.f) = Exp((yyvsp[-1].f) * log(10.0)); }
#line 2701 "y.tab.c"
    break;

  case 178:
#line 379 "grap.y"
                                        { (yyval.f) = pow((yyvsp[-2].f), (yyvsp[0].f)); }
#line 2707 "y.tab.c"
    break;

  case 179:
#line 380 "grap.y"
                                        { (yyval.f) = sin((yyvsp[-1].f)); }
#line 2713 "y.tab.c"
    break;

  case 180:
#line 381 "grap.y"
                                        { (yyval.f) = cos((yyvsp[-1].f)); }
#line 2719 "y.tab.c"
    break;

  case 181:
#line 382 "grap.y"
                                        { (yyval.f) = atan2((yyvsp[-3].f), (yyvsp[-1].f)); }
#line 2725 "y.tab.c"
    break;

  case 182:
#line 383 "grap.y"
                                        { (yyval.f) = Sqrt((yyvsp[-1].f)); }
#line 2731 "y.tab.c"
    break;

  case 183:
#line 384 "grap.y"
                                        { (yyval.f) = (double)rand() / (double)RAND_MAX; }
#line 2737 "y.tab.c"
    break;

  case 184:
#line 385 "grap.y"
                                        { (yyval.f) = (yyvsp[-3].f) >= (yyvsp[-1].f) ? (yyvsp[-3].f) : (yyvsp[-1].f); }
#line 2743 "y.tab.c"
    break;

  case 185:
#line 386 "grap.y"
                                        { (yyval.f) = (yyvsp[-3].f) <= (yyvsp[-1].f) ? (yyvsp[-3].f) : (yyvsp[-1].f); }
#line 2749 "y.tab.c"
    break;

  case 186:
#line 387 "grap.y"
                                { (yyval.f) = (long) (yyvsp[-1].f); }
#line 2755 "y.tab.c"
    break;

  case 187:
#line 388 "grap.y"
                                { (yyval.f) = (yyvsp[-2].f) > (yyvsp[0].f); }
#line 2761 "y.tab.c"
    break;

  case 188:
#line 389 "grap.y"
                                { (yyval.f) = (yyvsp[-2].f) < (yyvsp[0].f); }
#line 2767 "y.tab.c"
    break;

  case 189:
#line 390 "grap.y"
                                { (yyval.f) = (yyvsp[-2].f) <= (yyvsp[0].f); }
#line 2773 "y.tab.c"
    break;

  case 190:
#line 391 "grap.y"
                                { (yyval.f) = (yyvsp[-2].f) >= (yyvsp[0].f); }
#line 2779 "y.tab.c"
    break;

  case 191:
#line 392 "grap.y"
                                { (yyval.f) = (yyvsp[-2].f) == (yyvsp[0].f); }
#line 2785 "y.tab.c"
    break;

  case 192:
#line 393 "grap.y"
                                { (yyval.f) = (yyvsp[-2].f) != (yyvsp[0].f); }
#line 2791 "y.tab.c"
    break;

  case 193:
#line 394 "grap.y"
                                { (yyval.f) = (yyvsp[-2].f) && (yyvsp[0].f); }
#line 2797 "y.tab.c"
    break;

  case 194:
#line 395 "grap.y"
                                { (yyval.f) = (yyvsp[-2].f) || (yyvsp[0].f); }
#line 2803 "y.tab.c"
    break;

  case 195:
#line 396 "grap.y"
                                { (yyval.f) = !((yyvsp[0].f)); }
#line 2809 "y.tab.c"
    break;

  case 196:
#line 399 "grap.y"
                                { (yyval.f) = setvar((yyvsp[-2].op), (yyvsp[0].f)); }
#line 2815 "y.tab.c"
    break;

  case 200:
#line 409 "grap.y"
                                { (yyval.f) = 0.0; }
#line 2821 "y.tab.c"
    break;


#line 2825 "y.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
                  yystos[+*yyssp], yyvsp);
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
