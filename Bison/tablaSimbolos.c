//#include "tablaSimbolos.h"
#include <stdio.h>
#include <malloc.h>

typedef struct elemento {
	char *nombre;
	int tipo;
	int sid;
	struct elemento *next;
} elemento;

struct elemento *tabla;
struct elemento *finaltabla;
int sid = 1;

void inicializar();
void insertarElementos(char *nombre,int tipo);
void imprimir();

int main(void) {
	inicializar();
	char c[] = "a";
	int tipo = 3;
	char b[] = "b";
	int tipo2 = 8;
	insertarElementos(c,tipo);
	insertarElementos(b,tipo2);
	imprimir();	
}

void inicializar(){
	tabla = NULL;
	finaltabla = tabla;
}

void insertarElementos(char *nombre, int tipo){
	
	if(tabla==NULL) {
		tabla=(elemento*)malloc(sizeof(elemento));
		tabla->next=NULL;
		tabla->nombre=nombre;
		tabla->tipo=tipo;
		tabla->sid=sid;
		finaltabla=tabla;
		
	}  else {
		finaltabla->next=(elemento*)malloc(sizeof(elemento));
		finaltabla=finaltabla->next;
		finaltabla->next=NULL;
		finaltabla->nombre=nombre;
		finaltabla->tipo=tipo;
		finaltabla->sid=sid;
	}
		
	sid ++;
}

void imprimir(){

	elemento *current = tabla;
	while (current != NULL){
		printf("Nombre: %s\n",current->nombre);
		printf("Tipo: %d\n",current->tipo);
		printf("Sid: %d\n\n",current->sid);
		current = current->next;
	}
		
}
