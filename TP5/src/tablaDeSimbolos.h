#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdarg.h>
#include"impresion.h"
#include<windows.h>

typedef struct TablaDeSimbolos {
    struct ListaVariables *listaVariables;
    struct ListaVariables *listaParametros;
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
    char* nombre;
    char* tipo;
    char flagArray;
    int jerarquia;
    int linea;
    struct ListaVariables *sig;
} ListaVariables;

typedef struct ListaFunciones{
    char* nombreFuncion;
    char* tipoFuncion;
    struct ListaVariables *listaParametros;
    struct ListaFunciones *sig;
} ListaFunciones;

Error *errores = NULL;

void imprimirTabla(TablaDeSimbolos);
void validarInvocacion(TablaDeSimbolos , char* tete, Nodo *, int, char);

int longitudNodo(Nodo **);
void agregarNodo(Nodo **, char*, char);

void agregarErrores(Error **, int , int , char*, ...);
void imprimirErrores(Error **);

ListaVariables* buscarVariable(ListaVariables **,char *, int);
void agregarVariable(ListaVariables**, ListaVariables**, char* , char*, char*, int, char, char, int, int, int);
void imprimirVariables(ListaVariables **, char*);
char* tipo(TablaDeSimbolos, ListaVariables **, ListaVariables **, char*, int);
char esArrayVariable(ListaVariables ** , char*, int);
void agregarVariablesExternas(ListaVariables**, char*, int);
void agregarVariablesExternasBis(ListaVariables **, char*, char*, int);

ListaVariables* buscarParametro(ListaVariables **, char *);
void agregarParametro(ListaVariables**, char*, char*, int, char);
void imprimirParametros(ListaVariables **, int, int, int, int, int, char);
ListaVariables* parametrosIguales(ListaVariables**);
void eliminarParametro(ListaVariables **, char*);

void escribirAuxiliares(ListaVariables **, char* , char* , char , int , int );
void sacarVariables(ListaVariables **, int );

ListaFunciones* buscarFuncion(ListaFunciones **,char *);
void agregarFuncion(ListaFunciones** , ListaFunciones** , char* , char*, ListaVariables**, int, int);
void imprimirFunciones(ListaFunciones**, char*);
char* tipoFuncion(TablaDeSimbolos, char*);
void agregarFuncionesExternas(ListaFunciones**, ListaVariables**, char*, int);

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

