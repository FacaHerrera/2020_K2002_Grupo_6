#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ERROR 0
#define OK 1

typedef struct nodo{
	char dato;
	struct nodo *siguiente;
}Nodo;

struct recorrido{
	int estado;
	int pila;
};

typedef Nodo *punteroNodo;
typedef Nodo *Pila;

void mostrar_menu(void);
int verificar_txt(char *);
int escanear_archivo(char *, FILE*);
void guardar(int, char *, FILE*);
int automata(char *);
int mostrar_consigna(FILE*);
void escribirPila(Pila *, char);
char leerPila(Pila *);

int main() {
	FILE *archivo;
	archivo = fopen("RESULTADOS.txt", "wt");
	if (mostrar_consigna(archivo)){
		printf("\n\nProceso satisfactorio.\n\n");
	}
	else{
		printf("\n\nEl Proceso no se pudo realizar porque el archivo no existe.\n");
	}
	fclose(archivo);
	return 0;
}

int mostrar_consigna(FILE * archivoSalida){
	char archivo[20];
	printf("Trabajo Practico Nro 2 - Automata Finito de Pila para Constantes Enteras Decimales\n\nIngrese el nombre del archivo a escanear: ");
	scanf("%s", archivo);
	verificar_txt(archivo);
	return escanear_archivo(archivo, archivoSalida);
}

int escanear_archivo(char *archivo, FILE* archivoSalida){
	FILE *datos;
	datos=fopen(archivo, "rt");
	char caracter, cadena[50];
	int len;
	if (datos==NULL) return ERROR;
	do{	
		strcpy(cadena, "");
		len = 0;
		caracter = fgetc(datos);
		while(caracter != ',' && caracter != EOF){
			cadena[len] = caracter;
			caracter = fgetc(datos);
			len++;
		}
		cadena[len] = '\0';
		guardar(automata(cadena), cadena, archivoSalida);
	}while(caracter!=EOF);
	fclose(datos);
	return OK;	
}

int verificar_txt(char *archivo){
	if (strstr(archivo, ".txt") == NULL){
		strcat(archivo, ".txt");
	}
}

int automata(char *cadena){
	int len = 0, inicio = 0, estado = 0, columna = 0;
	struct recorrido default0 = {3,0}, default1 = {3,1}, estado00 = {0,0}, estado01 = {0,1}, estado10 = {1,0}, estado11 = {1,1}, estado02 = {0,2}, estado03 = {0,3}, estado24 = {2,4};
	struct recorrido automata[2][4][6]={{{default0,estado10,default0,estado02,default0,default0},{estado10,estado10,estado00,default0,default0,default0},{default0,default0,estado00,default0,default0,default0},{default0,default0,default0,default0,default0,default0}},
							  			{{default1,estado11,default1,estado03,default1,default1},{estado11,estado11,estado01,default1,estado24,default1},{default1,default1,estado01,default1,estado24,default1},{default1,default1,default1,default1,default1,default1}}};
	Pila pila = NULL;
	escribirPila(&pila,'$');
	while(cadena[len] != '\0'){
		switch(leerPila(&pila)){
			case '$':
				inicio = 0;
				break;
			case 'R':
				inicio = 1;
				break;
		}
		if(cadena[len] == '0'){
			columna = 0;
		}
		else if(cadena[len]>='1' && cadena[len]<='9'){
			columna = 1;
		}
		else if(cadena[len]=='+' || cadena[len]=='-' || cadena[len]=='*' || cadena[len]=='/'){
			columna = 2;
		}
		else if(cadena[len]=='('){
			columna = 3;
		}
		else if(cadena[len]==')'){
			columna = 4;
		}
		else{
			columna = 5;
		}
		estado = automata[inicio][estado][columna].estado;
		switch (automata[inicio][estado][columna].pila){
			case 0:
				escribirPila(&pila, '$');
			break;
			case 1:
				escribirPila(&pila, 'R');
			break;
			case 2:
				escribirPila(&pila, '$');
				escribirPila(&pila, 'R');
			break;
			case 3:
				escribirPila(&pila, 'R');
				escribirPila(&pila, 'R');
			break;
		}
		len++;
	}
	if (leerPila(&pila) == '$'){
		free(pila);
		return estado;
	}
	else{
		return ERROR;
	}
}

void guardar(int estado, char *cadena, FILE* archivoSalida){
	fputs(cadena, archivoSalida);
	switch (estado){
		case 0:
		case 3:
			fputs(" - EXPRESION INCORRECTA\n", archivoSalida);
			break;	
		default:
			fputs(" - EXPRESION CORRECTA\n", archivoSalida);
	}
}

void escribirPila(Pila *pila, char valor){
	punteroNodo nodo;

	nodo = (Nodo *)malloc(sizeof(Nodo));
	nodo->dato = valor;
	nodo->siguiente = *pila;
	*pila = nodo;
}

char leerPila(Pila *pila){
	punteroNodo nodo;
	char valor;
	nodo = *pila;
	if (!nodo) return ERROR;
	*pila = nodo->siguiente;
	valor = nodo->dato;
	free(nodo);
	return valor;
}