#include<math.h>
#include<stdlib.h>
#include<string.h>

typedef struct Nodo{
    char info[500];
    struct Nodo *sig;
} Nodo;

typedef struct NodoCaracter{
    char caracter;
    int acum;
    struct NodoCaracter *sig;
} NodoCaracter;

typedef struct NodoIdentificador{
    char identificador[200];
    int acum;
    struct NodoIdentificador *sig;
} NodoIdentificador;

typedef struct NodoNoReconocido{
    char noReconocido[50];
    int linea;
    struct NodoNoReconocido *sig;
} NodoNoReconocido;

typedef NodoNoReconocido *ListaNoReconocido;
typedef NodoNoReconocido *punteroNodoNoReconocido;
typedef NodoIdentificador *ListaIdentificador;
typedef NodoIdentificador *punteroNodoIdentificador;
typedef NodoCaracter *ListaCaracter;
typedef NodoCaracter *punteroNodoCaracter;
typedef Nodo *Lista;
typedef Nodo *punteroNodo;

int octalADecimal(int);
int hexadecimalADecimal(char*);
void reconocerLibreria(char*);
void reconocerDefinicion(char*, char*);
int calcularSaltoDeLinea(char*);
void insertarPrincipio(Lista*, char*);
void insertarFinal(Lista*, char*);
void insertarFinalNoReconocido(ListaNoReconocido*, char*,int);
void insertarPrincipioCaracter(ListaCaracter*, char*);
void insertarOrdenado(ListaIdentificador*, char*);
void reporteIncludes(FILE*,Lista);
void reporteDefiniciones(FILE*, Lista);
void reporteIdentificadores(FILE*, ListaIdentificador);
void reporteLiteralesCadena(FILE*, Lista);
void reportePalabrasReservadas(FILE*, Lista);
void reporteDecimales(FILE*, Lista, int);
void reporteOctales(FILE*, Lista);
void reporteHexadecimales(FILE*, Lista);
void reporteConstantesNumericas(FILE*, Lista, int, Lista, Lista, Lista);
void reporteCaracteresYOperadores(FILE*, ListaCaracter);
void reporteComentarios(FILE*, Lista);
void reporteComentariosMultiples(FILE*, Lista);
void reporteNoReconocidos(FILE*, ListaNoReconocido);


void insertarPrincipioCaracter(ListaCaracter* listaCaracteres, char* caracterPuntuacion){
    punteroNodoCaracter nodo;
    punteroNodoCaracter aux;
    nodo = (NodoCaracter *)malloc(sizeof(NodoCaracter));
    aux = (NodoCaracter *)malloc(sizeof(NodoCaracter));
    nodo->caracter = caracterPuntuacion[0];
    nodo->acum = 1;
    aux = *listaCaracteres;
    if(aux == NULL){
        nodo->sig = *listaCaracteres;
        *listaCaracteres = nodo;
    }
    else{
        while(aux != NULL){
            if(aux->caracter == caracterPuntuacion[0])
            {
                aux->acum++;
                return 0;
            }
            aux = aux->sig;
        }
        nodo->sig = *listaCaracteres;
        *listaCaracteres = nodo;
    }
}

void insertarPrincipio(Lista* lista, char* elemento){
    punteroNodo nodo;
    nodo = (Nodo *)malloc(sizeof(Nodo));
    strncpy(nodo->info,elemento,400);
    nodo->sig = *lista;
    *lista = nodo; 
}

void insertarFinal(Lista* lista, char* elemento){
    punteroNodo nodo;
    punteroNodo aux;
    nodo = (Nodo *)malloc(sizeof(Nodo));
    aux = (Nodo *)malloc(sizeof(Nodo));
    strncpy(nodo->info,elemento,50);
    nodo->sig = NULL;
    aux = *lista;
    if(aux == NULL){
        *lista = nodo; 
    }
    else{
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nodo;
    }
}
void insertarFinalNoReconocido(ListaNoReconocido* listaNoReconocido, char* caracter, int lineaEncontrado){
    punteroNodoNoReconocido nodo;
    punteroNodoNoReconocido aux;
    nodo = (NodoNoReconocido *)malloc(sizeof(NodoNoReconocido));
    aux = (NodoNoReconocido *)malloc(sizeof(NodoNoReconocido));
    strncpy(nodo->noReconocido,caracter,50);
    nodo->linea = lineaEncontrado;
    nodo->sig = NULL;
    aux = *listaNoReconocido;
    if(aux == NULL){
        *listaNoReconocido = nodo; 
    }
    else{
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nodo;
    }
}

