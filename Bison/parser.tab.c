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

#line 90 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_PUNTOYCOMA = 3,              /* TK_PUNTOYCOMA  */
  YYSYMBOL_TK_CONTINUAR = 4,               /* TK_CONTINUAR  */
  YYSYMBOL_TK_ALGORITMO = 5,               /* TK_ALGORITMO  */
  YYSYMBOL_TK_IDENTIFICADOR_BOOLEANO = 6,  /* TK_IDENTIFICADOR_BOOLEANO  */
  YYSYMBOL_TK_IDENTIFICADOR = 7,           /* TK_IDENTIFICADOR  */
  YYSYMBOL_TK_FALGORITMO = 8,              /* TK_FALGORITMO  */
  YYSYMBOL_TK_PARA = 9,                    /* TK_PARA  */
  YYSYMBOL_TK_COMA = 10,                   /* TK_COMA  */
  YYSYMBOL_TK_PARENTESIS_APERTURA = 11,    /* TK_PARENTESIS_APERTURA  */
  YYSYMBOL_TK_PARENTESIS_CIERRE = 12,      /* TK_PARENTESIS_CIERRE  */
  YYSYMBOL_TK_ENT = 13,                    /* TK_ENT  */
  YYSYMBOL_TK_DOSPUNTOS = 14,              /* TK_DOSPUNTOS  */
  YYSYMBOL_TK_SAL = 15,                    /* TK_SAL  */
  YYSYMBOL_TK_ENTSAL = 16,                 /* TK_ENTSAL  */
  YYSYMBOL_TK_DEV = 17,                    /* TK_DEV  */
  YYSYMBOL_TK_FUNCION = 18,                /* TK_FUNCION  */
  YYSYMBOL_TK_FFUNCION = 19,               /* TK_FFUNCION  */
  YYSYMBOL_TK_ACCION = 20,                 /* TK_ACCION  */
  YYSYMBOL_TK_FACCION = 21,                /* TK_FACCION  */
  YYSYMBOL_TK_DOSPUNTOS_IGUAL = 22,        /* TK_DOSPUNTOS_IGUAL  */
  YYSYMBOL_TK_HASTA = 23,                  /* TK_HASTA  */
  YYSYMBOL_TK_HACER = 24,                  /* TK_HACER  */
  YYSYMBOL_TK_FPARA = 25,                  /* TK_FPARA  */
  YYSYMBOL_TK_MIENTRAS = 26,               /* TK_MIENTRAS  */
  YYSYMBOL_TK_FMIENTRAS = 27,              /* TK_FMIENTRAS  */
  YYSYMBOL_TK_CORCHETES = 28,              /* TK_CORCHETES  */
  YYSYMBOL_TK_FLECHA = 29,                 /* TK_FLECHA  */
  YYSYMBOL_TK_SI = 30,                     /* TK_SI  */
  YYSYMBOL_TK_FSI = 31,                    /* TK_FSI  */
  YYSYMBOL_TK_SUMA = 32,                   /* TK_SUMA  */
  YYSYMBOL_TK_RESTA = 33,                  /* TK_RESTA  */
  YYSYMBOL_TK_MULTIPLICACION = 34,         /* TK_MULTIPLICACION  */
  YYSYMBOL_TK_DIVISION = 35,               /* TK_DIVISION  */
  YYSYMBOL_TK_DIVISION_ENTERA = 36,        /* TK_DIVISION_ENTERA  */
  YYSYMBOL_TK_MODULO = 37,                 /* TK_MODULO  */
  YYSYMBOL_TK_LITERAL_NUMERICO = 38,       /* TK_LITERAL_NUMERICO  */
  YYSYMBOL_TK_Y = 39,                      /* TK_Y  */
  YYSYMBOL_TK_O = 40,                      /* TK_O  */
  YYSYMBOL_TK_NO = 41,                     /* TK_NO  */
  YYSYMBOL_TK_VERDADERO = 42,              /* TK_VERDADERO  */
  YYSYMBOL_TK_FALSO = 43,                  /* TK_FALSO  */
  YYSYMBOL_TK_OPREL = 44,                  /* TK_OPREL  */
  YYSYMBOL_TK_CORCHETE_APERTURA = 45,      /* TK_CORCHETE_APERTURA  */
  YYSYMBOL_TK_CORCHETE_CIERRE = 46,        /* TK_CORCHETE_CIERRE  */
  YYSYMBOL_TK_PUNTO = 47,                  /* TK_PUNTO  */
  YYSYMBOL_TK_COMENTARIO = 48,             /* TK_COMENTARIO  */
  YYSYMBOL_TK_TIPO = 49,                   /* TK_TIPO  */
  YYSYMBOL_TK_FTIPO = 50,                  /* TK_FTIPO  */
  YYSYMBOL_TK_CONST = 51,                  /* TK_CONST  */
  YYSYMBOL_TK_FCONST = 52,                 /* TK_FCONST  */
  YYSYMBOL_TK_VAR = 53,                    /* TK_VAR  */
  YYSYMBOL_TK_FVAR = 54,                   /* TK_FVAR  */
  YYSYMBOL_TK_TUPLA = 55,                  /* TK_TUPLA  */
  YYSYMBOL_TK_FTUPLA = 56,                 /* TK_FTUPLA  */
  YYSYMBOL_TK_TABLA = 57,                  /* TK_TABLA  */
  YYSYMBOL_TK_PUNTO_Y_PUNTO = 58,          /* TK_PUNTO_Y_PUNTO  */
  YYSYMBOL_TK_REF = 59,                    /* TK_REF  */
  YYSYMBOL_TK_DE = 60,                     /* TK_DE  */
  YYSYMBOL_TK_TIPOBASE = 61,               /* TK_TIPOBASE  */
  YYSYMBOL_TK_LITERALENTERO = 62,          /* TK_LITERALENTERO  */
  YYSYMBOL_TK_LITERALCARACTER = 63,        /* TK_LITERALCARACTER  */
  YYSYMBOL_TK_IGUAL = 64,                  /* TK_IGUAL  */
  YYSYMBOL_TK_LITERAL_CADENA = 65,         /* TK_LITERAL_CADENA  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_descAlgoritmo = 67,             /* descAlgoritmo  */
  YYSYMBOL_asignacion = 68,                /* asignacion  */
  YYSYMBOL_alternativa = 69,               /* alternativa  */
  YYSYMBOL_listaOpciones = 70,             /* listaOpciones  */
  YYSYMBOL_iteracion = 71,                 /* iteracion  */
  YYSYMBOL_itCotaVariable = 72,            /* itCotaVariable  */
  YYSYMBOL_itCotaFija = 73,                /* itCotaFija  */
  YYSYMBOL_defAccion = 74,                 /* defAccion  */
  YYSYMBOL_defFuncion = 75,                /* defFuncion  */
  YYSYMBOL_cabeceraAccion = 76,            /* cabeceraAccion  */
  YYSYMBOL_cabeceraFuncion = 77,           /* cabeceraFuncion  */
  YYSYMBOL_defParForm = 78,                /* defParForm  */
  YYSYMBOL_dParForm = 79,                  /* dParForm  */
  YYSYMBOL_llamadaAccion = 80,             /* llamadaAccion  */
  YYSYMBOL_llamadaFuncion = 81,            /* llamadaFuncion  */
  YYSYMBOL_parametrosReales = 82,          /* parametrosReales  */
  YYSYMBOL_listaCampos = 83,               /* listaCampos  */
  YYSYMBOL_listaDefsConstantes = 84,       /* listaDefsConstantes  */
  YYSYMBOL_listaDefsVariables = 85,        /* listaDefsVariables  */
  YYSYMBOL_listaId = 86,                   /* listaId  */
  YYSYMBOL_listaIdBooleanos = 87,          /* listaIdBooleanos  */
  YYSYMBOL_defVariablesInteraccion = 88,   /* defVariablesInteraccion  */
  YYSYMBOL_defEntrada = 89,                /* defEntrada  */
  YYSYMBOL_defSalida = 90,                 /* defSalida  */
  YYSYMBOL_expBool = 91,                   /* expBool  */
  YYSYMBOL_expresion = 92,                 /* expresion  */
  YYSYMBOL_expArit = 93,                   /* expArit  */
  YYSYMBOL_operandoBooleano = 94,          /* operandoBooleano  */
  YYSYMBOL_operandoAritmetico = 95,        /* operandoAritmetico  */
  YYSYMBOL_instrucciones = 96,             /* instrucciones  */
  YYSYMBOL_instruccion = 97,               /* instruccion  */
  YYSYMBOL_cabeceraAlgoritmo = 98,         /* cabeceraAlgoritmo  */
  YYSYMBOL_bloqueAlgoritmo = 99,           /* bloqueAlgoritmo  */
  YYSYMBOL_defGlobales = 100,              /* defGlobales  */
  YYSYMBOL_defAccionesFunciones = 101,     /* defAccionesFunciones  */
  YYSYMBOL_bloque = 102,                   /* bloque  */
  YYSYMBOL_declaraciones = 103,            /* declaraciones  */
  YYSYMBOL_definicionTipo = 104,           /* definicionTipo  */
  YYSYMBOL_definicionConst = 105,          /* definicionConst  */
  YYSYMBOL_definicionVar = 106,            /* definicionVar  */
  YYSYMBOL_listaDefsTipo = 107,            /* listaDefsTipo  */
  YYSYMBOL_defTipo = 108,                  /* defTipo  */
  YYSYMBOL_expresionT = 109                /* expresionT  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  258

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   129,   129,   135,   149,   164,   167,   168,   171,   172,
     175,   178,   181,   184,   187,   190,   193,   194,   195,   198,
     199,   200,   203,   206,   209,   210,   211,   214,   215,   218,
     219,   220,   221,   222,   223,   224,   227,   228,   229,   232,
     240,   247,   255,   263,   264,   265,   268,   271,   274,   275,
     276,   277,   278,   279,   280,   281,   287,   288,   289,   292,
     307,   322,   337,   352,   367,   381,   385,   386,   390,   394,
     395,   401,   402,   403,   404,   407,   408,   409,   410,   413,
     414,   417,   418,   419,   420,   421,   424,   428,   434,   435,
     436,   439,   440,   441,   444,   447,   448,   449,   450,   453,
     456,   459,   463,   464,   467,   468,   469,   470,   471,   475,
     478,   479
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
  "\"end of file\"", "error", "\"invalid token\"", "TK_PUNTOYCOMA",
  "TK_CONTINUAR", "TK_ALGORITMO", "TK_IDENTIFICADOR_BOOLEANO",
  "TK_IDENTIFICADOR", "TK_FALGORITMO", "TK_PARA", "TK_COMA",
  "TK_PARENTESIS_APERTURA", "TK_PARENTESIS_CIERRE", "TK_ENT",
  "TK_DOSPUNTOS", "TK_SAL", "TK_ENTSAL", "TK_DEV", "TK_FUNCION",
  "TK_FFUNCION", "TK_ACCION", "TK_FACCION", "TK_DOSPUNTOS_IGUAL",
  "TK_HASTA", "TK_HACER", "TK_FPARA", "TK_MIENTRAS", "TK_FMIENTRAS",
  "TK_CORCHETES", "TK_FLECHA", "TK_SI", "TK_FSI", "TK_SUMA", "TK_RESTA",
  "TK_MULTIPLICACION", "TK_DIVISION", "TK_DIVISION_ENTERA", "TK_MODULO",
  "TK_LITERAL_NUMERICO", "TK_Y", "TK_O", "TK_NO", "TK_VERDADERO",
  "TK_FALSO", "TK_OPREL", "TK_CORCHETE_APERTURA", "TK_CORCHETE_CIERRE",
  "TK_PUNTO", "TK_COMENTARIO", "TK_TIPO", "TK_FTIPO", "TK_CONST",
  "TK_FCONST", "TK_VAR", "TK_FVAR", "TK_TUPLA", "TK_FTUPLA", "TK_TABLA",
  "TK_PUNTO_Y_PUNTO", "TK_REF", "TK_DE", "TK_TIPOBASE", "TK_LITERALENTERO",
  "TK_LITERALCARACTER", "TK_IGUAL", "TK_LITERAL_CADENA", "$accept",
  "descAlgoritmo", "asignacion", "alternativa", "listaOpciones",
  "iteracion", "itCotaVariable", "itCotaFija", "defAccion", "defFuncion",
  "cabeceraAccion", "cabeceraFuncion", "defParForm", "dParForm",
  "llamadaAccion", "llamadaFuncion", "parametrosReales", "listaCampos",
  "listaDefsConstantes", "listaDefsVariables", "listaId",
  "listaIdBooleanos", "defVariablesInteraccion", "defEntrada", "defSalida",
  "expBool", "expresion", "expArit", "operandoBooleano",
  "operandoAritmetico", "instrucciones", "instruccion",
  "cabeceraAlgoritmo", "bloqueAlgoritmo", "defGlobales",
  "defAccionesFunciones", "bloque", "declaraciones", "definicionTipo",
  "definicionConst", "definicionVar", "listaDefsTipo", "defTipo",
  "expresionT", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
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

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,  -125,     9,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,    40,  -125,  -125,  -125,    -2,    28,    54,    31,
     -74,   181,  -125,  -125,   199,   -76,   -41,   -86,   -19,   -16,
    -118,  -125,  -125,  -125,   192,   179,   134,   125,    85,   143,
    -125,   140,   -72,  -124
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    47,    48,   229,    49,    50,    51,    25,    26,
      63,    61,   181,   182,    52,   104,   146,   129,    15,    36,
      37,    38,    68,    69,    70,   105,   151,   107,   108,   109,
      55,    56,     8,    17,     9,    27,    18,    19,    20,    21,
      22,    13,    78,    79
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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
  case 2: /* descAlgoritmo: TK_ALGORITMO TK_IDENTIFICADOR TK_PUNTOYCOMA cabeceraAlgoritmo bloqueAlgoritmo TK_FALGORITMO  */
