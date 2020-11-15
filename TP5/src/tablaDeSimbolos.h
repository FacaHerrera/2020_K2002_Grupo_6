#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct TablaDeSimbolos {
    struct ListaVariables *listaVariables;
    struct ListaVariables *listaVariablesExternas;
    struct ListaFunciones *listaFuncionesDefinidas;
    struct ListaFunciones *listaFuncionesDeclaradas;
    struct ListaFunciones *listaFuncionesExternas;
} TablaDeSimbolos;

typedef struct Nodo {
    char* tipo;
    char flagArray;
    struct Nodo *sig;
} Nodo;

typedef struct Error {
    char* error;
    int linea;
    struct Error *sig;
} Error;

typedef struct ListaVariables{
    char* nombreVariable;
    char* tipoVariable;
    char flagArray;
    struct ListaVariables *sig;
} ListaVariables;

typedef struct ListaParametros{
    char* nombreParametro;
    char* tipoParametro;
    char flagArray;
    struct ListaParametros *sig;
} ListaParametros;

typedef struct ListaFunciones{
    char* nombreFuncion;
    char* tipoFuncion;
    struct ListaParametros *listaParametros;
    struct ListaFunciones *sig;
} ListaFunciones;

Error *errores = NULL;

void imprimirTabla(TablaDeSimbolos);
void validarInvocacion(TablaDeSimbolos , char* tete, Nodo *, int);

int longitudNodo(Nodo **);
void agregarNodo(Nodo **, char*, char);

void agregarError(Error **, char*, int);
void imprimirErrores(Error **);

ListaVariables* buscarVariable(ListaVariables **,char *);
void agregarVariable(ListaVariables**, char* , char*, char*, int, char, char, int);
void imprimirVariables(ListaVariables **, char*);
char* tipoVariable(TablaDeSimbolos, ListaParametros **, char*);
char esArrayVariable(TablaDeSimbolos , char*);
void agregarVariablesExternas(ListaVariables**, char*);
void agregarVariablesExternasBis(ListaVariables **, char*, char*);
void agregarParametro(ListaParametros**, char*, char*, int, char);
ListaParametros* buscarParametro(ListaParametros **, char *);
void imprimirParametros(ListaParametros **, int, int, int, int, int, char);
ListaParametros* parametrosIguales(ListaParametros**);
void eliminarParametro(ListaParametros **, char*);

void agregarFuncion(ListaFunciones** , ListaFunciones** , char* , char*, ListaParametros**, int, int);
ListaFunciones* buscarFuncion(ListaFunciones **,char *);
void imprimirFunciones(ListaFunciones**, char*);
char* tipoFuncion(TablaDeSimbolos, char*);
void agregarFuncionesExternas(ListaFunciones**, ListaVariables**, char*);
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

void agregarNodo(Nodo ** tiposDeDato, char* tipo, char flagArray) {
    Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
    nuevo->tipo = strdup(tipo);
    nuevo->flagArray = flagArray;
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
    nuevo->error = strdup(error);
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
    int i, ancho, columnas = 2, anchoC1 = 180, anchoC2 = 10;
    ancho = anchoC1 + anchoC2;
    char ultimo;
    char titulo[20] = "LISTA DE ERRORES";
    char titulo0[20] = "ERROR";
    char titulo1[20] = "LINEA";
    char snum[10];

    Error *aux = *errores;

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

void agregarVariable(ListaVariables** variables, char* nombre, char* tipo, char* tipoInicializador, int linea, char flagError, char flagArray, int tipodecla) {
    if(!flagError){
        if(strcmp(tipo, tipoInicializador) && strcmp(tipoInicializador,"vacio") && strcmp(tipoInicializador,"error") && !flagArray && tipodecla != 1) {

            if(!strcmp(tipoInicializador,"")) {
                agregarError(&errores, "Error Semantico: El inicializador no existe", linea);
            } else {
                char *error = (char *)malloc(strlen(tipo)+strlen(tipoInicializador)+strlen("Error Semantico: Se le asigna un valor de tipo ")+strlen(" a una variable de tipo ") + 1);
                strcpy(error,"Error Semantico: Se le asigna un valor de tipo ");
                strcat(error,tipoInicializador);
                strcat(error," a una variable de tipo ");
                strcat(error, tipo);
                agregarError(&errores, error, linea);
            }
        }
        else {
            ListaVariables *nodoNuevo = (ListaVariables *)malloc(sizeof(ListaVariables));
            nodoNuevo->tipoVariable = strdup(tipo);
            nodoNuevo->nombreVariable =  strdup(nombre);
            nodoNuevo->flagArray = flagArray;
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
                    char *error = (char *)malloc(strlen("Error Semantico: Doble declaracion de la variable ")+strlen(nombre) + 1);
                    strcpy(error, "Error Semantico: Doble declaracion de la variable ");
                    strcat(error, nombre);
                    agregarError(&errores, error, linea);
                } else {
                    aux->sig = nodoNuevo;
                }
            }
        }
    }
}

