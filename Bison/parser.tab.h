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
    TK_IDENTIFICADOR = 261,
    TK_FALGORITMO = 262,
    TK_PARA = 263,
    TK_COMA = 264,
    TK_PARENTESIS_APERTURA = 265,
    TK_PARENTESIS_CIERRE = 266,
    TK_ENT = 267,
    TK_DOSPUNTOS = 268,
    TK_SAL = 269,
    TK_ENTSAL = 270,
    TK_DEV = 271,
    TK_FUNCION = 272,
    TK_FFUNCION = 273,
    TK_ACCION = 274,
    TK_FACCION = 275,
    TK_DOSPUNTOS_IGUAL = 276,
    TK_HASTA = 277,
    TK_HACER = 278,
    TK_FPARA = 279,
    TK_MIENTRAS = 280,
    TK_FMIENTRAS = 281,
    TK_CORCHETES = 282,
    TK_FLECHA = 283,
    TK_SI = 284,
    TK_FSI = 285,
    TK_SUMA = 286,
    TK_RESTA = 287,
    TK_MULTIPLICACION = 288,
    TK_DIVISION = 289,
    TK_DIVISION_ENTERA = 290,
    TK_MODULO = 291,
    TK_LITERAL_NUMERICO = 292,
    TK_Y = 293,
    TK_O = 294,
    TK_NO = 295,
    TK_VERDADERO = 296,
    TK_FALSO = 297,
    TK_OPREL = 298,
    TK_CORCHETE_APERTURA = 299,
    TK_CORCHETE_CIERRE = 300,
    TK_PUNTO = 301,
    TK_COMENTARIO = 302,
    TK_TIPO = 303,
    TK_FTIPO = 304,
    TK_CONST = 305,
    TK_FCONST = 306,
    TK_VAR = 307,
    TK_FVAR = 308,
    TK_TUPLA = 309,
    TK_FTUPLA = 310,
    TK_TABLA = 311,
    TK_PUNTO_Y_PUNTO = 312,
    TK_REF = 313,
    TK_DE = 314,
    TK_TIPOBASE = 315,
    TK_LITERALENTERO = 316,
    TK_LITERALCARACTER = 317,
    TK_ASIGNACION = 318
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
