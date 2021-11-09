%{
  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
  #include <ctype.h>
  int yylex (void);
  void yyerror (char const *);
%}


%token TK_PUNTOYCOMA
%token TK_CONTINUAR
%token TK_ALGORITMO
%token TK_IDENTIFICADOR_BOOLEANO
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
%token TK_FMIENTRAS
%token TK_CORCHETES
%token TK_FLECHA
%token TK_SI
%token TK_FSI
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
%token TK_CORCHETE_APERTURA
%token TK_CORCHETE_CIERRE
%token TK_PUNTO
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
%token TK_PUNTO_Y_PUNTO
%token TK_REF
%token TK_DE
%token TK_TIPOBASE
%token TK_LITERALENTERO
%token TK_LITERALCARACTER
%token TK_ASIGNACION

%left TK_SUMA TK_RESTA
%left TK_MULTIPLICACION TK_DIVISION TK_DIVISION_ENTERA TK_MODULO
%nonassoc TK_NO
%left TK_OPREL
%left TK_Y TK_O
%% /* Grammar rules and actions follow. */

descAlgoritmo: 
    TK_ALGORITMO TK_IDENTIFICADOR TK_PUNTOYCOMA cabeceraAlgoritmo bloqueAlgoritmo TK_FALGORITMO  
;
asignacion:
	operandoBooleano TK_DOSPUNTOS_IGUAL expresion
	| operandoAritmetico TK_DOSPUNTOS_IGUAL expresion
;
alternativa:
	TK_SI expresion TK_FLECHA instrucciones listaOpciones TK_FSI
;
listaOpciones:
	TK_CORCHETES expresion TK_FLECHA instrucciones listaOpciones 
	| /*epsilon*/
;
iteracion:
	itCotaFija
	| itCotaVariable
;
itCotaVariable:
	TK_MIENTRAS expresion TK_HACER instrucciones TK_FMIENTRAS
;
itCotaFija:
	TK_PARA TK_IDENTIFICADOR TK_DOSPUNTOS_IGUAL expresion TK_HASTA expresion TK_HACER instrucciones TK_FPARA
;
defAccion:
	TK_ACCION cabeceraAccion bloque TK_FACCION
;
defFuncion:
	TK_FUNCION cabeceraFuncion bloque TK_DEV expresion TK_FFUNCION
;
cabeceraAccion:
	TK_IDENTIFICADOR TK_PARENTESIS_APERTURA defParForm TK_PARENTESIS_CIERRE TK_PUNTOYCOMA
;
cabeceraFuncion:
	TK_IDENTIFICADOR TK_PARENTESIS_APERTURA listaDefsVariables TK_PARENTESIS_CIERRE TK_DEV defTipo TK_PUNTOYCOMA
;
defParForm:
	dParForm TK_PUNTOYCOMA defParForm
	| dParForm
	| /*epsilon*/
;
dParForm:
	TK_ENT listaId TK_DOSPUNTOS defTipo
	| TK_SAL listaId TK_DOSPUNTOS defTipo
	| TK_ENTSAL listaId TK_DOSPUNTOS defTipo
;
llamadaAccion:
	TK_IDENTIFICADOR TK_PARENTESIS_APERTURA parametrosReales TK_PARENTESIS_CIERRE
;
llamadaFuncion:
	TK_IDENTIFICADOR TK_DOSPUNTOS_IGUAL TK_PARENTESIS_APERTURA parametrosReales TK_PARENTESIS_CIERRE
;
parametrosReales:
	expresion TK_COMA parametrosReales
	| expresion
	| /*epsilon*/
    ;
listaCampos:
    TK_IDENTIFICADOR TK_DOSPUNTOS defTipo TK_PUNTOYCOMA listaCampos
    | /*epsiolon*/
    ;
listaDefsConstantes:
    TK_IDENTIFICADOR TK_ASIGNACION TK_PUNTOYCOMA listaDefsConstantes
    | /*epsilon*/
    ;
listaDefsVariables:
    listaId TK_IDENTIFICADOR TK_COMA listaId
    | TK_IDENTIFICADOR
    ;
listaId:
	TK_IDENTIFICADOR TK_COMA listaId
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
    TK_SAL listaDefsVariables
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
    | operandoAritmetico
    | TK_RESTA expArit
    | TK_LITERAL_NUMERICO
    ;
expBool:
    expBool TK_Y expBool
    | expBool TK_O expBool
    | TK_NO expBool
    | operandoBooleano
    | TK_VERDADERO
    | TK_FALSO
    | expresion TK_OPREL expresion
    | TK_PARENTESIS_APERTURA expBool TK_PARENTESIS_CIERRE
    ;
operandoBooleano:
    TK_IDENTIFICADOR_BOOLEANO
    | operandoBooleano TK_PUNTO operandoBooleano
    | operandoBooleano TK_CORCHETE_APERTURA expresion TK_CORCHETE_CIERRE
    | operandoBooleano TK_REF
    ;
operandoAritmetico:
    TK_IDENTIFICADOR
    | operandoAritmetico TK_PUNTO operandoAritmetico
    | operandoAritmetico TK_CORCHETE_APERTURA expresion TK_CORCHETE_CIERRE
    | operandoAritmetico TK_REF
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
    | defFuncion defAccionesFunciones
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
;
%%


int
yylex (void)
{
}

int
main (void)
{
  return 0;
}

/* Called by yyparse on error. */
void
yyerror (char const *s)
{
}
