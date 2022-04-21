
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DIM_T = 258,
     WHILE_T = 259,
     IN_T = 260,
     ENDWHILE_T = 261,
     DO_T = 262,
     IF_T = 263,
     ELSE_T = 264,
     ENDIF_T = 265,
     INT_T = 266,
     REAL_T = 267,
     STRING_T = 268,
     GET_T = 269,
     DISPLAY_T = 270,
     AS_T = 271,
     CORCHETE_A = 272,
     CORCHETE_C = 273,
     COMA_T = 274,
     DOT_COM_T = 275,
     PARENT_A = 276,
     PARENT_C = 277,
     OP_MEN = 278,
     OP_MAY = 279,
     OP_MEN_IGU = 280,
     OP_MAY_IGU = 281,
     OP_NOT = 282,
     OP_AND = 283,
     OP_OR = 284,
     OP_COMP = 285,
     CONST_INT = 286,
     CONST_REAL = 287,
     VARIABLE = 288,
     CONST_STRING = 289,
     OP_SUM_T = 290,
     OP_REST_T = 291,
     OP_DIV_T = 292,
     OP_MULT_T = 293,
     MENOS_UNARIO = 294,
     OP_ASIG_T = 295
   };
#endif
/* Tokens.  */
#define DIM_T 258
#define WHILE_T 259
#define IN_T 260
#define ENDWHILE_T 261
#define DO_T 262
#define IF_T 263
#define ELSE_T 264
#define ENDIF_T 265
#define INT_T 266
#define REAL_T 267
#define STRING_T 268
#define GET_T 269
#define DISPLAY_T 270
#define AS_T 271
#define CORCHETE_A 272
#define CORCHETE_C 273
#define COMA_T 274
#define DOT_COM_T 275
#define PARENT_A 276
#define PARENT_C 277
#define OP_MEN 278
#define OP_MAY 279
#define OP_MEN_IGU 280
#define OP_MAY_IGU 281
#define OP_NOT 282
#define OP_AND 283
#define OP_OR 284
#define OP_COMP 285
#define CONST_INT 286
#define CONST_REAL 287
#define VARIABLE 288
#define CONST_STRING 289
#define OP_SUM_T 290
#define OP_REST_T 291
#define OP_DIV_T 292
#define OP_MULT_T 293
#define MENOS_UNARIO 294
#define OP_ASIG_T 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 20 "Sintactico.y"

    char* strVal;



/* Line 1676 of yacc.c  */
#line 138 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


