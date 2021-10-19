%{
%}

DR_OPERADOR_SEC 	\+|-
DR_CIFRA			[0-9]
DR_LETRA			[A-Za-z]|_
DR_IDENTIFICADOR	{DR_LETRA}({DR_CIFRA}|{DR_LETRA})*
DR_LITERALENTERO	[+\-]?{DR_CIFRA}+([eE][+|-]?{DR_CIFRA}+)?
DR_LITERALREAL		[+\-]?{DR_CIFRA}+(\.{DR_CIFRA}+)?([eE][+\-]?{DR_CIFRA}+)?
DR_LITERALBOOLEANO	(?:i(verdadero|falso))
DR_LITERALCARACTER	\".\"
DR_LITERALCADENA	\'([^']|(\/'))+\'
DR_COMENTARIO		\{([^}]|(\/\}))*\}
DR_TIPODATO			(?i:(booleano|caracter|cadena|entero|real))
DR_TIPOVARIABLE		(?i:(const|fconst|var|fvar))
DR_TIPO				(?i:(tipo))
DR_FTIPO			(?i:(ftipo))
DR_OPERADORLOGICO	(?i:(y|o))
DR_OPERADOR_PRI 	(?i:(\*|\/|div|mod))
DR_ACCION			(?i:(accion))
DR_FACCION			(?i:(faccion))
DR_ALGORITMO		(?i:(algoritmo))
DR_FALGORITMO		(?i:(falgoritmo))
DR_CONST			(?i:(const))
DR_FCONST			(?i:(fconst))
DR_FUNCION			(?i:(funcion))
DR_FFUNCION			(?i:(ffuncion))
DR_MIENTRAS			(?i:(mientras))
DR_FMIENTRAS		(?i:(fmientras))
DR_PARA				(?i:(para))
DR_FPARA			(?i:(fpara))
DR_SI				(?i:(si))
DR_FSI				(?i:(fsi))
DR_TUPLA			(?i:(tupla))
DR_FTUPLA			(?i:(ftupla))
DR_VAR				(?i:(var))
DR_FVAR				(?i:(fvar))
DR_CONTINUAR		(?i:(continuar))
DR_DE				(?i:(de))
DR_DEV				(?i:(dev))
DR_ENT				(?i:(ent))
DR_ENTRADASALIDA	(?i:(e\/s))
DR_HACER			(?i:(hacer))
DR_HASTA			(?i:(hasta))
DR_NO				(?i:(no))
DR_REF				(?i:(ref))
DR_SAL				(?i:(sal))
DR_TABLA			(?i:(tabla))
DR_ENTONCES			->
DR_OPERADORRELACIONAL	<|>|>=|<=
DR_ASIGNACION 		:=
DR_PUNTOYCOMA		;
DR_COMA				,
DR_DOSPUNTOS		:
DR_SINOSI			\[\]

ID					[a-z][a-z0-9]*
SEPARADOR			" "|"\t"|"\n"

%%

{DR_OPERADOR_SEC}		printf( "Es un operador secundario: %s\n", yytext );

{DR_OPERADORLOGICO}		printf( "Es un operador logico: %s\n", yytext );

{DR_PUNTOYCOMA}			printf( "Punto y coma: %s\n", yytext );

{DR_SINOSI}				printf( "Si no Si:  %s\n", yytext );

{DR_ASIGNACION}			printf( "Asignacion: %s\n", yytext );

{DR_COMA}				printf( "coma: %s\n", yytext );

{DR_DOSPUNTOS}			printf( "Dos puntos : %s\n", yytext );

{DR_ENTONCES}			printf( "Entonces: %s\n", yytext );

{DR_OPERADORRELACIONAL}	printf( "Es un operador relacional: %s\n", yytext );

{DR_CONTINUAR}			printf( "An continuar: %s\n", yytext );

{DR_DE}					printf( "An de: %s\n", yytext );

{DR_DEV}				printf( "An dev: %s\n", yytext );

{DR_ENT}				printf( "An ent: %s\n", yytext );

{DR_ENTRADASALIDA}		printf( "An entradasalida: %s\n", yytext );

{DR_HACER}				printf( "An hacer: %s\n", yytext );

{DR_HASTA}				printf( "An hasta: %s\n", yytext );

{DR_NO}					printf( "An no: %s\n", yytext );

{DR_REF}				printf( "An ref: %s\n", yytext );

{DR_SAL}				printf( "An sal: %s\n", yytext );

{DR_TABLA}				printf( "An tabla: %s\n", yytext );

{DR_ACCION}      		printf( "An accion: %s\n", yytext );

{DR_FACCION}      		printf( "An faccion: %s\n", yytext );

{DR_ALGORITMO}      	printf( "An algoritmo: %s\n", yytext );

{DR_FALGORITMO}      	printf( "An falgoritmo: %s\n", yytext );

{DR_CONST}      		printf( "An const: %s\n", yytext );

{DR_FCONST}      		printf( "An fconst: %s\n", yytext );

{DR_FUNCION}      		printf( "An funcion: %s\n", yytext );

{DR_FFUNCION}      		printf( "An ffuncion: %s\n", yytext );

{DR_MIENTRAS}      		printf( "An mientras: %s\n", yytext );

{DR_FMIENTRAS}      	printf( "An fmientras: %s\n", yytext );

{DR_PARA}      			printf( "An para: %s\n", yytext );

{DR_FPARA}      		printf( "An fpara: %s\n", yytext );

{DR_SI}      			printf( "An si: %s\n", yytext );

{DR_FSI}      			printf( "An fsi: %s\n", yytext );

{DR_TUPLA}      		printf( "An tupla: %s\n", yytext );

{DR_FTUPLA}      		printf( "An ftupla: %s\n", yytext );

{DR_VAR}      			printf( "An var: %s\n", yytext );

{DR_FVAR}      			printf( "An fvar: %s\n", yytext );

{DR_LITERALBOOLEANO}	printf("Es un booleano: %s\n", yytext );

{DR_OPERADOR_PRI}		printf("Es un operador primario: %s\n", yytext );

{DR_TIPODATO}			printf("Es un tipo de dato: %s\n", yytext );

{DR_IDENTIFICADOR}      printf( "An identifier: %s\n", yytext );

{DR_LITERALENTERO}		printf("Es un literal entero: %s\n", yytext );

{DR_LITERALREAL}		printf("Es un literal real: %s\n", yytext );

{DR_LITERALCARACTER}	printf("Es un literal caracter: %s\n", yytext );

{DR_LITERALCADENA}		printf("Es un literal cadena: %s\n", yytext );

{DR_COMENTARIO}			printf("Es un comentario: %s\n", yytext );






%%

int main( int argc, char **argv )
	{
	++argv, --argc;  /* skip over program name */
	if ( argc > 0 )
			yyin = fopen( argv[0], "r" );
	else
			yyin = stdin;

	yylex();
	}