void imprimirVariables(ListaVariables **variables, char *titulo){
    int i, ancho, columnas = 3, anchoC1 = 50, anchoC2 = 50, anchoC3 = 12;
    ancho = anchoC1 + anchoC2 + anchoC3;
    char ultimo;
    char titulo0[20] = "NOMBRE VARIABLE";
    char titulo1[20] = "TIPO VARIABLE";
    char titulo2[10] = "ES ARRAY?";

    ListaVariables *aux = *variables;

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
        printf("%s", centrar(titulo0, anchoC1));
        printf("%c", 186);
        printf("%s", centrar(titulo1, anchoC2));
        printf("%c", 186);
        printf("%s", centrar(titulo2, anchoC3));
        printf("%c\n", 186);

        printf("%c", 204);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 206);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c", 206);
        for(i=0; i < anchoC3; i++) printf("%c", 205);
        printf("%c\n", 185);

        while(aux != NULL){
            printf("%c", 186);
            printf("%s", centrar(aux->nombreVariable, anchoC1));
            printf("%c", 186);
            printf("%s", centrar(aux->tipoVariable, anchoC2));
            printf("%c", 186);
            if(aux->flagArray) printf("%s", centrar("SI", anchoC3));
            else printf("%s", centrar("NO", anchoC3));
            printf("%c\n", 186);
            aux = aux->sig;
        }
        printf("%c", 200);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 202);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c", 202);
        for(i=0; i < anchoC3; i++) printf("%c", 205);
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

char* tipoVariable(TablaDeSimbolos tabla, ListaParametros **parametros, char* nombre ) {
    ListaParametros* parametro = buscarParametro(&*parametros,nombre);
    ListaVariables *variable = buscarVariable(&tabla.listaVariables,nombre);
    ListaVariables *variableExterna = buscarVariable(&tabla.listaVariablesExternas,nombre);
    if(variable) {
        return variable->tipoVariable;
    } else if(parametro){
        return parametro->tipoParametro;
    } else if(variableExterna){
        return variableExterna->tipoVariable;
    } else{
        return "";
    }
}

char esArrayVariable(TablaDeSimbolos tabla, char* nombre ) {
    ListaVariables *variable = buscarVariable(&tabla.listaVariables,nombre);
    if(variable) {
        return variable->flagArray;
    } else {
        return 2;
    }
}

void agregarVariablesExternas(ListaVariables ** listaVariables, char* nombreBis){
    FILE* archivo;
    char* aux;
    char nombre[20];
    if((archivo=fopen(nombreBis,"rt"))!=NULL){
        fgets(nombre, 20, (FILE*) archivo);
        while(strcmp(nombre,"$\n")) fgets(nombre, 20, (FILE*) archivo);
        while(fgets(nombre, 20, (FILE*) archivo)) {
            ListaVariables *nodoNuevo = (ListaVariables* )malloc(sizeof(ListaVariables));
            nodoNuevo->tipoVariable = strdup(nombre);
            aux = strtok(nombre, "\n");
            strcpy(nombre,aux);
            nodoNuevo->nombreVariable = "-";
            nodoNuevo->flagArray = 0;
            nodoNuevo->sig = NULL;
            if(*listaVariables==NULL){
                *listaVariables = nodoNuevo;
            }
            else{
                ListaVariables* aux;
                aux = *listaVariables;
                while(aux->sig != NULL){
                    aux = aux->sig;
                }
                aux->sig = nodoNuevo;
            }
        } 
    }
    fclose(archivo);
}

void agregarVariablesExternasBis(ListaVariables ** listaVariables, char* variable, char* tipo){
    ListaVariables *nodoNuevo = (ListaVariables *)malloc(sizeof(ListaVariables));
    nodoNuevo->tipoVariable = strdup(tipo);
    nodoNuevo->nombreVariable =  strdup(variable);
    nodoNuevo->flagArray = 0;
    nodoNuevo->sig = NULL;
    if(*listaVariables == NULL){
        *listaVariables = nodoNuevo;
    }
    else{
        ListaVariables* aux = *listaVariables;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nodoNuevo;
    }
}

