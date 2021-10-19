all: bison compilar ejecutar

bison : ejemplo.y
		bison ejemplo.y

compilar : ejemplo.tab.c
		gcc -lm -o ejemplo ejemplo.tab.c

ejecutar : ejemplo
		./ejemplo