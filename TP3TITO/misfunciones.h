#include<math.h>
#include<stdlib.h>
#include<string.h>

typedef struct Nodo{
    char info[500];
    int info2;
    struct Nodo *sig;
} Nodo;

typedef Nodo *Lista;
typedef Nodo *punteroNodo;

void insertarFinal(Lista* lista, char* cadena, int entero){
    punteroNodo nodo;
    punteroNodo aux;
    nodo = (Nodo *)malloc(sizeof(Nodo));
    aux = (Nodo *)malloc(sizeof(Nodo));
    strncpy(nodo->info,cadena,500);
    nodo->info2 = entero;
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

void insertarOrdenado(Lista* lista, char* cadena){
    punteroNodo nodo;
    punteroNodo aux;
    nodo = (Nodo *)malloc(sizeof(Nodo));
    aux = (Nodo *)malloc(sizeof(Nodo));
    strncpy(nodo->info,cadena,500);
    nodo->info2 = 1;
    aux = *lista;
    if(aux == NULL){
        nodo->sig = *lista;
        *lista = nodo;
    }
    else{
        if(aux->sig == NULL){
            if(strcmp(cadena,aux->info) == -1){
                nodo->sig = aux;
                *lista = nodo;
            }
            else if(strcmp(cadena,aux->info) == 0){
                aux->info2++;
            }
            else if(strcmp(cadena,aux->info) == 1){
                nodo->sig = NULL;
                aux->sig = nodo;
            }
        }
        else{
            while((strcmp(cadena,aux->info) != -1) && (aux->sig !=NULL)){
                if(strcmp(cadena,aux->info) == 0){
                    aux->info2++;
                }
                if((strcmp(cadena,aux->info) == 1) && strcmp(cadena,aux->sig->info) == -1){
                    nodo->sig = aux->sig;
                    aux->sig = nodo;
                    return 0;
                }
                aux = aux->sig;
            }
            if(strcmp(cadena,aux->info) == 0){
                aux->info2++;
            }
            else if(strcmp(cadena,aux->info) == 1){
                nodo->sig = NULL;
                aux->sig = nodo;
            }
            else{
                if(*lista == aux){
                    nodo->sig = aux;
                    *lista = nodo;
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

int calcularSaltosDeLineaComentariosMultiples(char* info){
    int i = 0, acum = 0;
    while(info[i] != '\0'){
        if(info[i] == '\n'){
            acum++;
        }
        i++;
    }
    return acum;
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

void reporteIdentificadores(FILE* reporte, Lista listaIdentificadores){
    fputs("IDENTIFICADORES encontrados: \n", reporte);
    if(listaIdentificadores != NULL){
        while(listaIdentificadores != NULL){
            fprintf(reporte,"%s%s%s%d%s\n","El identificador ",listaIdentificadores->info, " fue encontrado ", listaIdentificadores->info2, " veces.");
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

void reporteCaracteresYOperadores(FILE* reporte, Lista listaCaracteres){
    fputs("OPERADORES/CARACTERES DE PUNTUACION encontradas: \n", reporte);
    if(listaCaracteres !=NULL){
        while(listaCaracteres != NULL){
            fprintf(reporte,"%s%s%s%d%s\n","El Caracter '",listaCaracteres->info,"' se encontro ",listaCaracteres->info2," veces.");
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

void reporteNoReconocidos(FILE* reporte, Lista listaNoReconocidos){
    fputs("CARACTERES NO RECONOCIDOS encontrados: \n",reporte);
    if(listaNoReconocidos != NULL){
        while(listaNoReconocidos != NULL){
            if(listaNoReconocidos->info[0] != '\n'){
                fprintf(reporte,"%s%s%s%d\n","El caracter no reconocido '",listaNoReconocidos->info,"' fue encontrado en la linea ",listaNoReconocidos->info2);
            }
            listaNoReconocidos = listaNoReconocidos->sig;
        }
    }
    else{
        fputs("No se encontraron caracteres no reconocidos.",reporte);
    }
    fputs("==========================================================================================================================",reporte);
}