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
#line 20 "parser.y"
union type
{
#line 20 "parser.y"

	char *paraCadena;
	int paraEntero;
	float paraFloat;
	struct paraBooleano{
		int * true;
		int * false;
	} paraBooleanos;

#line 134 "parser.tab.h"

};
#line 20 "parser.y"
typedef union type YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