///////////////////////
//LISTA DE PARAMETROS//
///////////////////////

void agregarParametro(ListaParametros** parametros, char* nombre, char* tipo, int linea, char flagArray) {
    ListaParametros *nodoNuevo = (ListaParametros* )malloc(sizeof(ListaParametros));
    nodoNuevo->nombreParametro =  strdup(nombre);
    nodoNuevo->tipoParametro = strdup(tipo);
    nodoNuevo->flagArray = flagArray;
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
    while((aux != NULL) && (strcmp(aux->nombreParametro,nombre) != 0 || strcmp(aux->nombreParametro,"-") == 0 || strcmp(aux->nombreParametro,"*-") == 0)){
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

void agregarFuncion(ListaFunciones** funcionesDeclaradas, ListaFunciones** funcionesDefinidas, char* nombre, char* tipo, ListaParametros** parametros, int linea, int tipoFuncion) {
    ListaParametros *parametroIgual = parametrosIguales(parametros);

    ListaFunciones *funciones;
    if(tipoFuncion) funciones = *funcionesDefinidas;
    else funciones = *funcionesDeclaradas;

    int i = 0, flag = 0;
    if(parametroIgual) {
        char *error = (char *)malloc(strlen("Error Semantico en la funcion ") + strlen(nombre) + strlen(": Doble declaracion del parametro ") + strlen(parametroIgual->nombreParametro) + 1);
        strcpy(error, "Error Semantico en la funcion ");
        strcat(error, nombre);
        strcat(error,": Doble declaracion del parametro ");
        strcat(error, parametroIgual->nombreParametro);
        agregarError(&errores, error, linea);
        flag = 1;
    } 
    else if(buscarFuncion(funcionesDeclaradas, nombre)){
        ListaFunciones *funcionBIS = buscarFuncion(funcionesDeclaradas, nombre);
        ListaParametros *parametrosBIS = funcionBIS->listaParametros;
        
        ListaParametros *parametrosBIS1 = *parametros;

        if(longitudParametros(&parametrosBIS1) != longitudParametros(&parametrosBIS)) {
            char longitud1[100];
            sprintf(longitud1, "%d", longitudParametros(&parametrosBIS1));
            char longitud2[100];
            sprintf(longitud2, "%d", longitudParametros(&parametrosBIS));
            char *error = (char *)malloc(strlen("Error Semantico en la definicion de la funcion ") + strlen(nombre) + strlen(": Se quiere definir a la funcion con ") + strlen(longitud2) + strlen(" parametros, mientras que la funcion tiene ") +strlen(longitud1) + strlen(" parametros") + 1);
            strcpy(error, "Error Semantico en la definicion de la funcion ");
            strcat(error, nombre);
            strcat(error, ": Se quiere definir a la funcion con ");
            strcat(error, longitud1);
            strcat(error, " parametros, mientras que la funcion tiene ");
            strcat(error, longitud2);
            strcat(error, " parametros");
            agregarError(&errores, error, linea);
            flag = 1;
        }
        else{
            while(parametrosBIS != NULL) {
                    if(strcmp(parametrosBIS->tipoParametro,parametrosBIS1->tipoParametro) || (strcmp(parametrosBIS->tipoParametro,"char*") && strcmp(parametrosBIS1->tipoParametro, "char") && parametrosBIS1->flagArray==1)) {
                        char numeroParametro[100];
                        sprintf(numeroParametro, "%d", i);
                        char *error = malloc(strlen("Error semantico en la definición de la funcion ") + strlen(nombre) + strlen(": El parametro ") + strlen(" no es de tipo ") + strlen(parametrosBIS->tipoParametro) + 2);
                        strcpy(error, "Error Semantico en la definicion de la funcion ");
                        strcat(error, nombre);
                        strcat(error, ": El parametro ");
                        strcat(error, numeroParametro);
                        strcat(error, " no es de tipo ");
                        strcat(error, parametrosBIS->tipoParametro);
                        agregarError(&errores,error,linea);
                        flag = 1;
                    }
                    i++;
                    parametrosBIS1 = parametrosBIS1->sig;
                    parametrosBIS = parametrosBIS->sig;
            }
        }
    }
    if(!flag) {
        
        ListaFunciones *nodoNuevo = (ListaFunciones* )malloc(sizeof(ListaFunciones));
        nodoNuevo->tipoFuncion = strdup(tipo);
        nodoNuevo->nombreFuncion =  strdup(nombre);
        nodoNuevo->listaParametros = *parametros;
        nodoNuevo->sig = NULL;
        if(*funcionesDeclaradas==NULL && !tipoFuncion){
            *funcionesDeclaradas = nodoNuevo;
        }
        else if(*funcionesDefinidas==NULL && tipoFuncion){
            *funcionesDefinidas = nodoNuevo;
        }
        else{
            ListaFunciones* aux;
            if(tipoFuncion)aux = *funcionesDefinidas;
            else aux = *funcionesDeclaradas;
            while(aux->sig != NULL){
                aux = aux->sig;
            }
            if(buscarFuncion(&funciones, nombre)) {
                char *error = (char *)malloc(strlen("Error Semantico: Doble declaracion de la funcion ")+strlen(nombre) + 1);
                strcpy(error, "Error Semantico: Doble declaracion de la funcion ");
                strcat(error, nombre);
                agregarError(&errores, error, linea);
            } else {
                aux->sig = nodoNuevo;
            }
        }
    }
}

void agregarFuncionesExternas(ListaFunciones ** listaFunciones, ListaVariables ** listaVariables, char* tabla){
    FILE *archivo;
    char* aux;
    char nombre[20], nombreArchivo[20];
    int i;
    aux = strtok(aux, " ");
    for(i=0;aux!=NULL;i++) {
      if(i==1) strcpy(nombreArchivo,aux);
      aux = strtok(NULL, " ");
    }
    aux = strtok(nombreArchivo, "<");
    strcpy(nombreArchivo,aux);
    aux = strtok(nombreArchivo, ".");
    strcpy(nombreArchivo,aux);
    strcat(nombreArchivo,".txt");
    if((archivo=fopen(nombreArchivo,"rt"))!=NULL){
        while(fgets(nombre, 20, (FILE*) archivo)) {
            if(!strcmp(nombre,"$\n")) break;
            ListaFunciones *nodoNuevo = (ListaFunciones* )malloc(sizeof(ListaFunciones));
            aux = strtok(nombre, "-");
            for(i=0;aux!=NULL;i++) {
                if(i==1) strcpy(nombre,aux);
                else nodoNuevo->nombreFuncion =  strdup(aux);;
                aux = strtok(NULL, " ");
            }
            aux = strtok(nombre, "\n");
            strcpy(nombre,aux);
            nodoNuevo->tipoFuncion =  strdup(nombre);
            nodoNuevo->listaParametros = NULL;
            nodoNuevo->sig = NULL;
            if(*listaFunciones==NULL){
                *listaFunciones = nodoNuevo;
            }
            else{
                ListaFunciones* aux;
                aux = *listaFunciones;
                while(aux->sig != NULL){
                    aux = aux->sig;
                }
                aux->sig = nodoNuevo;
            }
        } 
    }
    fclose(archivo);
    agregarVariablesExternas(&*listaVariables, nombreArchivo);
}

ListaFunciones* buscarFuncion(ListaFunciones **funciones,char *nombre){
    ListaFunciones* aux = *funciones;
    while((aux != NULL) && (strcmp(aux->nombreFuncion,nombre) != 0)){
        aux = aux->sig;        
    }
    return aux;
}

void imprimirFunciones(ListaFunciones **funciones, char* titulo){
    int i, ancho, columnas = 3, anchoC1 = 50, anchoC2 = 50, anchoC3 = 60, anchoC31 = 10, anchoC32 = 30, anchoC33 = 20;
    ancho = anchoC1 + anchoC2 + anchoC3;
    char ultimo;
    char titulo0[20] = "NOMBRE FUNCION";
    char titulo1[20] = "TIPO FUNCION";
    char titulo2[20] = "PARAMETROS";
    char titulo21[20] = "N*";
    char titulo22[20] = "NOMBRE";
    char titulo23[20] = "TIPO";

    ListaFunciones *aux = *funciones;

    if(aux != NULL){
        printf("\n\n\n");
        printf("%c", 201);
        for(i=0; i < ancho+(columnas-1)+2; i++) printf("%c", 205);
        printf("%c", 187);
        printf("\n%c", 186);
        printf("%s", centrar(titulo, ancho+2));

        printf("  %c\n", 186);
        printf("%c", 204);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 203);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c", 203);
        for(i=0; i < anchoC3+2; i++) printf("%c", 205);
        printf("%c\n", 185);

        printf("%c", 186);
        printf("%s", centrar(" ", anchoC1));
        printf("%c", 186);
        printf("%s", centrar(" ", anchoC2));
        printf("%c", 186);
        printf("%s", centrar(titulo2, anchoC3+2));
        printf("%c\n", 186);

        printf("%c", 186);
        printf("%s", centrar(titulo0, anchoC1));
        printf("%c", 186);
        printf("%s", centrar(titulo1, anchoC2));
        printf("%c", 204);
        for(i=0; i < anchoC31; i++) printf("%c", 205);
        printf("%c", 203);
        for(i=0; i < anchoC32; i++) printf("%c", 205);
        printf("%c", 203);
        for(i=0; i < anchoC33; i++) printf("%c", 205);
        printf("%c\n", 185); 

        printf("%c", 186);
        printf("%s", centrar(" ", anchoC1));
        printf("%c", 186);
        printf("%s", centrar(" ", anchoC2));
        printf("%c", 186);
        printf("%s", centrar(titulo21, anchoC31));
        printf("%c", 186);
        printf("%s", centrar(titulo22, anchoC32));
        printf("%c", 186);
        printf("%s", centrar(titulo23, anchoC33));
        printf("%c\n", 186);

        printf("%c", 204);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 206);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c", 206);
        for(i=0; i < anchoC31; i++) printf("%c", 205);
        printf("%c", 206);
        for(i=0; i < anchoC32; i++) printf("%c", 205);
        printf("%c", 206);
        for(i=0; i < anchoC33; i++) printf("%c", 205);
        printf("%c\n", 185); 

        while(aux != NULL){
            printf("%c", 186);
            printf("%s", centrar(aux->nombreFuncion, anchoC1));
            printf("%c", 186);
            printf("%s", centrar(aux->tipoFuncion, anchoC2));
            printf("%c", 186);
            if(aux->sig==NULL) ultimo = 1;
            else ultimo = 0;
            imprimirParametros(&aux->listaParametros, anchoC1, anchoC2 , anchoC31, anchoC32, anchoC33, ultimo);
            aux = aux->sig;
        }
        printf("%c", 200);
        for(i=0; i < anchoC1; i++) printf("%c", 205);
        printf("%c", 202);
        for(i=0; i < anchoC2; i++) printf("%c", 205);
        printf("%c", 202);
        for(i=0; i < anchoC31; i++) printf("%c", 205);
        printf("%c", 202);
        for(i=0; i < anchoC32; i++) printf("%c", 205);
        printf("%c", 202);
        for(i=0; i < anchoC33; i++) printf("%c", 205);
        printf("%c\n", 188);
        
    }
}

