#include "tablaCuadruplas.h"
#include <stdio.h>
#include <stdlib.h>

struct cuadrupla cuadruplas;

void gen(int op1, int op2, int operando, int res);
void imprimirCuadruplas();

int main(void) {
	cuadruplas.nextQuad = 0;
	int op1 = 2;
	int op2 = 3;
	int operador = 1;
	int res = 5;
	gen(op1,op2,operador,res);
	op1 = 10;
	op2 = 100;
	operador = 3;
	res = 1000;
	gen(op1,op2,operador,res);
	imprimirCuadruplas();
	
}

void gen(int op1, int op2, int operador, int res) {

	cuadruplas.tabla[cuadruplas.nextQuad][0] = op1;
	cuadruplas.tabla[cuadruplas.nextQuad][1] = op2;
	cuadruplas.tabla[cuadruplas.nextQuad][2] = operador;
	cuadruplas.tabla[cuadruplas.nextQuad][3] = res;
	cuadruplas.nextQuad++;
	
}

void imprimirCuadruplas(){

	for (int i = 0; i < cuadruplas.nextQuad; i++)
	{
		printf("Operando 1: %d\n", cuadruplas.tabla[i][0]);
		printf("Operando 2: %d\n", cuadruplas.tabla[i][1]);
		printf("Operador: %d\n", cuadruplas.tabla[i][2]);
		printf("Resultado: %d\n\n", cuadruplas.tabla[i][3]);
	}
			
}

