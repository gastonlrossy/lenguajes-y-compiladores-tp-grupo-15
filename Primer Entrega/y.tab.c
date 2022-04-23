
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Sintactico.y"

#include "lista.h"
#include "pila.h"
#include "y.tab.h"

FILE *yyin;

tList symbolTable;
tStack stackDataTypeDecVar;
tStack invertStackDataType;
tStack stackVar;

extern int yylex();
extern void yyerror();
extern char* yytext;
extern int yylineno;



/* Line 189 of yacc.c  */
#line 93 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     LLAVE_A = 274,
     LLAVE_C = 275,
     COMA_T = 276,
     DOT_COM_T = 277,
     PARENT_A = 278,
     PARENT_C = 279,
     OP_MEN = 280,
     OP_MAY = 281,
     OP_MEN_IGU = 282,
     OP_MAY_IGU = 283,
     OP_NOT = 284,
     OP_AND = 285,
     OP_OR = 286,
     OP_COMP = 287,
     CONST_INT = 288,
     CONST_REAL = 289,
     VARIABLE = 290,
     BETWEEN_T = 291,
     AVG_T = 292,
     CONST_STRING = 293,
     OP_SUM_T = 294,
     OP_REST_T = 295,
     OP_DIV_T = 296,
     OP_MULT_T = 297,
     MENOS_UNARIO = 298,
     OP_ASIG_T = 299
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
#define LLAVE_A 274
#define LLAVE_C 275
#define COMA_T 276
#define DOT_COM_T 277
#define PARENT_A 278
#define PARENT_C 279
#define OP_MEN 280
#define OP_MAY 281
#define OP_MEN_IGU 282
#define OP_MAY_IGU 283
#define OP_NOT 284
#define OP_AND 285
#define OP_OR 286
#define OP_COMP 287
#define CONST_INT 288
#define CONST_REAL 289
#define VARIABLE 290
#define BETWEEN_T 291
#define AVG_T 292
#define CONST_STRING 293
#define OP_SUM_T 294
#define OP_REST_T 295
#define OP_DIV_T 296
#define OP_MULT_T 297
#define MENOS_UNARIO 298
#define OP_ASIG_T 299




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 20 "Sintactico.y"

    char* strVal;



