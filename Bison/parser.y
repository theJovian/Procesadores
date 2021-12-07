%{
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
%}


%union type{
	char *paraCadena;
	int paraEntero;
	float paraFloat;
	struct paraBooleano{
		int * true;
		int * false;
	} paraBooleanos;
}

///Definicion de Tokens

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
%token TK_IGUAL
%token TK_LITERAL_CADENA

///Definicion de prioridades

%left TK_SUMA TK_RESTA
%left TK_MULTIPLICACION TK_DIVISION TK_DIVISION_ENTERA TK_MODULO
%nonassoc TK_NO
%nonassoc TK_OPREL
%left TK_Y TK_O

///Definicion de tipos

%type<paraEntero> listaId
%type<paraEntero> listaIdBooleanos
%type<paraEntero> defTipo
%type<paraEntero> TK_TIPOBASE
%type<paraEntero>TK_DOSPUNTOS_IGUAL
%type<paraCadena>TK_IDENTIFICADOR
%type<paraCadena>TK_IDENTIFICADOR_BOOLEANO
%type<paraCadena>operandoAritmetico
%type<paraCadena>operandoBooleano
%type<paraCadena>expArit
%type<paraCadena>expresion
%type<paraEntero>TK_SUMA
%type<paraEntero>TK_RESTA
%type<paraEntero>TK_MULTIPLICACION
%type<paraEntero>TK_DIVISION
%type<paraEntero>TK_DIVISION_ENTERA
%type<paraEntero>TK_MODULO
%type<paraCadena>TK_LITERALENTERO

%% /* Grammar rules and actions follow. */

descAlgoritmo: 
    TK_ALGORITMO TK_IDENTIFICADOR TK_PUNTOYCOMA cabeceraAlgoritmo bloqueAlgoritmo TK_FALGORITMO{
        printf("Final de descAlgoritmo\n");
    }
;
//dudas sobre el uso de expresiones booleanas y expresiones aritmeticas
asignacion:
	operandoBooleano TK_DOSPUNTOS_IGUAL expresion
    {
        printf("Asignacion booleana\n");
        struct elemento *elementoOperando1 = buscarElemento($3);
        struct elemento *elementoOperando2 = buscarElemento($1); 
        int operador = $2;
        printf("Error 1\n");
        int operando1 = elementoOperando1->sid;
        int operando2 = VALOR_VACIO;
        printf("Error 2\n");
        int resultado = elementoOperando2->sid;
        gen(operando1, operando2, operador, resultado);
        printf("Error 3\n");
    }
	| operandoAritmetico TK_DOSPUNTOS_IGUAL expresion
    {
        printf("Asignacion aritmetica\n");
        elemento *elementoOperando1;
        elementoOperando1 = buscarElemento($3);
        elemento *elementoResultado;
        elementoResultado = buscarElemento($1);
        int operador = $2;
        int operando1 = elementoOperando1->sid;
        int operando2 = VALOR_VACIO;
        int resultado = elementoResultado->sid;
        gen(operando1, operando2, operador, resultado);
    }
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
    TK_IDENTIFICADOR TK_IGUAL TK_LITERALENTERO TK_PUNTOYCOMA listaDefsConstantes
    | TK_IDENTIFICADOR TK_IGUAL TK_LITERALCARACTER TK_PUNTOYCOMA listaDefsConstantes
    | TK_IDENTIFICADOR TK_IGUAL TK_VERDADERO TK_PUNTOYCOMA listaDefsConstantes
    | TK_IDENTIFICADOR TK_IGUAL TK_FALSO TK_PUNTOYCOMA listaDefsConstantes
    | TK_IDENTIFICADOR TK_IGUAL TK_LITERAL_CADENA TK_PUNTOYCOMA listaDefsConstantes
    | TK_IDENTIFICADOR TK_IGUAL TK_LITERAL_NUMERICO TK_PUNTOYCOMA listaDefsConstantes
    | /*epsilon*/
    ;
