%{
%}

DR_CIFRA			[0-9]
DR_LETRA			[A-Za-z]|_
DR_IDENTIFICADOR	{DR_LETRA}({DR_CIFRA}|{DR_LETRA})*
DR_LITERALENTERO	[+|-]?{DR_CIFRA}+([e|E][+|-]?{DR_CIFRA}+)?
DR_LITERALREAL		[+|-]?{DR_CIFRA}+(\.{DR_CIFRA}+)?([e|E][+|-]?{DR_CIFRA}+)?
DR_LITERALBOOLEANO	verdadero|falso
DR_LITERALCARACTER	\".\"
DR_LITERALCADENA	\'([^']|(\/'))+\'

ID				[a-z][a-z0-9]*
OPERADOR_PRI 	*|/
OPERADOR_SEC 	\+|-
ESPECIAL		'|(|)|=|[|]|\+|\{|\}|,|;|\.|:|\_|">"|"<"
SEPARADOR			" "|"\t"|"\n"
%%
{DR_LITERALBOOLEANO}	printf("Es un booleano: %s\n", yytext );

if|then|begin|end|procedure|function        {
			printf( "A keyword: %s\n", yytext );
			}

{DR_IDENTIFICADOR}      printf( "An identifier: %s\n", yytext );

{DR_LITERALENTERO}		printf("Es un literal entero: %s\n", yytext );

{DR_LITERALREAL}		printf("Es un literal real: %s\n", yytext );

{DR_LITERALCARACTER}	printf("Es un literal caracter: %s\n", yytext );

{DR_LITERALCADENA}		printf("Es un literal cadena: %s\n", yytext );




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