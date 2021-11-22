all: bison flex-scanner simbolos cuadruplas compilar ejecutar

bison : parser.y
		bison -v -d parser.y
		
compilar-scanner: scanner.l
		flex scanner.l;
		gcc -lfl lex.yy.c;
		
flex-scanner:scanner.l
		flex scanner.l;
		
compilar : parser.tab.c lex.yy.c tablaSimbolos.o tablaCuadruplas.o
		gcc parser.tab.c lex.yy.c tablaSimbolos.o tablaCuadruplas.o -lfl -lm

ejecutar : parser
		./parser
		
ejemplo: bison flex-scanner compilar
	./parser sumacomb.txt
	
simbolos: tablaSimbolos.c
		gcc -c tablaSimbolos.c

cuadruplas: tablaCuadruplas.c
		gcc -c tablaCuadruplas.c
