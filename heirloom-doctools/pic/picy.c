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
#line 1 "picy.y"

/*
 * Changes by Gunnar Ritter, Freiburg i. Br., Germany, October 2005.
 *
 * Derived from Plan 9 v4 /sys/src/cmd/pic/
 *
 * Copyright (C) 2003, Lucent Technologies Inc. and others.
 * All Rights Reserved.
 *
 * Distributed under the terms of the Lucent Public License Version 1.02.
 */

/*	Sccsid @(#)picy.y	1.4 (gritter) 11/28/05	*/

#include <stdio.h>
#include "pic.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

#ifndef	RAND_MAX
#define	RAND_MAX	32767
#endif

YYSTYPE	y;

extern	void	yyerror(char *);
extern	int	yylex(void);

#line 100 "y.tab.c"

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
    BOX = 1,
    LINE = 2,
    ARROW = 3,
    CIRCLE = 4,
    ELLIPSE = 5,
    ARC = 6,
    SPLINE = 7,
    BLOCK = 8,
    TEXT = 9,
    TROFF = 10,
    MOVE = 11,
    BLOCKEND = 12,
    PLACE = 13,
    PRINT = 258,
    RESET = 259,
    THRU = 260,
    UNTIL = 261,
    FOR = 262,
    IF = 263,
    COPY = 264,
    THENSTR = 265,
    ELSESTR = 266,
    DOSTR = 267,
    PLACENAME = 268,
    VARNAME = 269,
    SPRINTF = 270,
    DEFNAME = 271,
    ATTR = 272,
    TEXTATTR = 273,
    LEFT = 274,
    RIGHT = 275,
    UP = 276,
    DOWN = 277,
    FROM = 278,
    TO = 279,
    AT = 280,
    BY = 281,
    WITH = 282,
    HEAD = 283,
    CW = 284,
    CCW = 285,
    THEN = 286,
    HEIGHT = 287,
    WIDTH = 288,
    RADIUS = 289,
    DIAMETER = 290,
    LENGTH = 291,
    SIZE = 292,
    CORNER = 293,
    HERE = 294,
    LAST = 295,
    NTH = 296,
    SAME = 297,
    BETWEEN = 298,
    AND = 299,
    EAST = 300,
    WEST = 301,
    NORTH = 302,
    SOUTH = 303,
    NE = 304,
    NW = 305,
    SE = 306,
    SW = 307,
    START = 308,
    END = 309,
    DOTX = 310,
    DOTY = 311,
    DOTHT = 312,
    DOTWID = 313,
    DOTRAD = 314,
    NUMBER = 315,
    LOG = 316,
    EXP = 317,
    SIN = 318,
    COS = 319,
    ATAN2 = 320,
    SQRT = 321,
    RAND = 322,
    MIN = 323,
    MAX = 324,
    INT = 325,
    DIR = 326,
    DOT = 327,
    DASH = 328,
    CHOP = 329,
    FILL = 330,
    NOEDGE = 331,
    ST = 332,
    OROR = 333,
    ANDAND = 334,
    GT = 335,
    LT = 336,
    LE = 337,
    GE = 338,
    EQ = 339,
    NEQ = 340,
    UMINUS = 341,
    NOT = 342
  };
#endif
/* Tokens.  */
#define BOX 1
#define LINE 2
#define ARROW 3
#define CIRCLE 4
#define ELLIPSE 5
#define ARC 6
#define SPLINE 7
#define BLOCK 8
#define TEXT 9
#define TROFF 10
#define MOVE 11
#define BLOCKEND 12
#define PLACE 13
#define PRINT 258
#define RESET 259
#define THRU 260
#define UNTIL 261
#define FOR 262
#define IF 263
#define COPY 264
#define THENSTR 265
#define ELSESTR 266
#define DOSTR 267
#define PLACENAME 268
#define VARNAME 269
#define SPRINTF 270
#define DEFNAME 271
#define ATTR 272
#define TEXTATTR 273
#define LEFT 274
#define RIGHT 275
#define UP 276
#define DOWN 277
#define FROM 278
#define TO 279
#define AT 280
#define BY 281
#define WITH 282
#define HEAD 283
#define CW 284
#define CCW 285
#define THEN 286
#define HEIGHT 287
#define WIDTH 288
#define RADIUS 289
#define DIAMETER 290
#define LENGTH 291
#define SIZE 292
#define CORNER 293
#define HERE 294
#define LAST 295
#define NTH 296
#define SAME 297
#define BETWEEN 298
#define AND 299
#define EAST 300
#define WEST 301
#define NORTH 302
#define SOUTH 303
#define NE 304
#define NW 305
#define SE 306
#define SW 307
#define START 308
#define END 309
#define DOTX 310
#define DOTY 311
#define DOTHT 312
#define DOTWID 313
#define DOTRAD 314
#define NUMBER 315
#define LOG 316
#define EXP 317
#define SIN 318
#define COS 319
#define ATAN2 320
#define SQRT 321
#define RAND 322
#define MIN 323
#define MAX 324
#define INT 325
#define DIR 326
#define DOT 327
#define DASH 328
#define CHOP 329
#define FILL 330
#define NOEDGE 331
#define ST 332
#define OROR 333
#define ANDAND 334
#define GT 335
#define LT 336
#define LE 337
#define GE 338
#define EQ 339
#define NEQ 340
#define UMINUS 341
#define NOT 342

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
#define YYFINAL  90
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1639

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  345

#define YYUNDEFTOK  2
#define YYMAXUTOK   342


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   104,     2,     2,
     115,   116,   102,   100,   110,   101,   114,   103,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   109,     2,
       2,    91,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   113,     2,   112,   107,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   111,     2,   108,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    92,    93,    94,    95,    96,    97,    98,
      99,   105,   106
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    83,    83,    84,    85,    89,    90,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   111,   113,   114,   115,   119,   123,   126,   127,
     130,   131,   132,   136,   138,   140,   142,   147,   148,   151,
     152,   153,   157,   160,   161,   162,   163,   164,   169,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     183,   188,   192,   193,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   228,   229,   232,   233,   234,   237,   238,   239,   243,
     244,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   279,   280,   281,   285,
     286,   287,   291,   292,   293,   294,   295,   296,   297,   298,
     302,   303,   304,   305,   306,   307,   308,   311,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOX", "LINE", "ARROW", "CIRCLE",
  "ELLIPSE", "ARC", "SPLINE", "BLOCK", "TEXT", "TROFF", "MOVE", "BLOCKEND",
  "PLACE", "PRINT", "RESET", "THRU", "UNTIL", "FOR", "IF", "COPY",
  "THENSTR", "ELSESTR", "DOSTR", "PLACENAME", "VARNAME", "SPRINTF",
  "DEFNAME", "ATTR", "TEXTATTR", "LEFT", "RIGHT", "UP", "DOWN", "FROM",
  "TO", "AT", "BY", "WITH", "HEAD", "CW", "CCW", "THEN", "HEIGHT", "WIDTH",
  "RADIUS", "DIAMETER", "LENGTH", "SIZE", "CORNER", "HERE", "LAST", "NTH",
  "SAME", "BETWEEN", "AND", "EAST", "WEST", "NORTH", "SOUTH", "NE", "NW",
  "SE", "SW", "START", "END", "DOTX", "DOTY", "DOTHT", "DOTWID", "DOTRAD",
  "NUMBER", "LOG", "EXP", "SIN", "COS", "ATAN2", "SQRT", "RAND", "MIN",
  "MAX", "INT", "DIR", "DOT", "DASH", "CHOP", "FILL", "NOEDGE", "ST",
  "'='", "OROR", "ANDAND", "GT", "LT", "LE", "GE", "EQ", "NEQ", "'+'",
  "'-'", "'*'", "'/'", "'%'", "UMINUS", "NOT", "'^'", "'}'", "':'", "','",
  "'{'", "']'", "'['", "'.'", "'('", "')'", "$accept", "top", "piclist",
  "picture", "varlist", "asgn", "copy", "copylist", "copyattr", "for",
  "if", "if_expr", "name", "optop", "leftbrace", "prim", "@1", "lbracket",
  "attrlist", "attr", "textlist", "textattr", "text", "exprlist",
  "position", "place", "blockname", "last", "type", "expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    61,   333,   334,   335,   336,   337,   338,   339,   340,
      43,    45,    42,    47,    37,   341,   342,    94,   125,    58,
      44,   123,    93,    91,    46,    40,    41
};
# endif

