#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

////////////////////////////////////////////////////////////////////////////////////

typedef struct{
	char *dato;
	double numero1;
	double numero2;
}Contenido;

typedef struct nodo{
	Contenido datos;
	struct nodo *siguiente;
}Nodo;

typedef Nodo *PunteroNodo;

typedef struct pilaUbicacion{
	PunteroNodo inicio;
	int tamanio;
}Pila;

////////////////////////////////////////////////////////////////////////////////////

void inicializar(Pila *pila){
	pila->inicio = NULL;
	pila->tamanio = 0;
}

int octADec(int dato){
	int acum = 0, i = 0;
	do{
		acum += (dato%10)*(pow(8,i));
		i++;
		dato/=10;
	}while(dato!=0);
	return acum;
}

int hexADec(char *dato){
	int i, j = 0, acum = 0, a;
	dato ++;
	dato ++;
	for(i=strlen(dato)-1;i>=0;i--){
		switch (dato[i]){
			case 'x':
			case 'X':
			case 'L':
			case 'l':
			case 'U':
			case 'u':
				break;
			default:
				if(isdigit(dato[i])) acum+=((dato[i] - '0')*pow(16,j));
				else acum+=((toupper(dato[i])- 55)*pow(16,j));
				j++;
				break;
		}
	}
	return acum;
}

void escribirPila(Pila *pila, char *dato, double valor1, double valor2){
	PunteroNodo nodo;
	nodo = (Nodo *)malloc(sizeof(Nodo));
	nodo->datos.dato = strdup(dato);
	nodo->datos.numero1 = valor1;
	nodo->datos.numero2 = valor2;
	nodo->siguiente = pila->inicio;
	pila->inicio = nodo;
	pila->tamanio++;
}

Contenido leerPila(Pila *pila){
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

void agregarOrdenado(Pila *pila, char *dato){
	Pila auxiliar;
	Contenido variable;
	inicializar(&auxiliar);
	if(pila->inicio!=NULL){
		while (pila->inicio!=NULL) {
			if(strcmp(pila->inicio->datos.dato, dato)<0){
				escribirPila(pila,dato,1,0);
				break;
			}
			else if(strcmp(pila->inicio->datos.dato, dato)>0){
				escribirPila(&auxiliar,pila->inicio->datos.dato,pila->inicio->datos.numero1, pila->inicio->datos.numero2);
				pila->tamanio--;
				pila->inicio = pila->inicio->siguiente;
			}
			else{
				variable = leerPila(pila);
				escribirPila(pila,variable.dato,variable.numero1 + 1, variable.numero2);
				break;
			}
		}
		if(pila->inicio == NULL) escribirPila(pila,dato,1, 0);
		while (auxiliar.inicio!=NULL){
			escribirPila(pila,auxiliar.inicio->datos.dato,auxiliar.inicio->datos.numero1, auxiliar.inicio->datos.numero2);
			auxiliar.inicio = auxiliar.inicio->siguiente;
		}
	}
	else{
		escribirPila(pila,dato,1, 0);
	}
}

void darVuelta(Pila *pila){
	Pila auxiliar;
	while (pila->inicio!=NULL) {
		escribirPila(&auxiliar,pila->inicio->datos.dato,pila->inicio->datos.numero1, pila->inicio->datos.numero2);
		pila->inicio = pila->inicio->siguiente;
	}
	pila->inicio = auxiliar.inicio;
}

char *centrar(char *dato, int ancho){
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

void imprimirArchivo(Pila *pila, FILE *r, char *titulo, char *titulo0, int f1dato, char *titulo1, int f1valor1, int f2valor1, char *titulo2, int f1valor2, int f2valor2){
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

void imprimirConsola(Pila *pila, char *titulo, char *titulo0, int f1dato, char *titulo1, int f1valor1, int f2valor1, char *titulo2, int f1valor2, int f2valor2){
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

int suma(Pila *pila){
	int i, acum=0;
	PunteroNodo nodo;
	nodo = pila->inicio;
	for(i=0;i<pila->tamanio;++i){
		acum += atoi(nodo->datos.dato);
		nodo = nodo->siguiente;
	}
	return acum;
}

int evalua(char *dato, char v1, char v2){
	int i=0;
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

int verificar_txt(char *archivo){
	if (strstr(archivo, ".txt") == NULL){
		strcat(archivo, ".txt");
	}
}

int mostrarMenu(char *archivoE, char *archivoS){
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

void modificarArchivo(char *archivo){
	char opcion[50];
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
	scanf("%s", opcion);
	if(strcmp(opcion,"2")==0) strcpy(archivo, "VACIO");
	else if (strcmp(opcion,"1")!=0) strcpy(archivo, opcion);
}

