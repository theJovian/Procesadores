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
#line 1 "parser.y"

  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
  #include <ctype.h>
  #include <sys/types.h>
  #include <sys/stat.h>
  #include <fcntl.h>
  #include <unistd.h>
  #include <string.h>
  
  #include "tablaSimbolos.h"
  #include  "tablaCuadruplas.h"
  
  int yylex (void);
  void yyerror (char const *);
  void yywrap(void);

#line 89 "parser.tab.c"

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
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 21 "parser.y"
union type
{
#line 21 "parser.y"

	char *paraCadena;
	int paraEntero;
	float paraFloat;

#line 214 "parser.tab.c"

};
#line 21 "parser.y"
typedef union type YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  259

#define YYUNDEFTOK  2
#define YYMAXUTOK   320


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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   130,   130,   136,   150,   165,   168,   169,   172,   173,
     176,   179,   182,   185,   188,   191,   194,   195,   196,   199,
     200,   201,   204,   207,   210,   211,   212,   215,   216,   219,
     220,   221,   222,   223,   224,   225,   228,   229,   230,   233,
     241,   248,   256,   264,   265,   266,   269,   272,   275,   279,
     280,   284,   285,   290,   295,   296,   303,   306,   307,   308,
     311,   326,   341,   356,   371,   386,   400,   404,   405,   409,
     413,   414,   420,   421,   422,   423,   426,   427,   428,   429,
     432,   433,   436,   437,   438,   439,   440,   443,   447,   453,
     454,   455,   458,   459,   460,   463,   466,   467,   468,   469,
     472,   475,   478,   482,   483,   486,   487,   488,   489,   490,
     494,   497,   498
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "expBool", "M", "expresion", "expArit", "operandoBooleano",
  "operandoAritmetico", "instrucciones", "instruccion",
  "cabeceraAlgoritmo", "bloqueAlgoritmo", "defGlobales",
  "defAccionesFunciones", "bloque", "declaraciones", "definicionTipo",
  "definicionConst", "definicionVar", "listaDefsTipo", "defTipo",
  "expresionT", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320
};
# endif

