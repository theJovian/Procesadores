#include "tablaSimbolos.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct elemento *tabla;
struct elemento *finaltabla;
int sid = 1;
int temp = 1;

void inicializar();
void insertarElemento(char *nombre,int tipo);
elemento* buscarElemento(char *nombre);
elemento* buscarElementoPorSid(int sid);
void imprimirSimbolos();
void imprimirElemento(elemento* e);
char* generarNombre();

// Funcion para testear la tabla de simbolos
/*int main(void) {
 	inicializar();
 	char c[] = "casa";
 	int tipo = 3;
 	char b[] = "alfombra";
 	int tipo2 = 8;
 	insertarElemento(c,tipo);
 	insertarElemento(b,tipo2);
 	imprimirSimbolos();	
 	elemento *e = buscarElemento(c);
 	imprimirElemento(e);
 	char d[] = "otro";
 	e = buscarElemento(d);
 	imprimirElemento(e);
 	printf("%s",generarNombre());
 	printf("%s",generarNombre());
 }*/

void inicializar(){
	tabla = NULL;
	finaltabla = tabla;
}

void insertarElemento(char *nombre, int tipo){
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

elemento* buscarElemento(char *nombre) {
	elemento *current = tabla;
	while (current != NULL && strcmp(current->nombre,nombre)) {
		current = current->next;
	}
	return(current);
}

elemento* buscarElementoPorSid(int sid) {
	elemento *current = tabla;
	while (current != NULL && current->sid != sid) {
		current = current->next;
	}
	return(current);
}

void imprimirSimbolos(){
	elemento *current = tabla;
	while (current != NULL){
		printf("Nombre: %s\n",current->nombre);
		printf("Tipo: %d\n",current->tipo);
		printf("Sid: %d\n\n",current->sid);
		current = current->next;
	}		
}

void imprimirElemento(elemento* e) {
	if(e!=NULL) {
		printf("Nombre: %s\n",e->nombre);
		printf("Tipo: %d\n",e->tipo);
		printf("Sid: %d\n\n",e->sid);
	} else {
		printf("No se ha encontrado el elemento\n");
	}
}

char* generarNombre() {
	char *var;
	var = (char*)malloc(sizeof(char)*7);
	sprintf(var,"temp_%d",temp++);
	return(var);
}