void insertarOrdenado(ListaIdentificador* listaIdentificadores, char* elemento){
    punteroNodoIdentificador nodo;
    punteroNodoIdentificador aux;
    nodo = (NodoIdentificador *)malloc(sizeof(NodoIdentificador));
    aux = (NodoIdentificador *)malloc(sizeof(NodoIdentificador));
    strncpy(nodo->identificador,elemento,200);
    nodo->acum = 1;
    aux = *listaIdentificadores;
    if(aux == NULL){
        nodo->sig = *listaIdentificadores;
        *listaIdentificadores = nodo;
    }
    else{
        if(aux->sig == NULL){
            if(strcmp(elemento,aux->identificador) == -1){
                nodo->sig = aux;
                *listaIdentificadores = nodo;
            }
            else if(strcmp(elemento,aux->identificador) == 0){
                aux->acum++;
            }
            else if(strcmp(elemento,aux->identificador) == 1){
                nodo->sig = NULL;
                aux->sig = nodo;
            }
        }
        else{
            while((strcmp(elemento,aux->identificador) != -1) && (aux->sig !=NULL)){
                if(strcmp(elemento,aux->identificador) == 0){
                    aux->acum++;
                }
                if((strcmp(elemento,aux->identificador) == 1) && strcmp(elemento,aux->sig->identificador) == -1){
                    nodo->sig = aux->sig;
                    aux->sig = nodo;
                    return 0;
                }
                aux = aux->sig;
            }
            if(strcmp(elemento,aux->identificador) == 0){
                aux->acum++;
            }
            else if(strcmp(elemento,aux->identificador) == 1){
                nodo->sig = NULL;
                aux->sig = nodo;
            }
            else{
                if(*listaIdentificadores == aux){
                    nodo->sig = aux;
                    *listaIdentificadores = nodo;
                }
            }
        }
    }
}

int octalADecimal(int octal){
    int decimal = 0, i = 0, rem;
    while (octal != 0){
        rem = octal % 10;
        octal /= 10;
        decimal += rem * pow(8, i);
        ++i;
    }
    return decimal;
}