void imprimirParametros(ListaParametros **parametros, int anchoC1, int anchoC2, int ancho1, int ancho2, int ancho3, char ultimo){
    ListaParametros *aux = *parametros;
    int i = 1;
    char snum[10];
    while(aux != NULL){
        itoa(i, snum, 10);
        if(i==1){
            printf("%s", centrar(snum, ancho1));
            printf("%c", 186);
            printf("%s", centrar(aux->nombreParametro, ancho2));
            printf("%c", 186);
            printf("%s", centrar(aux->tipoParametro, ancho3));
            printf("%c\n", 186);
        }
        else{
            printf("%c", 186);
            printf("%s", centrar(" ", anchoC1));
            printf("%c", 186);
            printf("%s", centrar(" ", anchoC2));
            printf("%c", 186);
            printf("%s", centrar(snum, ancho1));
            printf("%c", 186);
            printf("%s", centrar(aux->nombreParametro, ancho2));
            printf("%c", 186);
            printf("%s", centrar(aux->tipoParametro, ancho3));
            printf("%c\n", 186);
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
            for(i=0; i < ancho2; i++) printf("%c", 205);
            printf("%c", 206);
            for(i=0; i < ancho3; i++) printf("%c", 205);
            printf("%c\n", 185); 
        }
        i++;
    }
    if(i==1){
        printf("%s", centrar("0", ancho1));
        printf("%c", 186);
        printf("%s", centrar("NO TIENE", ancho2));
        printf("%c", 186);
        printf("%s", centrar("NO TIENE", ancho3));
        printf("%c\n", 186);
        if(!ultimo){
            printf("%c", 204);
            for(i=0; i < anchoC1; i++) printf("%c", 205);
            printf("%c", 206);
            for(i=0; i < anchoC2; i++) printf("%c", 205);
            printf("%c", 206);
            for(i=0; i < ancho1; i++) printf("%c", 205);
            printf("%c", 206);
            for(i=0; i < ancho2; i++) printf("%c", 205);
            printf("%c", 206);
            for(i=0; i < ancho3; i++) printf("%c", 205);
            printf("%c\n", 185); 
        }
    }
}

