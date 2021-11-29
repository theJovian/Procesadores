/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_PUNTOYCOMA = 258,
     TK_CONTINUAR = 259,
     TK_ALGORITMO = 260,
     TK_IDENTIFICADOR_BOOLEANO = 261,
     TK_IDENTIFICADOR = 262,
     TK_FALGORITMO = 263,
     TK_PARA = 264,
     TK_COMA = 265,
     TK_PARENTESIS_APERTURA = 266,
     TK_PARENTESIS_CIERRE = 267,
     TK_ENT = 268,
     TK_DOSPUNTOS = 269,
     TK_SAL = 270,
     TK_ENTSAL = 271,
     TK_DEV = 272,
     TK_FUNCION = 273,
     TK_FFUNCION = 274,
     TK_ACCION = 275,
     TK_FACCION = 276,
     TK_DOSPUNTOS_IGUAL = 277,
     TK_HASTA = 278,
     TK_HACER = 279,
     TK_FPARA = 280,
     TK_MIENTRAS = 281,
     TK_FMIENTRAS = 282,
     TK_CORCHETES = 283,
     TK_FLECHA = 284,
     TK_SI = 285,
     TK_FSI = 286,
     TK_SUMA = 287,
     TK_RESTA = 288,
     TK_MULTIPLICACION = 289,
     TK_DIVISION = 290,
     TK_DIVISION_ENTERA = 291,
     TK_MODULO = 292,
     TK_LITERAL_NUMERICO = 293,
     TK_Y = 294,
     TK_O = 295,
     TK_NO = 296,
     TK_VERDADERO = 297,
     TK_FALSO = 298,
     TK_OPREL = 299,
     TK_CORCHETE_APERTURA = 300,
     TK_CORCHETE_CIERRE = 301,
     TK_PUNTO = 302,
     TK_COMENTARIO = 303,
     TK_TIPO = 304,
     TK_FTIPO = 305,
     TK_CONST = 306,
     TK_FCONST = 307,
     TK_VAR = 308,
     TK_FVAR = 309,
     TK_TUPLA = 310,
     TK_FTUPLA = 311,
     TK_TABLA = 312,
     TK_PUNTO_Y_PUNTO = 313,
     TK_REF = 314,
     TK_DE = 315,
     TK_TIPOBASE = 316,
     TK_LITERALENTERO = 317,
     TK_LITERALCARACTER = 318,
     TK_IGUAL = 319,
     TK_LITERAL_CADENA = 320
   };
