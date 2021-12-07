typedef struct elemento {
	char *nombre;
	int tipo;
	int sid;
	struct elemento *next;
} elemento;

#define VALOR_DOSPUNTOS_IGUAL 1
#define VALOR_SUMA 2
#define VALOR_RESTA 3
#define VALOR_MULTIPLICACION 4
#define VALOR_DIVISION 5
#define VALOR_DIVISION_ENTERA 6
#define VALOR_MODULO 7

#define TIPO_ENTERO 1
#define TIPO_REAL 2
#define TIPO_STRING 3
#define TIPO_BOOLEANO 4

#define VALOR_VACIO -1

void inicializar();
void insertarElemento(char *nombre,int tipo);
elemento* buscarElemento(char *nombre);
elemento* buscarElementoPorSid(int sid);
void imprimirSimbolos();
void imprimirElemento(elemento* e);
char* generarNombre();