char* tipoFuncion(TablaDeSimbolos tabla, char* nombre) {
    ListaFunciones *funcion;
    if(buscarFuncion(&tabla.listaFuncionesDeclaradas,nombre)) {
        funcion = buscarFuncion(&tabla.listaFuncionesDeclaradas,nombre);
        return funcion->tipoFuncion;
    } 
    else if(buscarFuncion(&tabla.listaFuncionesDefinidas,nombre)) {
        funcion = buscarFuncion(&tabla.listaFuncionesDefinidas,nombre);
        return funcion->tipoFuncion;
    }
    else{
        return "";
    }
}

/////////////////////
//TABLA DE SIMBOLOS//
/////////////////////

void imprimirTabla(TablaDeSimbolos tabla) {
    imprimirVariables(&tabla.listaVariables, "LISTA DE VARIABLES");
    imprimirFunciones(&tabla.listaFuncionesDeclaradas, "LISTA DE FUNCIONES DECLARADAS");
    imprimirFunciones(&tabla.listaFuncionesDefinidas, "LISTA DE FUNCIONES DEFINIDAS");
    //imprimirFunciones(&tabla.listaFuncionesExternas, "LISTA DE FUNCIONES EXTERNAS");
   // imprimirVariables(&tabla.listaVariablesExternas, "LISTA DE VARIABLES EXTERNAS");
}

