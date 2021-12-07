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


// Funcion que inicializa la tabla de simbolos
void inicializar();

// Funcion que inserta el nombre y tipo del elemento
void insertarElemento(char *nombre,int tipo);

// Funcion que busca un elemento a traves de su nombre en la tabla
elemento* buscarElemento(char *nombre);

// Funcion que busca un elemento a traves de su sid en la tabla
elemento* buscarElementoPorSid(int sid);

// Funcion que imprime la tabla de simbolos
void imprimirSimbolos();

// Funcion que imprime un elemento de la tabla de simbolos
void imprimirElemento(elemento* e);

// Funcion que genera un nombre secuencial para una variable temporal
char* generarNombre();
