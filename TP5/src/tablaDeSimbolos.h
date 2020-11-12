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
void imprimirParametros(ListaParametros **, int, int, int, int, char);
ListaParametros* parametrosIguales(ListaParametros**);
void eliminarParametro(ListaParametros **, char*);

void agregarFuncion(ListaFunciones** , char* , char*, ListaParametros**, int);
ListaFunciones* buscarFuncion(ListaFunciones **,char *);
void imprimirFunciones(ListaFunciones**);
char* tipoFuncion(TablaDeSimbolos, char*);

char *centrar(char *, int);

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

void imprimirErrores(Error **errores){
    int i, ancho, columnas = 2, anchoC1 = 50, anchoC2 = 50;
    ancho = anchoC1 + anchoC2;
    char ultimo;
    char titulo[20] = "LISTA DE ERRORES";
    char titulo0[20] = "ERROR";
    char titulo1[20] = "LINEA";
    char snum[10];

    Error *aux = *errores;
    printf("HOLA: %s\n", aux->error);
    if(aux != NULL){
        printf("\n\n\n");
        printf("%c", 201);
        for(i=0; i < ancho+(columnas-1); i++) printf("%c", 205);
        printf("%c", 187);
        printf("\n%c", 186);
        printf("%s", centrar(titulo, ancho));
        printf(" %c\n", 186);

        printf("%c", 204);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 203);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c\n", 185);

        printf("%c", 186);
        printf("%s", centrar(titulo0, anchoC1));
        printf("%c", 186);
        printf("%s", centrar(titulo1, anchoC2));
        printf("%c\n", 186);

        printf("%c", 204);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 206);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c\n", 185);

        while(aux != NULL){
            printf("%c", 186);
            printf("%s", centrar(aux->error, anchoC1));
            printf("%c", 186);
            itoa(aux->linea, snum, 10);
            printf("%s", centrar(snum, anchoC2));
            printf("%c\n", 186);
            aux = aux->sig;
        }
        printf("%c", 200);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 202);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c\n", 188);
        
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
    int i, ancho, columnas = 2, anchoC1 = 50, anchoC2 = 50;
    ancho = anchoC1 + anchoC2;
    char ultimo;
    char titulo[20] = "LISTA DE VARIABLES";
    char titulo0[20] = "NOMBRE VARIABLE";
    char titulo1[20] = "TIPO VARIABLE";

    ListaVariables *aux = *variables;

    if(aux != NULL){
        printf("\n\n\n");
        printf("%c", 201);
        for(i=0; i < ancho+(columnas-1); i++) printf("%c", 205);
        printf("%c", 187);
        printf("\n%c", 186);
        printf("%s", centrar(titulo, ancho));
        printf(" %c\n", 186);

        printf("%c", 204);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 203);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c\n", 185);

        printf("%c", 186);
        printf("%s", centrar(titulo0, anchoC1));
        printf("%c", 186);
        printf("%s", centrar(titulo1, anchoC2));
        printf("%c\n", 186);

        printf("%c", 204);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 206);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c\n", 185);

        while(aux != NULL){
            printf("%c", 186);
            printf("%s", centrar(aux->nombreVariable, anchoC1));
            printf("%c", 186);
            printf("%s", centrar(aux->tipoVariable, anchoC2));
            printf("%c\n", 186);
            aux = aux->sig;
        }
        printf("%c", 200);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 202);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c\n", 188);
        
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

ListaParametros* parametrosIguales(ListaParametros** parametros) {
    ListaParametros *aux = *parametros;
    while(aux != NULL) {
        char * buscado = aux->nombreParametro;
        eliminarParametro(&aux,aux->nombreParametro);
        if(buscarParametro(&aux,buscado)) {
            return buscarParametro(&aux,buscado);
        }
    }
    return NULL;
}

