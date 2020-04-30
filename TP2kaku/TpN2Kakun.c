#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define OK 1
#define ERROR 0

typedef struct{
	char dato;
	struct nodo1 *siguiente;
}nodo1;

struct tipo_tt{
	int estado;
	int cpush;
};

typedef nodo1 *punteroNodo;
typedef nodo1 *Pila;

int automata(char[]);
char pop (Pila*);
void push (Pila*, char);

int main(){
    
    char expresion[50];
    
    printf("Trabajo Practico N 2 de SSL\n\n");
    
    printf("Ingrese la cadena: ");
    scanf("%s", expresion);
    
    switch (automata(expresion)){
        case 1:
        case 5:
            printf("La expresion es sintacticamente correcta.\n\n");
            break;
        default:
            printf("La expresion no es correcta.\n\n");
        };
    
    return 0;
}

int automata (char *expresion){
	
	struct tipo_tt
				e1 = {1, 0},
				e2 = {1, 1},
				e3 = {0, 0},
				e4 = {0, 1},
				e5 = {0, 2},
				e6 = {0, 3},
				e7 = {2, 4},
				e8 = {3, 0},
				e9 = {3, 1};
    
	struct tipo_tt tabla_transicion[2][4][6]={{{e8,e1,e8,e5,e8}, {e1,e1,e3,e8,e8}, {e8,e8,e3,e8,e8}, {e8,e8,e8,e8,e8}},{{e9,e2,e9,e6,e9},{e2,e2,e4,e9,e7},{e9,e9,e4,e9,e7},{e9,e9,e9,e9,e9}}};
    
    int estado = 0, n = 0, c = 0, p = 0;
    
    nodo1*pila = NULL;
    push(&pila, '$');

    while(expresion[c] != '\0'){
        
        switch (pop(&pila)){
            case '$':
                p = 0;
                break;
            case 'R':
                p = 1;
                break;
        };

        if(expresion[c] =='0'){
            n = 0;
        }
        
        else if(expresion[c] >= '1' && expresion[c] <= '9'){
            n = 1;
        }
        
        else if(expresion[c] == '+' || expresion[c] == '-' || expresion[c] == '*' || expresion[c] == '/'){
            n = 2;
        }
        
        else if(expresion[c] == '(' ){
            n = 3;
        }
        
        else if(expresion[c] == ')' ){
            n = 4;
        }

        else{
            n = 5; 
        }

        estado = tabla_transicion[p][estado][n].estado;
        switch(tabla_transicion[p][estado][n].cpush){
            case 0:
                push (&pila, '$');
                break;
            case 1:
                push (&pila, 'R');
                break;
            case 2:
                push (&pila, '$');
                push (&pila, 'R');
                break;
            case 3:
                push (&pila, 'R');
                push (&pila, 'R');
                break;
        }
        
        c++;
    
    };
    
    if(pop(&pila)=='$') return estado;
    return ERROR;
}

void push (Pila *pila, char valor){
	
    punteroNodo nodo;

	nodo = (nodo1 *)malloc(sizeof(nodo1));
	nodo->dato = valor;
	nodo->siguiente = *pila;
	*pila = nodo;
}

char pop (Pila *pila){
	
    punteroNodo nodo;
	char valor;
	
    nodo = *pila;
	if (!nodo) return ERROR;
	*pila = nodo->siguiente;
	valor = nodo->dato;
	free(nodo);
	return valor;
}