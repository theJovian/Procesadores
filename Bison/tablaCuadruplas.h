typedef struct cuadrupla {
	int tabla[100][4];
	int nextQuad;
} cuadrupla;

void gen(int op1, int op2, int operador, int res);
void imprimirCuadruplas();
void inicializarCuadruplas();