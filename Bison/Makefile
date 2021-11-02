all: bison compilar ejecutar

bison : parser.y
		bison -v -d parser.y

compilar : parser.tab.c
		gcc -lm -o parser parser.tab.c

ejecutar : parser
		./parser