ListaParametros* buscarParametro(ListaParametros **parametros, char *nombre){
    ListaParametros* aux = *parametros;
    while((aux != NULL) && (strcmp(aux->nombreParametro,nombre) != 0)){
        aux = aux->sig;        
    }
    return aux;
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

void eliminarParametro(ListaParametros **parametros, char* v){
    ListaParametros* aux = *parametros;
    ListaParametros* ant = NULL;
    while((aux != NULL) && (strcmp(aux->nombreParametro, v))){
        ant = aux;
        aux = aux->sig;
    }
    if(aux != NULL){
        if(ant != NULL){
            ant->sig = aux->sig;
        }
        else{
            *parametros = aux->sig;
        }
    }
}

//////////////////////
//LISTA DE FUNCIONES//
//////////////////////

void agregarFuncion(ListaFunciones** funciones, char* nombre, char* tipo, ListaParametros** parametros, int linea) {
    ListaParametros *parametroIgual = parametrosIguales(parametros);
    if(parametroIgual) {
        char *error = malloc(strlen("Error Semantico en la funcion ") + strlen(nombre) + strlen(": Doble declaracion del parametro ") + strlen(parametroIgual->nombreParametro) + 1);
        strcpy(error, "Error Semantico en la funcion ");
        strcat(error, nombre);
        strcat(error,": Doble declaracion del parametro ");
        strcat(error, parametroIgual->nombreParametro);
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
    int i, ancho, columnas = 3, anchoC1 = 50, anchoC2 = 50, anchoC3 = 50, anchoC31 = 25, anchoC32 = 25;
    ancho = anchoC1 + anchoC2 + anchoC3;
    char ultimo;
    char titulo[20] = "LISTA DE FUNCIONES";
    char titulo0[20] = "NOMBRE FUNCION";
    char titulo1[20] = "TIPO FUNCION";
    char titulo2[20] = "PARAMETROS";
    char titulo21[20] = "NOMBRE";
    char titulo22[20] = "TIPO";

    ListaFunciones *aux = *funciones;

    if(aux != NULL){
        printf("\n\n\n");
        printf("%c", 201);
        for(i=0; i < ancho+(columnas-1); i++) printf("%c", 205);
        printf("%c", 187);
        printf("\n%c", 186);
        printf("%s", centrar(titulo, ancho));

        printf("  %c\n", 186);
        printf("%c", 204);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 203);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c", 203);
        for(i=0; i < anchoC3; i++) printf("%c", 205);
        printf("%c\n", 185);

        printf("%c", 186);
        printf("%s", centrar(" ", anchoC1));
        printf("%c", 186);
        printf("%s", centrar("", anchoC2));
        printf("%c", 186);
        printf("%s", centrar(titulo2, anchoC3));
        printf("%c\n", 186);

        printf("%c", 186);
        printf("%s", centrar(titulo0, anchoC1));
        printf("%c", 186);
        printf("%s", centrar(titulo1, anchoC2));
        printf("%c", 204);
        for(i=0; i < anchoC31; i++) printf("%c", 205);
        printf("%c", 203);
        for(i=0; i < anchoC32-1; i++) printf("%c", 205);
        printf("%c\n", 185); 

        printf("%c", 186);
        printf("%s", centrar(" ", anchoC1));
        printf("%c", 186);
        printf("%s", centrar(" ", anchoC2));
        printf("%c", 186);
        printf("%s", centrar(titulo21, anchoC31));
        printf(" %c", 186);
        printf("%s", centrar(titulo22, anchoC32));
        printf("%c\n", 186);

        printf("%c", 204);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 206);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c", 206);
        for(i=0; i < anchoC31; i++) printf("%c", 205);
        printf("%c", 206);
        for(i=0; i < anchoC32-1; i++) printf("%c", 205);
        printf("%c\n", 185); 

        while(aux != NULL){
            printf("%c", 186);
            printf("%s", centrar(aux->nombreFuncion, anchoC1));
            printf("%c", 186);
            printf("%s", centrar(aux->tipoFuncion, anchoC2));
            printf("%c", 186);
            if(aux->sig==NULL) ultimo = 1;
            else ultimo = 0;
            imprimirParametros(&aux->listaParametros, anchoC1, anchoC2 , anchoC31, anchoC32, ultimo);
            aux = aux->sig;
        }
        printf("%c", 200);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 202);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c", 202);
        for(i=0; i < anchoC31; i++) printf("%c", 205);
        printf("%c", 202);
        for(i=0; i < anchoC32-1; i++) printf("%c", 205);
        printf("%c\n", 188);
        
    }
}

void imprimirParametros(ListaParametros **parametros, int anchoC1, int anchoC2, int ancho1, int ancho2, char ultimo){
    ListaParametros *aux = *parametros;
    int i = 1;
    while(aux != NULL){
        if(i==1){
            printf("%s", centrar(aux->nombreParametro, ancho1));
            printf(" %c", 186);
            printf("%s", centrar(aux->tipoParametro, ancho2));
            printf("%c\n", 186);
        }
        else{
            printf("%c", 186);
            printf("%s", centrar(" ", anchoC1));
            printf("%c", 186);
            printf("%s", centrar(" ", anchoC2));
            printf("%c", 186);
            printf("%s", centrar(aux->nombreParametro, ancho1));
            printf(" %c", 186);
            printf("%s", centrar(aux->tipoParametro, ancho2));
            printf( "%c\n", 186);
        }
        aux = aux->sig;
        if(aux==NULL && !ultimo){
            printf("%c", 204);
            for(i=0; i < anchoC1; i++) printf("%c", 205);
            printf("%c", 206);
            for(i=0; i < anchoC2; i++) printf("%c", 205);
            printf("%c", 206);
            for(i=0; i < ancho1; i++) printf("%c", 205);
            printf("%c", 206);
            for(i=0; i < ancho2-1; i++) printf("%c", 205);
            printf("%c\n", 185); 
        }
        i++;
    }
}

char* tipoFuncion(TablaDeSimbolos tabla, char* nombre) {
    ListaFunciones *funcion = buscarFuncion(&tabla.listaFunciones,nombre);
    if(funcion) {
        return funcion->tipoFuncion;
    } else {
        return "";
    }
}

/////////////////////
//TABLA DE SIMBOLOS//
/////////////////////

void imprimirTabla(TablaDeSimbolos tabla) {
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

char *centrar(char *dato, int ancho){	//CENTRA UNA CADENA EN UN ANCHO DADO
	int i, j=0, espacios;
	char *auxiliar=(char *)malloc(1000);
	
	if(strlen(dato) % 2 == 1) espacios = (ancho - strlen(dato) - 1) / 2;
	else espacios = (ancho - strlen(dato)) / 2;

	for(i=0; i < espacios; i++) auxiliar[i]=' ';
	while(dato[j]!='\0'){
		auxiliar[i+j]=dato[j];
		j++;
	} 
	for(i=0; i < espacios; i++){
		auxiliar[i+espacios+j]=' ';	
	} 
	if(strlen(dato) % 2 == 1){
		auxiliar[i+espacios+j]=' ';
		auxiliar[i+espacios+j+1]='\0';
	} 
	else auxiliar[i+espacios+j]='\0';
	return auxiliar;
}