void imprimirErrores(Error **errores){
    int i, ancho, columnas = 2, anchoC1 = 180, anchoC2 = 10;
    ancho = anchoC1 + anchoC2;
    char ultimo;
    char snum[10];

    Error *aux = *errores;

    if(aux != NULL){
        imprimirTitulo(columnas, ancho, "LISTA DE ERRORES");
        imprimirContenido(0, columnas, "ERROR", anchoC1, "LINEA", anchoC2);
        while(aux != NULL){
            itoa(aux->linea, snum, 10);
            if(aux->sig) i=4;
            else i=3;
            imprimirContenido(i, columnas, aux->error, anchoC1, snum, anchoC2);
            aux = aux->sig;
        }
    }
}
void agregarErrores(Error **errores, int linea, int cantidad, char* entrada, ...) {
	
	char salida[200];
	char cadena[200];
	int i=0;
	
	strcpy(cadena, entrada);
	const char caracterCorte[2] = "$";
	char *token;
	token = strtok(cadena, caracterCorte);
	
	va_list pa;
    va_start(pa, entrada);
    
    strcpy(salida,"");
	while( token != NULL ) {
		strcat(salida, token);
		if(i<cantidad) strcat(salida, va_arg(pa, char*));
      	token = strtok(NULL, caracterCorte);
      	i++;
   	}
    va_end(pa);

    Error *nuevo = (Error *)malloc(sizeof(Error));
    nuevo->error = strdup(salida);
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

//////////////////////
//LISTA DE VARIABLES//
//////////////////////

void agregarVariable(ListaVariables** variables, ListaVariables** variablesAuxiliares, char* nombre, char* tipo, char* tipoInicializador, int linea, char flagError, char flagArray, int tipodecla, int jerarquia, int lineaVariable) {
    if(!flagError){
        if(strcmp(tipo, tipoInicializador) && strcmp(tipoInicializador,"vacio") && strcmp(tipoInicializador,"error") && !flagArray && tipodecla != 1) {

            if(!strcmp(tipoInicializador,"")) {
                agregarErrores(&errores, linea, 0, "Error Semantico: El inicializador no existe.");
            } else {
                agregarErrores(&errores, linea, 2, "Error Semantico: Se le asigna un valor de tipo $ a una variable de tipo $.", tipoInicializador, tipo);
            }
        }
        else {
            ListaVariables *nodoNuevo = (ListaVariables *)malloc(sizeof(ListaVariables));
            nodoNuevo->tipo = strdup(tipo);
            nodoNuevo->nombre =  strdup(nombre);
            nodoNuevo->flagArray = flagArray;
            nodoNuevo->jerarquia = jerarquia;
            nodoNuevo->linea = lineaVariable;
            nodoNuevo->sig = NULL;
            if(*variables == NULL){
                *variables = nodoNuevo;
                escribirAuxiliares(variablesAuxiliares, tipo, nombre, flagArray, jerarquia, lineaVariable);
            }
            else{
                
                ListaVariables* aux1 = *variables;
                while(aux1->sig != NULL){
                    aux1 = aux1->sig;
                }
                if(buscarVariable(variablesAuxiliares, nombre, jerarquia)) {
                    agregarErrores(&errores, linea, 1, "Error Semantico: Doble declaracion de la variable $.", nombre);
                } else {
                    aux1->sig = nodoNuevo;
                    escribirAuxiliares(variablesAuxiliares, tipo, nombre, flagArray, jerarquia, lineaVariable);
                }
            }
        }
    }
}

void escribirAuxiliares(ListaVariables **variablesAuxiliares, char* tipo, char* nombre, char flagArray, int jerarquia, int lineaVariable){
	ListaVariables* nodo;
	nodo = (ListaVariables *)malloc(sizeof(ListaVariables));
	nodo->tipo = strdup(tipo);
    nodo->nombre =  strdup(nombre);
    nodo->flagArray = flagArray;
    nodo->jerarquia = jerarquia;
    nodo->linea = lineaVariable;
    nodo->sig = *variablesAuxiliares;
	*variablesAuxiliares = nodo;
}

void sacarVariables(ListaVariables **variables, int jerarquia){
	if ((*variables)) {
        while((*variables)->jerarquia==jerarquia){
            (*variables) = (*variables)->sig;
            if((*variables) == NULL) break;
        }
    }
}

void imprimirVariables(ListaVariables **variables, char *titulo){
    int i, ancho, columnas = 4, anchoC1 = 50, anchoC2 = 50, anchoC3 = 12, anchoC4 = 12;
    char array[3], snum[10];
    ancho = anchoC1 + anchoC2 + anchoC3 + anchoC4;
    ListaVariables *aux = *variables;

    if(aux != NULL){
        imprimirTitulo(columnas, ancho, titulo);
        imprimirContenido(0, columnas, "NOMBRE VARIABLE", anchoC1, "TIPO VARIABLE", anchoC2, "ES ARRAY?", anchoC3, "LINEA", anchoC4);
        while(aux != NULL){
            itoa(aux->linea, snum, 10);
            if(aux->sig) i=4;
            else i=3;
            if(aux->flagArray) strcpy(array,"SI");
            else strcpy(array,"NO");
            imprimirContenido(i, columnas, aux->nombre, anchoC1, aux->tipo, anchoC2, array, anchoC3, snum, anchoC4);
            aux = aux->sig;
        }
    }
}

ListaVariables* buscarVariable(ListaVariables **variables, char *nombre, int jerarquia){
    ListaVariables* aux = *variables;
    while((aux != NULL) && (strcmp(aux->nombre,nombre) || !(aux->jerarquia<=jerarquia))){
        aux = aux->sig;        
    }
    return aux;
}

char* tipo(TablaDeSimbolos tabla, ListaVariables **listaVariables, ListaVariables **parametros, char* nombre, int jerarquia ) {
    ListaVariables* parametro = buscarParametro(parametros,nombre);
    ListaVariables *variable = buscarVariable(listaVariables,nombre, jerarquia);
    ListaVariables *variableExterna = buscarVariable(&tabla.listaVariablesExternas,nombre, 0);
    if(variable) {
        return variable->tipo;
    } else if(parametro){
        return parametro->tipo;
    } else if(variableExterna){
        return variableExterna->tipo;
    } else{
        return "";
    }
}

char esArrayVariable(ListaVariables **listaVariables, char* nombre, int jerarquia) {
    ListaVariables *variable = buscarVariable(listaVariables,nombre, jerarquia);
    if(variable) {
        return variable->flagArray;
    } else {
        return 2;
    }
}

void agregarVariablesExternas(ListaVariables ** listaVariables, char* nombreBis, int linea){
    FILE* archivo;
    char* aux;
    char nombre[20];
    if((archivo=fopen(nombreBis,"rt"))!=NULL){
        fgets(nombre, 20, (FILE*) archivo);
        while(strcmp(nombre,"$\n")) fgets(nombre, 20, (FILE*) archivo);
        while(fgets(nombre, 20, (FILE*) archivo)) {
            ListaVariables *nodoNuevo = (ListaVariables* )malloc(sizeof(ListaVariables));
            nodoNuevo->tipo = strdup(nombre);
            aux = strtok(nombre, "\n");
            strcpy(nombre,aux);
            nodoNuevo->nombre = "-";
            nodoNuevo->flagArray = 0;
            nodoNuevo->jerarquia = 0;
            nodoNuevo->linea = linea;
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

void agregarVariablesExternasBis(ListaVariables ** listaVariables, char* variable, char* tipo, int linea){
    ListaVariables *nodoNuevo = (ListaVariables *)malloc(sizeof(ListaVariables));
    nodoNuevo->tipo = strdup(tipo);
    nodoNuevo->nombre =  strdup(variable);
    nodoNuevo->flagArray = 0;
    nodoNuevo->jerarquia = 0;
    nodoNuevo->linea = linea;
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

void agregarParametro(ListaVariables** parametros, char* nombre, char* tipo, int linea, char flagArray) {
    ListaVariables *nodoNuevo = (ListaVariables* )malloc(sizeof(ListaVariables));
    nodoNuevo->nombre =  strdup(nombre);
    nodoNuevo->tipo = strdup(tipo);
    nodoNuevo->flagArray = flagArray;
    nodoNuevo->sig = NULL;
    if(*parametros==NULL){
        *parametros = nodoNuevo;
    }
    else{
        ListaVariables* aux = *parametros;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nodoNuevo;
    }
}

ListaVariables* parametrosIguales(ListaVariables** parametros) {
    ListaVariables *aux = *parametros;
    while(aux != NULL) {
        char * buscado = aux->nombre;
        eliminarParametro(&aux,aux->nombre);
        if(buscarParametro(&aux,buscado)) {
            return buscarParametro(&aux,buscado);
        }
    }
    return NULL;
}

ListaVariables* buscarParametro(ListaVariables **parametros, char *nombre){
    ListaVariables* aux = *parametros;
    while((aux != NULL) && (strcmp(aux->nombre,nombre) != 0 || strcmp(aux->nombre,"-") == 0 || strcmp(aux->nombre,"*-") == 0)){
        aux = aux->sig;        
    }
    return aux;
}

int longitudParametros(ListaVariables **parametros){
    int longitud = 0;
    ListaVariables *aux = *parametros;
    while(aux != NULL){
        aux = aux->sig;
        longitud++;
    }
    return longitud;
}

void eliminarParametro(ListaVariables **parametros, char* v){
    ListaVariables* aux = *parametros;
    ListaVariables* ant = NULL;
    while((aux != NULL) && (strcmp(aux->nombre, v))){
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

void agregarFuncion(ListaFunciones** funcionesDeclaradas, ListaFunciones** funcionesDefinidas, char* nombre, char* tipo, ListaVariables** parametros, int linea, int tipoFuncion) {
    ListaVariables *parametroIgual = parametrosIguales(parametros);

    ListaFunciones *funciones;
    if(tipoFuncion) funciones = *funcionesDefinidas;
    else funciones = *funcionesDeclaradas;

    int i = 0, flag = 0;
    if(parametroIgual) {
        agregarErrores(&errores, linea, 2, "Error Semantico en la funcion $: Doble declaracion del parametro $.", nombre, parametroIgual->nombre);
        flag = 1;
    } 
    else if(buscarFuncion(funcionesDeclaradas, nombre)){
        ListaFunciones *funcionBIS = buscarFuncion(funcionesDeclaradas, nombre);
        ListaVariables *parametrosBIS = funcionBIS->listaParametros;
        
        ListaVariables *parametrosBIS1 = *parametros;

        if(longitudParametros(&parametrosBIS1) != longitudParametros(&parametrosBIS)) {
            char longitud1[100];
            sprintf(longitud1, "%d", longitudParametros(&parametrosBIS1));
            char longitud2[100];
            sprintf(longitud2, "%d", longitudParametros(&parametrosBIS));
            agregarErrores(&errores, linea, 3, "Error Semantico en la definicion de la funcion $: Se quiere definir a la funcion con $ parametros, mientras que la funcion tiene $ parametros.", nombre, longitud1, longitud2);
            flag = 1;
        }
        else{
            while(parametrosBIS != NULL) {
                    if(strcmp(parametrosBIS->tipo,parametrosBIS1->tipo) || (strcmp(parametrosBIS->tipo,"char*") && strcmp(parametrosBIS1->tipo, "char") && parametrosBIS1->flagArray==1)) {
                        char numeroParametro[100];
                        sprintf(numeroParametro, "%d", i);
                        agregarErrores(&errores, linea, 3, "Error Semantico en la definicion de la funcion $: El parametro $ no es de tipo $", nombre, numeroParametro, parametrosBIS->tipo);
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
                agregarErrores(&errores, linea, 1, "Error Semantico: Doble declaracion de la funcion $", nombre);
            } else {
                aux->sig = nodoNuevo;
            }
        }
    }
}

void agregarFuncionesExternas(ListaFunciones ** listaFunciones, ListaVariables ** listaVariables, char* tabla, int linea){
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
    agregarVariablesExternas(&*listaVariables, nombreArchivo, linea);
}

ListaFunciones* buscarFuncion(ListaFunciones **funciones,char *nombre){
    ListaFunciones* aux = *funciones;
    while((aux != NULL) && (strcmp(aux->nombreFuncion,nombre) != 0)){
        aux = aux->sig;        
    }
    return aux;
}

void imprimirFunciones(ListaFunciones **funciones, char* titulo){
    int i = 0, condicion = 2, ancho, columnas = 3, anchoC1 = 50, anchoC2 = 50, anchoC3 = 60, anchoC31 = 10, anchoC32 = 30, anchoC33 = 20;
    ancho = anchoC1 + anchoC2 + anchoC3;
    int div1 = 1, div2 = 1, div3 = 3;
    int suma = div1 + div2 + div3 - 3;
    char ultimo;
    char titulo0[20] = "NOMBRE FUNCION";
    char titulo1[20] = "TIPO FUNCION";
    char titulo2[20] = "PARAMETROS";
    char titulo21[20] = "N*";
    char titulo22[20] = "NOMBRE";
    char titulo23[20] = "TIPO";
    char snum[10];

    ListaFunciones *aux1 = *funciones;
    ListaVariables *aux2;
    if(aux1){
        imprimirTitulo(columnas, ancho+suma, titulo);
        imprimirSubtitulo(columnas, div1, anchoC1, titulo0, div2, anchoC2, titulo1, div3, anchoC31, anchoC32, anchoC33, titulo2, titulo21, titulo22, titulo23);

        while(aux1){
            aux2 = aux1->listaParametros;
            while(aux2){
                i++;
                itoa(i, snum, 10);
                strcpy(titulo0, aux1->nombreFuncion);
                strcpy(titulo1, aux1->tipoFuncion);
                if(aux2->sig) {
                    condicion = 0;
                    strcpy(titulo0, "");
                    strcpy(titulo1, "");
                }
                else if(!aux1->sig) condicion = 1;
                else condicion = 2;
                imprimirContenidoBis(condicion, columnas, div1, anchoC1, titulo0, div2, anchoC2, titulo1, div3, anchoC31, anchoC32, anchoC33, snum, aux2->nombre, aux2->tipo);
                aux2 = aux2->sig;
            }
            if(i==0) imprimirContenidoBis(condicion, columnas, div1, anchoC1, aux1->nombreFuncion, div2, anchoC2, aux1->tipoFuncion, div3, anchoC31, anchoC32, anchoC33, "0", "NO TIENE", "NO TIENE");
            i = 0;
            condicion = 2;
            aux1 = aux1->sig;
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
    else if(buscarFuncion(&tabla.listaFuncionesExternas,nombre)){
        funcion = buscarFuncion(&tabla.listaFuncionesExternas,nombre);
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
    imprimirVariables(&tabla.listaVariables, "LISTA DE VARIABLES DECLARADAS");
    imprimirFunciones(&tabla.listaFuncionesDeclaradas, "LISTA DE FUNCIONES DECLARADAS");
    imprimirFunciones(&tabla.listaFuncionesDefinidas, "LISTA DE FUNCIONES DEFINIDAS");
    //imprimirFunciones(&tabla.listaFuncionesExternas, "LISTA DE FUNCIONES EXTERNAS");
    //imprimirVariables(&tabla.listaVariablesExternas, "LISTA DE VARIABLES EXTERNAS");
    //imprimirVariables(&tabla.listaVariablesAuxiliares, "LISTA DE VARIABLES AUXILIARES");
}

void validarInvocacion(TablaDeSimbolos tabla, char* nombreFuncion, Nodo *tiposDeDato, int linea, char flagAnd) {
    ListaFunciones *funcionDeclaradasInvocada = buscarFuncion(&tabla.listaFuncionesDeclaradas,nombreFuncion);
    ListaFunciones *funcionDefinidasInvocada = buscarFuncion(&tabla.listaFuncionesDefinidas,nombreFuncion);
    ListaFunciones *funcionExternasInvocada = buscarFuncion(&tabla.listaFuncionesExternas,nombreFuncion);
    int i = 1;
    if(!funcionDeclaradasInvocada && !funcionDefinidasInvocada && !funcionExternasInvocada) {
        agregarErrores(&errores, linea, 2, "Error Semantico en la invocacion de la funcion $: La funcion $ no existe.", nombreFuncion, nombreFuncion);
    } else {
        ListaVariables *parametros;
        if(funcionDeclaradasInvocada) parametros = funcionDeclaradasInvocada->listaParametros;
        else if(funcionDeclaradasInvocada) parametros = funcionDefinidasInvocada->listaParametros;
        else return;
        if(longitudParametros(&parametros) != longitudNodo(&tiposDeDato)) {
            char longitud1[100];
            sprintf(longitud1, "%d", longitudParametros(&parametros));
            char longitud2[100];
            sprintf(longitud2, "%d", longitudNodo(&tiposDeDato));
            agregarErrores(&errores, linea, 3, "Error Semantico en la invocacion de la funcion $: Se invoca a la funcion con $ parametros, mientras que la funcion tiene $ parametros.", nombreFuncion, longitud2, longitud1);
        } else {
            while(parametros != NULL) {
                if(!strcmp(tiposDeDato->tipo,"")) {
                    char numeroParametro[100];
                    sprintf(numeroParametro, "%d", i);
                    agregarErrores(&errores, linea, 2, "Error semantico en la invocacion de la funcion $: El parametro $ no existe.", nombreFuncion, numeroParametro);
                } else if(strcmp(parametros->tipo,tiposDeDato->tipo) && (strcmp(parametros->tipo,"char*") || strcmp(tiposDeDato->tipo, "char") || !(tiposDeDato->flagArray==1)) && (!(flagAnd==1) || strncmp(tiposDeDato->tipo, parametros->tipo, 1))) {
                    char numeroParametro[100];
                    sprintf(numeroParametro, "%d", i);
                    agregarErrores(&errores, linea, 2, "Error Semantico en la invocacion de la funcion $: El parametro $ no es de tipo $.", nombreFuncion, numeroParametro, parametros->tipo);
                }
                i++;
                tiposDeDato = tiposDeDato->sig;
                parametros = parametros->sig;
            }
        }
    }
}

void pantallaCompleta() {	//EJECUTA LA CONSOLA EN PANTALLA COMPLETA
    keybd_event(VK_MENU,
                0x38,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                KEYEVENTF_KEYUP,
                0);
    keybd_event(VK_MENU,
                0x38,
                KEYEVENTF_KEYUP,
                0);
    return;
} 

////////
//MENU//
////////

int mostrarMenu(char *archivoE){	//MUESTRA EL MENU PRINCIPAL
	int opcion;
	while(1){
		system("CLS");
		printf("TP5 - INTEGRADOR\n\nQUE DESEA HACER?\n\n\t1-VER/MODIFICAR ARCHIVO DE ENTRADA (Actual: %s)\n\t2-CORRER ANALIZADOR\n\t3-SALIR\n", archivoE);
		fflush(stdin);
		scanf("%d", &opcion);
		if(opcion>=1&&opcion<=3){
			return opcion;
			break;
		}
		printf("Ingrese opcion valida.\n\n");
		system("PAUSE");
	}
}

void modificarArchivo(char *archivo){	//CAMBIA EL NOMBRE DE UNA CADENA (EN ESTE CASO EL NOMBRE DEL ARCHIVO)
	char opcion[200];
    char aux;
    int i=1;
	system("CLS");
	if(strcmp(archivo, "VACIO")!=0){
		printf("El siguiente es el archivo actual: \n");
		system("PAUSE");
		FILE *r = fopen(archivo, "r");
		if(r==NULL){
			printf("\nNO EXISTE EL ARCHIVO DE ENTRADA.\n\n");
			system("PAUSE");
			fclose(r);
			exit;
		}
		else{
            printf ("%4d - %c ", i, 219);
			while (!feof (r)){
                aux = getc(r);
                printf ("%c",  aux);
                if(aux=='\n'){
                    i++;
                    printf ("%4d - %c ",  i, 219);
                }
            }
            printf ("\n\n");
			system("PAUSE");
		}
		
	}
	system("CLS");
	printf("Ingrese el nombre del archivo o la ruta (1 para cancelar y 2 para borrar): ");
	fflush(stdin);
	scanf("%[^\n]", opcion);
	if(strcmp(opcion,"2")==0) strcpy(archivo, "VACIO");
	else if (strcmp(opcion,"1")!=0){
		 strcpy(archivo, opcion);
	}
}