listaDefsVariables:
    listaId TK_PUNTOYCOMA listaDefsVariables {printf("reduce de listaDefsVariables\n");}
    | listaIdBooleanos TK_PUNTOYCOMA listaDefsVariables {printf("reduce de listaDefsVariables\n");}
    | /*epsilon*/
    ;
listaId:
    TK_IDENTIFICADOR TK_DOSPUNTOS defTipo
    {
        $$ = $3;
        if($3 == TIPO_BOOLEANO){
            printf("Error, las variables booleanas no tiene un formato correcto. Prueba con b_nombreDeLaVariable\n");
        }
        insertarElemento($1, $3);
    }
	| TK_IDENTIFICADOR TK_COMA listaId
    {
        $$ = $3;
        insertarElemento($1, $3);
    }
	;
listaIdBooleanos:
    TK_IDENTIFICADOR_BOOLEANO TK_DOSPUNTOS defTipo
    {
        $$ = $3;
        if($3 != TIPO_BOOLEANO){
            printf("Error, las variables estan escritas en formato de booleanos. Prueba a cambiar el tipo o cambiar a un formato diferente de b_nombreDeLaVariableBooleana\n");
        }
        insertarElemento($1, $3);
    }
	| TK_IDENTIFICADOR_BOOLEANO TK_COMA listaIdBooleanos
    {
        $$ = $3;
        insertarElemento($1, $3);
    }
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
expBool:
    expBool TK_Y expBool
    | expBool TK_O expBool
    | TK_NO expBool
    | operandoBooleano
    | TK_VERDADERO
    | TK_FALSO
    | expresion TK_OPREL expresion
    | TK_PARENTESIS_APERTURA expBool TK_PARENTESIS_CIERRE
    {
        printf("expBool -> ( expbool )\n");
        $$ = $2;
    }
    ;
expresion:
    expArit
    | expBool
    | llamadaFuncion
    ;