#define YYPACT_NINF (-74)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-114)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     332,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   645,   -25,    -1,   656,   218,   -47,   -24,     1,
     -74,   -74,   -74,   -74,   114,   523,   -74,    -8,   -74,   -74,
     -74,   523,    31,   523,     7,   108,   113,   564,   564,   564,
     564,   564,   564,   564,   564,   -29,   -24,     6,   -74,   -74,
     289,   -74,    27,    35,    37,    59,    61,    72,    93,   100,
     119,   120,   714,   714,   714,   726,   -74,   102,   -56,   194,
     150,  1022,   967,   -74,   -26,   -74,   -11,   714,   216,   -61,
     194,  1489,   199,     7,   218,   -74,   -74,   358,   714,     7,
     -74,   -74,   -74,   471,   -74,   497,   564,   108,   -74,   -74,
     714,   -74,   726,   726,   726,   726,   143,   -74,   -74,   714,
     714,   714,   784,   714,   -74,   -74,     7,  1489,   -74,    86,
     124,  1099,   -74,  1107,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   126,   -74,   196,   714,   714,   714,   714,   714,   714,
     132,   714,   714,   714,   144,   144,   144,   -73,   135,   942,
     -74,   -74,   795,   853,   -74,   -74,   -74,   -74,   -74,   -74,
     136,   -74,   203,   726,   -74,   714,   714,   714,   726,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     -74,   -74,   228,   714,   714,  1094,   232,     7,     7,   714,
     -74,   -74,   -74,   -31,   523,   -74,    -8,    78,   991,  1489,
     -42,   -74,   -74,  1489,    18,    18,    18,    18,     6,   233,
      18,  1489,  1489,  1489,    77,  1489,  1489,   -74,   -74,   234,
     154,   -74,   155,   -74,   173,   -74,  1119,  1144,  1169,  1194,
    1394,  1219,   -74,  1413,  1432,  1244,   -74,    53,   -74,   714,
     194,  1451,   714,   194,  1470,   205,   -74,   -28,  1504,  1518,
    1532,    80,   215,  1532,  1532,  1532,  1532,    82,    82,   144,
     144,   144,   144,  1489,   -74,   845,   913,   -74,   -74,   -74,
    1532,   -74,   -74,   714,   -74,   -74,   219,   246,   248,   -74,
     -74,   -74,   -74,   -74,   -74,   714,   -74,   714,   714,   -74,
     -18,  1099,   162,  1107,  1026,   714,  1069,   714,   -74,   -74,
     726,   726,   714,   714,   -39,  1489,   564,   -74,  1269,  1294,
    1319,   -74,   714,  1489,   714,  1489,    18,   -70,   295,   528,
     714,   -74,   -74,   -74,   -74,  1344,  1369,   -74,   -74,   111,
     -74,   111,  1489,   -74,   -74,   -74,   -74,   -74,   -74,   714,
     714,   877,   893,   -74,   -74
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,    63,    63,    63,    63,    63,    63,    63,    96,
      58,    63,     0,    22,     0,     0,     0,     0,     0,     0,
      13,    21,    48,    61,     0,     2,     5,     0,    18,    19,
      20,     0,     0,     0,    63,    91,    93,    49,    53,    54,
      50,    51,    52,    55,    56,   113,   141,     0,   116,   131,
       0,   140,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   142,     0,     0,   101,
     123,     0,     0,    23,     0,    42,     0,     0,     0,     0,
       0,    39,     0,     0,    27,    28,    30,     0,     0,     0,
       1,     6,    12,     0,     7,     0,    57,    92,    95,    94,
      65,    78,     0,     0,     0,     0,     0,    79,    77,    68,
      81,    83,    85,    88,    89,    62,    90,    66,   114,     0,
     115,     0,   125,     0,   132,   136,   137,   133,   134,   135,
     138,   139,   130,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   149,   148,   167,     0,   101,     0,
      16,    15,     0,     0,   151,   152,   153,   154,   155,   124,
     139,   129,   117,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    17,     0,     0,     0,     0,    38,     0,     0,     0,
      31,    32,    29,   113,    21,     9,   142,     0,     0,    26,
       0,     8,    59,    64,    69,    70,    71,    72,    73,     0,
      76,    67,    80,    82,    86,    84,    87,   128,   156,     0,
     139,   122,   139,   119,     0,   121,     0,     0,     0,     0,
       0,     0,   175,     0,     0,     0,   102,     0,   150,     0,
     108,     0,     0,   109,     0,     0,   118,     0,   166,   165,
     159,     0,   160,   161,   162,   163,   164,   143,   144,   145,
     146,   147,   170,   103,    25,     0,     0,    37,    40,    41,
     160,    10,    11,     0,    97,    63,    74,     0,     0,   127,
     158,   168,   169,   171,   172,     0,   174,     0,     0,   178,
     113,     0,     0,     0,     0,     0,     0,     0,   126,   157,
       0,     0,     0,     0,     0,    99,    60,    75,     0,     0,
       0,   110,     0,   104,     0,   105,   112,     0,     0,     0,
       0,    98,   173,   177,   176,     0,     0,   111,    34,    47,
      36,    47,   100,   106,   107,    43,    44,    45,    46,     0,
       0,     0,     0,    33,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   -10,    -6,   -74,    15,   -74,   -74,   195,   -74,
     -74,   -74,   -74,   -51,   -74,   -74,   -74,   -74,     2,   -74,
      16,   -30,    54,   -74,   -48,    30,   -33,   -35,   -60,   -12
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    74,    66,    28,    84,    85,    29,
      30,    78,    76,   339,    31,    32,   275,    33,    37,   115,
     116,    35,    36,   304,    68,    80,    70,    71,   133,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,   180,    73,    81,    97,    38,    39,    40,    41,    42,
      43,   162,   123,    44,   122,    27,    34,   147,     9,    91,
     118,    93,   118,    95,   327,   183,    75,   152,   153,   300,
     152,   153,   120,   118,   151,    19,    96,   187,   188,   197,
      27,    34,    69,   236,   152,   153,    27,    34,    27,    34,
     144,   145,   146,   149,   204,   205,   206,   207,   210,    49,
     121,   221,    87,   223,   181,   185,    67,    88,   273,    79,
      86,   320,   152,   153,   274,   198,   199,   321,    87,   290,
     184,   195,    92,   119,   182,   119,    97,    91,   203,    91,
     198,   198,   198,   198,   198,   148,   219,   211,   212,   213,
     215,   216,   196,    34,    47,    48,    49,   291,    27,    34,
      27,    34,   217,   218,    90,   247,    89,    69,   152,   153,
     251,    94,   226,   227,   228,   229,   230,   231,   118,   233,
     234,   235,    69,    69,    69,    69,    69,   191,    86,    98,
     241,   244,   134,   200,    99,  -113,  -113,  -113,  -113,  -113,
     135,   198,   136,   248,   249,   250,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   272,    45,
      46,   265,   266,   123,   137,   122,   138,   270,   152,   153,
     152,   153,   240,   243,   175,   176,   177,   139,   271,   178,
     301,   119,   150,    69,   208,    48,    49,    50,    69,   279,
     280,   159,   293,   154,   155,   156,   157,   158,   140,    27,
      34,   335,   336,   337,   338,   141,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,   294,   190,     9,
     296,   298,   299,   162,   142,   143,    82,    83,   219,   186,
     224,   268,   269,    62,    63,   237,    19,   225,   232,    64,
     245,   178,   316,   317,   246,   264,   267,   209,    65,   276,
     217,   305,   154,   155,   156,   157,   158,   292,   277,   278,
     307,   163,   279,   308,   298,   309,   310,   306,   311,   192,
     340,     0,     0,   313,     0,   315,     0,     0,   198,   198,
     318,   319,   124,   125,   126,   127,   128,   129,   130,   131,
     325,     0,   326,     0,     0,     0,     0,     0,   332,  -114,
    -114,  -114,  -114,  -114,  -114,   173,   174,   175,   176,   177,
     328,     0,   178,     0,     0,   179,     0,   341,   342,     0,
      69,    69,    -3,     1,   329,     2,     3,     4,     5,     6,
       7,     8,   132,     9,    10,    11,     0,     0,    12,    13,
       0,     0,    14,    15,    16,     0,     0,     0,    17,    18,
      19,     2,     3,     4,     5,     6,     7,     8,     0,     9,
      10,    11,     0,     0,    12,    13,     0,     0,    14,    15,
      16,     0,     0,     0,   193,    46,    19,   165,   166,   167,
     189,   169,   170,   171,   172,   173,   174,   175,   176,   177,
       0,     0,   178,     0,     0,     0,     0,     0,     0,    47,
      48,    49,    50,     0,     0,     0,    20,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    20,    22,     0,    23,     0,     0,   194,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    63,
       0,     0,     0,     0,    64,     0,     0,     0,     0,    22,
       0,    23,     0,    65,     2,     3,     4,     5,     6,     7,
       8,     0,     9,    10,    11,     0,     0,    12,    13,     0,
       0,    14,    15,    16,     0,     0,     0,    17,    18,    19,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,     0,     0,    12,    13,     0,     0,    14,    15,    16,
       0,     0,     0,    17,    18,    19,     2,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,     0,     0,    12,
      13,     0,     0,    14,    15,    16,     0,     0,     0,    17,
      18,    19,     0,   330,     0,    20,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,   331,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,     0,   201,
       0,    20,    22,     0,    23,     0,     0,    21,     0,     0,
      45,    46,    19,     0,   100,   101,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,    20,    22,   202,
      23,     0,     0,    21,     0,    47,    48,    49,    50,   108,
     165,   166,   167,   189,   169,   170,   171,   172,   173,   174,
     175,   176,   177,     0,    22,   178,    23,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,   109,   110,
     111,   112,   113,   114,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,    62,    63,     0,     9,     0,     0,
      64,    45,    46,    19,     0,     0,     0,     0,     0,    77,
       0,     0,    45,    46,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,    47,    48,    49,
      50,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      45,    46,     0,     0,     0,    62,    63,     0,     0,     0,
       0,    64,    45,    46,     0,     0,    62,    63,     0,     0,
      65,     0,    64,     0,     0,    47,    48,    49,    50,     0,
       0,    77,     0,     0,     0,     0,     0,    47,    48,    49,
      50,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,     0,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
     214,    46,     0,     0,    62,    63,     0,     0,     0,     0,
      64,    45,    46,     0,     0,     0,    62,    63,     0,    77,
       0,     0,    64,     0,     0,    47,    48,    49,    50,     0,
       0,    65,     0,     0,     0,     0,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    45,
      46,     0,   302,     0,    62,    63,     0,     0,     0,     0,
      64,     0,     0,     0,     0,    62,    63,     0,     0,    77,
       0,    64,   343,     0,    47,    48,    49,    50,     0,     0,
     239,     0,     0,     0,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,   165,   166,   167,
     189,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     303,     0,   178,    62,    63,     0,     0,     0,     0,    64,
       0,     0,     0,     0,     0,     0,     0,     0,   242,   165,
     166,   167,   189,   169,   170,   171,   172,   173,   174,   175,
     176,   177,     0,     0,   178,   165,   166,   167,   189,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   163,     0,
     178,     0,     0,     0,     0,   165,   166,   167,   189,   169,
     170,   171,   172,   173,   174,   175,   176,   177,     0,     0,
     178,     0,     0,   163,     0,   124,   125,   126,   127,   128,
     129,   130,   160,     0,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   163,     0,   178,
       0,     0,   179,     0,     0,     0,     0,   164,   238,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,     0,     0,   178,   161,     0,   179,     0,     0,
       0,     0,     0,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,     0,     0,   178,     0,
       0,   179,   124,   125,   126,   127,   128,   129,   130,   220,
     124,   125,   126,   127,   128,   129,   130,   222,   165,   166,
     167,   189,   169,   170,   171,   172,   173,   174,   175,   176,
     177,     0,     0,   178,     0,     0,   312,     0,     0,     0,
       0,     0,   238,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,     0,     0,     0,     0,     0,     0,     0,
     161,   165,   166,   167,   189,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,   314,
       0,     0,     0,     0,     0,   238,   165,   166,   167,   189,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     238,   165,   166,   167,   189,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   281,   165,   166,   167,   189,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     282,   165,   166,   167,   189,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   283,   165,   166,   167,   189,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     284,   165,   166,   167,   189,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   286,   165,   166,   167,   189,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     289,   165,   166,   167,   189,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   322,   165,   166,   167,   189,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     323,   165,   166,   167,   189,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   324,   165,   166,   167,   189,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     333,   165,   166,   167,   189,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   334,   165,   166,   167,   189,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,   285,   165,   166,   167,   189,   169,
     170,   171,   172,   173,   174,   175,   176,   177,     0,     0,
     178,     0,     0,   287,   165,   166,   167,   189,   169,   170,
     171,   172,   173,   174,   175,   176,   177,     0,     0,   178,
       0,     0,   288,   165,   166,   167,   189,   169,   170,   171,
     172,   173,   174,   175,   176,   177,     0,     0,   178,     0,
       0,   295,   165,   166,   167,   189,   169,   170,   171,   172,
     173,   174,   175,   176,   177,     0,     0,   178,     0,     0,
     297,   165,   166,   167,   189,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,   178,   166,   167,   189,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,   178,   167,   189,   169,   170,   171,   172,   173,   174,
     175,   176,   177,     0,     0,   178,  -114,  -114,  -114,  -114,
    -114,  -114,   173,   174,   175,   176,   177,     0,     0,   178
};

