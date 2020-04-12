#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ERROR 0
#define OK 1

void mostrar_menu(void);
int verificar_txt(char *);
int escanear_archivo(char *);
void guardar(int, char *);
int automata(char *);
int mostrar_consigna(void);

int main() {
	FILE *archivo;
	archivo = fopen("RESULTADOS.txt", "wt");
	fclose(archivo);
	if (mostrar_consigna()){
		printf("\n\nProceso satisfactorio.\n\n");
	}
	else{
		printf("\n\nEl Proceso no se pudo realizar porque el archivo no existe.\n");
	}
	return 0;
}

int mostrar_consigna(){
	char archivo[20];
	printf("Trabajo Practico Nro 1 - Automata Finito Deterministico para Constantes Enteras\n\nIngrese el nombre del archivo a escanear: ");
	scanf("%s", archivo);
	verificar_txt(archivo);
	return escanear_archivo(archivo);
}

int escanear_archivo(char *archivo){
	FILE *datos;
	char caracter, cadena[50];
	int len;
	datos=fopen(archivo, "rt");
	if (datos==NULL) return ERROR;
	do{	
		strcpy(cadena, "");
		len = 0;
		caracter = fgetc(datos);
		while(caracter != ',' && caracter != EOF){
			cadena[len] = caracter;
			caracter = fgetc(datos);
			len++;
		}
		cadena[len] = '\0';
		guardar(automata(cadena), cadena);
	}while(caracter!=EOF);
	return OK;	
}

int verificar_txt(char *archivo){
	if (strstr(archivo, ".txt") == NULL){
		strcat(archivo, ".txt");
	}
}

int automata(char *cadena){
	int len = 0, inicio = 0, recorrido = 0;
	int automata[7][6]={{2,1,1,6,6,6},{1,1,1,6,6,6},{5,5,6,3,6,6},{4,4,4,6,4,6},{4,4,4,6,4,6},{5,5,6,6,6,6},{6,6,6,6,6,6}};
	while(cadena[len] != '\0'){
		if(cadena[len] == '0'){
			recorrido = 0;
		}
		else if(cadena[len]>='1' && cadena[len]<='7'){
			recorrido = 1;
		}
		else if(cadena[len]=='8' || cadena[len]=='9'){
			recorrido = 2;
		}
		else if(cadena[len]>='x' || cadena[len]<='X'){
			recorrido = 3;
		}
		else if((cadena[len]>='a' && cadena[len]<='f') || (cadena[len]>='A' && cadena[len]<='F')){
			recorrido = 4;
		}
		else{
			recorrido = 5;
		}
		inicio = automata[inicio][recorrido];
		len++;
	}
	return inicio;
}

void guardar(int base, char *cadena){
	FILE *archivo;
	archivo = fopen("RESULTADOS.txt", "at");
	fputs(cadena, archivo);
	switch(base){
		case 2:
		case 5:
			fputs(" - OCTAL\n", archivo);
			break;	
		case 1:
			fputs(" - DECIMAL\n", archivo);
			break;
		case 4:
			fputs(" - HEXADECIMAL\n", archivo);
			break;	
		case 0: 
			fputs(" - PALABRA NULA\n", archivo);
			break;	
		default:
			fputs(" - INCORRECTO\n", archivo);
	}
	
 	fclose (archivo);
}