#line 129 "parser.y"
                                                                                               {
        printf("Final de descAlgoritmo\n");
    }
#line 1376 "parser.tab.c"
    break;

  case 3: /* asignacion: operandoBooleano TK_DOSPUNTOS_IGUAL expresion  */
#line 136 "parser.y"
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
#line 1394 "parser.tab.c"
    break;

  case 4: /* asignacion: operandoAritmetico TK_DOSPUNTOS_IGUAL expresion  */
#line 150 "parser.y"
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
#line 1411 "parser.tab.c"
    break;

  case 36: /* listaDefsVariables: listaId TK_PUNTOYCOMA listaDefsVariables  */
#line 227 "parser.y"
                                             {printf("reduce de listaDefsVariables\n");}
#line 1417 "parser.tab.c"
    break;

  case 37: /* listaDefsVariables: listaIdBooleanos TK_PUNTOYCOMA listaDefsVariables  */
#line 228 "parser.y"
                                                        {printf("reduce de listaDefsVariables\n");}
#line 1423 "parser.tab.c"
    break;

  case 39: /* listaId: TK_IDENTIFICADOR TK_DOSPUNTOS defTipo  */
#line 233 "parser.y"
    {
        (yyval.paraEntero) = (yyvsp[0].paraEntero);
        if((yyvsp[0].paraEntero) == TIPO_BOOLEANO){
            printf("Error, las variables booleanas no tiene un formato correcto. Prueba con b_nombreDeLaVariable\n");
        }
        insertarElemento((yyvsp[-2].paraCadena), (yyvsp[0].paraEntero));
    }
