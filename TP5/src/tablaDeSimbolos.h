#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct TablaDeSimbolos {
    struct ListaVariables *listaVariables;
    struct ListaFunciones *listaFunciones;
} TablaDeSimbolos;

typedef struct Nodo {
    char tipo[20];
    struct Nodo *sig;
} Nodo;

typedef struct Error {
    char error[1000];
    int linea;
    struct Error *sig;
} Error;

typedef struct ListaVariables{
    char nombreVariable[10];
    char tipoVariable[10];
    struct ListaVariables *sig;
} ListaVariables;

typedef struct ListaParametros{
    char nombreParametro[10];
    char tipoParametro[10];
    struct ListaParametros *sig;
} ListaParametros;

typedef struct ListaFunciones{
    char nombreFuncion[100];
    char tipoFuncion[10];
    struct ListaParametros *listaParametros;
    struct ListaFunciones *sig;
} ListaFunciones;

Error *errores = NULL;

void imprimirTabla(TablaDeSimbolos);
void validarInvocacion(TablaDeSimbolos , char* , Nodo *, int);

int longitudNodo(Nodo **);
void agregarNodo(Nodo **, char*);

void agregarError(Error **, char*, int);
void imprimirErrores(Error **);

ListaVariables* buscarVariable(ListaVariables **,char *);
void agregarVariable(ListaVariables**, char* , char*, char*, int);
void imprimirVariables(ListaVariables **);
char* tipoVariable(TablaDeSimbolos, char*);

void agregarParametro(ListaParametros**, char*, char*, int);
ListaParametros* buscarParametro(ListaParametros **, char *);
void imprimirParametros(ListaParametros **);

void agregarFuncion(ListaFunciones** , char* , char*, ListaParametros**, int);
ListaFunciones* buscarFuncion(ListaFunciones **,char *);
void imprimirFunciones(ListaFunciones**);

///////////////////
//IDENTIFICADORES//
///////////////////

int longitudNodo(Nodo **p){
    int longitud = 0;
    Nodo *aux = *p;
    while(aux != NULL){
        aux = aux->sig;
        longitud++;
    }
    return longitud;
}