static const yytype_int16 yycheck[] =
{
      12,    27,    27,    15,    34,     3,     4,     5,     6,     7,
       8,    71,    47,    11,    47,     0,     0,    65,    11,    25,
      51,    31,    51,    33,    94,    36,    27,   100,   101,    57,
     100,   101,    26,    51,    90,    28,    34,    98,    99,    87,
      25,    25,    12,   116,   100,   101,    31,    31,    33,    33,
      62,    63,    64,    65,   102,   103,   104,   105,   106,    53,
      54,   121,   109,   123,    90,    77,    12,    91,   110,    15,
      16,   110,   100,   101,   116,    87,    88,   116,   109,    26,
      91,    87,    90,   114,   110,   114,   116,    93,   100,    95,
     102,   103,   104,   105,   106,    65,   114,   109,   110,   111,
     112,   113,    87,    87,    51,    52,    53,    54,    93,    93,
      95,    95,    26,    27,     0,   163,   115,    87,   100,   101,
     168,    90,   134,   135,   136,   137,   138,   139,    51,   141,
     142,   143,   102,   103,   104,   105,   106,    83,    84,    31,
     152,   153,   115,    89,    31,    68,    69,    70,    71,    72,
     115,   163,   115,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,    90,    26,
      27,   183,   184,   208,   115,   208,   115,   189,   100,   101,
     100,   101,   152,   153,   102,   103,   104,   115,   194,   107,
     110,   114,    90,   163,    51,    52,    53,    54,   168,    26,
      27,    51,   237,    68,    69,    70,    71,    72,   115,   194,
     194,   100,   101,   102,   103,   115,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   239,    29,    11,
     242,    26,    27,   293,   115,   115,    18,    19,   114,    23,
     114,   187,   188,   100,   101,   110,    28,    51,   116,   106,
     114,   107,   300,   301,    51,    27,    24,   114,   115,    26,
      26,   273,    68,    69,    70,    71,    72,   237,   114,   114,
      51,    56,    26,   285,    26,   287,   288,   275,   116,    84,
     331,    -1,    -1,   295,    -1,   297,    -1,    -1,   300,   301,
     302,   303,     3,     4,     5,     6,     7,     8,     9,    10,
     312,    -1,   314,    -1,    -1,    -1,    -1,    -1,   320,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      25,    -1,   107,    -1,    -1,   110,    -1,   339,   340,    -1,
     300,   301,     0,     1,    39,     3,     4,     5,     6,     7,
       8,     9,    53,    11,    12,    13,    -1,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    -1,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   111,    -1,   113,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    -1,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    27,    28,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    28,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    -1,    25,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,   108,
      -1,    84,   111,    -1,   113,    -1,    -1,    90,    -1,    -1,
      26,    27,    28,    -1,    30,    31,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    84,   111,   112,
     113,    -1,    -1,    90,    -1,    51,    52,    53,    54,    55,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,   111,   107,   113,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,    -1,    11,    -1,    -1,
     106,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,   115,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      26,    27,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,
      -1,   106,    26,    27,    -1,    -1,   100,   101,    -1,    -1,
     115,    -1,   106,    -1,    -1,    51,    52,    53,    54,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      26,    27,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,
     106,    26,    27,    -1,    -1,    -1,   100,   101,    -1,   115,
      -1,    -1,   106,    -1,    -1,    51,    52,    53,    54,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    26,
      27,    -1,    37,    -1,   100,   101,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   100,   101,    -1,    -1,   115,
      -1,   106,    25,    -1,    51,    52,    53,    54,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      37,    -1,   107,   100,   101,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,   107,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    56,    -1,
     107,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
     107,    -1,    -1,    56,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    56,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    90,   116,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,   107,    53,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,   107,    -1,
      -1,   110,     3,     4,     5,     6,     7,     8,     9,    10,
       3,     4,     5,     6,     7,     8,     9,    10,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,   110,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
     107,    -1,    -1,   110,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,   107,
      -1,    -1,   110,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,   107,    -1,
      -1,   110,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,
     110,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,   107,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,   107
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    11,
      12,    13,    16,    17,    20,    21,    22,    26,    27,    28,
      84,    90,   111,   113,   118,   119,   120,   122,   123,   126,
     127,   131,   132,   134,   137,   138,   139,   135,   135,   135,
     135,   135,   135,   135,   135,    26,    27,    51,    52,    53,
      54,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,   100,   101,   106,   115,   122,   139,   141,   142,
     143,   144,   146,    27,   121,    27,   129,   115,   128,   139,
     142,   146,    18,    19,   124,   125,   139,   109,    91,   115,
       0,   120,    90,   119,    90,   119,   135,   138,    31,    31,
      30,    31,    36,    37,    38,    39,    40,    41,    55,    84,
      85,    86,    87,    88,    89,   136,   137,   146,    51,   114,
      26,    54,   143,   144,     3,     4,     5,     6,     7,     8,
       9,    10,    53,   145,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   146,   146,   146,   141,   142,   146,
      90,    90,   100,   101,    68,    69,    70,    71,    72,    51,
      10,    53,   145,    56,    90,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   107,   110,
      27,    90,   110,    36,    91,   146,    23,    98,    99,    95,
      29,   139,   125,    26,    90,   120,   122,   141,   146,   146,
     139,   108,   112,   146,   141,   141,   141,   141,    51,   114,
     141,   146,   146,   146,    26,   146,   146,    26,    27,   114,
      10,   145,    10,   145,   114,    51,   146,   146,   146,   146,
     146,   146,   116,   146,   146,   146,   116,   110,   116,   115,
     142,   146,   115,   142,   146,   114,    51,   141,   146,   146,
     146,   141,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,    27,   146,   146,    24,   139,   139,
     146,   120,    90,   110,   116,   133,    26,   114,   114,    26,
      27,   116,   116,   116,   116,   110,   116,   110,   110,   116,
      26,    54,   142,   144,   146,   110,   146,   110,    26,    27,
      57,   110,    37,    37,   140,   146,   135,    51,   146,   146,
     146,   116,   110,   146,   110,   146,   141,   141,   146,   146,
     110,   116,   116,   116,   116,   146,   146,    94,    25,    39,
      25,    39,   146,   116,   116,   100,   101,   102,   103,   130,
     130,   146,   146,    25,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   117,   118,   118,   118,   119,   119,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   122,   123,   124,   124,
     125,   125,   125,   126,   126,   126,   126,   127,   127,   128,
     128,   128,   129,   130,   130,   130,   130,   130,   131,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   133,
     132,   134,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   137,   137,   138,   138,   138,   139,   139,   139,   140,
     140,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   143,   143,   143,   144,
     144,   144,   145,   145,   145,   145,   145,   145,   145,   145,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     2,     3,     3,
       4,     4,     2,     1,     3,     3,     3,     3,     1,     1,
       1,     1,     0,     1,     2,     3,     3,     2,     1,     2,
       1,     2,     2,    10,     7,    10,     7,     4,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     0,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     0,
       5,     1,     2,     0,     2,     1,     1,     2,     1,     2,
       2,     2,     2,     2,     3,     4,     2,     1,     1,     1,
       2,     1,     2,     1,     2,     1,     2,     2,     1,     1,
       1,     1,     2,     1,     2,     2,     1,     4,     6,     1,
       3,     1,     3,     3,     5,     5,     7,     7,     3,     3,
       5,     6,     5,     1,     2,     2,     1,     2,     3,     3,
       2,     3,     3,     1,     2,     2,     4,     4,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     2,     2,
       3,     2,     2,     2,     2,     2,     3,     4,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     4,     4,
       3,     4,     4,     6,     4,     3,     6,     6,     4
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
  case 4:
#line 85 "picy.y"
                        { WARNING("syntax error"); }
#line 2023 "y.tab.c"
    break;

  case 7:
#line 94 "picy.y"
                                        { codegen = 1; makeiattr(0, 0); }
#line 2029 "y.tab.c"
    break;

  case 8:
#line 95 "picy.y"
                                        { rightthing((yyvsp[-2].o), '}'); (yyval.o) = (yyvsp[-1].o); }
#line 2035 "y.tab.c"
    break;

  case 9:
#line 96 "picy.y"
                                        { y.o=(yyvsp[0].o); makevar((yyvsp[-2].p),PLACENAME,y); (yyval.o) = (yyvsp[0].o); }
#line 2041 "y.tab.c"
    break;

  case 10:
#line 97 "picy.y"
                                        { y.o=(yyvsp[0].o); makevar((yyvsp[-3].p),PLACENAME,y); (yyval.o) = (yyvsp[0].o); }
#line 2047 "y.tab.c"
    break;

  case 11:
#line 98 "picy.y"
                                        { y.o=(yyvsp[-1].o); makevar((yyvsp[-3].p),PLACENAME,y); (yyval.o) = (yyvsp[-1].o); }
#line 2053 "y.tab.c"
    break;

  case 12:
#line 99 "picy.y"
                                        { y.f = (yyvsp[-1].f); (yyval.o) = y.o; (yyval.o) = makenode(PLACE, 0); }
#line 2059 "y.tab.c"
    break;

  case 13:
#line 100 "picy.y"
                                        { setdir((yyvsp[0].i)); (yyval.o) = makenode(PLACE, 0); }
#line 2065 "y.tab.c"
    break;

  case 14:
#line 101 "picy.y"
                                        { printexpr((yyvsp[-1].f)); (yyval.o) = makenode(PLACE, 0); }
#line 2071 "y.tab.c"
    break;

  case 15:
#line 102 "picy.y"
                                        { printpos((yyvsp[-1].o)); (yyval.o) = makenode(PLACE, 0); }
#line 2077 "y.tab.c"
    break;

  case 16:
#line 103 "picy.y"
                                        { printf("%s\n", (yyvsp[-1].p)); free((yyvsp[-1].p)); (yyval.o) = makenode(PLACE, 0); }
#line 2083 "y.tab.c"
    break;

  case 17:
#line 104 "picy.y"
                                        { resetvar(); makeiattr(0, 0); (yyval.o) = makenode(PLACE, 0); }
#line 2089 "y.tab.c"
    break;

  case 23:
#line 113 "picy.y"
                                { makevattr((yyvsp[0].p)); }
#line 2095 "y.tab.c"
    break;

  case 24:
#line 114 "picy.y"
                                { makevattr((yyvsp[0].p)); }
#line 2101 "y.tab.c"
    break;

  case 25:
#line 115 "picy.y"
                                { makevattr((yyvsp[0].p)); }
#line 2107 "y.tab.c"
    break;

  case 26:
#line 119 "picy.y"
                                { (yyval.f)=y.f=(yyvsp[0].f); makevar((yyvsp[-2].p),VARNAME,y); checkscale((yyvsp[-2].p)); }
#line 2113 "y.tab.c"
    break;

  case 27:
#line 123 "picy.y"
                                { copy(); }
#line 2119 "y.tab.c"
    break;

  case 30:
#line 130 "picy.y"
                                { copyfile((yyvsp[0].p)); }
#line 2125 "y.tab.c"
    break;

  case 31:
#line 131 "picy.y"
                                { copydef((yyvsp[0].st)); }
#line 2131 "y.tab.c"
    break;

  case 32:
#line 132 "picy.y"
                                { copyuntil((yyvsp[0].p)); }
#line 2137 "y.tab.c"
    break;

  case 33:
#line 137 "picy.y"
                { forloop((yyvsp[-8].p), (yyvsp[-6].f), (yyvsp[-4].f), (yyvsp[-2].i), (yyvsp[-1].f), (yyvsp[0].p)); }
#line 2143 "y.tab.c"
    break;

  case 34:
#line 139 "picy.y"
                { forloop((yyvsp[-5].p), (yyvsp[-3].f), (yyvsp[-1].f), '+', 1.0, (yyvsp[0].p)); }
#line 2149 "y.tab.c"
    break;

  case 35:
#line 141 "picy.y"
                { forloop((yyvsp[-8].p), (yyvsp[-6].f), (yyvsp[-4].f), (yyvsp[-2].i), (yyvsp[-1].f), (yyvsp[0].p)); }
#line 2155 "y.tab.c"
    break;

  case 36:
#line 143 "picy.y"
                { forloop((yyvsp[-5].p), (yyvsp[-3].f), (yyvsp[-1].f), '+', 1.0, (yyvsp[0].p)); }
#line 2161 "y.tab.c"
    break;

  case 37:
#line 147 "picy.y"
                                        { ifstat((yyvsp[-2].f), (yyvsp[-1].p), (yyvsp[0].p)); }
#line 2167 "y.tab.c"
    break;

  case 38:
#line 148 "picy.y"
                                        { ifstat((yyvsp[-1].f), (yyvsp[0].p), (char *) 0); }
#line 2173 "y.tab.c"
    break;

  case 40:
#line 152 "picy.y"
                                { (yyval.f) = strcmp((yyvsp[-2].p),(yyvsp[0].p)) == 0; free((yyvsp[-2].p)); free((yyvsp[0].p)); }
#line 2179 "y.tab.c"
    break;

  case 41:
#line 153 "picy.y"
                                { (yyval.f) = strcmp((yyvsp[-2].p),(yyvsp[0].p)) != 0; free((yyvsp[-2].p)); free((yyvsp[0].p)); }
#line 2185 "y.tab.c"
    break;

  case 42:
#line 157 "picy.y"
                        { y.f = 0; makevar((yyvsp[0].p), VARNAME, y); }
#line 2191 "y.tab.c"
    break;

  case 43:
#line 160 "picy.y"
                        { (yyval.i) = '+'; }
#line 2197 "y.tab.c"
    break;

  case 44:
#line 161 "picy.y"
                        { (yyval.i) = '-'; }
#line 2203 "y.tab.c"
    break;

  case 45:
#line 162 "picy.y"
                        { (yyval.i) = '*'; }
#line 2209 "y.tab.c"
    break;

  case 46:
#line 163 "picy.y"
                        { (yyval.i) = '/'; }
#line 2215 "y.tab.c"
    break;

  case 47:
#line 164 "picy.y"
                        { (yyval.i) = ' '; }
#line 2221 "y.tab.c"
    break;

  case 48:
#line 169 "picy.y"
                                { (yyval.o) = leftthing('{'); }
#line 2227 "y.tab.c"
    break;

  case 49:
#line 173 "picy.y"
                                { (yyval.o) = boxgen(); }
#line 2233 "y.tab.c"
    break;

  case 50:
#line 174 "picy.y"
                                { (yyval.o) = circgen((yyvsp[-1].i)); }
#line 2239 "y.tab.c"
    break;

  case 51:
#line 175 "picy.y"
                                { (yyval.o) = circgen((yyvsp[-1].i)); }
#line 2245 "y.tab.c"
    break;

  case 52:
#line 176 "picy.y"
                                { (yyval.o) = arcgen((yyvsp[-1].i)); }
#line 2251 "y.tab.c"
    break;

  case 53:
#line 177 "picy.y"
                                { (yyval.o) = linegen((yyvsp[-1].i)); }
#line 2257 "y.tab.c"
    break;

  case 54:
#line 178 "picy.y"
                                { (yyval.o) = linegen((yyvsp[-1].i)); }
#line 2263 "y.tab.c"
    break;

  case 55:
#line 179 "picy.y"
                                { (yyval.o) = linegen((yyvsp[-1].i)); }
#line 2269 "y.tab.c"
    break;

  case 56:
#line 180 "picy.y"
                                { (yyval.o) = movegen(); }
#line 2275 "y.tab.c"
    break;

  case 57:
#line 181 "picy.y"
                                { (yyval.o) = textgen(); }
#line 2281 "y.tab.c"
    break;

  case 58:
#line 182 "picy.y"
                                { (yyval.o) = troffgen((yyvsp[0].p)); }
#line 2287 "y.tab.c"
    break;

  case 59:
#line 183 "picy.y"
                               { (yyval.o)=rightthing((yyvsp[-2].o),']'); }
#line 2293 "y.tab.c"
    break;

  case 60:
#line 184 "picy.y"
                                { (yyval.o) = blockgen((yyvsp[-4].o), (yyvsp[-1].o)); }
#line 2299 "y.tab.c"
    break;

  case 61:
#line 188 "picy.y"
                                { (yyval.o) = leftthing('['); }
#line 2305 "y.tab.c"
    break;

  case 64:
#line 197 "picy.y"
                                { makefattr((yyvsp[-1].i), !DEFAULT, (yyvsp[0].f)); }
#line 2311 "y.tab.c"
    break;

  case 65:
#line 198 "picy.y"
                                { makefattr((yyvsp[0].i), DEFAULT, 0.0); }
#line 2317 "y.tab.c"
    break;

  case 66:
#line 199 "picy.y"
                                { makefattr(curdir(), !DEFAULT, (yyvsp[0].f)); }
#line 2323 "y.tab.c"
    break;

  case 67:
#line 200 "picy.y"
                                { makefattr((yyvsp[-1].i), !DEFAULT, (yyvsp[0].f)); }
#line 2329 "y.tab.c"
    break;

  case 68:
#line 201 "picy.y"
                                { makefattr((yyvsp[0].i), DEFAULT, 0.0); }
#line 2335 "y.tab.c"
    break;

  case 69:
#line 202 "picy.y"
                                { makeoattr((yyvsp[-1].i), (yyvsp[0].o)); }
#line 2341 "y.tab.c"
    break;

  case 70:
#line 203 "picy.y"
                                { makeoattr((yyvsp[-1].i), (yyvsp[0].o)); }
#line 2347 "y.tab.c"
    break;

  case 71:
#line 204 "picy.y"
                                { makeoattr((yyvsp[-1].i), (yyvsp[0].o)); }
#line 2353 "y.tab.c"
    break;

  case 72:
#line 205 "picy.y"
                                { makeoattr((yyvsp[-1].i), (yyvsp[0].o)); }
#line 2359 "y.tab.c"
    break;

  case 73:
#line 206 "picy.y"
                                { makeiattr(WITH, (yyvsp[0].i)); }
#line 2365 "y.tab.c"
    break;

  case 74:
#line 207 "picy.y"
                                { makeoattr(PLACE, getblock(getlast(1,BLOCK), (yyvsp[0].p))); }
#line 2371 "y.tab.c"
    break;

  case 75:
#line 209 "picy.y"
                { makeoattr(PLACE, getpos(getblock(getlast(1,BLOCK), (yyvsp[-1].p)), (yyvsp[0].i))); }
#line 2377 "y.tab.c"
    break;

  case 76:
#line 210 "picy.y"
                                { makeoattr(PLACE, (yyvsp[0].o)); }
#line 2383 "y.tab.c"
    break;

  case 77:
#line 211 "picy.y"
                                { makeiattr(SAME, (yyvsp[0].i)); }
#line 2389 "y.tab.c"
    break;

  case 78:
#line 212 "picy.y"
                                { maketattr((yyvsp[0].i), (char *) 0); }
#line 2395 "y.tab.c"
    break;

  case 79:
#line 213 "picy.y"
                                { makeiattr(HEAD, (yyvsp[0].i)); }
#line 2401 "y.tab.c"
    break;

  case 80:
#line 214 "picy.y"
                                { makefattr(DOT, !DEFAULT, (yyvsp[0].f)); }
#line 2407 "y.tab.c"
    break;

  case 81:
#line 215 "picy.y"
                                { makefattr(DOT, DEFAULT, 0.0); }
#line 2413 "y.tab.c"
    break;

  case 82:
#line 216 "picy.y"
                                { makefattr(DASH, !DEFAULT, (yyvsp[0].f)); }
#line 2419 "y.tab.c"
    break;

  case 83:
#line 217 "picy.y"
                                { makefattr(DASH, DEFAULT, 0.0); }
#line 2425 "y.tab.c"
    break;

  case 84:
#line 218 "picy.y"
                                { makefattr(CHOP, !DEFAULT, (yyvsp[0].f)); }
#line 2431 "y.tab.c"
    break;

  case 85:
#line 219 "picy.y"
                                { makefattr(CHOP, DEFAULT, 0.0); }
#line 2437 "y.tab.c"
    break;

  case 86:
#line 220 "picy.y"
                                { makeattr(CHOP, PLACENAME, getvar((yyvsp[0].p))); }
#line 2443 "y.tab.c"
    break;

  case 87:
#line 221 "picy.y"
                                { makefattr(FILL, !DEFAULT, (yyvsp[0].f)); }
#line 2449 "y.tab.c"
    break;

  case 88:
#line 222 "picy.y"
                                { makefattr(FILL, DEFAULT, 0.0); }
#line 2455 "y.tab.c"
    break;

  case 89:
#line 223 "picy.y"
                                { makeiattr(NOEDGE, 0); }
#line 2461 "y.tab.c"
    break;

  case 93:
#line 232 "picy.y"
                                { maketattr(CENTER, (yyvsp[0].p)); }
#line 2467 "y.tab.c"
    break;

  case 94:
#line 233 "picy.y"
                                { maketattr((yyvsp[0].i), (yyvsp[-1].p)); }
#line 2473 "y.tab.c"
    break;

  case 95:
#line 234 "picy.y"
                                { addtattr((yyvsp[0].i)); }
#line 2479 "y.tab.c"
    break;

  case 97:
#line 238 "picy.y"
                                                { (yyval.p) = sprintgen((yyvsp[-1].p)); }
#line 2485 "y.tab.c"
    break;

  case 98:
#line 239 "picy.y"
                                                { (yyval.p) = sprintgen((yyvsp[-3].p)); }
#line 2491 "y.tab.c"
    break;

  case 99:
#line 243 "picy.y"
                                { exprsave((yyvsp[0].f)); (yyval.i) = 0; }
#line 2497 "y.tab.c"
    break;

  case 100:
#line 244 "picy.y"
                                { exprsave((yyvsp[0].f)); }
#line 2503 "y.tab.c"
    break;

  case 102:
#line 249 "picy.y"
                                                { (yyval.o) = (yyvsp[-1].o); }
#line 2509 "y.tab.c"
    break;

  case 103:
#line 250 "picy.y"
                                                { (yyval.o) = makepos((yyvsp[-2].f), (yyvsp[0].f)); }
#line 2515 "y.tab.c"
    break;

  case 104:
#line 251 "picy.y"
                                                { (yyval.o) = fixpos((yyvsp[-4].o), (yyvsp[-2].f), (yyvsp[0].f)); }
#line 2521 "y.tab.c"
    break;

  case 105:
#line 252 "picy.y"
                                                { (yyval.o) = fixpos((yyvsp[-4].o), -(yyvsp[-2].f), -(yyvsp[0].f)); }
#line 2527 "y.tab.c"
    break;

  case 106:
#line 253 "picy.y"
                                                { (yyval.o) = fixpos((yyvsp[-6].o), (yyvsp[-3].f), (yyvsp[-1].f)); }
#line 2533 "y.tab.c"
    break;

  case 107:
#line 254 "picy.y"
                                                { (yyval.o) = fixpos((yyvsp[-6].o), -(yyvsp[-3].f), -(yyvsp[-1].f)); }
#line 2539 "y.tab.c"
    break;

  case 108:
#line 255 "picy.y"
                                                { (yyval.o) = addpos((yyvsp[-2].o), (yyvsp[0].o)); }
#line 2545 "y.tab.c"
    break;

  case 109:
#line 256 "picy.y"
                                                { (yyval.o) = subpos((yyvsp[-2].o), (yyvsp[0].o)); }
#line 2551 "y.tab.c"
    break;

  case 110:
#line 257 "picy.y"
                                        { (yyval.o) = makepos(getcomp((yyvsp[-3].o),DOTX), getcomp((yyvsp[-1].o),DOTY)); }
#line 2557 "y.tab.c"
    break;

  case 111:
#line 258 "picy.y"
                                                { (yyval.o) = makebetween((yyvsp[-5].f), (yyvsp[-3].o), (yyvsp[-1].o)); }
#line 2563 "y.tab.c"
    break;

  case 112:
#line 259 "picy.y"
                                                { (yyval.o) = makebetween((yyvsp[-4].f), (yyvsp[-2].o), (yyvsp[0].o)); }
#line 2569 "y.tab.c"
    break;

  case 113:
#line 263 "picy.y"
                                { y = getvar((yyvsp[0].p)); (yyval.o) = y.o; }
#line 2575 "y.tab.c"
    break;

  case 114:
#line 264 "picy.y"
                                { y = getvar((yyvsp[-1].p)); (yyval.o) = getpos(y.o, (yyvsp[0].i)); }
#line 2581 "y.tab.c"
    break;

  case 115:
#line 265 "picy.y"
                                { y = getvar((yyvsp[0].p)); (yyval.o) = getpos(y.o, (yyvsp[-1].i)); }
#line 2587 "y.tab.c"
    break;

  case 116:
#line 266 "picy.y"
                                { (yyval.o) = gethere(); }
#line 2593 "y.tab.c"
    break;

  case 117:
#line 267 "picy.y"
                                { (yyval.o) = getlast((yyvsp[-1].i), (yyvsp[0].i)); }
#line 2599 "y.tab.c"
    break;

  case 118:
#line 268 "picy.y"
                                { (yyval.o) = getpos(getlast((yyvsp[-2].i), (yyvsp[-1].i)), (yyvsp[0].i)); }
#line 2605 "y.tab.c"
    break;

  case 119:
#line 269 "picy.y"
                                { (yyval.o) = getpos(getlast((yyvsp[-1].i), (yyvsp[0].i)), (yyvsp[-2].i)); }
#line 2611 "y.tab.c"
    break;

  case 120:
#line 270 "picy.y"
                                { (yyval.o) = getfirst((yyvsp[-1].i), (yyvsp[0].i)); }
#line 2617 "y.tab.c"
    break;

  case 121:
#line 271 "picy.y"
                                { (yyval.o) = getpos(getfirst((yyvsp[-2].i), (yyvsp[-1].i)), (yyvsp[0].i)); }
#line 2623 "y.tab.c"
    break;

  case 122:
#line 272 "picy.y"
                                { (yyval.o) = getpos(getfirst((yyvsp[-1].i), (yyvsp[0].i)), (yyvsp[-2].i)); }
#line 2629 "y.tab.c"
    break;

  case 124:
#line 274 "picy.y"
                                { (yyval.o) = getpos((yyvsp[-1].o), (yyvsp[0].i)); }
#line 2635 "y.tab.c"
    break;

  case 125:
#line 275 "picy.y"
                                { (yyval.o) = getpos((yyvsp[0].o), (yyvsp[-1].i)); }
#line 2641 "y.tab.c"
    break;

  case 126:
#line 279 "picy.y"
                                        { (yyval.o) = getblock(getlast((yyvsp[-3].i),(yyvsp[-2].i)), (yyvsp[0].p)); }
#line 2647 "y.tab.c"
    break;

  case 127:
#line 280 "picy.y"
                                        { (yyval.o) = getblock(getfirst((yyvsp[-3].i),(yyvsp[-2].i)), (yyvsp[0].p)); }
#line 2653 "y.tab.c"
    break;

  case 128:
#line 281 "picy.y"
                                        { y = getvar((yyvsp[-2].p)); (yyval.o) = getblock(y.o, (yyvsp[0].p)); }
#line 2659 "y.tab.c"
    break;

  case 129:
#line 285 "picy.y"
                                { (yyval.i) = (yyvsp[-1].i) + 1; }
#line 2665 "y.tab.c"
    break;

  case 130:
#line 286 "picy.y"
                                { (yyval.i) = (yyvsp[-1].i); }
#line 2671 "y.tab.c"
    break;

  case 131:
#line 287 "picy.y"
                                { (yyval.i) = 1; }
#line 2677 "y.tab.c"
    break;

  case 141:
#line 303 "picy.y"
                                { (yyval.f) = getfval((yyvsp[0].p)); }
#line 2683 "y.tab.c"
    break;

  case 143:
#line 305 "picy.y"
                                { (yyval.f) = (yyvsp[-2].f) + (yyvsp[0].f); }
#line 2689 "y.tab.c"
    break;

  case 144:
#line 306 "picy.y"
                                { (yyval.f) = (yyvsp[-2].f) - (yyvsp[0].f); }
#line 2695 "y.tab.c"
    break;

  case 145:
#line 307 "picy.y"
                                { (yyval.f) = (yyvsp[-2].f) * (yyvsp[0].f); }
#line 2701 "y.tab.c"
    break;

  case 146:
#line 308 "picy.y"
                                { if ((yyvsp[0].f) == 0.0) {
					WARNING("division by 0"); (yyvsp[0].f) = 1; }
				  (yyval.f) = (yyvsp[-2].f) / (yyvsp[0].f); }
#line 2709 "y.tab.c"
    break;

  case 147:
#line 311 "picy.y"
                                { if ((long)(yyvsp[0].f) == 0) {
					WARNING("mod division by 0"); (yyvsp[0].f) = 1; }
				  (yyval.f) = (long)(yyvsp[-2].f) % (long)(yyvsp[0].f); }
#line 2717 "y.tab.c"
    break;

  case 148:
#line 314 "picy.y"
                                { (yyval.f) = -(yyvsp[0].f); }
#line 2723 "y.tab.c"
    break;

  case 149:
#line 315 "picy.y"
                                { (yyval.f) = (yyvsp[0].f); }
#line 2729 "y.tab.c"
    break;

  case 150:
#line 316 "picy.y"
                                { (yyval.f) = (yyvsp[-1].f); }
#line 2735 "y.tab.c"
    break;

  case 151:
#line 317 "picy.y"
                                { (yyval.f) = getcomp((yyvsp[-1].o), (yyvsp[0].i)); }
#line 2741 "y.tab.c"
    break;

  case 152:
#line 318 "picy.y"
                                { (yyval.f) = getcomp((yyvsp[-1].o), (yyvsp[0].i)); }
#line 2747 "y.tab.c"
    break;

  case 153:
#line 319 "picy.y"
                                { (yyval.f) = getcomp((yyvsp[-1].o), (yyvsp[0].i)); }
#line 2753 "y.tab.c"
    break;

  case 154:
#line 320 "picy.y"
                                { (yyval.f) = getcomp((yyvsp[-1].o), (yyvsp[0].i)); }
#line 2759 "y.tab.c"
    break;

  case 155:
#line 321 "picy.y"
                                { (yyval.f) = getcomp((yyvsp[-1].o), (yyvsp[0].i)); }
#line 2765 "y.tab.c"
    break;

  case 156:
#line 322 "picy.y"
                                { y = getvar((yyvsp[-2].p)); (yyval.f) = getblkvar(y.o, (yyvsp[0].p)); }
#line 2771 "y.tab.c"
    break;

  case 157:
#line 323 "picy.y"
                                 { (yyval.f) = getblkvar(getlast((yyvsp[-3].i),(yyvsp[-2].i)), (yyvsp[0].p)); }
#line 2777 "y.tab.c"
    break;

  case 158:
#line 324 "picy.y"
                                { (yyval.f) = getblkvar(getfirst((yyvsp[-3].i),(yyvsp[-2].i)), (yyvsp[0].p)); }
#line 2783 "y.tab.c"
    break;

  case 159:
#line 325 "picy.y"
                                { (yyval.f) = (yyvsp[-2].f) > (yyvsp[0].f); }
#line 2789 "y.tab.c"
    break;

  case 160:
#line 326 "picy.y"
                                { (yyval.f) = (yyvsp[-2].f) < (yyvsp[0].f); }
#line 2795 "y.tab.c"
    break;

  case 161:
#line 327 "picy.y"
                                { (yyval.f) = (yyvsp[-2].f) <= (yyvsp[0].f); }
#line 2801 "y.tab.c"
    break;

  case 162:
#line 328 "picy.y"
                                { (yyval.f) = (yyvsp[-2].f) >= (yyvsp[0].f); }
#line 2807 "y.tab.c"
    break;

  case 163:
#line 329 "picy.y"
                                { (yyval.f) = (yyvsp[-2].f) == (yyvsp[0].f); }
#line 2813 "y.tab.c"
    break;

  case 164:
#line 330 "picy.y"
                                { (yyval.f) = (yyvsp[-2].f) != (yyvsp[0].f); }
#line 2819 "y.tab.c"
    break;

  case 165:
#line 331 "picy.y"
                                { (yyval.f) = (yyvsp[-2].f) && (yyvsp[0].f); }
#line 2825 "y.tab.c"
    break;

  case 166:
#line 332 "picy.y"
                                { (yyval.f) = (yyvsp[-2].f) || (yyvsp[0].f); }
#line 2831 "y.tab.c"
    break;

  case 167:
#line 333 "picy.y"
                                { (yyval.f) = !((yyvsp[0].f)); }
#line 2837 "y.tab.c"
    break;

  case 168:
#line 334 "picy.y"
                                        { (yyval.f) = Log10((yyvsp[-1].f)); }
#line 2843 "y.tab.c"
    break;

  case 169:
#line 335 "picy.y"
                                        { (yyval.f) = Exp((yyvsp[-1].f) * log(10.0)); }
#line 2849 "y.tab.c"
    break;

  case 170:
#line 336 "picy.y"
                                        { (yyval.f) = pow((yyvsp[-2].f), (yyvsp[0].f)); }
#line 2855 "y.tab.c"
    break;

  case 171:
#line 337 "picy.y"
                                        { (yyval.f) = sin((yyvsp[-1].f)); }
#line 2861 "y.tab.c"
    break;

  case 172:
#line 338 "picy.y"
                                        { (yyval.f) = cos((yyvsp[-1].f)); }
#line 2867 "y.tab.c"
    break;

  case 173:
#line 339 "picy.y"
                                        { (yyval.f) = atan2((yyvsp[-3].f), (yyvsp[-1].f)); }
#line 2873 "y.tab.c"
    break;

  case 174:
#line 340 "picy.y"
                                        { (yyval.f) = Sqrt((yyvsp[-1].f)); }
#line 2879 "y.tab.c"
    break;

  case 175:
#line 341 "picy.y"
                                        { (yyval.f) = (float)rand() / RAND_MAX; }
#line 2885 "y.tab.c"
    break;

  case 176:
#line 342 "picy.y"
                                        { (yyval.f) = (yyvsp[-3].f) >= (yyvsp[-1].f) ? (yyvsp[-3].f) : (yyvsp[-1].f); }
#line 2891 "y.tab.c"
    break;

  case 177:
#line 343 "picy.y"
                                        { (yyval.f) = (yyvsp[-3].f) <= (yyvsp[-1].f) ? (yyvsp[-3].f) : (yyvsp[-1].f); }
#line 2897 "y.tab.c"
    break;

  case 178:
#line 344 "picy.y"
                                        { (yyval.f) = (long) (yyvsp[-1].f); }
#line 2903 "y.tab.c"
    break;


#line 2907 "y.tab.c"

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
