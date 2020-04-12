#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ERROR 0
#define OK 1

void mostrar_menu(void);
int verificar_txt(char *);
int escanear_archivo(char *);
void guardar(int, char *);
int automata_hexadecimal(char *);
int automata_decimal(char *);
int automata_octal(char *);

int main(int argc, char *argv[]) {
	FILE *archivog;
	archivog = fopen("RESULTADOS.txt", "w");
	fclose(archivog);
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
	verificar_txt(&archivo);
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
		if(len>0){
			if(cadena[0]!='0'){
				guardar(automata_decimal(cadena), cadena);
			}
			else if(cadena[1]=='x' || cadena[1]=='X'){
				guardar(automata_hexadecimal(cadena), cadena);
			}
			else{
				guardar(automata_octal(cadena), cadena);
			}
		}
	}while(caracter!=EOF);
	return OK;	
}

int verificar_txt(char *archivo){
	if (strstr(archivo, ".txt") == NULL){
		strcat(archivo, ".txt");
	}
}

int automata_hexadecimal(char *cadena){
	int len = 0, inicio = 0, recorrido = 0;
	int hexa[4][3] = {{1,-1,-1},{-1,2,-1},{3,-1,3},{3,-1,3}};
	while(cadena[len] != '\0'){
		if(cadena[len] == '0'){
			recorrido = 0;
		}
		else if(cadena[len]==88 || cadena[len]==120){
			recorrido = 1;
		}
		else if((cadena[len]>=49 && cadena[len]<=57) || (cadena[len]>=65 && cadena[len]<=70) || (cadena[len]>=97 && cadena[len]<=102)){
			recorrido = 2;
		}
		else{
			return ERROR;
		}
		if((inicio = hexa[inicio][recorrido]) == -1){
			return ERROR;
		} 
		len++;
	}
	return 16;
}

int automata_decimal(char *cadena){
	int len = 0, inicio = 0, recorrido = 0;
	int decimal[2][2] = {{-1,1},{1,1}};
	while(cadena[len] != '\0'){
		if(cadena[len] == '0'){
			recorrido = 0;
		}
		else if(cadena[len]>='1' && cadena[len]<='9'){
			recorrido = 1;
		}
		else{
			return ERROR;
		}
		if((inicio = decimal[inicio][recorrido]) == -1){
			return ERROR;
		} 
		len++;
	}
	return 10;	
}

int automata_octal(char *cadena){
	int len = 0, inicio = 0, recorrido = 0;
	int octal[2][2] = {{1,-1},{1,1}};
	while(cadena[len] != '\0'){
		if(cadena[len] == '0'){
			recorrido = 0;
		}
		else if(cadena[len]>='1' && cadena[len]<='7'){
			recorrido = 1;
		}
		else{
			return ERROR;
		}
		if((inicio = octal[inicio][recorrido]) == -1){
			return ERROR;
		} 
		len++;
	}
	return 8;
}

void guardar(int base, char *cadena){
	FILE *archivog;
	archivog = fopen("RESULTADOS.txt", "a");
	fputs(cadena, archivog);
	switch(base){
		case 0:
			fputs(" - INCORRECTO\n", archivog);
			break;
		case 8:
			fputs(" - OCTAL\n", archivog);
			break;	
		case 10:
			fputs(" - DECIMAL\n", archivog);
			break;
		case 16:
			fputs(" - HEXADECIMAL\n", archivog);
			break;	
	}
	
 	fclose (archivog);
}
