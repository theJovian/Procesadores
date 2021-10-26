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
%token TK_ASIGNACION
%token TK_DOSPUNTOS
%token TK_COMA
%token TK_ENTRADA
%token TK_SALIDA
%token TK_SUMA
%token TK_RESTA
%token TK_MULTIPLICACION
%token TK_DIVISION
%token TK_DIVISION_ENTERA
%token TK_MODULO
%token TK_LITERAL_NUMERICO
%token TK_Y
%token TK_O
%token TK_NO
%token TK_VERDADERO
%token TK_FALSO
%token TK_OPREL
%token TK_PARENTESIS_APERTURA
%token TK_PARENTESIS_CIERRE
%token TK_CORCHETE_APERTURA
%token TK_CORCHETE_CIERRE
%token TK_PUNTO
%token TK_REF


%% /* Grammar rules and actions follow. */

descAlgoritmo: 
    TK_ALGORITMO TK_IDENTIFICADOR TK_PUNTOYCOMA cabeceraAlgoritmo bloqueAlgoritmo TK_FALGORITMO  
    ;
listaCampos:
    TK_IDENTIFICADOR TK_DOSPUNTOS defTipo TK_PUNTOYCOMA listaCampos
    | /*epsiolon*/
    ;
listaDefConstantes:
    TK_IDENTIFICADOR TK_ASIGNACION TK_PUNTOYCOMA listaDefConstantes
    | /*epsilon*/
    ;
listaDefsVariables:
    listaId TK_IDENTIFICADOR TK_COMA listaId
    | TK_IDENTIFICADOR
    ;
defVariablesInteraccion:
    defEntrada
    | defEntrada defSalida
    | defSalida
    ;
defEntrada:
    TK_ENT listaDefsVariables
    ;
defSalida:
    TK_SALIDA listaDefVariables
    ;
expresion:
    expArit
    | expBool
    | llamadaFuncion
    ;
expArit:
    expArit TK_SUMA expArit
    | expArit TK_RESTA expArit
    | expArit TK_MULTIPLICACION expArit
    | expArit TK_DIVISION expArit
    | expArit TK_DIVISION_ENTERA expArit
    | expArit TK_MODULO expArit
    | TK_PARENTESIS_APERTURA expArit TK_PARENTESIS_CIERRE
    | operando
    | TK_RESTA expArit
    | TK_LITERAL_NUMERICO
    ;
expBool:
    expBool TK_Y expBool
    | expBool TK_O expBool
    | TK_NO expBool
    | operando
    | TK_VERDADERO
    | TK_FALSO
    | expresion TK_OPREL expresion
    | TK_PARENTESIS_APERTURA expBool TK_PARENTESIS_CIERRE
    ;
operando:
    TK_IDENTIFICADOR
    | operando TK_PUNTO operando
    | operando TK_CORCHETE_APERTURA expresion TK_CORCHETE_CIERRE
    | operando TK_REF
    ;
instrucciones:
    instruccion TK_PUNTOYCOMA instrucciones
    | instruccion
    ;
instruccion: 
    TK_CONTINUAR
    | asignacion
    | alternativa
    | iteracion
    | llamadaAccion
    ;


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