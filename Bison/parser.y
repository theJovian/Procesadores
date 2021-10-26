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
%token TK_COMENTARIO
%token TK_TIPO
%token TK_FTIPO
%token TK_CONST
%token TK_FCONST
%token TK_VAR
%token TK_FVAR
%token TK_TUPLA
%token TK_FTUPLA
%token TK_TABLA
%token TK_CORCHETE_APERTURA
%token TK_CORCHETE_CIERRE
%token TK_PUNTO_Y_PUNTO
%token TK_REF
%token TK_DE
%token TK_TIPOBASE
%token TK_LITERALENTERO
%token TK_LITERALCARACTER
%token TK_ASIGNACION

%% /* Grammar rules and actions follow. */

descAlgoritmo: 
    TK_ALGORITMO TK_IDENTIFICADOR TK_PUNTOYCOMA cabeceraAlgoritmo bloqueAlgoritmo TK_FALGORITMO  
;

cabeceraAlgoritmo:
    defGlobales defAccionesFunciones defVariablesInteraccion TK_COMENTARIO
;

bloqueAlgoritmo:
    bloqueAlgoritmo: bloque TK_COMENTARIO
;

defGlobales: 
    definicionTipo defGlobales
    | definicionConst defGlobales
    | /*epsilon*/
;

defAccionesFunciones:
    defAccion defAccionesFunciones
    | definicionConst defAccionesFunciones
    | /*epsilon*/
;

bloque: 
    declaraciones instrucciones
;

declaraciones: 
    definicionTipo declaraciones
    | definicionConst declaraciones
    | definicionVar declaraciones
    | /*epsilon*/
;

definicionTipo: 
    TK_TIPO listaDefsTipo TK_FTIPO
;

definicionConst:
    TK_CONST listaDefsConstantes TK_FCONST 
;

definicionVar: 
    TK_VAR listaDefsVariables TK_FVAR
;

listaDefsTipo:
    TK_IDENTIFICADOR TK_ASIGNACION defTipo TK_PUNTOYCOMA listaDefsTipo
    | /*epsilon*/
;

defTipo:    
    TK_TUPLA listaCampos TK_FTUPLA
    | TK_TABLA TK_CORCHETE_APERTURA expresionT TK_PUNTO_Y_PUNTO expresionT TK_CORCHETE_CIERRE TK_DE defTipo
    | TK_IDENTIFICADOR
    | expresionT TK_PUNTO_Y_PUNTO expresionT
    | TK_REF defTipo
    | TK_TIPOBASE
;

expresionT: 
    TK_LITERALENTERO
    | TK_LITERALCARACTER
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