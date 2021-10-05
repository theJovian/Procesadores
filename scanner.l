%{
%}

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


ID				[a-z][a-z0-9]*
OPERADOR_SEC 	\+|-
ESPECIAL		'|(|)|=|[|]|\+|\{|\}|,|;|\.|:|\_|">"|"<"
SEPARADOR			" "|"\t"|"\n"


%%
{DR_LITERALBOOLEANO}	printf("Es un booleano: %s\n", yytext );

if|then|begin|end|procedure|function        {
			printf( "A keyword: %s\n", yytext );
			}

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