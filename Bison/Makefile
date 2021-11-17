all: bison scanner compilar ejecutar

bison : parser.y
		bison -v -d parser.y
		
scanner: scanner.l
		flex scanner.l;
		gcc -lfl lex.yy.c;
		
compilar : parser.tab.c lex.yy.c
		gcc -lm -o parser parser.tab.c lex.yy.c

ejecutar : parser
		./parser
		
ejemplo: bison scanner compilar
	./parser sumacomb.txt
