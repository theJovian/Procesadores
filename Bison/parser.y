%{
  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
  #include <ctype.h>
  int yylex (void);
  void yyerror (char const *);
%}


%token TK_PUNTOYCOMA
%token TK_ALGORITMO
%token TK_IDENTIFICADOR
%token TK_FALGORITMO
%token TK_PARA
%token TK_COMA
%token TK_PARENTESIS_APERTURA
%token TK_PARENTESIS_CIERRE
%token TK_ENT
%token TK_DOSPUNTOS
%token TK_SAL
%token TK_ENTSAL
%token TK_DEV
%token TK_FUNCION
%token TK_FFUNCION
%token TK_ACCION
%token TK_FACCION
%token TK_DOSPUNTOS_IGUAL
%token TK_HASTA
%token TK_HACER
%token TK_FPARA
%token TK_MIENTRAS
%token TK_FMIENTRES
%token TK_CORCHETES
%token TK_FLECHA
%token TK_SI
%token TK_FSI

%% /* Grammar rules and actions follow. */

descAlgoritmo: 
    TK_ALGORITMO TK_IDENTIFICADOR TK_PUNTOYCOMA cabeceraAlgoritmo bloqueAlgoritmo TK_FALGORITMO  
asignacion:
	operando TK_DOSPUNTOS_IGUAL expresion
alternativa:
	TK_SI expresion TK_FLECHA instrucciones listaOpciones TK_FSI
listaOpciones:
	TK_CORCHETES expresion TK_FLECHA instrucciones listaOpciones 
	| /*epsilon*/
iteracion:
	itCotaFija
	| itCotaVariable
itCotaVariable:
	TK_MIENTRAS expresion TK_HACER instrucciones TK_FMIENTRAS
itCotaFija:
	TK_PARA TK_IDENTIFICADOR TK_DOSPUNTOS_IGUAL expresion TK_HASTA expresion TK_HACER instrucciones TK_PARA
defAccion:
	TK_ACCION cabeceraAccion bloque TK_FACCION
defFuncion:
	TK_FUNCION cabecerafuncion bloque TK_DEV expresion TK_FFUNCION
cabeceraAccion:
	TK_IDENTIFICADOR TK_PARENTESIS_APERTURA defParForm TK_PARENTESIS_CIERRE TK_PUNTOYCOMA
cabeceraFuncion:
	TK_IDENTIFICADOR TK_PARENTESIS_APERTURA listaDefsVariables TK_PARENTESIS_CIERRE TK_DEV defTipo TK_PUNTOYCOMA
defParForm:
	dParForm TK_PUNTOYCOMA defParForm
	| dParForm
	| /*epsilon*/
dParForm:
	TK_ENT listaId TK_DOSPUNTOS defTipo
	| TK_SAL listaId TK_DOSPUNTOS defTipo
	| TK_ENTSAL listaId TK_DOSPUNTOS defTipo
llamadaAccion:
	TK_IDENTIFICADOR TK_PARENTESIS_APERTURA parametrosReales TK_PARENTESIS_CIERRE
llamadaFuncion:
	TK_IDENTIFICADOR TK_DOSPUNTOS_IGUAL TK_PARENTESIS_APERTURA parametrosReales TK_PARENTESIS_CIERRE
parametrosReales:
	expresion TK_COMA parametros_reales
	| expresion
	| /*epsilon*/
	
%%


int
yylex (void)
{
  int c = getchar ();
  /* Skip white space. */
  while (c == ' ' || c == '\t')
    c = getchar ();
  /* Process numbers. */
  if (c == '.' || isdigit (c))
    {
      ungetc (c, stdin);
      if (scanf ("%lf", &yylval) != 1)
        abort ();
      return NUM;
    }
  /* Return end-of-input. */
  else if (c == EOF)
    return YYEOF;
  /* Return a single char. */
  else
    return c;
}

int
main (void)
{
  return yyparse ();
}

/* Called by yyparse on error. */
void
yyerror (char const *s)
{
  fprintf (stderr, "%s\n", s);
}