/* Line 214 of yacc.c  */
#line 223 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 235 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   252

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNRULES -- Number of states.  */
#define YYNSTATES  150

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    46,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    14,    16,    18,    20,
      22,    24,    26,    28,    30,    32,    36,    40,    42,    44,
      46,    48,    50,    54,    58,    60,    64,    68,    70,    74,
      78,    81,    83,    87,    89,    91,    94,    97,   100,   106,
     107,   113,   114,   115,   116,   126,   130,   136,   142,   148,
     154,   157,   163,   169,   175,   181,   185,   189,   193,   197,
     201,   205,   209,   213,   215,   219,   222,   233,   240,   245,
     251,   257,   259,   261
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    -1,    50,    -1,    50,    51,    22,
      -1,    51,    22,    -1,    72,    -1,    52,    -1,    60,    -1,
      61,    -1,    63,    -1,    62,    -1,    55,    -1,    70,    -1,
      71,    -1,    35,    44,    57,    -1,    35,    44,    53,    -1,
      38,    -1,    33,    -1,    34,    -1,    56,    -1,    57,    -1,
      55,    21,    56,    -1,    55,    21,    57,    -1,    38,    -1,
      57,    39,    58,    -1,    57,    40,    58,    -1,    58,    -1,
      58,    42,    59,    -1,    58,    41,    59,    -1,    46,    58,
      -1,    59,    -1,    23,    57,    24,    -1,    54,    -1,    35,
      -1,    15,    53,    -1,    15,    57,    -1,    14,    35,    -1,
       4,    68,    19,    50,    20,    -1,    -1,     8,    68,    50,
      64,    10,    -1,    -1,    -1,    -1,     8,    68,    50,    65,
       9,    66,    50,    67,    10,    -1,    23,    68,    24,    -1,
      23,    68,    31,    68,    24,    -1,    23,    68,    30,    68,
      24,    -1,    23,    68,    31,    69,    24,    -1,    23,    68,
      30,    69,    24,    -1,    29,    68,    -1,    23,    69,    31,
      68,    24,    -1,    23,    69,    30,    68,    24,    -1,    23,
      69,    30,    69,    24,    -1,    23,    69,    31,    69,    24,
      -1,    23,    69,    24,    -1,    57,    32,    57,    -1,    57,
      28,    57,    -1,    57,    27,    57,    -1,    57,    25,    57,
      -1,    57,    26,    57,    -1,    57,    30,    57,    -1,    57,
      31,    57,    -1,    70,    -1,    57,    29,    58,    -1,    29,
      35,    -1,    36,    23,    35,    21,    17,    57,    22,    57,
      18,    24,    -1,    37,    23,    17,    55,    18,    24,    -1,
       3,    25,    73,    26,    -1,    35,    21,    73,    21,    74,
      -1,    35,    26,    16,    25,    74,    -1,    11,    -1,    12,
      -1,    13,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    68,    68,    71,    74,    75,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    89,    90,    93,    97,   100,
     104,   105,   106,   107,   110,   113,   114,   115,   118,   119,
     120,   121,   125,   126,   127,   130,   131,   134,   137,   141,
     140,   144,   145,   146,   143,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   177,   180,   183,   199,
     200,   204,   205,   206
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DIM_T", "WHILE_T", "IN_T", "ENDWHILE_T",
  "DO_T", "IF_T", "ELSE_T", "ENDIF_T", "INT_T", "REAL_T", "STRING_T",
  "GET_T", "DISPLAY_T", "AS_T", "CORCHETE_A", "CORCHETE_C", "LLAVE_A",
  "LLAVE_C", "COMA_T", "DOT_COM_T", "PARENT_A", "PARENT_C", "OP_MEN",
  "OP_MAY", "OP_MEN_IGU", "OP_MAY_IGU", "OP_NOT", "OP_AND", "OP_OR",
  "OP_COMP", "CONST_INT", "CONST_REAL", "VARIABLE", "BETWEEN_T", "AVG_T",
  "CONST_STRING", "OP_SUM_T", "OP_REST_T", "OP_DIV_T", "OP_MULT_T",
  "MENOS_UNARIO", "OP_ASIG_T", ".", "'-'", "$accept", "programa", "prog",
  "sentencia", "grammar", "asig", "CONST_STRING_R", "NUMERO", "lista",
  "expr_list", "expr", "termino", "factor", "display", "get", "while",
  "if", "$@1", "$@2", "$@3", "$@4", "cond_completa", "cond", "between",
  "AVG", "dec_var", "dupla_asig", "tipo", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    45
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    52,    52,    53,    54,    54,
      55,    55,    55,    55,    56,    57,    57,    57,    58,    58,
      58,    58,    59,    59,    59,    60,    60,    61,    62,    64,
      63,    65,    66,    67,    63,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    71,    72,    73,
      73,    74,    74,    74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       2,     1,     3,     1,     1,     2,     2,     2,     5,     0,
       5,     0,     0,     0,     9,     3,     5,     5,     5,     5,
       2,     5,     5,     5,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     2,    10,     6,     4,     5,
       5,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    18,    19,    34,
       0,     0,    24,     0,     0,     2,     3,     0,     7,    33,
      12,    20,    21,    27,    31,     8,     9,    11,    10,    13,
      14,     6,     0,     0,     0,     0,     0,    37,    34,    17,
      35,    36,     0,     0,     0,     0,    30,     1,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    50,     0,    39,    32,    16,    15,     0,
       0,     4,    22,    23,    25,    26,    29,    28,     0,     0,
      68,     0,    65,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    60,    58,    57,    64,    61,
      62,    56,     0,     0,     0,     0,     0,     0,     0,     0,
      38,    40,    42,     0,     0,     0,     0,    47,    49,    46,
      48,    52,    53,    51,    54,     0,     0,    67,    71,    72,
      73,    69,    70,    43,     0,     0,     0,    44,     0,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    40,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    98,    99,   135,
     145,    60,    61,    29,    30,    31,    56,   141
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -35
static const yytype_int16 yypact[] =
{
     173,   -19,   -13,   -13,   -27,    -9,    96,   -35,   -35,   -31,
      13,    26,   -35,    96,    40,   -35,   173,    31,   -35,   -35,
      30,   -35,    32,    35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,    47,   -14,   -13,    70,   173,   -35,   -35,   -35,
     -35,    32,     3,    -9,    67,    95,   -35,   -35,    91,   -35,
      27,    96,    96,    72,    72,    18,    90,   -14,   -12,   212,
      17,    44,   -35,   -35,   173,   100,   -35,   -35,    32,    99,
      27,   -35,   -35,    32,    35,    35,   -35,   -35,    47,   101,
     -35,   196,   -35,    96,    96,    96,    96,    96,    96,    96,
      96,   -35,   -14,   -14,   -35,   -14,   -14,   137,   116,   118,
     111,    37,   122,   119,    32,    32,    32,    32,    35,    32,
      32,    32,   123,   124,   125,   126,   129,   130,   131,   132,
     -35,   -35,   -35,    96,   134,    87,    87,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   173,    24,   -35,   -35,   -35,
     -35,   -35,   -35,   173,    96,   149,    -6,   -35,   138,   -35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,   -35,   -34,   -11,   -35,   120,   -35,    94,   115,
      -5,     5,    57,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     1,    29,   -26,   -35,   -35,    83,    41
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -42
static const yytype_int16 yytable[] =
{
      41,    42,    65,    35,    36,    48,    32,    62,    37,    57,
      33,    33,   148,    43,     6,    58,    34,    34,    46,     7,
       8,    38,    10,    82,     7,     8,    38,    66,    59,    39,
      97,    62,    13,    51,    52,    63,    44,    13,    68,    78,
      47,    91,    51,    52,    79,    73,   144,    92,    93,    45,
       6,    50,    81,    49,    48,   124,    74,    75,    50,    63,
       7,     8,    38,    51,    52,    12,    62,    62,    94,    62,
      62,    51,    52,    13,    95,    96,    53,    54,   104,   105,
     106,   107,    55,   109,   110,   111,    48,    59,    59,    64,
      59,    59,   108,   112,   114,     6,   116,   118,   138,   139,
     140,   143,    69,     1,     2,     7,     8,    38,     3,   -41,
      76,    77,    70,    71,     4,     5,    80,   103,   136,     6,
     100,   113,   115,     6,   117,   119,   121,   122,   123,     7,
       8,    38,    48,     7,     8,     9,    10,    11,    12,   146,
       1,     2,    13,   125,   126,     3,    13,   127,   128,   129,
     130,     4,     5,   131,   132,   133,   134,   120,   137,   147,
       6,   102,   149,    67,   101,    72,     0,   142,     0,     0,
       7,     8,     9,    10,    11,    12,     1,     2,     0,     0,
       0,     3,     0,    13,     0,     0,     0,     4,     5,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,    10,
      11,    12,     0,     0,     0,     0,     0,     0,     0,    13,
      66,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,     0,     0,     0,     0,    51,    52,    83,    84,    85,
      86,    87,    88,    89,    90,     0,     0,     0,     0,     0,
       0,    51,    52
};

static const yytype_int16 yycheck[] =
{
       5,     6,    36,     2,     3,    16,    25,    33,    35,    23,
      23,    23,    18,    44,    23,    29,    29,    29,    13,    33,
      34,    35,    36,    35,    33,    34,    35,    24,    33,    38,
      64,    57,    46,    39,    40,    34,    23,    46,    43,    21,
       0,    24,    39,    40,    26,    50,    22,    30,    31,    23,
      23,    21,    57,    22,    65,    18,    51,    52,    21,    58,
      33,    34,    35,    39,    40,    38,    92,    93,    24,    95,
      96,    39,    40,    46,    30,    31,    41,    42,    83,    84,
      85,    86,    35,    88,    89,    90,    97,    92,    93,    19,
      95,    96,    87,    92,    93,    23,    95,    96,    11,    12,
      13,   135,    35,     3,     4,    33,    34,    35,     8,     9,
      53,    54,    17,    22,    14,    15,    26,    16,   123,    23,
      21,    92,    93,    23,    95,    96,    10,     9,    17,    33,
      34,    35,   143,    33,    34,    35,    36,    37,    38,   144,
       3,     4,    46,    21,    25,     8,    46,    24,    24,    24,
      24,    14,    15,    24,    24,    24,    24,    20,    24,    10,
      23,    78,    24,    43,    70,    50,    -1,   126,    -1,    -1,
      33,    34,    35,    36,    37,    38,     3,     4,    -1,    -1,
      -1,     8,    -1,    46,    -1,    -1,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     8,    14,    15,    23,    33,    34,    35,
      36,    37,    38,    46,    48,    49,    50,    51,    52,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    70,
      71,    72,    25,    23,    29,    68,    68,    35,    35,    38,
      53,    57,    57,    44,    23,    23,    58,     0,    51,    22,
      21,    39,    40,    41,    42,    35,    73,    23,    29,    57,
      68,    69,    70,    68,    19,    50,    24,    53,    57,    35,
      17,    22,    56,    57,    58,    58,    59,    59,    21,    26,
      26,    57,    35,    25,    26,    27,    28,    29,    30,    31,
      32,    24,    30,    31,    24,    30,    31,    50,    64,    65,
      21,    55,    73,    16,    57,    57,    57,    57,    58,    57,
      57,    57,    68,    69,    68,    69,    68,    69,    68,    69,
      20,    10,     9,    17,    18,    21,    25,    24,    24,    24,
      24,    24,    24,    24,    24,    66,    57,    24,    11,    12,
      13,    74,    74,    50,    22,    67,    57,    10,    18,    24
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
	    /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 68 "Sintactico.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 71 "Sintactico.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 74 "Sintactico.y"
    {;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 75 "Sintactico.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 78 "Sintactico.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 79 "Sintactico.y"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 80 "Sintactico.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 81 "Sintactico.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 82 "Sintactico.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 83 "Sintactico.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 84 "Sintactico.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 85 "Sintactico.y"
    {;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 86 "Sintactico.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 89 "Sintactico.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 90 "Sintactico.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 93 "Sintactico.y"
    {
	    insertString(&symbolTable, (yyvsp[(1) - (1)].strVal));
	}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 97 "Sintactico.y"
    {
        insertNumber(&symbolTable,(yyvsp[(1) - (1)].strVal));
      }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 100 "Sintactico.y"
    {
        insertNumber(&symbolTable,(yyvsp[(1) - (1)].strVal));
      }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 104 "Sintactico.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 105 "Sintactico.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 106 "Sintactico.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 107 "Sintactico.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 110 "Sintactico.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 113 "Sintactico.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 114 "Sintactico.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 115 "Sintactico.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 118 "Sintactico.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 119 "Sintactico.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 121 "Sintactico.y"
    {;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 125 "Sintactico.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 126 "Sintactico.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 127 "Sintactico.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 130 "Sintactico.y"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 131 "Sintactico.y"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 134 "Sintactico.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 137 "Sintactico.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 141 "Sintactico.y"
    {;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 142 "Sintactico.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 144 "Sintactico.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 145 "Sintactico.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 146 "Sintactico.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 147 "Sintactico.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 151 "Sintactico.y"
    {;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 152 "Sintactico.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 153 "Sintactico.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 154 "Sintactico.y"
    {;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 155 "Sintactico.y"
    {;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 156 "Sintactico.y"
    {;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 157 "Sintactico.y"
    {;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 158 "Sintactico.y"
    {;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 159 "Sintactico.y"
    {;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 160 "Sintactico.y"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 161 "Sintactico.y"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 165 "Sintactico.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 166 "Sintactico.y"
    {;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 167 "Sintactico.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 168 "Sintactico.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 169 "Sintactico.y"
    {;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 170 "Sintactico.y"
    {;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 171 "Sintactico.y"
    {;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 172 "Sintactico.y"
    {;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 173 "Sintactico.y"
    {;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 174 "Sintactico.y"
    {;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 177 "Sintactico.y"
    {;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 180 "Sintactico.y"
    {;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 183 "Sintactico.y"
    {
                                        char dataType[100];
                                        char variable[100];
                                        while(!emptyStack(&stackDataTypeDecVar)){
                                          popStack(&stackDataTypeDecVar,dataType);
                                          pushStack(&invertStackDataType,dataType);
                                        }
                                        while(!emptyStack(&invertStackDataType) && !emptyStack(&stackVar)){
                                            popStack(&invertStackDataType,dataType);
                                            popStack(&stackVar,variable);
                                            insertVariable(&symbolTable,variable,dataType);
                                        }

}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 199 "Sintactico.y"
    {pushStack(&stackVar,(yyvsp[(1) - (5)].strVal));}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 200 "Sintactico.y"
    {pushStack(&stackVar,(yyvsp[(1) - (5)].strVal));}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 204 "Sintactico.y"
    {pushStack(&stackDataTypeDecVar,"INTEGER");}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 205 "Sintactico.y"
    {pushStack(&stackDataTypeDecVar,"FLOAT");}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 206 "Sintactico.y"
    {pushStack(&stackDataTypeDecVar,"STRING");}
    break;



/* Line 1455 of yacc.c  */
#line 2097 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 209 "Sintactico.y"



int main(int argc, char* argv[])
{
    if((yyin = fopen(argv[1],"rt")) == NULL)
    {
        printf("\n No se puede abrir el archivo %s \n", argv[1]);
    }

    printf("\n Comienzo de la compilacion \n\n");

    createList(&symbolTable);
    createStack(&stackVar);
    createStack(&stackDataTypeDecVar);
    createStack(&invertStackDataType);
    
    yyparse();
   
    deleteTable(&symbolTable);
    
    printf("\n Compilacion exitosa \n");
    fclose(yyin);
    return 0;
}

