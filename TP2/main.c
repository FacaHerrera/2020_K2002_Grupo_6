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
int guardar(int);
int automata(char *, char *);
int mostrar_consigna(char *, char *);
void escribirPila(Pila *, char);
char leerPila(Pila *);
void evaluaError(int, int, int, char *, char *);
void suprimirEspacios (char *);

int main() {
	char condicion = 'S', error[120], expresion[50]; //70 son para el detalle del error
	strcpy(error, "");
	while (condicion == 'S' || condicion == 's'){
		system("CLS");
		switch(mostrar_consigna(error, expresion)){
			case 0:
			case 3:
				printf("\n-----------------------------------------------------------------------------\n\n%s\n%s", expresion, error);
				printf("\n\nLa expresion es INCORRECTA\n");
				break;
			default:
				printf("\n\nLa expresion es CORRECTA\n\n");
		}
		printf("\nDesea ingresar una nueva expresion? (S para si | CUALQUIER OTRA para no)\n\n");
		fflush(stdin);
		scanf("%c", &condicion);
	}	
	return 0;
}

int mostrar_consigna(char *error, char *expresion){
	printf("Trabajo Practico Nro 2 - Automata Finito de Pila para Constantes Enteras Decimales\n\nIngrese la expresion a escanear: \n\n");
	fflush(stdin);
	scanf("%49[^\n]", expresion);
	suprimirEspacios(expresion);
	return automata(expresion, error);
}

void suprimirEspacios(char *expresion){
	int len = 0, lenAux = 0;
	char auxiliar[50];
	
	while(expresion[len] != '\0'){
		if (expresion[len] != ' '){
			auxiliar[lenAux] = expresion[len];
			lenAux++;
		} 
		len++;	
	}
	auxiliar[lenAux] = '\0';
	strcpy(expresion, auxiliar);
}

int automata(char *expresion, char *error){
	char tipoError[70];
	int len = 0, inicio = 0, estado = 0, columna = 0, vPila = 0;
	struct recorrido 	estado00 = {0,0}, estado01 = {0,1}, 
						estado10 = {1,0}, estado11 = {1,1}, 
						estado02 = {0,2}, estado03 = {0,3}, 
						estado24 = {2,4}, 
						error1 = {3,1}, 
						error2 = {3,2}, 
						error3 = {3,3}, 
						error4 = {3,4}, 
						error5 = {3,5}, 
						error6 = {3,6}, 
						error7 = {3,7};
	struct recorrido automata[2][3][6]={{{error1,estado10,error2,estado02,error2,error3},{estado10,estado10,estado00,error4,error4,error3},{error5,error5,estado00,error5,error5,error3}},
							  			{{error1,estado11,error2,estado03,error2,error3},{estado11,estado11,estado01,error6,estado24,error3},{error7,error7,estado01,error7,estado24,error3}}};
	Pila pila = NULL;
	escribirPila(&pila,'$');
	while(expresion[len] != '\0'){
		if (estado!=3){
			switch(leerPila(&pila)){
				case '$':
					inicio = 0;
					break;
				case 'R':
					inicio = 1;
					break;
			}
			switch (vPila){
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
			vPila = automata[inicio][estado][columna].pila;
			estado = automata[inicio][estado][columna].estado;
		}
		evaluaError(len, estado, vPila, tipoError, error);
		len++;
	}
	error[len]='\0';
	

	switch (estado){
		case 0:
			strcpy(tipoError,"^->Se esperaba un numero o un '(' (Parentesis de apertura).");
			break;
		case 1:
		case 2:
			if (leerPila(&pila) == 'R'){
				strcpy(tipoError,"^->Se esperaba un ')' (Parentesis de cierre).");
				estado = 3;
			} 
			break;	
	}
	free(pila);
	strcat(error, tipoError);
	return estado;
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

void evaluaError (int len, int estado, int vPila, char *tipoError, char *error){
	if (estado == 3 && len > 0){
		if (error[len-1]=='^' || error[len-1]=='-'){
			error[len] = '-';
		}
		else{
			error[len] = '^';
		}
	}
	else if (estado == 3 && len == 0){
		error[len] = '^';
	}
	else{
		error[len] = ' ';
	}
	switch(vPila){
		case 1:
			strcpy(tipoError,"->No se puede comenzar con 0.");
		break;
		case 2:
			strcpy(tipoError,"->Se esperaba un numero o un '(' (Parentesis de apertura).");
		break;
		case 3:
			strcpy(tipoError,"->Caracter no valido.");
		break;
		case 4:
			strcpy(tipoError,"->Se esperaba un operador o un numero.");
		break;
		case 5:
			strcpy(tipoError,"->Se esperaba un operador.");
		break;
		case 6:
			strcpy(tipoError,"->Se esperaba un operador o un numero o un ')' (Parentesis de cierre).");
		break;
		case 7:
			strcpy(tipoError,"->Se esperaba un operador o un ')' (Parentesis de cierre).");
		break;
	}

}