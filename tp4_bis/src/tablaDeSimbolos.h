#include<math.h>
#include<stdlib.h>
#include <stdio.h>
#include<string.h>

//////////////////////
//LISTA DE VARIABLES//
//////////////////////

typedef struct ListaVariables{
    char nombreVariable[10];
    char tipoVariable[10];
    struct ListaVariables *sig;
} ListaVariables;

ListaVariables* buscarVariable(ListaVariables **,char *);
void agregarVariable(ListaVariables** , char* , char* );
void imprimirVariables(ListaVariables **);
void eliminarVariable(ListaVariables **, char *);

void agregarVariable(ListaVariables** variables, char* nombre, char* tipo) {
    ListaVariables *nodoNuevo = (ListaVariables *)malloc(sizeof(ListaVariables));
    strcpy(nodoNuevo->tipoVariable, tipo);
    strcpy(nodoNuevo->nombreVariable, nombre);
    nodoNuevo->sig = NULL;
    if(*variables==NULL){
        *variables = nodoNuevo;
    }
    else{
        ListaVariables* aux = *variables;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        if(buscarVariable(variables, nombre)) {
            printf("Error Sintactico: Doble declaracion de la variable %s.\n",nombre);
        } else {
            aux->sig = nodoNuevo;
        }
    }
}

void imprimirVariables(ListaVariables **variables){
    ListaVariables *aux = *variables;
    printf("LISTA DE VARIABLES\n");
    while(aux != NULL){
        printf("Nombre variable: %s; Tipo variable: %s;\n",aux->nombreVariable,aux->tipoVariable);
        aux = aux->sig;
    }
}

void eliminarVariable(ListaVariables **variables, char *nombre){
    ListaVariables* aux = *variables;
    ListaVariables* ant = NULL;
    while((aux != NULL) && (aux->nombreVariable != nombre)){
        ant = aux;
        aux = aux->sig;
    }
    if(aux != NULL){
        if(ant != NULL){
            ant->sig = aux->sig;
        } else {
            *variables = aux->sig;
        }
    }
}

ListaVariables* buscarVariable(ListaVariables **variables,char *nombre){
    ListaVariables* aux = *variables;
    while((aux != NULL) && (strcmp(aux->nombreVariable,nombre) != 0)){
        aux = aux->sig;        
    }
    return aux;
}

///////////////////////
//LISTA DE PARAMETROS//
///////////////////////

typedef struct ListaParametros{
    char nombreParametro[10];
    char tipoParametro[10];
    struct ListaParametros *sig;
} ListaParametros;

void agregarParametro(ListaParametros**, char*, char*);
ListaParametros* buscarParametro(ListaParametros **, char *);
void imprimirParametros(ListaParametros **);

void agregarParametro(ListaParametros** parametros, char* nombre, char* tipo) {
    ListaParametros *nodoNuevo = (ListaParametros* )malloc(sizeof(ListaParametros));
    strcpy(nodoNuevo->nombreParametro, nombre);
    strcpy(nodoNuevo->tipoParametro, tipo);
    nodoNuevo->sig = NULL;
    if(*parametros==NULL){
        *parametros = nodoNuevo;
    }
    else{
        ListaParametros* aux = *parametros;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        if(buscarParametro(parametros, nombre)) {
            printf("Error Sintactico: Doble declaracion del parametro %s.\n",nombre);
        } else {
            aux->sig = nodoNuevo;
        }
    }
}

ListaParametros* buscarParametro(ListaParametros **parametros, char *nombre){
    ListaParametros* aux = *parametros;
    while((aux != NULL) && (strcmp(aux->nombreParametro,nombre) != 0)){
        aux = aux->sig;        
    }
    return aux;
}

void imprimirParametros(ListaParametros **parametros){
    ListaParametros *aux = *parametros;
    int i = 1;
    while(aux != NULL){
        printf("- Parametro %d: Nombre = %s , Tipo = %s;\n",i,aux->nombreParametro,aux->tipoParametro);
        aux = aux->sig;
        i++;
    }
}

//////////////////////
//LISTA DE FUNCIONES//
//////////////////////

typedef struct ListaFunciones{
    char nombreFuncion[100];
    char tipoFuncion[10];
    struct ListaParametros *listaParametros;
    struct ListaFunciones *sig;
} ListaFunciones;

void agregarFuncion(ListaFunciones** , char* , char*, ListaParametros**);
ListaFunciones* buscarFuncion(ListaFunciones **,char *);
void imprimirFunciones(ListaFunciones**);

void agregarFuncion(ListaFunciones** funciones, char* nombre, char* tipo, ListaParametros** parametros) {
    ListaFunciones *nodoNuevo = (ListaFunciones* )malloc(sizeof(ListaFunciones));
    strcpy(nodoNuevo->tipoFuncion, tipo);
    strcpy(nodoNuevo->nombreFuncion, nombre);
    nodoNuevo->listaParametros = *parametros;
    nodoNuevo->sig = NULL;
    if(*funciones==NULL){
        *funciones = nodoNuevo;
    }
    else{
        ListaFunciones* aux = *funciones;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        if(buscarFuncion(funciones, nombre)) {
            printf("Error Sintactico: Doble declaracion de la funcion %s.\n",nombre);
        } else {
            aux->sig = nodoNuevo;
        }
    }
}

ListaFunciones* buscarFuncion(ListaFunciones **funciones,char *nombre){
    ListaFunciones* aux = *funciones;
    while((aux != NULL) && (strcmp(aux->nombreFuncion,nombre) != 0)){
        aux = aux->sig;        
    }
    return aux;
}

void imprimirFunciones(ListaFunciones **funciones){
    ListaFunciones *aux = *funciones;
    printf("LISTA DE FUNCIONES\n");
    while(aux != NULL){
        printf("Nombre funcion: %s; Tipo funcion: %s; Parametros: \n",aux->nombreFuncion,aux->tipoFuncion);
        imprimirParametros(&aux->listaParametros);
        aux = aux->sig;
    }
}

/////////////////////
//TABLA DE SIMBOLOS//
/////////////////////

typedef struct TablaDeSimbolos {
    struct ListaVariables *listaVariables;
    struct ListaFunciones *listaFunciones;
} TablaDeSimbolos;

void imprimirTabla(TablaDeSimbolos);

void imprimirTabla(TablaDeSimbolos tabla) {
    printf("TABLA DE SIMBOLOS\n");
    //eliminarFunciones(tabla);
    imprimirVariables(&tabla.listaVariables);
    imprimirFunciones(&tabla.listaFunciones);
}


void eliminarFunciones(TablaDeSimbolos tabla){
    ListaVariables* aux = tabla.listaVariables;
    while(aux != NULL) {
        if(buscarFuncion(&tabla.listaFunciones,aux->nombreVariable)){
            eliminarVariable(&tabla.listaVariables,aux->nombreVariable);
        }
        aux = aux->sig;
    }
}