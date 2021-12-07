all: bison flex-scanner simbolos cuadruplas compilar ejecutar

bison : parser.y
		bison -v -d parser.y
		
compilar-scanner: scanner.l
		flex scanner.l;
		gcc -lfl lex.yy.c;
		
flex-scanner:scanner.l
		flex scanner.l;
		
compilar : parser.tab.c lex.yy.c tablaSimbolos.o tablaCuadruplas.o
		gcc -o parser parser.tab.c lex.yy.c tablaSimbolos.o tablaCuadruplas.o -ll -lm

ejecutar : parser
		./parser
		
intercambio: bison flex-scanner compilar
	./parser intercambio.txt

booleanas: bison flex-scanner compilar
	./parser booleanas.txt

sumacomb: bison flex-scanner compilar
	./parser sumacomb.txt

test: bison flex-scanner compilar
	./parser test.txt	
	
simbolos: tablaSimbolos.c
		gcc -c tablaSimbolos.c

cuadruplas: tablaCuadruplas.c
		gcc -c tablaCuadruplas.c