expArit:
    expArit TK_SUMA expArit
    {
        char *nombreNuevaVariableResultado = generarNombre();
        elemento *elementoOperando1 = buscarElemento($1);
        elemento *elementoOperando2 = buscarElemento($3);
        int tipoNuevaVariableResultado = elementoOperando1->tipo;
        insertarElemento(nombreNuevaVariableResultado, tipoNuevaVariableResultado);
        struct elemento *elementoResultado = buscarElemento(nombreNuevaVariableResultado);  
        int operando1 = elementoOperando1->sid;
        int operando2 = elementoOperando2->sid;
        int resultado = elementoResultado->sid;
        int operador = $2;
        gen(operando1, operando2, operador,  resultado);
        $$ = strdup(nombreNuevaVariableResultado);
    }
    | expArit TK_RESTA expArit
    {
        char *nombreNuevaVariableResultado = generarNombre();
        elemento *elementoOperando1 = buscarElemento($1);
        elemento *elementoOperando2 = buscarElemento($3);
        int tipoNuevaVariableResultado = elementoOperando1->tipo;
        insertarElemento(nombreNuevaVariableResultado, tipoNuevaVariableResultado);
        struct elemento *elementoResultado = buscarElemento(nombreNuevaVariableResultado);  
        int operando1 = elementoOperando1->sid;
        int operando2 = elementoOperando2->sid;
        int resultado = elementoResultado->sid;
        int operador = $2;
        gen(operando1, operando2, operador,  resultado);
        $$ = strdup(nombreNuevaVariableResultado);
    }
    | expArit TK_MULTIPLICACION expArit
    {
        char *nombreNuevaVariableResultado = generarNombre();
        elemento *elementoOperando1 = buscarElemento($1);
        elemento *elementoOperando2 = buscarElemento($3);
        int tipoNuevaVariableResultado = elementoOperando1->tipo;
        insertarElemento(nombreNuevaVariableResultado, tipoNuevaVariableResultado);
        struct elemento *elementoResultado = buscarElemento(nombreNuevaVariableResultado);  
        int operando1 = elementoOperando1->sid;
        int operando2 = elementoOperando2->sid;
        int resultado = elementoResultado->sid;
        int operador = $2;
        gen(operando1, operando2, operador,  resultado);
        $$ = strdup(nombreNuevaVariableResultado);
    }
    | expArit TK_DIVISION expArit
    {
        char *nombreNuevaVariableResultado = generarNombre();
        elemento *elementoOperando1 = buscarElemento($1);
        elemento *elementoOperando2 = buscarElemento($3);
        int tipoNuevaVariableResultado = elementoOperando1->tipo;
        insertarElemento(nombreNuevaVariableResultado, tipoNuevaVariableResultado);
        struct elemento *elementoResultado = buscarElemento(nombreNuevaVariableResultado);  
        int operando1 = elementoOperando1->sid;
        int operando2 = elementoOperando2->sid;
        int resultado = elementoResultado->sid;
        int operador = $2;
        gen(operando1, operando2, operador,  resultado);
        $$ = strdup(nombreNuevaVariableResultado);
    }
    | expArit TK_DIVISION_ENTERA expArit
    {
        char *nombreNuevaVariableResultado = generarNombre();
        elemento *elementoOperando1 = buscarElemento($1);
        elemento *elementoOperando2 = buscarElemento($3);
        int tipoNuevaVariableResultado = elementoOperando1->tipo;
        insertarElemento(nombreNuevaVariableResultado, tipoNuevaVariableResultado);
        struct elemento *elementoResultado = buscarElemento(nombreNuevaVariableResultado);  
        int operando1 = elementoOperando1->sid;
        int operando2 = elementoOperando2->sid;
        int resultado = elementoResultado->sid;
        int operador = $2;
        gen(operando1, operando2, operador,  resultado);
        $$ = strdup(nombreNuevaVariableResultado);
    }
    | expArit TK_MODULO expArit {
        char *nombreNuevaVariableResultado = generarNombre();
        elemento *elementoOperando1 = buscarElemento($1);
        elemento *elementoOperando2 = buscarElemento($3);
        int tipoNuevaVariableResultado = elementoOperando1->tipo;
        insertarElemento(nombreNuevaVariableResultado, tipoNuevaVariableResultado);
        struct elemento *elementoResultado = buscarElemento(nombreNuevaVariableResultado);  
        int operando1 = elementoOperando1->sid;
        int operando2 = elementoOperando2->sid;
        int resultado = elementoResultado->sid;
        int operador = $2;
        gen(operando1, operando2, operador,  resultado);
        $$ = strdup(nombreNuevaVariableResultado);
    }
    | TK_PARENTESIS_APERTURA expArit TK_PARENTESIS_CIERRE  
    {
        $$ = $2;
    }
    | operandoAritmetico
    | TK_RESTA expArit
    {
        $$ = $2;
    }
    | TK_SUMA expArit
    {
        $$ = $2;
    }
    | TK_LITERAL_NUMERICO
    | TK_LITERALENTERO
    {
        insertarElemento($1, TIPO_ENTERO);
    }
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
    bloque TK_COMENTARIO{
        printf("Bloque algoritmo -> bloque TK_COMENTARIO\n");
    }
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
    TK_IDENTIFICADOR TK_IGUAL defTipo TK_PUNTOYCOMA listaDefsTipo
    | /*epsilon*/
;
defTipo:    
    TK_TUPLA listaCampos TK_FTUPLA
    | TK_TABLA TK_CORCHETE_APERTURA expresionT TK_PUNTO_Y_PUNTO expresionT TK_CORCHETE_CIERRE TK_DE defTipo
    | TK_IDENTIFICADOR
    | expresionT TK_PUNTO_Y_PUNTO expresionT
    | TK_REF defTipo
    {
        $$=$2;
    }
    | TK_TIPOBASE
;
expresionT: 
    TK_LITERALENTERO
    | TK_LITERALCARACTER
;
%%

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