#endif
/* Tokens.  */
#define TK_PUNTOYCOMA 258
#define TK_CONTINUAR 259
#define TK_ALGORITMO 260
#define TK_IDENTIFICADOR_BOOLEANO 261
#define TK_IDENTIFICADOR 262
#define TK_FALGORITMO 263
#define TK_PARA 264
#define TK_COMA 265
#define TK_PARENTESIS_APERTURA 266
#define TK_PARENTESIS_CIERRE 267
#define TK_ENT 268
#define TK_DOSPUNTOS 269
#define TK_SAL 270
#define TK_ENTSAL 271
#define TK_DEV 272
#define TK_FUNCION 273
#define TK_FFUNCION 274
#define TK_ACCION 275
#define TK_FACCION 276
#define TK_DOSPUNTOS_IGUAL 277
#define TK_HASTA 278
#define TK_HACER 279
#define TK_FPARA 280
#define TK_MIENTRAS 281
#define TK_FMIENTRAS 282
#define TK_CORCHETES 283
#define TK_FLECHA 284
#define TK_SI 285
#define TK_FSI 286
#define TK_SUMA 287
#define TK_RESTA 288
#define TK_MULTIPLICACION 289
#define TK_DIVISION 290
#define TK_DIVISION_ENTERA 291
#define TK_MODULO 292
#define TK_LITERAL_NUMERICO 293
#define TK_Y 294
#define TK_O 295
#define TK_NO 296
#define TK_VERDADERO 297
#define TK_FALSO 298
#define TK_OPREL 299
#define TK_CORCHETE_APERTURA 300
#define TK_CORCHETE_CIERRE 301
#define TK_PUNTO 302
#define TK_COMENTARIO 303
#define TK_TIPO 304
#define TK_FTIPO 305
#define TK_CONST 306
#define TK_FCONST 307
#define TK_VAR 308
#define TK_FVAR 309
#define TK_TUPLA 310
#define TK_FTUPLA 311
#define TK_TABLA 312
#define TK_PUNTO_Y_PUNTO 313
#define TK_REF 314
#define TK_DE 315
#define TK_TIPOBASE 316
#define TK_LITERALENTERO 317
#define TK_LITERALCARACTER 318
#define TK_IGUAL 319
#define TK_LITERAL_CADENA 320




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
  #include <ctype.h>
  #include <sys/types.h>
  #include <sys/stat.h>
  #include <fcntl.h>
  #include <unistd.h>
  
  #include "tablaSimbolos.h"
  #include  "tablaCuadruplas.h"
  
  int yylex (void);
  void yyerror (char const *);
  void yywrap(void);


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union
#line 20 "parser.y"
type{
	char *paraCadena;
	int paraEntero;
	float paraFloat;
	struct paraBooleano{
		int * true;
		int * false;
	} paraBooleanos;
}
/* Line 193 of yacc.c.  */
#line 254 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 267 "parser.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  258

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    14,    18,    25,    31,    32,    34,
      36,    42,    52,    57,    64,    70,    78,    82,    84,    85,
      90,    95,   100,   105,   111,   115,   117,   118,   124,   125,
     131,   137,   143,   149,   155,   161,   162,   166,   170,   171,
     175,   179,   183,   187,   189,   192,   194,   197,   200,   204,
     208,   211,   213,   215,   217,   221,   225,   227,   229,   231,
     235,   239,   243,   247,   251,   255,   259,   261,   264,   267,
     269,   271,   273,   277,   282,   285,   287,   291,   296,   299,
     303,   305,   307,   309,   311,   313,   315,   320,   323,   326,
     329,   330,   333,   336,   337,   340,   343,   346,   349,   350,
     354,   358,   362,   368,   369,   373,   382,   384,   388,   391,
     393,   395
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,     5,     7,     3,    98,    99,     8,    -1,
      94,    22,    92,    -1,    95,    22,    92,    -1,    30,    92,
      29,    96,    70,    31,    -1,    28,    92,    29,    96,    70,
      -1,    -1,    73,    -1,    72,    -1,    26,    92,    24,    96,
      27,    -1,     9,     7,    22,    92,    23,    92,    24,    96,
      25,    -1,    20,    76,   102,    21,    -1,    18,    77,   102,
      17,    92,    19,    -1,     7,    11,    78,    12,     3,    -1,
       7,    11,    85,    12,    17,   108,     3,    -1,    79,     3,
      78,    -1,    79,    -1,    -1,    13,    86,    14,   108,    -1,
      15,    86,    14,   108,    -1,    16,    86,    14,   108,    -1,
       7,    11,    82,    12,    -1,     7,    22,    11,    82,    12,
      -1,    92,    10,    82,    -1,    92,    -1,    -1,     7,    14,
     108,     3,    83,    -1,    -1,     7,    64,    62,     3,    84,
      -1,     7,    64,    63,     3,    84,    -1,     7,    64,    42,
       3,    84,    -1,     7,    64,    43,     3,    84,    -1,     7,
      64,    65,     3,    84,    -1,     7,    64,    38,     3,    84,
      -1,    -1,    86,     3,    85,    -1,    87,     3,    85,    -1,
      -1,     7,    14,   108,    -1,     7,    10,    86,    -1,     6,
      14,   108,    -1,     6,    10,    87,    -1,    89,    -1,    89,
      90,    -1,    90,    -1,    13,    85,    -1,    15,    85,    -1,
      91,    39,    91,    -1,    91,    40,    91,    -1,    41,    91,
      -1,    94,    -1,    42,    -1,    43,    -1,    92,    44,    92,
      -1,    11,    91,    12,    -1,    93,    -1,    91,    -1,    81,
      -1,    93,    32,    93,    -1,    93,    33,    93,    -1,    93,
      34,    93,    -1,    93,    35,    93,    -1,    93,    36,    93,
      -1,    93,    37,    93,    -1,    11,    93,    12,    -1,    95,
      -1,    33,    93,    -1,    32,    93,    -1,    38,    -1,    62,
      -1,     6,    -1,    94,    47,    94,    -1,    94,    45,    92,
      46,    -1,    94,    59,    -1,     7,    -1,    95,    47,    95,
      -1,    95,    45,    92,    46,    -1,    95,    59,    -1,    97,
       3,    96,    -1,    97,    -1,     4,    -1,    68,    -1,    69,
      -1,    71,    -1,    80,    -1,   100,   101,    88,    48,    -1,
     102,    48,    -1,   104,   100,    -1,   105,   100,    -1,    -1,
      74,   101,    -1,    75,   101,    -1,    -1,   103,    96,    -1,
     104,   103,    -1,   105,   103,    -1,   106,   103,    -1,    -1,
      49,   107,    50,    -1,    51,    84,    52,    -1,    53,    85,
      54,    -1,     7,    64,   108,     3,   107,    -1,    -1,    55,
      83,    56,    -1,    57,    45,   109,    58,   109,    46,    60,
     108,    -1,     7,    -1,   109,    58,   109,    -1,    59,   108,
      -1,    61,    -1,    62,    -1,    63,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   123,   132,   135,   138,   139,   142,   143,
     146,   149,   152,   155,   158,   161,   164,   165,   166,   169,
     170,   171,   174,   177,   180,   181,   182,   185,   186,   189,
     190,   191,   192,   193,   194,   195,   198,   199,   200,   203,
     211,   218,   226,   234,   235,   236,   239,   242,   245,   246,
     247,   248,   249,   250,   251,   252,   255,   256,   257,   260,
     271,   272,   273,   274,   275,   276,   277,   281,   282,   283,
     284,   287,   288,   289,   290,   293,   297,   298,   299,   302,
     303,   306,   307,   308,   309,   310,   313,   317,   321,   322,
     323,   326,   327,   328,   331,   334,   335,   336,   337,   340,
     343,   346,   350,   351,   354,   355,   356,   357,   358,   362,
     368,   369
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_PUNTOYCOMA", "TK_CONTINUAR",
  "TK_ALGORITMO", "TK_IDENTIFICADOR_BOOLEANO", "TK_IDENTIFICADOR",
  "TK_FALGORITMO", "TK_PARA", "TK_COMA", "TK_PARENTESIS_APERTURA",
  "TK_PARENTESIS_CIERRE", "TK_ENT", "TK_DOSPUNTOS", "TK_SAL", "TK_ENTSAL",
  "TK_DEV", "TK_FUNCION", "TK_FFUNCION", "TK_ACCION", "TK_FACCION",
  "TK_DOSPUNTOS_IGUAL", "TK_HASTA", "TK_HACER", "TK_FPARA", "TK_MIENTRAS",
  "TK_FMIENTRAS", "TK_CORCHETES", "TK_FLECHA", "TK_SI", "TK_FSI",
  "TK_SUMA", "TK_RESTA", "TK_MULTIPLICACION", "TK_DIVISION",
  "TK_DIVISION_ENTERA", "TK_MODULO", "TK_LITERAL_NUMERICO", "TK_Y", "TK_O",
  "TK_NO", "TK_VERDADERO", "TK_FALSO", "TK_OPREL", "TK_CORCHETE_APERTURA",
  "TK_CORCHETE_CIERRE", "TK_PUNTO", "TK_COMENTARIO", "TK_TIPO", "TK_FTIPO",
  "TK_CONST", "TK_FCONST", "TK_VAR", "TK_FVAR", "TK_TUPLA", "TK_FTUPLA",
  "TK_TABLA", "TK_PUNTO_Y_PUNTO", "TK_REF", "TK_DE", "TK_TIPOBASE",
  "TK_LITERALENTERO", "TK_LITERALCARACTER", "TK_IGUAL",
  "TK_LITERAL_CADENA", "$accept", "descAlgoritmo", "asignacion",
  "alternativa", "listaOpciones", "iteracion", "itCotaVariable",
  "itCotaFija", "defAccion", "defFuncion", "cabeceraAccion",
  "cabeceraFuncion", "defParForm", "dParForm", "llamadaAccion",
  "llamadaFuncion", "parametrosReales", "listaCampos",
  "listaDefsConstantes", "listaDefsVariables", "listaId",
  "listaIdBooleanos", "defVariablesInteraccion", "defEntrada", "defSalida",
  "expBool", "expresion", "expArit", "operandoBooleano",
  "operandoAritmetico", "instrucciones", "instruccion",
  "cabeceraAlgoritmo", "bloqueAlgoritmo", "defGlobales",
  "defAccionesFunciones", "bloque", "declaraciones", "definicionTipo",
  "definicionConst", "definicionVar", "listaDefsTipo", "defTipo",
  "expresionT", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    70,    70,    71,    71,
      72,    73,    74,    75,    76,    77,    78,    78,    78,    79,
      79,    79,    80,    81,    82,    82,    82,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    85,    86,
      86,    87,    87,    88,    88,    88,    89,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    94,    94,    94,    95,    95,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    98,    99,   100,   100,
     100,   101,   101,   101,   102,   103,   103,   103,   103,   104,
     105,   106,   107,   107,   108,   108,   108,   108,   108,   108,
     109,   109
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     3,     3,     6,     5,     0,     1,     1,
       5,     9,     4,     6,     5,     7,     3,     1,     0,     4,
       4,     4,     4,     5,     3,     1,     0,     5,     0,     5,
       5,     5,     5,     5,     5,     0,     3,     3,     0,     3,
       3,     3,     3,     1,     2,     1,     2,     2,     3,     3,
       2,     1,     1,     1,     3,     3,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     2,     1,
       1,     1,     3,     4,     2,     1,     3,     4,     2,     3,
       1,     1,     1,     1,     1,     1,     4,     2,     2,     2,
       0,     2,     2,     0,     2,     2,     2,     2,     0,     3,
       3,     3,     5,     0,     3,     8,     1,     3,     2,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    90,   103,    35,    98,    93,
      90,    90,     0,     0,     0,     0,    38,     0,     0,     0,
      98,    98,    98,     0,     0,    93,    93,     0,    88,    89,
       0,    99,     0,   100,     0,     0,     0,     0,     0,     2,
      87,    81,    71,    75,     0,     0,     0,    82,    83,    84,
       9,     8,    85,     0,     0,    94,    80,    95,    96,    97,
       0,    98,     0,    98,    91,    92,    38,    38,     0,    43,
      45,   106,    28,     0,     0,   109,   110,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,    38,    38,    26,     0,    75,     0,     0,     0,    69,
       0,    52,    53,    70,    58,    57,     0,    56,    51,    66,
       0,     0,     0,     0,    74,     0,     0,     0,    78,     0,
      38,     0,    18,     0,    46,    47,    86,    44,     0,     0,
       0,   108,   103,     0,    35,    35,    35,    35,    35,    35,
      42,    41,    40,    39,    36,    37,     0,    25,     0,     0,
      57,     0,    56,    75,     0,    68,    67,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,    72,     4,     0,    76,    79,     0,     0,     0,     0,
       0,     0,    17,    12,     0,   104,     0,   102,   107,    34,
      31,    32,    29,    30,    33,    22,    26,     0,    26,    55,
      65,     0,    48,    49,     0,    54,    59,    60,    61,    62,
      63,    64,     7,    73,    77,     0,     0,     0,     0,     0,
       0,    18,     0,     0,    24,     0,     0,    10,     0,     0,
       0,    13,     0,     0,     0,    14,    16,    28,     0,     0,
      23,     0,     5,     0,    19,    20,    21,    27,     0,     0,
       0,    15,     0,     0,     7,   105,    11,     6
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    47,    48,   229,    49,    50,    51,    25,    26,
      63,    61,   181,   182,    52,   104,   146,   129,    15,    36,
      37,    38,    68,    69,    70,   105,   151,   107,   108,   109,
      55,    56,     8,    17,     9,    27,    18,    19,    20,    21,
      22,    13,    78,    79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -125
