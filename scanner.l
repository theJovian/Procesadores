%{
#include <math.h>
%}

DIGIT		[0-9]
ID			[a-z][a-z0-9]*
ESPECIAL	"'"|"/"|"("|")"|"="|"["|"]"|"+"|"*"|"{"|"}"|","|";"|"."|":"|"-"|"_"|">"|"<"
VACIO		" "|"\t"|"\n"
%%

{DIGIT}+    {
			printf( "An integer: %s (%d)\n", yytext,
					atoi( yytext ) );
			}

{DIGIT}+"."{DIGIT}*        {
			printf( "A float: %s (%g)\n", yytext,
					atof( yytext ) );
			}

if|then|begin|end|procedure|function        {
			printf( "A keyword: %s\n", yytext );
			}

{ID}        printf( "An identifier: %s\n", yytext );

{ESPECIAL}	printf("Especial xd");

{VACIO}		/*me lo salto*/

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