#line 1435 "parser.tab.c"
    break;

  case 40: /* listaId: TK_IDENTIFICADOR TK_COMA listaId  */
#line 241 "parser.y"
    {
        (yyval.paraEntero) = (yyvsp[0].paraEntero);
        insertarElemento((yyvsp[-2].paraCadena), (yyvsp[0].paraEntero));
    }
#line 1444 "parser.tab.c"
    break;

  case 41: /* listaIdBooleanos: TK_IDENTIFICADOR_BOOLEANO TK_DOSPUNTOS defTipo  */
#line 248 "parser.y"
    {
        (yyval.paraEntero) = (yyvsp[0].paraEntero);
        if((yyvsp[0].paraEntero) != TIPO_BOOLEANO){
            printf("Error, las variables estan escritas en formato de booleanos. Prueba a cambiar el tipo o cambiar a un formato diferente de b_nombreDeLaVariableBooleana\n");
        }
        insertarElemento((yyvsp[-2].paraCadena), (yyvsp[0].paraEntero));
    }
#line 1456 "parser.tab.c"
    break;

  case 42: /* listaIdBooleanos: TK_IDENTIFICADOR_BOOLEANO TK_COMA listaIdBooleanos  */
#line 256 "parser.y"
    {
        (yyval.paraEntero) = (yyvsp[0].paraEntero);
        insertarElemento((yyvsp[-2].paraCadena), (yyvsp[0].paraEntero));
    }
