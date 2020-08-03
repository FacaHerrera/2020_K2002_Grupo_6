////////////////////////////
//Declaracion de LIBRERIAS//
////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <windows.h> 

/////////////////////////////////////
//Definicion de TIPOS y ESTRUCTURAS//
/////////////////////////////////////

typedef struct{	//NUEVA ESTRUCTURA DE DATOS CON EL CONTENIDO DE LAS PILAS
	char *dato;
	double numero1;
	double numero2;
}Contenido;

typedef struct nodo{	//NUEVO NODO
	Contenido datos;
	struct nodo *siguiente;
}Nodo;

typedef Nodo *PunteroNodo;	//NUEVO PUNTERO A NODO

typedef struct pilaUbicacion{	//NUEVA PILA
	PunteroNodo inicio;
	int tamanio;
}Pila;

/////////////
//FUNCIONES//
/////////////

void inicializar(Pila *pila){	//INICIALIZA UNA NUEVA PILA
	pila->inicio = NULL;
	pila->tamanio = 0;
}

void escribirPila(Pila *pila, char *dato, double valor1, double valor2){	//AGREGA NUEVO NODO A LA PILA
	PunteroNodo nodo;
	nodo = (Nodo *)malloc(sizeof(Nodo));
	nodo->datos.dato = strdup(dato);
	nodo->datos.numero1 = valor1;
	nodo->datos.numero2 = valor2;
	nodo->siguiente = pila->inicio;
	pila->inicio = nodo;
	pila->tamanio++;
}

void escribirPilaNR(Pila *pila, char *dato, double valor1, char r){	//AGREGA NUEVO NODO A LA PILA O CONCATENA EN CASO DE SER 
	if(pila->tamanio > 0 && strstr(pila->inicio->datos.dato,"\\n") == 0 && r==0){	//UNA CADENA DE CARACTERES NO RECONOCIDOS
		char *aux;
		aux = (char *)malloc(strlen(dato)+strlen(pila->inicio->datos.dato)+2);
		strcpy(aux, pila->inicio->datos.dato);
		strcat(aux, " ");
		strcat(aux, dato);
		pila->inicio->datos.dato = (char *)realloc(pila->inicio->datos.dato, strlen(aux)+1);
		strcpy(pila->inicio->datos.dato, aux);
	}
	else{
		escribirPila(pila, dato, valor1, 0);
	}
}

Contenido leerPila(Pila *pila){	//Devuelve el primer elemento de la pila
	PunteroNodo nodo;
	nodo = (Nodo *)malloc(sizeof(Nodo));
	Contenido estado;
	if (pila->tamanio!=0){
		nodo = pila->inicio;	
		pila->inicio = pila->inicio->siguiente;
		estado.numero1 = nodo->datos.numero1;
		estado.numero2 = nodo->datos.numero2;
		estado.dato = strdup(nodo->datos.dato);
		pila->tamanio--;
	}
	else{
		estado.numero1 = 0;
		estado.numero2 = 0;
		estado.dato = strdup("");
	}
	free(nodo);
	return estado;
}

void agregarOrdenado(Pila *pila, char *dato){ 	//AGREGA UN NODO A LA PILA DE FORMA ORDENADA
	Pila auxiliar;								//EL MENOR VA ARRIBA
	Contenido variable;
	inicializar(&auxiliar);
	if(pila->inicio!=NULL){
		while (pila->inicio!=NULL) {
			if(strcmp(pila->inicio->datos.dato, dato)<0){	//SI EL DATO INGRESADO ES MENOR QUE EL DE LA PILA, LO AGREGA
				escribirPila(pila,dato,1,0);
				break;
			}
			else if(strcmp(pila->inicio->datos.dato, dato)>0){	//SI ES MAYOR, PONE EL NODO DE LA PILA EN UNA PILA AUXILIAR
				escribirPila(&auxiliar,pila->inicio->datos.dato,pila->inicio->datos.numero1, pila->inicio->datos.numero2);
				pila->tamanio--;
				pila->inicio = pila->inicio->siguiente;
			}
			else{	//SI SON IGUALES, INCREMENTA EL NUMERO DE APARICIONES DE ESE NODO
				variable = leerPila(pila);
				escribirPila(pila,variable.dato,variable.numero1 + 1, variable.numero2);
				break;
			}
		}
		if(pila->inicio == NULL) escribirPila(pila,dato,1, 0);
		while (auxiliar.inicio!=NULL){	//SE VUELVE A CARGAR LA PILA CON LO QUE SE SACO EN LA AUXILIAR
			escribirPila(pila,auxiliar.inicio->datos.dato,auxiliar.inicio->datos.numero1, auxiliar.inicio->datos.numero2);
			auxiliar.inicio = auxiliar.inicio->siguiente;
		}
	}
	else{
		escribirPila(pila,dato,1, 0);	//SI LA PILA ESTA VACIA, DIRECTAMENTE SE CARGA EL NODO
	}
}

