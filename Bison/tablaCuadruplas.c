#include "tablaCuadruplas.h"
#include "tablaSimbolos.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cuadrupla cuadruplas;

void gen(int op1, int op2, int operador, int res);
void imprimirCuadruplas();
void inicializarCuadruplas();

// Funcion para testear la tabla de cuadruplas
/*int main(void) {
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
}*/

void gen(int op1, int op2, int operador, int res) {
	cuadruplas.tabla[cuadruplas.nextQuad][0] = op1;
	cuadruplas.tabla[cuadruplas.nextQuad][1] = op2;
	cuadruplas.tabla[cuadruplas.nextQuad][2] = operador;
	cuadruplas.tabla[cuadruplas.nextQuad][3] = res;
	cuadruplas.nextQuad++;
}

void imprimirCuadruplas(){
	printf("Inicio tabla de cuadruplas\n");
	for (int i = 0; i < cuadruplas.nextQuad; i++)
	{
		elemento *elementoOperando1 = buscarElementoPorSid(cuadruplas.tabla[i][0]);
		elemento *elementoOperando2 = buscarElementoPorSid(cuadruplas.tabla[i][1]);
		int elementoOperador = cuadruplas.tabla[i][2];
		elemento *elementoResultado = buscarElementoPorSid(cuadruplas.tabla[i][3]);

		char *operando1;
		char *operando2;
		char *operador;
		char *resultado;

		if(elementoOperando1 == NULL){
			operando1 = strdup("");
		}else{
			operando1 = strdup(elementoOperando1->nombre);
		}
		if(elementoOperando2 == NULL){
			operando2 = strdup("");
		}else{
			operando2 = strdup(elementoOperando2->nombre);
		}
		if(elementoResultado == NULL){
			resultado = strdup("");
		}else{
			resultado = strdup(elementoResultado->nombre);
		}
		if(elementoOperador == VALOR_DOSPUNTOS_IGUAL){
			operador = strdup(":=");
			printf("%s %s %s %s\n", resultado, operador, operando1, operando2);
		}else{
			switch(elementoOperador){
			case VALOR_SUMA: {
				operador = strdup("+");
				break;
			}
			case VALOR_RESTA: {
				operador = strdup("-");
				break;
			}
			case VALOR_MULTIPLICACION: {
				operador = strdup("*");
				break;
			}
			case VALOR_DIVISION: {
				operador = strdup("/");
				break;
			}
		}
			printf("%s := %s %s %s\n", resultado, operando1, operador, operando2);
		}
	}		
}

void inicializarCuadruplas(){
	cuadruplas.nextQuad = 0;
}

