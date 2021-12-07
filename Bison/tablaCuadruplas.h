typedef struct cuadrupla {
	int tabla[100][4];
	int nextQuad;
} cuadrupla;

// Funcion que genera un elemento de la tabla de cuadruplas
void gen(int op1, int op2, int operador, int res);

// Funcion que imprime por completo la tabla de cuadruplas
void imprimirCuadruplas();

// Funcion para inicializar la tabla de cuadruplas
void inicializarCuadruplas();
