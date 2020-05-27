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

int automata(char *, char *);
char pop (Pila*);
void push (Pila*, char);
void suprimir_espacios(char *);
void evaluar_error(int, int, char *, char *, int);

int main(){
    
    char expresion[50], error[120], condicion = 'S';
    
    

    while(condicion == 'S' || condicion == 's'){
        
        strcpy (error, "");
        
        system("CLS");
        printf("Trabajo Practico N 2 de SSL\n\n");
    
        printf("Ingrese la expresion: ");
        fflush(stdin);
        scanf("%49[^\n]", expresion);
        suprimir_espacios(expresion);
    
        switch (automata(expresion, error)){
            case 1:
            case 2:
                printf("La expresion es correcta.\n\n");
                break;
            default:
                printf("La expresion no es correcta.\n\n");
                printf("---------------------------------------------------\n\n%s\n%s", expresion, error);
        };

        printf("\nDesea ingresar una nueva expresion? (S para SI | cualquier otra para NO) --> ");
        fflush(stdin);
        scanf("%c", &condicion);
    
    }
    
    return 0;
}

void suprimir_espacios(char *expresion){
    int len = 0, lenauxi = 0;
    char expaux[50];

    while(expresion[len] != '\0'){
        if(expresion[len] == ' '){
            len++;
        }
        else{
            expaux[lenauxi] = expresion [len];
            lenauxi++;
            len++;
        }
    }

    expaux[lenauxi] = '\0';
    strcpy(expresion, expaux);
}

void evaluar_error(int c, int estado_anterior, char *error, char *expresion, int cpushaux){
    
    int contError = 0;

    while(contError < c){
        error[contError] = '-';
        contError++;
    }
    error[contError] = '^';
    error[contError + 1] = '\0';

    if(cpushaux == 1){
        if((expresion[c] == '0' || (expresion[c] == '+' || expresion[c] == '-' || expresion[c] == '*' || expresion[c] == '/') || expresion[c] == ')') && estado_anterior == 0){
            strcat(error, "-> ERROR! - Se esperaba un numero del 1 y 9 o un parentesis de apertura!\n");
        }
        if(expresion[c] == '(' && estado_anterior == 1 ){
            strcat(error, "-> ERROR! - Se esperaba un 0, un numero del 1 al 9, un operador o un parentesis de cierre!\n");
        }
        if((expresion[c] == '0' || (expresion[c] >= '1' && expresion[c] <= '9') || expresion[c] == '(') && estado_anterior == 2){
            strcat(error, "-> ERROR! - Se esperaba un operador o un parentesis de cierre!\n");
        }
    }
    else{
        if((expresion[c] == '0' || (expresion[c] == '+' || expresion[c] == '-' || expresion[c] == '*' || expresion[c] == '/') || expresion[c] == ')') && estado_anterior == 0){
            strcat(error, "-> ERROR! - Se esperaba un numero del 1 al 9 o un parentesis de apertura!\n");
        }
        if((expresion[c] == '(' || expresion[c] == ')') && estado_anterior == 1){
            strcat(error, "-> ERROR! - Se esperaba un 0, un numero del 1 al 9 o un operador!\n");
        }
        if((expresion[c] == '0' || (expresion[c] >= '1' && expresion[c] <= '9') || expresion[c] == '(' || expresion[c] == ')') && estado_anterior == 2){
            strcat(error, "-> ERROR! - Se esperaba un operador!\n");
        }
    }
    
}

int automata (char *expresion, char*error){
	
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
    
	struct tipo_tt tabla_transicion[2][4][6]={{{e8,e1,e8,e5,e8,e8}, {e1,e1,e3,e8,e8,e8}, {e8,e8,e3,e8,e8,e8}, {e8,e8,e8,e8,e8,e8}},{{e9,e2,e9,e6,e9,e9},{e2,e2,e4,e9,e7,e9},{e9,e9,e4,e9,e7,e9},{e9,e9,e9,e9,e9,e9}}};
    
    int estado = 0, estado_anterior = 0, n = 0, c = 0, queMatriz = 0, cpushaux = 0, cont = 0;
    
    nodo1*pila = NULL;
    push(&pila, '$');

    while(expresion[c] != '\0'){
        
        switch (pop(&pila)){
            case '$':
                queMatriz = 0;
                break;
            case 'R':
                queMatriz = 1;
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

        estado = tabla_transicion[queMatriz][estado][n].estado;
        cpushaux = tabla_transicion[queMatriz][estado][n].cpush;

        if(estado == 3) {
            evaluar_error(c, estado_anterior, error, expresion, cpushaux);
            return estado;
        }
        
        estado_anterior = estado;
        
        switch(tabla_transicion[queMatriz][estado][n].cpush){
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
            case 4:// caso epsilon
                break;
        }
        
        c++;
    
    };
    
    //if(pop(&pila)=='$') return estado;
    //return ERROR;

    switch (estado){
        case 0: 
            
            while(cont < c){
            error[cont] = '-';
            cont++;
            }
            error[cont] = '^';
            error[cont + 1] = '\0';
            
            strcat (error,"-> Se esperaba un numero o un parentesis de apertura!\n");
            break;
        case 1:
        case 2:
            if(pop(&pila) == 'R'){
                estado = 3;
                
                while(cont < c){
                error[cont] = '-';
                cont++;
                }
                error[cont] = '^';
                error[cont + 1] = '\0';

                strcat (error, "-> Se esperaba un parentesis de cierre!\n");
            }
            break;
    }

    return estado;
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
