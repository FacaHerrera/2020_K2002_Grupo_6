#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define OK 1
#define ERROR 0

/* typedef struct tipoinfo{
    char cadena[1000];
    double constante1;
    double constante2;
}tipoinfo; */

typedef struct tipoinfo{
    char* cadena;
    double constante1;
    double constante2;
}tipoinfo;

typedef struct nodo{
	tipoinfo dato;
	struct nodo* siguiente;
}nodo;

void formato(FILE*, char*, int, int);
int octalADecimal(char*, int);
int hexadecimalADecimal(char*, int);
int buscarNodo(nodo**, tipoinfo);
void insertarNodo(nodo**, char*, double, double);
void reporte(FILE*, nodo*, char*, char*, int);
int verificar_txt(char*);
void voltearPila(nodo**);
void insertarSinRepetir(nodo**, char*, double, double);
void insertarOrdenado(nodo**, char*, double, double);
tipoinfo pop(nodo**);

//Funciones de insercion

void insertarNodo(nodo** primero, char* cadena, double cte1, double cte2){
	nodo* nuevo = (nodo*) malloc(sizeof(nodo));
    nuevo -> dato.cadena = strdup(cadena);
	
    nuevo -> dato.constante1 = cte1;
    nuevo -> dato.constante2 = cte2;
	nuevo -> siguiente = *primero;
	*primero = nuevo;
}

/* void insertarNodo(nodo** primero, char* cadena, double cte1, double cte2){
	nodo* nuevo = (nodo*) malloc(sizeof(nodo));

    tipoinfo aux;
    aux.constante1 = cte1;
    aux.constante2 = cte2;
    strcpy(aux.cadena, cadena);
	
    nuevo -> dato = aux;
	nuevo -> siguiente = *primero;
	*primero = nuevo;
} */

/* void insertarSinRepetir(nodo** primero, char* cadena, double cte1, double cte2){
    nodo* actual = (nodo*) malloc(sizeof(nodo));
	actual = *primero;

    int flag = 0;

    if(*primero != NULL){
        while(actual != NULL && flag != 1){
            if(strcmp(actual -> dato.cadena, cadena) == 0){
                actual -> dato.constante1 ++;
                flag = 1;
            }
            else actual = actual -> siguiente;
        }
        
        if(flag == 0){
            insertarNodo(primero, cadena, cte1, cte2);
        }
    }
    else insertarNodo(primero, cadena, cte1, cte2);   
} */

void insertarSinRepetir(nodo** primero, char* cadena, double cte1, double cte2){
    nodo* actual = (nodo*) malloc(sizeof(nodo));
	actual = *primero;

    int flag = 0;

    if(*primero != NULL){
        while(actual != NULL && flag != 1){
            if(strcmp(actual -> dato.cadena, cadena) == 0){
                actual -> dato.constante1 ++;
                flag = 1;
            }
            else actual = actual -> siguiente;
        }
        
        if(flag == 0){
            insertarOrdenado(primero, cadena, cte1, cte2);
        }
    }
    else insertarOrdenado(primero, cadena, cte1, cte2);   
}

void insertarOrdenado(nodo** primero, char* cadena, double cte1, double cte2) {
    nodo* aux = NULL;
    tipoinfo nodoAux;
    tipoinfo nodoAux2;

    if(*primero == NULL){
        insertarNodo(primero, cadena, cte1, cte2);
    }
    else{
        while(*primero != NULL && (strcasecmp(cadena, (*primero) -> dato.cadena) > 0)){
        nodoAux = pop(primero);
        insertarNodo(&aux, nodoAux.cadena, nodoAux.constante1, nodoAux.constante2);
        }

        insertarNodo(primero, cadena, cte1, cte2);

        while(aux != NULL) { 
            nodoAux2 = pop(&aux);
            insertarNodo(primero, nodoAux2.cadena, nodoAux2.constante1, nodoAux2.constante2);
        }
    }
}

// Funciones de impresion