void darVuelta(Pila *pila){	//INVIERTE EL SENTIDO DE LA PILA
	Pila auxiliar;
	while (pila->inicio!=NULL) {
		escribirPila(&auxiliar,pila->inicio->datos.dato,pila->inicio->datos.numero1, pila->inicio->datos.numero2);
		pila->inicio = pila->inicio->siguiente;
	}
	pila->inicio = auxiliar.inicio;
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

//GENERA LAS TABLAS DEL INFORME SEGUN UN FORMATO ESPECIFICADO (CANTIDAD DE COLUMNAS Y ANCHO DE CADA UNA). PARA ARCHIVOS
void imprimir1(Pila *pila, FILE *r, char *titulo, char *titulo0, int f1dato, char *titulo1, int f1valor1, int f2valor1, char *titulo2, int f1valor2, int f2valor2){
	int i, columnas, acum = 0, ancho = f1dato + f1valor1 + f2valor1 + f1valor2 + f2valor2;
	PunteroNodo nodo;
	char *aux;
	nodo = pila->inicio;
	if(nodo!=NULL){	
		if(strcmp(titulo1,"")!=0){
			if(strcmp(titulo2,"")!=0) columnas=3;
			else columnas = 2;
		}
		else columnas = 1;

		fprintf(r, "\n\n\n");
		for(i=0; i < ancho+(columnas-1)+2; i++) fprintf(r, "-");
		fprintf(r, "\n|");
		fprintf(r, "%s", centrar(titulo, ancho));

		switch (columnas)
		{
		case 1:
			fprintf(r, "|\n");
			fprintf(r, "|");
			for(i=0; i < ancho; i++) fprintf(r, "-");
			fprintf(r, "|\n");

			fprintf(r, "|");
			fprintf(r, "%s", centrar(titulo0, f1dato));

			fprintf(r, "|\n");
			fprintf(r, "|");
			for(i=0; i < ancho; i++) fprintf(r, "-");
			fprintf(r, "|\n"); 

			for(i=0;i<pila->tamanio;++i){
				fprintf(r, "|");
				fprintf(r, "%s", centrar(nodo->datos.dato, f1dato));
				fprintf(r, "|\n");
				nodo = nodo->siguiente;
			}
			for(i=0; i < ancho+2; i++) fprintf(r, "-");
			fprintf(r, "\n");
			break;
		case 2:
			fprintf(r, " |\n");
			fprintf(r, "|");
			for(i=0; i < ancho+1; i++) fprintf(r, "-");

			fprintf(r, "|\n");

			fprintf(r, "|");
			fprintf(r, "%s", centrar(titulo0, f1dato));
			fprintf(r, "|");
			fprintf(r, "%s", centrar(titulo1, (f1valor1 + f2valor1)));

			fprintf(r, "|\n");
			fprintf(r, "|");
			for(i=0; i < ancho+1; i++) fprintf(r, "-");
			fprintf(r, "|\n"); 

			for(i=0;i<pila->tamanio;++i){
				fprintf(r, "|");
				fprintf(r, "%s", centrar(nodo->datos.dato, f1dato));
				fprintf(r, "|");
				fprintf(r, "%*.*lf", f1valor1, f2valor1, nodo->datos.numero1);
				fprintf(r, "|\n");
				nodo = nodo->siguiente;
			}
			for(i=0; i < ancho+3; i++) fprintf(r, "-");
			fprintf(r, "\n");
			break;
		case 3:
			fprintf(r, "  |\n");
			fprintf(r, "|");
			for(i=0; i < ancho+2; i++) fprintf(r, "-");
			fprintf(r, "|\n");

			fprintf(r, "|");
			fprintf(r, "%s", centrar(titulo0, f1dato));
			fprintf(r, "|");
			fprintf(r, "%s", centrar(titulo1, (f1valor1 + f2valor1)));
			fprintf(r, "|");
			fprintf(r, "%s", centrar(titulo2, (f1valor2 + f2valor2)));

			fprintf(r, "|\n");
			fprintf(r, "|");
			for(i=0; i < ancho+2; i++) fprintf(r, "-");
			fprintf(r, "|\n"); 

			for(i=0;i<pila->tamanio;++i){
				fprintf(r, "|");
				fprintf(r, "%s", centrar(nodo->datos.dato, f1dato));
				fprintf(r, "|");
				fprintf(r, "%*.*lf", f1valor1, f2valor1, nodo->datos.numero1);
				fprintf(r, "|");
				fprintf(r, "% *.*lf",f1valor2, f2valor2 - 1, nodo->datos.numero2);
				fprintf(r, "|\n");
				nodo = nodo->siguiente;
			}
			for(i=0; i < ancho+4; i++) fprintf(r, "-");
			fprintf(r, "\n");
			break;
		}
	}
}

//GENERA LAS TABLAS DEL INFORME SEGUN UN FORMATO ESPECIFICADO (CANTIDAD DE COLUMNAS Y ANCHO DE CADA UNA). PARA CONSOLA
void imprimir(Pila *pila, char *titulo, char *titulo0, int f1dato, char *titulo1, int f1valor1, int f2valor1, char *titulo2, int f1valor2, int f2valor2){
	int i, columnas, acum = 0, ancho = f1dato + f1valor1 + f2valor1 + f1valor2 + f2valor2;
	PunteroNodo nodo;
	char *aux;
	nodo = pila->inicio;
	if(nodo!=NULL){	
		if(strcmp(titulo1,"")!=0){
			if(strcmp(titulo2,"")!=0) columnas=3;
			else columnas = 2;
		}
		else columnas = 1;

		printf("\n\n\n");
		printf("%c", 201);
		for(i=0; i < ancho+(columnas-1); i++) printf("%c", 205);
		printf("%c", 187);
		printf("\n%c", 186);
		printf("%s", centrar(titulo, ancho));

		switch (columnas)
		{
		case 1:
			printf("%c\n", 186);
			printf("%c", 204);
			for(i=0; i < ancho; i++) printf("%c", 205);
			printf("%c\n", 185);

			printf("%c", 186);
			printf("%s", centrar(titulo0, f1dato));

			printf("%c\n", 186);
			printf("%c", 204);
			for(i=0; i < ancho; i++) printf("%c", 205);
			printf("%c\n", 185); 

			for(i=0;i<pila->tamanio;++i){
				printf("%c", 186);
				printf("%s", centrar(nodo->datos.dato, f1dato));
				printf( "%c\n", 186);
				nodo = nodo->siguiente;
			}
			printf("%c", 200);
			for(i=0; i < ancho; i++) printf("%c", 205);
			printf("%c", 188);
			printf("\n");
			break;
		case 2:
			printf(" %c\n", 186);
			printf("%c", 204);
			for(i=0; i < ancho-(f1valor1 + f2valor1); i++) printf("%c", 205);
			printf("%c", 203);
			for(i=0; i < ancho-f1dato; i++) printf("%c", 205);
			printf("%c\n", 185);

			printf("%c", 186);
			printf("%s", centrar(titulo0, f1dato));
			printf("%c", 186);
			printf("%s", centrar(titulo1, (f1valor1 + f2valor1)));

			printf("%c\n", 186);
			printf("%c", 204);
			for(i=0; i < ancho-(f1valor1 + f2valor1); i++) printf("%c", 205);
			printf("%c", 206);
			for(i=0; i < ancho-f1dato; i++) printf("%c", 205);
			printf("%c\n", 185); 

			for(i=0;i<pila->tamanio;++i){
				printf("%c", 186);
				printf("%s", centrar(nodo->datos.dato, f1dato));
				printf("%c", 186);
				printf("%*.*lf", f1valor1, f2valor1, nodo->datos.numero1);
				printf( "%c\n", 186);
				nodo = nodo->siguiente;
			}
			printf("%c", 200);
			for(i=0; i < ancho-(f1valor1 + f2valor1); i++) printf("%c", 205);
			printf("%c", 202);
			for(i=0; i < ancho-f1dato; i++) printf("%c", 205);
			printf("%c", 188);
			printf("\n");
			break;
		case 3:
			printf("  %c\n", 186);
			printf("%c", 204);
			for(i=0; i < ancho-(f1valor1 + f2valor1)-(f1valor2 + f2valor2); i++) printf("%c", 205);
			printf("%c", 203);
			for(i=0; i < ancho-f1dato-(f1valor2 + f2valor2); i++) printf("%c", 205);
			printf("%c", 203);
			for(i=0; i < ancho-f1dato-(f1valor1 + f2valor1); i++) printf("%c", 205);
			printf("%c\n", 185);

			printf("%c", 186);
			printf("%s", centrar(titulo0, f1dato));
			printf("%c", 186);
			printf("%s", centrar(titulo1, (f1valor1 + f2valor1)));
			printf("%c", 186);
			printf("%s", centrar(titulo2, (f1valor2 + f2valor2)));

			printf("%c\n", 186);
			printf("%c", 204);
			for(i=0; i < ancho-(f1valor1 + f2valor1)-(f1valor2 + f2valor2); i++) printf("%c", 205);
			printf("%c", 206);
			for(i=0; i < ancho-f1dato-(f1valor2 + f2valor2); i++) printf("%c", 205);
			printf("%c", 206);
			for(i=0; i < ancho-f1dato-(f1valor1 + f2valor1); i++) printf("%c", 205);
			printf("%c\n", 185); 

			for(i=0;i<pila->tamanio;++i){
				printf("%c", 186);
				printf("%s", centrar(nodo->datos.dato, f1dato));
				printf("%c", 186);
				printf("%*.*lf", f1valor1, f2valor1, nodo->datos.numero1);
				printf("%c", 186);
				printf("% *.*lf",f1valor2, f2valor2 - 1, nodo->datos.numero2);
				printf( "%c\n", 186);
				nodo = nodo->siguiente;
			}
			printf("%c", 200);
			for(i=0; i < ancho-(f1valor1 + f2valor1)-(f1valor2 + f2valor2); i++) printf("%c", 205);
			printf("%c", 202);
			for(i=0; i < ancho-f1dato-(f1valor2 + f2valor2); i++) printf("%c", 205);
			printf("%c", 202);
			for(i=0; i < ancho-f1dato-(f1valor1 + f2valor1); i++) printf("%c", 205);
			printf("%c", 188);
			printf("\n");
			break;
		}
	}
}

int suma(Pila *pila){	//SUMA TODOS LOS ELEMENTOS DE UNA PILA
	int i, acum=0;
	PunteroNodo nodo;
	nodo = pila->inicio;
	for(i=0;i<pila->tamanio;++i){
		acum += atoi(nodo->datos.dato);
		nodo = nodo->siguiente;
	}
	return acum;
}

int evalua(char *dato, char v1, char v2){	//CALCULA LA CANTIDAD DE '\n' QUE TIENE UN COMENTARIO, DEVUELVE ESA CANTIDAD Y LOS SACA.
	int i=0;								//SIRVE PARA MOSTRAR EL COMENTARIO EN UNA SOLA LINEA
	while(1){
		if(*dato=='*'){
			dato++;
			if(*dato=='/') break;
		}
		if(*dato == v1) {
			i++;
			*dato = v2;
		}
		dato++;
	}
	return i;
}

int verificar_txt(char *archivo){	//VERIFICA SI UN ARCHIVO TIENE EXTENCION .TXT. DE NO SER ASI, SE LA AGREGA
	if (strstr(archivo, ".txt") == NULL){
		strcat(archivo, ".txt");
	}
}

int mostrarMenu(char *archivoE, char *archivoS){	//MUESTRA EL MENU PRINCIPAL
	int opcion;
	while(1){
		system("CLS");
		printf("TP3 - ANALIZADOR LEXICO\n\nQUE DESEA HACER?\n\n\t1-VER/MODIFICAR ARCHIVO DE ENTRADA (Actual: %s)\n\t2-VER/MODIFICAR ARCHIVO DE SALIDA (Actual: %s)\n\t3-CORRER EN CONSOLA\n\t4-EXPORTAR ARCHIVO\n\t5-SALIR\n", archivoE, archivoS);
		fflush(stdin);
		scanf("%d", &opcion);
		if(opcion>=1&&opcion<=5){
			return opcion;
			break;
		}
		printf("Ingrese opcion valida.\n\n");
		system("PAUSE");
	}
}

void modificarArchivo(char *archivo){	//CAMBIA EL NOMBRE DE UNA CADENA (EN ESTE CASO EL NOMBRE DEL ARCHIVO)
	char opcion[200];
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
			while (!feof (r))printf ("%c",  getc (r));
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

void AltEnter() {	//EJECUTA LA CONSOLA EN PANTALLA COMPLETA
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