#line 1465 "parser.tab.c"
    break;

  case 55: /* expBool: TK_PARENTESIS_APERTURA expBool TK_PARENTESIS_CIERRE  */
#line 282 "parser.y"
    {
        printf("expBool -> ( expbool )\n");
    }
#line 1473 "parser.tab.c"
    break;

  case 59: /* expArit: expArit TK_SUMA expArit  */
#line 293 "parser.y"
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
#line 1492 "parser.tab.c"
    break;

  case 60: /* expArit: expArit TK_RESTA expArit  */
#line 308 "parser.y"
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
#line 1511 "parser.tab.c"
    break;

  case 61: /* expArit: expArit TK_MULTIPLICACION expArit  */
#line 323 "parser.y"
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
#line 1530 "parser.tab.c"
    break;

  case 62: /* expArit: expArit TK_DIVISION expArit  */
#line 338 "parser.y"
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
#line 1549 "parser.tab.c"
    break;

  case 63: /* expArit: expArit TK_DIVISION_ENTERA expArit  */
#line 353 "parser.y"
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
#line 1568 "parser.tab.c"
    break;

  case 64: /* expArit: expArit TK_MODULO expArit  */
#line 367 "parser.y"
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
#line 1587 "parser.tab.c"
    break;

  case 65: /* expArit: TK_PARENTESIS_APERTURA expArit TK_PARENTESIS_CIERRE  */