void validarInvocacion(TablaDeSimbolos tabla, char* nombreFuncion, Nodo *tiposDeDato, int linea) {
    ListaFunciones *funcionDeclaradasInvocada = buscarFuncion(&tabla.listaFuncionesDeclaradas,nombreFuncion);
    ListaFunciones *funcionDefinidasInvocada = buscarFuncion(&tabla.listaFuncionesDefinidas,nombreFuncion);
    ListaFunciones *funcionExternasInvocada = buscarFuncion(&tabla.listaFuncionesExternas,nombreFuncion);
    int i = 1;
    if(!funcionDeclaradasInvocada && !funcionDefinidasInvocada && !funcionExternasInvocada) {
        char *error = (char *)malloc(strlen("Error Semantico en la invocacion de la funcion ") + strlen(nombreFuncion) + strlen(": La funcion ") + strlen(nombreFuncion) + strlen(" no existe") + 1);
        strcpy(error, "Error Semantico en la invocacion de la funcion ");
        strcat(error, nombreFuncion);
        strcat(error, ": La funcion ");
        strcat(error, nombreFuncion);
        strcat(error, " no existe");
        agregarError(&errores, error, linea);
    } else {
        ListaParametros *parametros;
        if(funcionDeclaradasInvocada) parametros = funcionDeclaradasInvocada->listaParametros;
        else if(funcionDeclaradasInvocada) parametros = funcionDefinidasInvocada->listaParametros;
        else return;
        if(longitudParametros(&parametros) != longitudNodo(&tiposDeDato)) {
            char longitud1[100];
            sprintf(longitud1, "%d", longitudParametros(&parametros));
            char longitud2[100];
            sprintf(longitud2, "%d", longitudNodo(&tiposDeDato));
            char *error = (char *)malloc(strlen("Error Semantico en la invocacion de la funcion ") + strlen(nombreFuncion) + strlen(": Se invoca a la funcion con ") + strlen(longitud2) + strlen(" parametros, mientras que la funcion tiene ") +strlen(longitud1) + strlen(" parametros") + 1);
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
                    char *error = (char *)malloc(strlen("Error semantico en la invocacion de la funcion ") + strlen(nombreFuncion) + strlen(": El parametro ") + strlen(" no existe") + 2);
                    strcpy(error, "Error Semantico en la invocacion de la funcion ");
                    strcat(error, nombreFuncion);
                    strcat(error, ": El parametro ");
                    strcat(error, numeroParametro);
                    strcat(error, " no existe");
                    agregarError(&errores,error,linea);
                } else if(strcmp(parametros->tipoParametro,tiposDeDato->tipo) && (strcmp(parametros->tipoParametro,"char*") || strcmp(tiposDeDato->tipo, "char") || !(tiposDeDato->flagArray==1))) {
                    char numeroParametro[100];
                    sprintf(numeroParametro, "%d", i);
                    printf("%s", tiposDeDato->tipo);
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
                tiposDeDato = tiposDeDato->sig;
                parametros = parametros->sig;
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