#define YYPACT_NINF (-122)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,    16,    32,    70,  -122,   105,    39,   115,    86,    99,
     105,   105,    44,    75,    76,    79,   201,   138,   111,   117,
      86,    86,    86,   146,   175,    99,    99,   168,  -122,  -122,
       4,  -122,    67,  -122,    27,   128,   132,   197,   210,  -122,
    -122,  -122,  -122,   191,   207,    15,    15,  -122,  -122,  -122,
    -122,  -122,  -122,   -14,    59,  -122,   212,  -122,  -122,  -122,
     205,    86,   206,    86,  -122,  -122,   201,   201,   170,   204,
    -122,  -122,   213,   176,     4,  -122,  -122,  -122,   219,   165,
     221,   222,   223,   224,   225,   226,   227,     4,   229,     4,
    -122,   201,   201,    15,   208,   215,    15,     6,     6,  -122,
      15,  -122,  -122,  -122,  -122,    52,    10,   139,    68,    69,
      -2,    15,    15,   232,  -122,    15,    15,   233,  -122,   117,
     201,   228,   135,   218,  -122,  -122,  -122,  -122,   230,   185,
     101,  -122,    39,   101,   115,   115,   115,   115,   115,   115,
    -122,  -122,  -122,  -122,  -122,  -122,   231,    18,    15,   235,
      43,   198,   133,  -122,     6,   161,   161,    52,  -122,    15,
     117,    15,     6,     6,     6,     6,     6,     6,   117,   198,
     141,    68,   198,   155,    69,  -122,   236,    15,   229,   229,
     229,   237,   244,  -122,     4,  -122,   192,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,    15,    49,    15,  -122,
    -122,   133,    15,  -122,   234,   209,   161,   161,  -122,  -122,
    -122,  -122,   238,  -122,  -122,   239,    -4,   240,   241,   243,
     248,   135,   249,   101,  -122,    15,   246,  -122,  -122,    15,
     242,     4,  -122,     4,     4,     4,  -122,  -122,   213,   214,
      36,  -122,    35,  -122,   256,  -122,  -122,  -122,  -122,   202,
     117,   117,  -122,     4,   245,   238,  -122,  -122,  -122
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,    91,   104,    35,    99,    94,
      91,    91,     0,     0,     0,     0,    38,     0,     0,     0,
      99,    99,    99,     0,     0,    94,    94,     0,    89,    90,
       0,   100,     0,   101,     0,     0,     0,     0,     0,     2,
      88,    82,    72,    76,     0,     0,     0,    83,    84,    85,
       9,     8,    86,     0,     0,    95,    81,    96,    97,    98,
       0,    99,     0,    99,    92,    93,    38,    38,     0,    43,
      45,   107,    28,     0,     0,   110,   111,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     102,    38,    38,    26,     0,    76,     0,     0,     0,    70,
       0,    52,    53,    71,    59,    58,     0,    57,    51,    67,
       0,     0,     0,     0,    75,     0,     0,     0,    79,     0,
      38,     0,    18,     0,    46,    47,    87,    44,     0,     0,
       0,   109,   104,     0,    35,    35,    35,    35,    35,    35,
      42,    41,    40,    39,    36,    37,     0,    25,     0,     0,
      58,     0,    57,    76,     0,    69,    68,    50,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,    73,     4,     0,    77,    80,     0,     0,     0,     0,
       0,     0,    17,    12,     0,   105,     0,   103,   108,    34,
      31,    32,    29,    30,    33,    22,    26,     0,    26,    55,
      66,     0,     0,    49,     0,    54,    60,    61,    62,    63,
      64,    65,     7,    74,    78,     0,     0,     0,     0,     0,
       0,    18,     0,     0,    24,     0,     0,    48,    10,     0,
       0,     0,    13,     0,     0,     0,    14,    16,    28,     0,
       0,    23,     0,     5,     0,    19,    20,    21,    27,     0,
       0,     0,    15,     0,     0,     7,   106,    11,     6
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,  -122,     8,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,    46,  -122,  -122,  -122,     7,    26,    55,   -42,
     -81,   179,  -122,  -122,   200,   -90,  -122,   -41,   -78,   -19,
     -16,  -117,  -122,  -122,  -122,   199,   186,   143,   157,    25,
      85,  -122,   136,   -73,  -121
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    47,    48,   230,    49,    50,    51,    25,    26,
      63,    61,   181,   182,    52,   104,   146,   129,    15,    36,
      37,    38,    68,    69,    70,   105,   202,   151,   107,   108,
     109,    55,    56,     8,    17,     9,    27,    18,    19,    20,
      21,    22,    13,    78,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,   131,   175,    54,   106,   110,   150,   142,   111,   186,
     157,    71,   188,   153,   141,   232,   143,   154,   152,   155,
     156,    42,    95,     3,   124,   125,    96,   168,   196,     1,
      10,   112,     4,   113,   160,    10,    10,    86,    97,    98,
     161,    87,   161,   204,    99,   114,    12,    97,    98,   144,
     145,   212,   147,    99,   161,   199,   100,   101,   102,    72,
     250,    73,   161,    74,   251,    75,    76,    77,   103,   203,
     169,   170,   225,     5,   172,   173,   201,   103,   176,   161,
     161,   115,   158,   159,   206,   207,   208,   209,   210,   211,
      11,   158,   159,   161,   171,    11,    11,   217,   218,   219,
      53,   174,   239,    54,   116,    80,   117,   197,    30,    81,
      82,   222,   227,   112,   116,   113,   117,    23,   118,    24,
     205,    41,    14,    42,    43,    31,    44,   114,   118,    83,
      84,    33,    85,   254,   255,     6,   216,     7,    88,    16,
      32,    53,    89,    45,    54,   200,    39,    46,   178,    53,
     179,   180,    54,    60,     6,   147,     7,   147,   244,    40,
     245,   246,   247,    76,    77,   162,   163,   164,   165,   166,
     167,   162,   163,   164,   165,   166,   167,    57,    58,    59,
     256,    66,    62,    67,   240,   161,    90,   213,   242,   189,
     190,   191,   192,   193,   194,   164,   165,   166,   167,   161,
      91,   214,    93,   224,   121,   226,   123,    34,    35,    28,
      29,    64,    65,    92,    94,   119,   120,   122,   126,    67,
     128,   130,   132,   133,   134,   135,   136,   137,   138,   139,
     148,    53,    53,    34,    54,    54,    35,   149,    42,   183,
     153,   185,   161,   195,   184,   177,   198,   221,   215,   220,
     223,   236,   238,    -1,   233,   234,   231,   235,   241,   252,
     249,   228,   253,   258,   248,   140,   229,   237,   187,   127,
     257,     0,     0,   243
};