#line 382 "parser.y"
    {
        (yyval.paraCadena) = (yyvsp[-1].paraCadena);
    }
#line 1595 "parser.tab.c"
    break;

  case 67: /* expArit: TK_RESTA expArit  */
#line 387 "parser.y"
    {
        (yyval.paraCadena) = (yyvsp[0].paraCadena);
    }
#line 1603 "parser.tab.c"
    break;

  case 68: /* expArit: TK_SUMA expArit  */
#line 391 "parser.y"
    {
        (yyval.paraCadena) = (yyvsp[0].paraCadena);
    }
#line 1611 "parser.tab.c"
    break;

  case 70: /* expArit: TK_LITERALENTERO  */
#line 396 "parser.y"
    {
        insertarElemento((yyvsp[0].paraCadena), TIPO_ENTERO);
    }
#line 1619 "parser.tab.c"
    break;

  case 87: /* bloqueAlgoritmo: bloque TK_COMENTARIO  */
#line 428 "parser.y"
                        {
        printf("Bloque algoritmo -> bloque TK_COMENTARIO\n");
    }
#line 1627 "parser.tab.c"
    break;

  case 108: /* defTipo: TK_REF defTipo  */
#line 472 "parser.y"
    {
        (yyval.paraEntero)=(yyvsp[0].paraEntero);
    }
#line 1635 "parser.tab.c"
    break;


#line 1639 "parser.tab.c"

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

#line 481 "parser.y"


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
    // imprimirSimbolos();
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
