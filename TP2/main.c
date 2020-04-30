#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ERROR 0
#define OK 1

typedef struct{
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
int escanear_archivo(char *);
int guardar(int);
int automata(char *, char *);
int mostrar_consigna(char *);
void escribirPila(Pila *, char);
char leerPila(Pila *);
void evaluaError(int, int, int, int, int, char *, char *);

int main() {
	char condicion = 'S', error[50];
	strcpy(error, "");
	while (condicion == 'S' || condicion == 's'){
		system("CLS");
		if (mostrar_consigna(error)){
			printf("\n\nLa expresion es CORECTA\n\n");
		}
		else{
			printf("%s\n", error);
			printf("\nLa expresion es INCORRECTA\n");
		}
		printf("\nDesea ingresar una nueva expresion? (S para si | CUALQUIERO OTRA para no)\n\n");
		fflush(stdin);
		scanf("%c", &condicion);
	}	
	return 0;
}

int mostrar_consigna(char *error){
	char expresion[120];//70 son para el detalle del error
	printf("Trabajo Practico Nro 2 - Automata Finito de Pila para Constantes Enteras Decimales\n\nIngrese la expresion a escanear: \n\n");
	fflush(stdin);
	scanf("%49[^\n]", expresion);
	
	return guardar(automata(expresion, error));
}

int automata(char *expresion, char *error){
	char tipoError[70];
	int len = 0, inicio = 0, estado = 0, estadoAnterior = 0,columna = 0;
	struct recorrido default0 = {3,0}, default1 = {3,1}, estado00 = {0,0}, estado01 = {0,1}, estado10 = {1,0}, estado11 = {1,1}, estado02 = {0,2}, estado03 = {0,3}, estado24 = {2,4};
	struct recorrido automata[2][4][6]={{{default0,estado10,default0,estado02,default0,default0},{estado10,estado10,estado00,default0,default0,default0},{default0,default0,estado00,default0,default0,default0},{default0,default0,default0,default0,default0,default0}},
							  			{{default1,estado11,default1,estado03,default1,default1},{estado11,estado11,estado01,default1,estado24,default1},{default1,default1,estado01,default1,estado24,default1},{default1,default1,default1,default1,default1,default1}}};
	Pila pila = NULL;
	escribirPila(&pila,'$');
	while(expresion[len] != '\0'){
		if (expresion[len]==' ') {
			if (error[len-1] == '^' || error[len-1] == '-'){
				error[len]='-';
			}
			else{
				error[len]=' ';
			}
			len++;
			continue;
		}
		evaluaError(len, columna, estado, estadoAnterior, inicio, tipoError, error);
		estadoAnterior = estado;
		if(expresion[len] == '0'){
			columna = 0;
		}
		else if(expresion[len]>='1' && expresion[len]<='9'){
			columna = 1;
		}
		else if(expresion[len]=='+' || expresion[len]=='-' || expresion[len]=='*' || expresion[len]=='/'){
			columna = 2;
		}
		else if(expresion[len]=='('){
			columna = 3;
		}
		else if(expresion[len]==')'){
			columna = 4;
		}
		else{
			columna = 5;
		}
		estado = automata[inicio][estado][columna].estado;
		switch(leerPila(&pila)){
			case '$':
				inicio = 0;
				break;
			case 'R':
				inicio = 1;
				break;
		}
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
	evaluaError(len, columna, estado, estadoAnterior, inicio, tipoError, error);
	error[len]='\0';
	
	if (leerPila(&pila) == '$'){
		free(pila);
		strcat(error, tipoError);
		return estado;
	}
	else{
		strcpy(tipoError,"^-Se esperaba un ')' (Parentesis de cierre)");
		strcat(error, tipoError);
		return ERROR;
	}
}

int guardar(int estado){
	switch (estado){
		case 1:
		case 2:
			return OK;
			break;	
		default:
			return ERROR;
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

void evaluaError (int len, int columna, int estado, int estadoAnterior, int inicio, char *tipoError, char *error){
	if (estado == 3 && ((error[len-2] != '^' && error[len-2] != '-') || len == 0 || error[len-2] == ' ')){
		error[len-1]='^';
		switch(columna){
			case 0:
				if (estadoAnterior){
					strcpy(tipoError,"Se esperaba un operador.");
				}
				else{
					strcpy(tipoError,"No se puede comenzar con 0.");
				}
			break;
			case 1:
				if (inicio){
					strcpy(tipoError,"Se esperaba un operador o un ')' (Parentesis de cierre).");
				}
				else{
					strcpy(tipoError,"Se esperaba un operador.");
				}
			break;
			case 2:
				strcpy(tipoError,"Se esperaba un numero o un '(' (Parentesis de apertura).");

			break;
			case 3:
				if (estadoAnterior == 1){
					if (inicio){
						strcpy(tipoError,"Se esperaba un operador o un numero o un ')' (Parentesis de cierre).");
					}
					else{
						strcpy(tipoError,"Se esperaba un operador o un numero.");
					}
				}
				else if (estadoAnterior == 2){
					if (inicio){
						strcpy(tipoError,"Se esperaba un operador o un ')' (Parentesis de cierre).");
					}
					else{
						strcpy(tipoError,"Se esperaba un operador o un numero.");
					}
				}
			break;
			case 4:
				if (inicio){
					strcpy(tipoError,"Se esperaba un numero o un '(' (Parentesis de apertura).");
				}
				else{
					if (estadoAnterior == 0){
						strcpy(tipoError,"Se esperaba un numero o un '(' (Parentesis de apertura).");
					}
					else if (estadoAnterior == 1){
						strcpy(tipoError,"Se esperaba un operador o un numero.");
					}
					else if (estadoAnterior == 2){
						strcpy(tipoError,"Se esperaba un operador.");
					}
				}
			break;
			case 5:
				strcpy(tipoError,"Caracter no valido.");
			break;
		}
	}	
	else if (error[len-2] == '^' || error[len-2] == '-'){
		error[len-1]='-';
	}
	else{
		error[len-1]=' ';
	}
}
