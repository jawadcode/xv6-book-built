/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
