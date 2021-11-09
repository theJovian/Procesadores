%{
#include "parser.tab.h"
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

{DR_OPERADOR_SEC}		{
							printf( "Es un operador secundario: %s\n", yytext );
							if(strcmp(yytext,"+")) {
								return(TK_SUMA);
							} else {
								return(TK_RESTA);
							}
						}

{DR_OPERADORLOGICO}		{
							printf( "Es un operador logico: %s\n", yytext );
							if(strcmp(yytext,"y")) {
								return(TK_Y);
							} else {
								return(TK_O);
							}
						}

{DR_PUNTOYCOMA}			{
							printf( "Punto y coma: %s\n", yytext );
							return(TK_PUNTOYCOMA);
						}

{DR_SINOSI}				{
							printf( "Si no Si:  %s\n", yytext );
							return(TK_CORCHETES);
						}

{DR_ASIGNACION}			{
							printf( "Asignacion: %s\n", yytext );
							return(TK_ASIGNACION);
						}

{DR_COMA}				{
							printf( "coma: %s\n", yytext );
							return(TK_COMA);
						}

{DR_DOSPUNTOS}			{
							printf( "Dos puntos : %s\n", yytext );
							return(TK_DOSPUNTOS);
						}

{DR_ENTONCES}			{	
							printf( "Entonces: %s\n", yytext );
							return(TK_FLECHA);
						}

{DR_OPERADORRELACIONAL}	{
							printf( "Es un operador relacional: %s\n", yytext );
							return(TK_OPREL);
						}

{DR_CONTINUAR}			printf( "An continuar: %s\n", yytext );

{DR_DE}					{
							printf( "An de: %s\n", yytext );
							return(TK_DE);
						}

{DR_DEV}				{
							printf( "An dev: %s\n", yytext );
							return(TK_DEV);
						}

{DR_ENT}				{
							printf( "An ent: %s\n", yytext );
							return(TK_ENT);
						}

{DR_ENTRADASALIDA}		{
							printf( "An entradasalida: %s\n", yytext );
							return(TK_ENTSAL);
						}

{DR_HACER}				{
							printf( "An hacer: %s\n", yytext );
							return(TK_HACER);
						}

{DR_HASTA}				{
							printf( "An hasta: %s\n", yytext );
							return(TK_HASTA);
						}

{DR_NO}					{
							printf( "An no: %s\n", yytext );
							return(TK_NO);
						}

{DR_REF}				{
							printf( "An ref: %s\n", yytext );
							return(TK_REF);
						}

{DR_SAL}				{
							printf( "An sal: %s\n", yytext );
							return(TK_SAL);
						}

{DR_TABLA}				{
							printf( "An tabla: %s\n", yytext );
							return(TK_TABLA);
						}

{DR_ACCION}      		{
							printf( "An accion: %s\n", yytext );
							return(TK_ACCION);
						}

{DR_FACCION}      	{
						printf( "An faccion: %s\n", yytext );
						return(TK_ACCION)
					}

{DR_ALGORITMO}	{
					printf( "An algoritmo: %s\n", yytext );
					return(TK_ALGORITMO);
				}

{DR_FALGORITMO}	{
					printf( "An falgoritmo: %s\n", yytext );
					return(TK_FLALGORITMO);
				}

{DR_CONST}	{
					printf( "An const: %s\n", yytext );
					return(TK_CONST);
				}

{DR_FCONST}	{
					printf( "An fconst: %s\n", yytext );
					return(TK_FCONST);
				}

{DR_FUNCION}	{
					printf( "An funcion: %s\n", yytext );
					return(TK_FUNCION);
				}

{DR_FFUNCION}	{
					printf( "An ffuncion: %s\n", yytext );
					return(TK_FFUNCION);
				}

{DR_MIENTRAS}	{
					printf( "An mientras: %s\n", yytext );
					return(TK_MIENTRAS);
				}

{DR_FMIENTRAS}	{
					printf( "An fmientras: %s\n", yytext );
					return(TK_FMIENTRAS);
				}

{DR_PARA} 	{
					printf( "An para: %s\n", yytext );
					return(TK_PARA);
				}

{DR_FPARA}	{
					printf( "An fpara: %s\n", yytext );
					return(TK_FPARA);
				}

{DR_SI} 	{
					printf( "An si: %s\n", yytext );
					return(TK_SI);
				}

{DR_FSI} 	{
					printf( "An fsi: %s\n", yytext );
					return(TK_FSI);
				}

{DR_TUPLA}	{
					printf( "An tupla: %s\n", yytext );
					return(TK_TUPLA);
				}

{DR_FTUPLA}	{
					printf( "An ftupla: %s\n", yytext );
					return(TK_FTUPLA);
				}

{DR_VAR} 	{
					printf( "An var: %s\n", yytext );
					return(TK_VAR);
				}

{DR_FVAR} 	{
					printf( "An fvar: %s\n", yytext );
					return(TK_FVAR);
				}

{DR_LITERALBOOLEANO}	{
					printf("Es un booleano: %s\n", yytext );
					return(TK)
				}

{DR_OPERADO}	{
					printf("Es un operador primario: %s\n", yytext );
				}

{DR_TIPO}	{
					printf("Es un tipo de dato: %s\n", yytext );
				}

{DR_IDENTIFICADOR}	  {
					printf( "An identifier: %s\n", yytext );
				}

{DR_LITERALENTERO}	{
					printf("Es un literal entero: %s\n", yytext );
					return(TK_ENTERO);
					
				}

{DR_LITERALREAL}	{
					printf("Es un literal real: %s\n", yytext );
					return(TK_NUMERICO);
				}

{DR_LITERALCARACTER}	{
					printf("Es un literal caracter: %s\n", yytext );
					return(TK_LITERALCARACTER);
				}

{DR_LITERALCADENA}	{
					printf("Es un literal cadena: %s\n", yytext );
					return(TK_LITERALCADENA);
				}

{DR_COMENTARIO}	{
					printf("Es un comentario: %s\n", yytext );
					return(TK_COMENTARIO);
				}
