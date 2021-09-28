%{
%}

CIFRA			[0-9]
LETRA			[A-Za-z]
IDENTIFICADOR	CIFRA

ID				[a-z][a-z0-9]*
OPERADOR_PRI 	*|/
OPERADOR_SEC 	\+|-
ESPECIAL		'|(|)|=|[|]|\+|\{|\}|,|;|\.|:|\_|">"|"<"
SEPARADOR			" "|"\t"|"\n"
%%

{CIFRA}+    {
			printf( "An integer: %s (%d)\n", yytext,
					atoi( yytext ) );
			}

{CIFRA}+"."{CIFRA}*        {
			printf( "A float: %s (%g)\n", yytext,
					atof( yytext ) );
			}

if|then|begin|end|procedure|function        {
			printf( "A keyword: %s\n", yytext );
			}

{IDENTIFICADOR}        printf( "An identifier: %s\n", yytext );

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