static const yytype_int16 yypact[] =
{
      57,    20,    72,    99,  -125,    18,   117,   149,     8,   115,
      18,    18,    63,   109,    86,   154,   102,   178,   160,   112,
       8,     8,     8,   200,   202,   115,   115,    17,  -125,  -125,
      30,  -125,   -17,  -125,   100,   120,   156,   208,   209,  -125,
    -125,  -125,  -125,   203,   206,    22,    22,  -125,  -125,  -125,
    -125,  -125,  -125,    -6,    66,  -125,   212,  -125,  -125,  -125,
     205,     8,   207,     8,  -125,  -125,   102,   102,   169,   204,
    -125,  -125,   213,   176,    30,  -125,  -125,  -125,   219,   165,
     221,   222,   223,   224,   225,   226,   229,    30,   230,    30,
    -125,   102,   102,    22,   210,   214,    22,    11,    11,  -125,
      22,  -125,  -125,  -125,  -125,   159,    14,   137,    70,    81,
     -21,    22,    22,   232,  -125,    22,    22,   233,  -125,   112,
     102,   227,   166,   218,  -125,  -125,  -125,  -125,   228,   185,
     138,  -125,   117,   138,   149,   149,   149,   149,   149,   149,
    -125,  -125,  -125,  -125,  -125,  -125,   231,     3,    22,   234,
      -5,   211,   131,  -125,    11,   141,   141,   159,    22,    22,
     112,    22,    11,    11,    11,    11,    11,    11,   112,   211,
      93,    70,   211,   139,    81,  -125,   235,    22,   230,   230,
     230,   236,   243,  -125,    30,  -125,   191,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,    22,    -4,    22,  -125,
    -125,   131,  -125,  -125,   237,   215,   141,   141,  -125,  -125,
    -125,  -125,   238,  -125,  -125,   239,    12,   240,   244,   246,
     247,   166,   248,   138,  -125,    22,   241,  -125,    22,   242,
      30,  -125,    30,    30,    30,  -125,  -125,   213,   216,    42,
    -125,     7,  -125,   249,  -125,  -125,  -125,  -125,   197,   112,
     112,  -125,    30,   245,   238,  -125,  -125,  -125
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,  -125,     9,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,    40,  -125,  -125,  -125,    -2,    28,    54,    31,
     -74,   181,  -125,  -125,   199,   -76,   -41,   -86,   -19,   -16,
    -118,  -125,  -125,  -125,   192,   179,   134,   125,    85,   143,
    -125,   140,   -72,  -124
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      53,   175,   131,    54,   106,   110,   186,   199,   168,   188,
     152,   155,   156,   196,   142,   141,   111,   143,   153,   225,
     150,    80,   154,   161,   157,    81,    82,     3,    42,    95,
      66,   231,    67,    96,   158,   159,   250,    71,   160,   112,
     161,   113,   204,    97,    98,    83,    84,   161,    85,    99,
     212,   161,   147,   114,    97,    98,   161,     6,   161,     7,
      99,    16,     1,   100,   101,   102,   249,     6,   201,     7,
     169,   170,     4,   103,   172,   173,   206,   207,   208,   209,
     210,   211,   202,   203,   103,    72,   161,    73,   115,    74,
      10,    75,    76,    77,   171,    10,    10,   124,   125,   238,
      53,   174,     5,    54,   217,   218,   219,   197,    34,    35,
      86,   116,   222,   117,    87,   112,    41,   113,    42,    43,
     205,    44,   144,   145,    12,   118,   116,    30,   117,   114,
      88,   253,   254,    23,    89,    24,   216,   161,    45,   213,
     118,    53,    46,   200,    54,    57,    58,    59,    11,    53,
      32,   176,    54,    11,    11,   147,    14,   147,   243,    31,
     244,   245,   246,   162,   163,   164,   165,   166,   167,   162,
     163,   164,   165,   166,   167,   164,   165,   166,   167,   178,
     255,   179,   180,   161,   239,   214,    39,   241,   189,   190,
     191,   192,   193,   194,   224,   121,   226,   123,   158,   159,
      76,    77,    28,    29,    64,    65,    33,    60,    40,    62,
      90,    91,    92,    94,    93,   119,   120,   126,   122,    67,
     128,   130,   132,   133,   134,   135,   136,   137,   138,   139,
      53,    53,   148,    54,    54,    34,   149,    35,    42,   183,
     153,   185,   184,   195,   177,   198,   221,   215,   220,   223,
     235,   237,   251,   240,   232,   161,   230,   252,   233,    -1,
     234,   236,   248,   257,   227,   247,   228,   140,   127,     0,
     256,     0,   187,   242
};