void agregarNodo(Nodo ** tiposDeDato, char* tipo) {
    Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
    strcpy(nuevo->tipo,tipo);
    nuevo->sig = NULL;
    if(*tiposDeDato==NULL){
        *tiposDeDato = nuevo;
    }
    else{
        Nodo* aux = *tiposDeDato;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

///////////
//ERRORES//
///////////

void agregarError(Error **errores, char* error, int linea) {
    Error *nuevo = (Error *)malloc(sizeof(Error));
    strcpy(nuevo->error,error);
    nuevo->linea = linea;
    nuevo->sig = NULL;
    if(*errores==NULL){
        *errores = nuevo;
    }
    else{
        Error* aux = *errores;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void imprimirErrores(Error **errores) {
    Error *aux = *errores;
    printf("ERRORES\n");
    while(aux != NULL) {
        printf("Se encontro un %s en la linea %d.\n",aux->error,aux->linea);
        aux = aux->sig;
    }
}

//////////////////////
//LISTA DE VARIABLES//
//////////////////////

void agregarVariable(ListaVariables** variables, char* nombre, char* tipo, char* tipoInicializador, int linea) {
    if(strcmp(tipo, tipoInicializador) && strcmp(tipoInicializador,"vacio")) {
        if(!strcmp(tipoInicializador,"")) {
            agregarError(&errores, "Error Semantico: El inicializador no existe", linea);
        } else {
            char *error = malloc(strlen(tipo)+strlen(tipoInicializador)+strlen("Error Semantico: Se le asigna un valor de tipo ")+strlen(" a una variable de tipo ") + 1);
            strcpy(error,"Error Semantico: Se le asigna un valor de tipo ");
            strcat(error,tipoInicializador);
            strcat(error," a una variable de tipo ");
            strcat(error, tipo);
            agregarError(&errores, error, linea);
        }
    } else {
        ListaVariables *nodoNuevo = (ListaVariables *)malloc(sizeof(ListaVariables));
        strcpy(nodoNuevo->tipoVariable, tipo);
        strcpy(nodoNuevo->nombreVariable, nombre);
        nodoNuevo->sig = NULL;
        if(*variables == NULL){
            *variables = nodoNuevo;
        }
        else{
            ListaVariables* aux = *variables;
            while(aux->sig != NULL){
                aux = aux->sig;
            }
            if(buscarVariable(variables, nombre)) {
                char *error = malloc(strlen("Error Semantico: Doble declaracion de la variable ")+strlen(nombre) + 1);
                strcpy(error, "Error Semantico: Doble declaracion de la variable ");
                strcat(error, nombre);
                agregarError(&errores, error, linea);
            } else {
                aux->sig = nodoNuevo;
            }
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

ListaVariables* buscarVariable(ListaVariables **variables,char *nombre){
    ListaVariables* aux = *variables;
    while((aux != NULL) && (strcmp(aux->nombreVariable,nombre) != 0)){
        aux = aux->sig;        
    }
    return aux;
}

char* tipoVariable(TablaDeSimbolos tabla, char* nombre ) {
    ListaVariables *variable = buscarVariable(&tabla.listaVariables,nombre);
    if(variable) {
        return variable->tipoVariable;
    } else {
        return "";
    }
}

///////////////////////
//LISTA DE PARAMETROS//
///////////////////////

void agregarParametro(ListaParametros** parametros, char* nombre, char* tipo, int linea) {
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
        aux->sig = nodoNuevo;
    }
}

int validarParametros(ListaParametros** parametros) {
    ListaParametros *aux = *parametros;
    while(aux != NULL) {
        if(buscarParametro(parametros,aux->nombreParametro)) {
            return 0;
        }
        aux = aux->sig;
    }
    return 1;
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

int longitudParametros(ListaParametros **parametros){
    int longitud = 0;
    ListaParametros *aux = *parametros;
    while(aux != NULL){
        aux = aux->sig;
        longitud++;
    }
    return longitud;
}

//////////////////////
//LISTA DE FUNCIONES//
//////////////////////

void agregarFuncion(ListaFunciones** funciones, char* nombre, char* tipo, ListaParametros** parametros, int linea) {
    if(!validarParametros(parametros)) {
        char *error = malloc(strlen("Error Semantico en la funcion ") + strlen(nombre) + strlen(": Doble declaracion del parametro ") + strlen(nombre) + 1);
        strcpy(error, "Error Semantico en la funcion ");
        strcat(error, nombre);
        strcat(error,": Doble declaracion del parametro ");
        strcat(error, nombre);
        agregarError(&errores, error, linea);
    } else {
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
                char *error = malloc(strlen("Error Semantico: Doble declaracion de la funcion ")+strlen(nombre) + 1);
                strcpy(error, "Error Semantico: Doble declaracion de la funcion ");
                strcat(error, nombre);
                agregarError(&errores, error, linea);
            } else {
                aux->sig = nodoNuevo;
            }
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

void imprimirTabla(TablaDeSimbolos tabla) {
    printf("TABLA DE SIMBOLOS\n");
    imprimirVariables(&tabla.listaVariables);
    imprimirFunciones(&tabla.listaFunciones);
}

void validarInvocacion(TablaDeSimbolos tabla, char* nombreFuncion, Nodo *tiposDeDato, int linea) {
    ListaFunciones *funcionInvocada = buscarFuncion(&tabla.listaFunciones,nombreFuncion);
    int i = 1;
    if(!funcionInvocada) {
        char *error = malloc(strlen("Error Semantico en la invocacion de la funcion ") + strlen(nombreFuncion) + strlen(": La funcion ") + strlen(nombreFuncion) + strlen(" no existe") + 1);
        strcpy(error, "Error Semantico en la invocacion de la funcion ");
        strcat(error, nombreFuncion);
        strcat(error, ": La funcion ");
        strcat(error, nombreFuncion);
        strcat(error, " no existe");
        agregarError(&errores, error, linea);
    } else {
        ListaParametros *parametros = funcionInvocada->listaParametros;
        if(longitudParametros(&parametros) != longitudNodo(&tiposDeDato)) {
            char longitud1[100];
            sprintf(longitud1, "%d", longitudParametros(&parametros));
            char longitud2[100];
            sprintf(longitud2, "%d", longitudNodo(&tiposDeDato));
            char *error = malloc(strlen("Error Semantico en la invocacion de la funcion ") + strlen(": Se invoca a la funcion con ") + strlen(nombreFuncion) + strlen(" parametros, mientras que la funcion tiene ") +strlen(longitud1) + strlen(" parametros") + 1);
            strcpy(error, "Error Semantico en la invocacion de la funcion ");
            strcat(error, nombreFuncion);
            strcat(error, ": Se invoca a la funcion con ");
            strcat(error, longitud2);
            strcat(error, " parametros, mientras que la funcion tiene ");
            strcat(error, longitud1);
            strcat(error, " parametros");
            agregarError(&errores, error, linea);
        } else {
            while(parametros != NULL) {
                if(!strcmp(tiposDeDato->tipo,"")) {
                    char numeroParametro[100];
                    sprintf(numeroParametro, "%d", i);
                    char *error = malloc(strlen("Error semantico en la invocacion de la funcion ") + strlen(nombreFuncion) + strlen(": El parametro ") + strlen(" no existe") + 2);
                    strcpy(error, "Error Semantico en la invocacion de la funcion ");
                    strcat(error, nombreFuncion);
                    strcat(error, ": El parametro ");
                    strcat(error, numeroParametro);
                    strcat(error, " no existe");
                    agregarError(&errores,error,linea);
                } else if(strcmp(parametros->tipoParametro,tiposDeDato->tipo)) {
                    char numeroParametro[100];
                    sprintf(numeroParametro, "%d", i);
                    char *error = malloc(strlen("Error semantico en la invocacion de la funcion ") + strlen(nombreFuncion) + strlen(": El parametro ") + strlen(" no es de tipo ") + strlen(parametros->tipoParametro) + 2);
                    strcpy(error, "Error Semantico en la invocacion de la funcion ");
                    strcat(error, nombreFuncion);
                    strcat(error, ": El parametro ");
                    strcat(error, numeroParametro);
                    strcat(error, " no es de tipo ");
                    strcat(error, parametros->tipoParametro);
                    agregarError(&errores,error,linea);
                }
                i++;
                parametros = parametros->sig;
                tiposDeDato = tiposDeDato->sig;
            }
        }
    }
}