void formato(FILE* salida, char* caracter, int cantidad, int flag){
    for(int i=0;i<cantidad;i++){
        fprintf(salida, "%s", caracter);
    }
    if(flag == 1){
        fprintf(salida, "\n");
    }
}

void reporte(FILE* salida, nodo* primero, char* encabezado1, char* encabezado2, int tipoImpresion){
	nodo* actual = (nodo*) malloc(sizeof(nodo));
	actual = primero;

    formato(salida, "-", 85, 1);
	
    if(primero!= NULL){
        switch(tipoImpresion){
            case 1:
                fprintf(salida,"%s", encabezado1);
                formato(salida, " ", 45, 0);
                fprintf(salida,"%s", encabezado2);
                    while(actual != NULL){
                        fprintf(salida,"\n %s", actual -> dato.cadena);
                        formato(salida, " ", 45, 0);
                        fprintf(salida,"%lf", actual -> dato.constante1);
                        actual = actual -> siguiente;			
                    }
                break;
            case 2:
                fprintf(salida,"%s", encabezado1);
                formato(salida, " ", 45, 0);
                fprintf(salida,"%s", encabezado2);
                    while(actual != NULL){
                        fprintf(salida,"\n %s", actual -> dato.cadena);
                        actual = actual -> siguiente;			
                    }
                break;
            case 3:
                fprintf(salida,"%s", encabezado1);
                formato(salida, " ", 45, 0);
                fprintf(salida,"%s", encabezado2);
                    while(actual != NULL){
                        fprintf(salida,"\n %lf", actual -> dato.constante1);
                        formato(salida, " ", 45, 0);
                        fprintf(salida,"%lf", actual -> dato.constante2);
                        actual = actual -> siguiente;			
                    }
                break;
    }

    fprintf(salida, "\n");
    formato(salida, "-", 85, 1);
    }

	else{
		fprintf(salida,"\n No existen elementos de este tipo! \n\n");
        formato(salida, "-", 85, 1);
	}
}

tipoinfo pop(nodo** primero){
	
    nodo* nodo;
	tipoinfo valor;
	
    nodo = *primero;
	valor = (*primero) -> dato;
    *primero = (*primero) -> siguiente;
	free(nodo);
	return valor;
}

int buscarNodo(nodo** primero, tipoinfo buscado){
    nodo* actual = (nodo*) malloc(sizeof(nodo));
	actual = *primero;

    while(actual != NULL){
        if(strcmp(actual -> dato.cadena, buscado.cadena) == 0){
            return 1;
        }

        actual = actual -> siguiente;
    }

    return 0;
}

///////// Conversores

int octalADecimal(char *cadena, int len){
    int decimal = 0, potencia = 0;
    for (int i = len - 1; i >= 0; i--) {
        int valor_actual = cadena[i] - '0';
        int elevado = pow(8, potencia) * valor_actual;

        decimal += elevado;

        potencia++;
    }
    return decimal;
}

int hexadecimalADecimal(char* hexadecimal, int len){
    int decimal = 0, i = 0;
    char caracter;
    
    while(i<(len-2)){
        caracter = hexadecimal[len-1-i];
        if(caracter >= '0' && caracter <= '9'){
            decimal += (caracter - '0') * pow(16,i);
        }
        else if(caracter >= 'A' && caracter <= 'F'){
            decimal += (caracter - 'A' + 10) * pow(16,i);
        }
        else{
            decimal += (caracter - 'a' + 10) * pow(16,i);
        }
        i++;
    }
    return decimal;
}

///////// Verificador de .TxT

int verificar_txt(char *nombre_archivo){
	if (strstr(nombre_archivo, ".txt") == NULL){
		strcat(nombre_archivo, ".txt");
	}

    return 0;
}

void voltearPila(nodo** primero){
    nodo* aux = NULL;
    while(*primero != NULL){
        insertarNodo(&aux, (*primero) -> dato.cadena, (*primero) -> dato.constante1, (*primero) -> dato.constante2);
        *primero = (*primero) -> siguiente;
    }
    *primero = aux;
}