static const yytype_int16 yycheck[] =
{
      19,    74,   119,    19,    45,    46,    96,    88,    22,   130,
     100,     7,   133,     7,    87,    19,    89,    11,    96,    97,
      98,     6,     7,     7,    66,    67,    11,    29,    10,     5,
       5,    45,     0,    47,    24,    10,    11,    10,    32,    33,
      44,    14,    44,   160,    38,    59,     7,    32,    33,    91,
      92,   168,    93,    38,    44,    12,    41,    42,    43,    55,
      24,    57,    44,    59,    29,    61,    62,    63,    62,   159,
     111,   112,    23,     3,   115,   116,   154,    62,   120,    44,
      44,    22,    39,    40,   162,   163,   164,   165,   166,   167,
       5,    39,    40,    44,   113,    10,    11,   178,   179,   180,
     119,   117,   223,   119,    45,    38,    47,   148,    64,    42,
      43,   184,   202,    45,    45,    47,    47,    18,    59,    20,
     161,     4,     7,     6,     7,    50,     9,    59,    59,    62,
      63,    52,    65,   250,   251,    49,   177,    51,    10,    53,
      64,   160,    14,    26,   160,    12,     8,    30,    13,   168,
      15,    16,   168,     7,    49,   196,    51,   198,   231,    48,
     233,   234,   235,    62,    63,    32,    33,    34,    35,    36,
      37,    32,    33,    34,    35,    36,    37,    20,    21,    22,
     253,    13,     7,    15,   225,    44,    54,    46,   229,   134,
     135,   136,   137,   138,   139,    34,    35,    36,    37,    44,
       3,    46,    11,   196,    61,   198,    63,     6,     7,    10,
      11,    25,    26,     3,     7,     3,    11,    11,    48,    15,
       7,    45,     3,    58,     3,     3,     3,     3,     3,     3,
      22,   250,   251,     6,   250,   251,     7,    22,     6,    21,
       7,    56,    44,    12,    14,    17,    11,     3,    12,    12,
      58,     3,     3,    44,    14,    14,    17,    14,    12,     3,
      46,    27,    60,   255,   238,    86,    28,   221,   132,    69,
      25,    -1,    -1,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    67,     7,     0,     3,    49,    51,    99,   101,
     105,   106,     7,   108,     7,    84,    53,   100,   103,   104,
     105,   106,   107,    18,    20,    74,    75,   102,   101,   101,
      64,    50,    64,    52,     6,     7,    85,    86,    87,     8,
      48,     4,     6,     7,     9,    26,    30,    68,    69,    71,
      72,    73,    80,    95,    96,    97,    98,   104,   104,   104,
       7,    77,     7,    76,   102,   102,    13,    15,    88,    89,
      90,     7,    55,    57,    59,    61,    62,    63,   109,   110,
      38,    42,    43,    62,    63,    65,    10,    14,    10,    14,
      54,     3,     3,    11,     7,     7,    11,    32,    33,    38,
      41,    42,    43,    62,    81,    91,    93,    94,    95,    96,
      93,    22,    45,    47,    59,    22,    45,    47,    59,     3,
      11,   103,    11,   103,    85,    85,    48,    90,     7,    83,
      45,   109,     3,    58,     3,     3,     3,     3,     3,     3,
      87,   109,    86,   109,    85,    85,    82,    93,    22,    22,
      91,    93,    94,     7,    11,    94,    94,    91,    39,    40,
      24,    44,    32,    33,    34,    35,    36,    37,    29,    93,
      93,    95,    93,    93,    96,    97,    85,    17,    13,    15,
      16,    78,    79,    21,    14,    56,   110,   108,   110,    84,
      84,    84,    84,    84,    84,    12,    10,    93,    11,    12,
      12,    94,    92,    91,    97,    93,    94,    94,    94,    94,
      94,    94,    97,    46,    46,    12,    93,    86,    86,    86,
      12,     3,   109,    58,    82,    23,    82,    91,    27,    28,
      70,    17,    19,    14,    14,    14,     3,    78,     3,   110,
      93,    12,    93,    31,   109,   109,   109,   109,    83,    46,
      24,    29,     3,    60,    97,    97,   109,    25,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    70,    70,    71,    71,
      72,    73,    74,    75,    76,    77,    78,    78,    78,    79,
      79,    79,    80,    81,    82,    82,    82,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    85,    86,
      86,    87,    87,    88,    88,    88,    89,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    93,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    96,    96,    96,    96,
      97,    97,    98,    98,    98,    98,    98,    99,   100,   101,
     101,   101,   102,   102,   102,   103,   104,   104,   104,   104,
     105,   106,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   110,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     3,     3,     6,     5,     0,     1,     1,
       5,     9,     4,     6,     5,     7,     3,     1,     0,     4,
       4,     4,     4,     5,     3,     1,     0,     5,     0,     5,
       5,     5,     5,     5,     5,     0,     3,     3,     0,     3,
       3,     3,     3,     1,     2,     1,     2,     2,     4,     3,
       2,     1,     1,     1,     3,     3,     0,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     2,
       1,     1,     1,     3,     4,     2,     1,     3,     4,     2,
       3,     1,     1,     1,     1,     1,     1,     4,     2,     2,
       2,     0,     2,     2,     0,     2,     2,     2,     2,     0,
       3,     3,     3,     5,     0,     3,     8,     1,     3,     2,
       1,     1,     1
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
#line 130 "parser.y"
                                                                                               {
        printf("Final de descAlgoritmo\n");
    }
#line 1587 "parser.tab.c"
    break;

  case 3:
#line 137 "parser.y"
    {
        printf("Asignacion booleana\n");
        struct elemento *elementoOperando1 = buscarElemento((yyvsp[0].paraCadena));
        struct elemento *elementoOperando2 = buscarElemento((yyvsp[-2].paraCadena)); 
        int operador = (yyvsp[-1].paraEntero);
        printf("Error 1\n");
        int operando1 = elementoOperando1->sid;
        int operando2 = VALOR_VACIO;
        printf("Error 2\n");
        int resultado = elementoOperando2->sid;
        gen(operando1, operando2, operador, resultado);
        printf("Error 3\n");
    }
#line 1605 "parser.tab.c"
    break;

  case 4:
#line 151 "parser.y"
    {
        printf("Asignacion aritmetica\n");
        elemento *elementoOperando1;
        elementoOperando1 = buscarElemento((yyvsp[0].paraCadena));
        elemento *elementoResultado;
        elementoResultado = buscarElemento((yyvsp[-2].paraCadena));
        int operador = (yyvsp[-1].paraEntero);
        int operando1 = elementoOperando1->sid;
        int operando2 = VALOR_VACIO;
        int resultado = elementoResultado->sid;
        gen(operando1, operando2, operador, resultado);
    }
#line 1622 "parser.tab.c"
    break;

  case 36:
#line 228 "parser.y"
                                             {printf("reduce de listaDefsVariables\n");}
#line 1628 "parser.tab.c"
    break;

  case 37:
#line 229 "parser.y"
                                                        {printf("reduce de listaDefsVariables\n");}
#line 1634 "parser.tab.c"
    break;

  case 39:
#line 234 "parser.y"
    {
        (yyval.paraEntero) = (yyvsp[0].paraEntero);
        if((yyvsp[0].paraEntero) == TIPO_BOOLEANO){
            printf("Error, las variables booleanas no tiene un formato correcto. Prueba con b_nombreDeLaVariable\n");
        }
        insertarElemento((yyvsp[-2].paraCadena), (yyvsp[0].paraEntero));
    }
#line 1646 "parser.tab.c"
    break;

  case 40:
#line 242 "parser.y"
    {
        (yyval.paraEntero) = (yyvsp[0].paraEntero);
        insertarElemento((yyvsp[-2].paraCadena), (yyvsp[0].paraEntero));
    }
#line 1655 "parser.tab.c"
    break;

  case 41:
#line 249 "parser.y"
    {
        (yyval.paraEntero) = (yyvsp[0].paraEntero);
        if((yyvsp[0].paraEntero) != TIPO_BOOLEANO){
            printf("Error, las variables estan escritas en formato de booleanos. Prueba a cambiar el tipo o cambiar a un formato diferente de b_nombreDeLaVariableBooleana\n");
        }
        insertarElemento((yyvsp[-2].paraCadena), (yyvsp[0].paraEntero));
    }
#line 1667 "parser.tab.c"
    break;

  case 42:
#line 257 "parser.y"
    {
        (yyval.paraEntero) = (yyvsp[0].paraEntero);
        insertarElemento((yyvsp[-2].paraCadena), (yyvsp[0].paraEntero));
    }
#line 1676 "parser.tab.c"
    break;

  case 48:
#line 276 "parser.y"
    {
		
    }
#line 1684 "parser.tab.c"
    break;

  case 50:
#line 281 "parser.y"
    {
		(yyval.paraCadena) = (yyvsp[0].paraCadena);
	}
#line 1692 "parser.tab.c"
    break;

  case 52:
#line 286 "parser.y"
    {
		insertarElemento("verdadero", TIPO_BOOLEANO);
		(yyval.paraCadena)=(yyvsp[0].paraCadena);
	}
#line 1701 "parser.tab.c"
    break;

  case 53:
#line 291 "parser.y"
    {
		insertarElemento("falso", TIPO_BOOLEANO);
		(yyval.paraCadena)=(yyvsp[0].paraCadena);
	}
#line 1710 "parser.tab.c"
    break;

  case 55:
#line 297 "parser.y"
    {
        printf("expBool -> ( expbool )\n");
        //$$ = $2;
    }
#line 1719 "parser.tab.c"
    break;

  case 56:
#line 303 "parser.y"
                        {}
#line 1725 "parser.tab.c"
    break;

  case 60:
#line 312 "parser.y"
    {
        char *nombreNuevaVariableResultado = generarNombre();
        elemento *elementoOperando1 = buscarElemento((yyvsp[-2].paraCadena));
        elemento *elementoOperando2 = buscarElemento((yyvsp[0].paraCadena));
        int tipoNuevaVariableResultado = elementoOperando1->tipo;
        insertarElemento(nombreNuevaVariableResultado, tipoNuevaVariableResultado);
        struct elemento *elementoResultado = buscarElemento(nombreNuevaVariableResultado);  
        int operando1 = elementoOperando1->sid;
        int operando2 = elementoOperando2->sid;
        int resultado = elementoResultado->sid;
        int operador = (yyvsp[-1].paraEntero);
        gen(operando1, operando2, operador,  resultado);
        (yyval.paraCadena) = strdup(nombreNuevaVariableResultado);
    }
#line 1744 "parser.tab.c"
    break;

  case 61:
#line 327 "parser.y"
    {
        char *nombreNuevaVariableResultado = generarNombre();
        elemento *elementoOperando1 = buscarElemento((yyvsp[-2].paraCadena));
        elemento *elementoOperando2 = buscarElemento((yyvsp[0].paraCadena));
        int tipoNuevaVariableResultado = elementoOperando1->tipo;
        insertarElemento(nombreNuevaVariableResultado, tipoNuevaVariableResultado);
        struct elemento *elementoResultado = buscarElemento(nombreNuevaVariableResultado);  
        int operando1 = elementoOperando1->sid;
        int operando2 = elementoOperando2->sid;
        int resultado = elementoResultado->sid;
        int operador = (yyvsp[-1].paraEntero);
        gen(operando1, operando2, operador,  resultado);
        (yyval.paraCadena) = strdup(nombreNuevaVariableResultado);
    }
#line 1763 "parser.tab.c"
    break;

  case 62:
#line 342 "parser.y"
    {
        char *nombreNuevaVariableResultado = generarNombre();
        elemento *elementoOperando1 = buscarElemento((yyvsp[-2].paraCadena));
        elemento *elementoOperando2 = buscarElemento((yyvsp[0].paraCadena));
        int tipoNuevaVariableResultado = elementoOperando1->tipo;
        insertarElemento(nombreNuevaVariableResultado, tipoNuevaVariableResultado);
        struct elemento *elementoResultado = buscarElemento(nombreNuevaVariableResultado);  
        int operando1 = elementoOperando1->sid;
        int operando2 = elementoOperando2->sid;
        int resultado = elementoResultado->sid;
        int operador = (yyvsp[-1].paraEntero);
        gen(operando1, operando2, operador,  resultado);
        (yyval.paraCadena) = strdup(nombreNuevaVariableResultado);
    }
#line 1782 "parser.tab.c"
    break;

  case 63:
#line 357 "parser.y"
    {
        char *nombreNuevaVariableResultado = generarNombre();
        elemento *elementoOperando1 = buscarElemento((yyvsp[-2].paraCadena));
        elemento *elementoOperando2 = buscarElemento((yyvsp[0].paraCadena));
        int tipoNuevaVariableResultado = elementoOperando1->tipo;
        insertarElemento(nombreNuevaVariableResultado, tipoNuevaVariableResultado);
        struct elemento *elementoResultado = buscarElemento(nombreNuevaVariableResultado);  
        int operando1 = elementoOperando1->sid;
        int operando2 = elementoOperando2->sid;
        int resultado = elementoResultado->sid;
        int operador = (yyvsp[-1].paraEntero);
        gen(operando1, operando2, operador,  resultado);
        (yyval.paraCadena) = strdup(nombreNuevaVariableResultado);
    }
#line 1801 "parser.tab.c"
    break;

  case 64:
#line 372 "parser.y"
    {
        char *nombreNuevaVariableResultado = generarNombre();
        elemento *elementoOperando1 = buscarElemento((yyvsp[-2].paraCadena));
        elemento *elementoOperando2 = buscarElemento((yyvsp[0].paraCadena));
        int tipoNuevaVariableResultado = elementoOperando1->tipo;
        insertarElemento(nombreNuevaVariableResultado, tipoNuevaVariableResultado);
        struct elemento *elementoResultado = buscarElemento(nombreNuevaVariableResultado);  
        int operando1 = elementoOperando1->sid;
        int operando2 = elementoOperando2->sid;
        int resultado = elementoResultado->sid;
        int operador = (yyvsp[-1].paraEntero);
        gen(operando1, operando2, operador,  resultado);
        (yyval.paraCadena) = strdup(nombreNuevaVariableResultado);
    }
#line 1820 "parser.tab.c"
    break;

  case 65:
#line 386 "parser.y"
                                {
        char *nombreNuevaVariableResultado = generarNombre();
        elemento *elementoOperando1 = buscarElemento((yyvsp[-2].paraCadena));
        elemento *elementoOperando2 = buscarElemento((yyvsp[0].paraCadena));
        int tipoNuevaVariableResultado = elementoOperando1->tipo;
        insertarElemento(nombreNuevaVariableResultado, tipoNuevaVariableResultado);
        struct elemento *elementoResultado = buscarElemento(nombreNuevaVariableResultado);  
        int operando1 = elementoOperando1->sid;
        int operando2 = elementoOperando2->sid;
        int resultado = elementoResultado->sid;
        int operador = (yyvsp[-1].paraEntero);
        gen(operando1, operando2, operador,  resultado);
        (yyval.paraCadena) = strdup(nombreNuevaVariableResultado);
    }
#line 1839 "parser.tab.c"
    break;

  case 66:
#line 401 "parser.y"
    {
        (yyval.paraCadena) = (yyvsp[-1].paraCadena);
    }
#line 1847 "parser.tab.c"
    break;

  case 68:
#line 406 "parser.y"
    {
        (yyval.paraCadena) = (yyvsp[0].paraCadena);
    }
#line 1855 "parser.tab.c"
    break;

  case 69:
#line 410 "parser.y"
    {
        (yyval.paraCadena) = (yyvsp[0].paraCadena);
    }
#line 1863 "parser.tab.c"
    break;

  case 71:
#line 415 "parser.y"
    {
        insertarElemento((yyvsp[0].paraCadena), TIPO_ENTERO);
    }
#line 1871 "parser.tab.c"
    break;

  case 88:
#line 447 "parser.y"
                        {
        printf("Bloque algoritmo -> bloque TK_COMENTARIO\n");
    }
#line 1879 "parser.tab.c"
    break;

  case 105:
#line 486 "parser.y"
                                   {}
#line 1885 "parser.tab.c"
    break;

  case 106:
#line 487 "parser.y"
                                                                                                            {}
#line 1891 "parser.tab.c"
    break;

  case 107:
#line 488 "parser.y"
                       {}
#line 1897 "parser.tab.c"
    break;

  case 108:
#line 489 "parser.y"
                                             {}
#line 1903 "parser.tab.c"
    break;

  case 109:
#line 491 "parser.y"
    {
        (yyval.paraEntero)=(yyvsp[0].paraEntero);
    }
#line 1911 "parser.tab.c"
    break;


#line 1915 "parser.tab.c"

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
#line 500 "parser.y"


int
main ( int argc, char **argv)
{
	int yyin;
	if ( argc  > 1) {
		yyin = open( argv[1],O_RDONLY);
		dup2(yyin,STDIN_FILENO);
	}
    inicializar();
    inicializarCuadruplas();
	yyparse();
    imprimirSimbolos();
    imprimirCuadruplas();
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