int hexadecimalADecimal(char* hexadecimal)
{
    int decimal = 0, i = 0;
    int length = strlen(hexadecimal);
    char caracter;
    while(i<(length-2)){
        caracter = hexadecimal[length-1-i];
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

void reconocerLibreria(char* info){
    char aux[50];
    int x = 0, i = 0;
    while(info[i] != '<'){
        i++;
    }
    i++;
    while(info[i] != '>'){
        aux[x] = info[i];
        x++;
        i++;
    }
    aux[x] = '\0';
    strcpy(info,aux);
}

void reconocerDefinicion(char* info, char* variable){
    char aux[50];
    int i = 0, x =0;
    while(info[i] != ' '){
        i++;
    }
    i++;
    while(info[i] != ' '){
        aux[x] = info[i];
        x++;
        i++;
    }
    i++;
    aux[x] = '\0';
    x = 0;
    while(info[i] != '\0'){
        variable[x] = info[i];
        x++;
        i++;
    }
    variable[x] = '\0';
    strcpy(info,aux);
}

int calcularSaltoDeLinea(char* info){
    if(info[0] == '\n'){
        return 1;
    }
    else{
        return 0;
    }
}

void reporteIncludes(FILE* reporte, Lista listaIncludes){
    fputs("==========================================================================================================================\n",reporte);
    fputs("INCLUDES encontrados: \n",reporte);
    if(listaIncludes !=NULL){
        while(listaIncludes !=NULL){
            reconocerLibreria(listaIncludes->info);
            fprintf(reporte,"%s%s%s\n","Se incluyo la libreria \"", listaIncludes->info, "\" en el archivo.");
            listaIncludes = listaIncludes->sig;
        }
    }
    else{
        fputs("No se encontraron includes.\n",reporte);
    }
    
}

void reporteDefiniciones(FILE* reporte, Lista listaDefiniciones){
    fputs("DEFINICIONES encontradas: \n",reporte);
    if(listaDefiniciones != NULL){
        while(listaDefiniciones != NULL){
            char variable[50];
            reconocerDefinicion(listaDefiniciones->info,variable);
            fprintf(reporte,"%s%s%s%s\n","Se definio la variable '",variable,"' como: ",listaDefiniciones->info);
            listaDefiniciones = listaDefiniciones->sig;
        }
    }
    else{
        fputs("No se encontraron definiciones.\n",reporte);
    }
    fputs("==========================================================================================================================\n",reporte);
}

void reporteIdentificadores(FILE* reporte, ListaIdentificador listaIdentificadores){
    fputs("IDENTIFICADORES encontrados: \n", reporte);
    if(listaIdentificadores != NULL){
        while(listaIdentificadores != NULL){
            fprintf(reporte,"%s%s%s%d%s\n","El identificador ",listaIdentificadores->identificador, " fue encontrado ", listaIdentificadores->acum, " veces.");
            listaIdentificadores = listaIdentificadores->sig;
        }
    }
    else{
        fputs("No se encontraron identificadores.\n",reporte);
    }
    fputs("==========================================================================================================================\n",reporte);
}

void reporteLiteralesCadena(FILE* reporte, Lista listaLiteralesCadena){
    fputs("LITERALES CADENA encontrados: \n",reporte);
    if(listaLiteralesCadena != NULL){
        while(listaLiteralesCadena != NULL){
            fprintf(reporte,"%s%s%d\n",listaLiteralesCadena->info," -> Longitud: ",(strlen(listaLiteralesCadena->info)-2));
            listaLiteralesCadena = listaLiteralesCadena->sig;
        }
    }
    else{
        fputs("No se encontraron literales cadena.\n",reporte);
    }
    fputs("==========================================================================================================================\n",reporte);
}

void reportePalabrasReservadas(FILE* reporte, Lista listaPalabrasReservadas){
    fputs("PALABRAS RESERVADAS encontradas: \n", reporte);
    if(listaPalabrasReservadas != NULL){
        while(listaPalabrasReservadas != NULL){
            fprintf(reporte,"%s\n",listaPalabrasReservadas->info);
            listaPalabrasReservadas = listaPalabrasReservadas->sig;
        }
    }
    else{
        fputs("No se encontraron palabras reservadas.\n",reporte);
    }
    fputs("==========================================================================================================================\n",reporte);
}

void reporteDecimales(FILE* reporte, Lista listaDecimales, int acumDecimal){
    fputs("Constantes enteras DECIMALES encontradas: \n", reporte);
    if(listaDecimales !=NULL){
        while(listaDecimales != NULL){
            fprintf(reporte,"%s\n",listaDecimales->info);
            listaDecimales = listaDecimales->sig;
        }
    }
    else{
        fputs("No se encontraron constantes enteras decimales.\n",reporte);
    }
    fprintf(reporte, "La suma de todos los decimales encontrados es: %d\n", acumDecimal);
}

void reporteOctales(FILE* reporte, Lista listaOctales){
    fputs("Constantes enteras OCTALES encontradas: \n",reporte);
    if(listaOctales != NULL){
        while(listaOctales != NULL){
            fprintf(reporte,"%s%s\t%s%d\n","Numero octal: ",listaOctales->info,"Valor decimal: ",octalADecimal(atoi(listaOctales->info)));
            listaOctales = listaOctales->sig;
        }
    }
    else{
        fputs("No se encontraron constantes enteras octales.\n",reporte);
    }
}

void reporteHexadecimales(FILE* reporte, Lista listaHexadecimales){
    fputs("Constantes enteras HEXADECIMALES encontradas: \n",reporte);
    if(listaHexadecimales != NULL){
        while(listaHexadecimales != NULL){
            fprintf(reporte,"%s%s\t%s%d\n","Numero hexadecimal: ",listaHexadecimales->info,"Valor decimal: ",hexadecimalADecimal(listaHexadecimales->info));
            listaHexadecimales = listaHexadecimales->sig;
        }
    }
    else{
        fputs("No se encontraron constantes enteras hexadecimales.\n",reporte);
    }
}

void reporteReales(FILE* reporte, Lista listaReales){
    double entera;
    double mantisa;
    fputs("Constantes REALES encontradas: \n",reporte);
    if(listaReales != NULL){
        while(listaReales != NULL){
            mantisa = modf(atof(listaReales->info),&entera);
            fprintf(reporte,"%s%s\t%s%.0lf\t%s%lf\n","Numero: ",listaReales->info," Parte entera: ",entera," mantisa: ",mantisa);
            listaReales = listaReales->sig;
        }
    }
    else{
        fputs("No se encontraron constantes reales.\n",reporte);
    }
}

void reporteConstantesNumericas(FILE* reporte, Lista listaDecimales, int acumDecimal, Lista listaOctales, Lista listaHexadecimales, Lista listaReales){
    fputs("CONSTANTES NUMERICAS\n",reporte);
    reporteDecimales(reporte, listaDecimales, acumDecimal);
    fputs("--------------------------------------------------------------------------------------------------------------------------\n",reporte);
    reporteOctales(reporte,listaOctales);
    fputs("--------------------------------------------------------------------------------------------------------------------------\n",reporte);
    reporteHexadecimales(reporte,listaHexadecimales);
    fputs("--------------------------------------------------------------------------------------------------------------------------\n",reporte);
    reporteReales(reporte, listaReales);
    fputs("==========================================================================================================================\n",reporte);
}

void reporteCaracteresYOperadores(FILE* reporte, ListaCaracter listaCaracteres){
    fputs("OPERADORES/CARACTERES DE PUNTUACION encontradas: \n", reporte);
    if(listaCaracteres !=NULL){
        while(listaCaracteres != NULL){
            fprintf(reporte,"%s%c%s%d%s\n","El Caracter '",listaCaracteres->caracter,"' se encontro ",listaCaracteres->acum," veces.");
            listaCaracteres = listaCaracteres->sig;
        }
    }
    else{
        fputs("No se encontraron operadores/caracteres de puntuacion.\n",reporte);
    }
    fputs("==========================================================================================================================\n",reporte);
}

void reporteComentarios(FILE* reporte, Lista listaComentarios){
    fputs("COMENTARIOS DE UNA LINEA encontrados: \n",reporte);
    if(listaComentarios != NULL){
        while(listaComentarios != NULL){
            fprintf(reporte,"%s\n",listaComentarios->info);
            listaComentarios = listaComentarios->sig;
        }
    }
    else{
        fputs("No se encontraron comentarios de una linea.\n",reporte);
    }
    fputs("==========================================================================================================================\n",reporte);
}

void reporteComentariosMultiples(FILE* reporte, Lista listaComentariosMultiples){
    fputs("COMENTARIOS DE MULTIPLES LINEAS encontrados: \n",reporte);
    if(listaComentariosMultiples != NULL){
        while(listaComentariosMultiples != NULL){
            fprintf(reporte,"%s\n",listaComentariosMultiples->info);
            listaComentariosMultiples = listaComentariosMultiples->sig;
        }
    }
    else{
        fputs("No se encontraron comentarios de multiples lineas.\n",reporte);
    }
    fputs("==========================================================================================================================\n",reporte);
}

void reporteNoReconocidos(FILE* reporte, ListaNoReconocido listaNoReconocidos){
    fputs("CARACTERES NO RECONOCIDOS encontrados: \n",reporte);
    if(listaNoReconocidos != NULL){
        while(listaNoReconocidos != NULL){
            if(listaNoReconocidos->noReconocido[0] != '\n'){
                fprintf(reporte,"%s%s%s%d\n","El caracter no reconocido '",listaNoReconocidos->noReconocido,"' fue encontrado en la linea ",listaNoReconocidos->linea);
            }
            listaNoReconocidos = listaNoReconocidos->sig;
        }
    }
    else{
        fputs("No se encontraron caracteres no reconocidos.",reporte);
    }
    fputs("==========================================================================================================================",reporte);
}