static const yytype_int16 yycheck[] =
{
      19,   119,    74,    19,    45,    46,   130,    12,    29,   133,
      96,    97,    98,    10,    88,    87,    22,    89,     7,    23,
      96,    38,    11,    44,   100,    42,    43,     7,     6,     7,
      13,    19,    15,    11,    39,    40,    29,     7,    24,    45,
      44,    47,   160,    32,    33,    62,    63,    44,    65,    38,
     168,    44,    93,    59,    32,    33,    44,    49,    44,    51,
      38,    53,     5,    41,    42,    43,    24,    49,   154,    51,
     111,   112,     0,    62,   115,   116,   162,   163,   164,   165,
     166,   167,   158,   159,    62,    55,    44,    57,    22,    59,
       5,    61,    62,    63,   113,    10,    11,    66,    67,   223,
     119,   117,     3,   119,   178,   179,   180,   148,     6,     7,
      10,    45,   184,    47,    14,    45,     4,    47,     6,     7,
     161,     9,    91,    92,     7,    59,    45,    64,    47,    59,
      10,   249,   250,    18,    14,    20,   177,    44,    26,    46,
      59,   160,    30,    12,   160,    20,    21,    22,     5,   168,
      64,   120,   168,    10,    11,   196,     7,   198,   230,    50,
     232,   233,   234,    32,    33,    34,    35,    36,    37,    32,
      33,    34,    35,    36,    37,    34,    35,    36,    37,    13,
     252,    15,    16,    44,   225,    46,     8,   228,   134,   135,
     136,   137,   138,   139,   196,    61,   198,    63,    39,    40,
      62,    63,    10,    11,    25,    26,    52,     7,    48,     7,
      54,     3,     3,     7,    11,     3,    11,    48,    11,    15,
       7,    45,     3,    58,     3,     3,     3,     3,     3,     3,
     249,   250,    22,   249,   250,     6,    22,     7,     6,    21,
       7,    56,    14,    12,    17,    11,     3,    12,    12,    58,
       3,     3,     3,    12,    14,    44,    17,    60,    14,    44,
      14,   221,    46,   254,    27,   237,    28,    86,    69,    -1,
      25,    -1,   132,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    67,     7,     0,     3,    49,    51,    98,   100,
     104,   105,     7,   107,     7,    84,    53,    99,   102,   103,
     104,   105,   106,    18,    20,    74,    75,   101,   100,   100,
      64,    50,    64,    52,     6,     7,    85,    86,    87,     8,
      48,     4,     6,     7,     9,    26,    30,    68,    69,    71,
      72,    73,    80,    94,    95,    96,    97,   103,   103,   103,
       7,    77,     7,    76,   101,   101,    13,    15,    88,    89,
      90,     7,    55,    57,    59,    61,    62,    63,   108,   109,
      38,    42,    43,    62,    63,    65,    10,    14,    10,    14,
      54,     3,     3,    11,     7,     7,    11,    32,    33,    38,
      41,    42,    43,    62,    81,    91,    92,    93,    94,    95,
      92,    22,    45,    47,    59,    22,    45,    47,    59,     3,
      11,   102,    11,   102,    85,    85,    48,    90,     7,    83,
      45,   108,     3,    58,     3,     3,     3,     3,     3,     3,
      87,   108,    86,   108,    85,    85,    82,    92,    22,    22,
      91,    92,    93,     7,    11,    93,    93,    91,    39,    40,
      24,    44,    32,    33,    34,    35,    36,    37,    29,    92,
      92,    94,    92,    92,    95,    96,    85,    17,    13,    15,
      16,    78,    79,    21,    14,    56,   109,   107,   109,    84,
      84,    84,    84,    84,    84,    12,    10,    92,    11,    12,
      12,    93,    91,    91,    96,    92,    93,    93,    93,    93,
      93,    93,    96,    46,    46,    12,    92,    86,    86,    86,
      12,     3,   108,    58,    82,    23,    82,    27,    28,    70,
      17,    19,    14,    14,    14,     3,    78,     3,   109,    92,
      12,    92,    31,   108,   108,   108,   108,    83,    46,    24,
      29,     3,    60,    96,    96,   108,    25,    70
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 3:
#line 124 "parser.y"
    {
        printf("Asignacion booleana");
        // int operador = $2;
        // int operando1 = obtenerId($3);
        // int operando2 = -1;
        // int resultado = obtenerId($1);
        // gen(operador, operando1, operando2, resultado);
    ;}
    break;

  case 4:
#line 132 "parser.y"
    {printf("Asignacion aritmetica");;}
    break;

  case 36:
#line 198 "parser.y"
    {printf("reduce de listaDefsVariables\n");;}
    break;

  case 37:
#line 199 "parser.y"
    {printf("reduce de listaDefsVariables\n");;}
    break;

  case 39:
#line 204 "parser.y"
    {
        (yyval.paraEntero) = (yyvsp[(3) - (3)].paraEntero);
        if((yyvsp[(3) - (3)].paraEntero) == TIPO_BOOLEANO){
            printf("Error, las variables booleanas no tiene un formato correcto. Prueba con b_nombreDeLaVariable\n");
        }
        // insertarElemento($1, $3);
    ;}
    break;

  case 40:
#line 212 "parser.y"
    {
        (yyval.paraEntero) = (yyvsp[(3) - (3)].paraEntero);
        // insertarElemento($1, $3);
    ;}
    break;

  case 41:
#line 219 "parser.y"
    {
        (yyval.paraEntero) = (yyvsp[(3) - (3)].paraEntero);
        if((yyvsp[(3) - (3)].paraEntero) != TIPO_BOOLEANO){
            printf("Error, las variables estan escritas en formato de booleanos. Prueba a cambiar el tipo o cambiar a un formato diferente de b_nombreDeLaVariableBooleana\n");
        }
        // insertarElemento($1, $3);
    ;}
    break;

  case 42:
#line 227 "parser.y"
    {
        (yyval.paraEntero) = (yyvsp[(3) - (3)].paraEntero);
        // insertarElemento($1, $3);
    ;}
    break;

  case 59:
#line 261 "parser.y"
    {
        // char *nombreNuevaVariableResultado = generarNombre();
        // int tipoNuevaVariableResultado = obtenerTipo($1);
        // insertarElemento(nombreNuevaVariable, tipoNuevaVariable);
        // int operando1 = obtenerId($1);
        // int operando2 = obtenerId($2);
        // int resultado = obtenerId(nombreNuevaVariable);
        // int operador = $2;
        // gen(operador, operando1, operando2, resultado);
    ;}
    break;

  case 66:
#line 278 "parser.y"
    {
        (yyval.paraCadena) = (yyvsp[(1) - (1)].paraCadena);
    ;}
    break;

  case 75:
#line 294 "parser.y"
    {
        (yyval.paraCadena) = (yyvsp[(1) - (1)].paraCadena);
    ;}
    break;

  case 108:
#line 359 "parser.y"
    {
        (yyval.paraEntero)=(yyvsp[(2) - (2)].paraEntero);
    ;}
    break;

  case 109:
#line 363 "parser.y"
    {
        (yyval.paraEntero)=(yyvsp[(1) - (1)].paraEntero);
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1811 "parser.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 371 "parser.y"


int
main ( int argc, char **argv)
{
	int yyin;
	if ( argc  > 1) {
		yyin = open( argv[1],O_RDONLY);
		dup2(yyin,STDIN_FILENO);
	}
	yyparse();
    inicializar();
}

/* Called by yyparse on error. */
void
yyerror (char const *s)
{
	printf("yyerror: %s\n",s);
}

void
yywrap (void)
{
}

