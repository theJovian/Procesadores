/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TK_PUNTOYCOMA = 258,           /* TK_PUNTOYCOMA  */
    TK_CONTINUAR = 259,            /* TK_CONTINUAR  */
    TK_ALGORITMO = 260,            /* TK_ALGORITMO  */
    TK_IDENTIFICADOR_BOOLEANO = 261, /* TK_IDENTIFICADOR_BOOLEANO  */
    TK_IDENTIFICADOR = 262,        /* TK_IDENTIFICADOR  */
    TK_FALGORITMO = 263,           /* TK_FALGORITMO  */
    TK_PARA = 264,                 /* TK_PARA  */
    TK_COMA = 265,                 /* TK_COMA  */
    TK_PARENTESIS_APERTURA = 266,  /* TK_PARENTESIS_APERTURA  */
    TK_PARENTESIS_CIERRE = 267,    /* TK_PARENTESIS_CIERRE  */
    TK_ENT = 268,                  /* TK_ENT  */
    TK_DOSPUNTOS = 269,            /* TK_DOSPUNTOS  */
    TK_SAL = 270,                  /* TK_SAL  */
    TK_ENTSAL = 271,               /* TK_ENTSAL  */
    TK_DEV = 272,                  /* TK_DEV  */
    TK_FUNCION = 273,              /* TK_FUNCION  */
    TK_FFUNCION = 274,             /* TK_FFUNCION  */
    TK_ACCION = 275,               /* TK_ACCION  */
    TK_FACCION = 276,              /* TK_FACCION  */
    TK_DOSPUNTOS_IGUAL = 277,      /* TK_DOSPUNTOS_IGUAL  */
    TK_HASTA = 278,                /* TK_HASTA  */
    TK_HACER = 279,                /* TK_HACER  */
    TK_FPARA = 280,                /* TK_FPARA  */
    TK_MIENTRAS = 281,             /* TK_MIENTRAS  */
    TK_FMIENTRAS = 282,            /* TK_FMIENTRAS  */
    TK_CORCHETES = 283,            /* TK_CORCHETES  */
    TK_FLECHA = 284,               /* TK_FLECHA  */
    TK_SI = 285,                   /* TK_SI  */
    TK_FSI = 286,                  /* TK_FSI  */
    TK_SUMA = 287,                 /* TK_SUMA  */
    TK_RESTA = 288,                /* TK_RESTA  */
    TK_MULTIPLICACION = 289,       /* TK_MULTIPLICACION  */
    TK_DIVISION = 290,             /* TK_DIVISION  */
    TK_DIVISION_ENTERA = 291,      /* TK_DIVISION_ENTERA  */
    TK_MODULO = 292,               /* TK_MODULO  */
    TK_LITERAL_NUMERICO = 293,     /* TK_LITERAL_NUMERICO  */
    TK_Y = 294,                    /* TK_Y  */
    TK_O = 295,                    /* TK_O  */
    TK_NO = 296,                   /* TK_NO  */
    TK_VERDADERO = 297,            /* TK_VERDADERO  */
    TK_FALSO = 298,                /* TK_FALSO  */
    TK_OPREL = 299,                /* TK_OPREL  */
    TK_CORCHETE_APERTURA = 300,    /* TK_CORCHETE_APERTURA  */
    TK_CORCHETE_CIERRE = 301,      /* TK_CORCHETE_CIERRE  */
    TK_PUNTO = 302,                /* TK_PUNTO  */
    TK_COMENTARIO = 303,           /* TK_COMENTARIO  */
    TK_TIPO = 304,                 /* TK_TIPO  */
    TK_FTIPO = 305,                /* TK_FTIPO  */
    TK_CONST = 306,                /* TK_CONST  */
    TK_FCONST = 307,               /* TK_FCONST  */
    TK_VAR = 308,                  /* TK_VAR  */
    TK_FVAR = 309,                 /* TK_FVAR  */
    TK_TUPLA = 310,                /* TK_TUPLA  */
    TK_FTUPLA = 311,               /* TK_FTUPLA  */
    TK_TABLA = 312,                /* TK_TABLA  */
    TK_PUNTO_Y_PUNTO = 313,        /* TK_PUNTO_Y_PUNTO  */
    TK_REF = 314,                  /* TK_REF  */
    TK_DE = 315,                   /* TK_DE  */
    TK_TIPOBASE = 316,             /* TK_TIPOBASE  */
    TK_LITERALENTERO = 317,        /* TK_LITERALENTERO  */
    TK_LITERALCARACTER = 318,      /* TK_LITERALCARACTER  */
    TK_IGUAL = 319,                /* TK_IGUAL  */
    TK_LITERAL_CADENA = 320        /* TK_LITERAL_CADENA  */
  };
  typedef enum yytokentype yytoken_kind_t;
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
	struct paraBooleano{
		int * true;
		int * false;
	} paraBooleanos;

#line 140 "parser.tab.h"

};
#line 21 "parser.y"
typedef union type YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
