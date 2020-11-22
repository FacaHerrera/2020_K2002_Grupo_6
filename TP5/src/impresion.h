#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdarg.h>

void imprimirContenido(int , int , ...);
void imprimirTitulo(int , int , char* );
void imprimirSubtitulo(int, ...);
void imprimirContenidoBis(int , int , ...);
char *centrar(char *, int);

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
		auxiliar[i+espacios+j++]=' ';
	} 
	if(ancho % 2) auxiliar[i+espacios+j++]=' ';
	auxiliar[i+espacios+j++]='\0';
	return auxiliar;
}

void imprimirTitulo(int columnas, int ancho, char* titulo){
	int i;
	ancho+=(columnas-1);
	printf("\n\n\n%c", 201);
    for(i=0; i < ancho; i++) printf("%c", 205);
    printf("%c", 187);
    printf("\n%c", 186);
    printf("%s", centrar(titulo, ancho));
    printf("%c\n", 186);
}

void imprimirContenido(int fin, int columnas, ...){
	int i, j;
	int formato[10];
	char* titulos[10];
	char opcion, opcion1, opcion2;
	va_list pa;
    va_start(pa, columnas);
    for(i=0;i<columnas;i++) {
    	titulos[i] = strdup(va_arg(pa, char*));
    	formato[i] = va_arg(pa, int);
	}
	
   	if(fin==0) opcion = 203;
   	else if(fin==2) opcion = 206;
   	else opcion = 'x';
	
	if(opcion!= 'x'){
		printf("%c", 204);
		for(i=0;i<columnas;i++) {
			for(j=0; j < formato[i]; j++) printf("%c", 205);
			if(i<columnas-1) printf("%c", opcion);
			else printf("%c\n", 185);
		}
	}
	
	printf("%c", 186);
   	for(i=0;i<columnas;i++) {
		printf("%s", centrar(titulos[i], formato[i]));
        printf("%c", 186);
   	}
   	printf("\n");
   	
   	switch(fin){
   		case 0:
   		case 1:
   			opcion = 204;
   			opcion1 = 206;
   			opcion2 = 185;
			break;
		case 2:
		case 3:
			opcion = 200;
   			opcion1 = 202;
   			opcion2 = 188;
			break;
		default:
			opcion = 'x';
	}
	
	if(opcion!='x'){
		printf("%c", opcion);
		for(i=0;i<columnas;i++) {
			for(j=0; j < formato[i]; j++) printf("%c", 205);
			if(i<columnas-1) printf("%c", opcion1);
			else printf("%c\n", opcion2);
		}
	}
    va_end(pa);
}

void imprimirSubtitulo(int columnas, ...){
	int i, j, k, ancho, flag = 0;
	int formato[10][10];
	char* titulos[10][10];
	
	for(i=0;i<10;i++) {
    	for(j=0;j<10;j++){
    		formato[i][j] = 0;
    		titulos[i][j] = strdup("");
		}
	}
	
	va_list pa;
    va_start(pa, columnas);
    
    for(i=0;i<columnas;i++) {
    	formato[i][0] = va_arg(pa, int);
    	if(formato[i][0]>1) flag = 1;
    	for(j=1;j<formato[i][0]+1;j++){
    		formato[i][j] = va_arg(pa, int);
		}
		if(formato[i][0]==1)titulos[i][0] = strdup(va_arg(pa, char*));
		else {
			for(j=0;j<formato[i][0]+1;j++){
	    		titulos[i][j] = strdup(va_arg(pa, char*));
			}
		}
	}
	
	printf("%c", 204);
	for(i=0;i<columnas;i++) {
		j = 1;
		ancho = 0;
		while(formato[i][j]){
			ancho+=formato[i][j];
			j++;
		}
		for(j=0; j < ancho+formato[i][0]-1; j++) printf("%c", 205);
		if(i<columnas-1) printf("%c", 203);
    	else printf("%c", 185);
	}
	printf("\n");
	
	if(flag){
		printf("%c", 186);
		for(i=0;i<columnas;i++) {
			j = 1;
			ancho = 0;
			while(formato[i][j]){
				ancho+=formato[i][j];
				j++;
			}
			if(formato[i][0]==1) printf("%s", centrar(" ", ancho));
			else printf("%s", centrar(titulos[i][0], ancho+formato[i][0]-1));
			printf("%c", 186);
		}
		printf("\n");
	}
	
	if(formato[0][0]==1) printf("%c", 186);
	else printf("%c", 204);
	for(i=0;i<columnas;i++) {
		j = 1;
		ancho = 0;
		while(formato[i][j]){
			ancho+=formato[i][j];
			j++;
		}
		if(formato[i][0]==1) printf("%s", centrar(titulos[i][0], ancho));
		else{
			for(j=1;j<formato[i][0]+1;j++){
    			for(k=0; k < formato[i][j]; k++) printf("%c", 205);
    			if(j<formato[i][0]) printf("%c", 203);
			}
		}
		if((formato[i+1][0]==1 && formato[i][0]>1) || (formato[i+1][0]==0 && formato[i][0]>1)) printf("%c", 185);
		else if(formato[i+1][0]>1 && formato[i][0]==1) printf("%c", 204);
		else if(formato[i+1][0]>1 && formato[i][0]>1) printf("%c", 206);
		else printf("%c", 186);
	}
	printf("\n");
	
	if(flag){
		printf("%c", 186);
		for(i=0;i<columnas;i++) {
			j = 1;
			ancho = 0;
			while(formato[i][j]){
				ancho+=formato[i][j];
				j++;
			}
			if(formato[i][0]==1) printf("%s", centrar(" ", ancho));
			else {
				for(j=1;j<formato[i][0]+1;j++){
	    			printf("%s", centrar(titulos[i][j], formato[i][j]));
	    			if(j<formato[i][0]) printf("%c", 186);
				}
			}
			 printf("%c", 186);
		}
		printf("\n");
	}
	
	printf("%c", 204);
	for(i=0;i<columnas;i++) {
		j = 1;
		ancho = 0;
		while(formato[i][j]){
			ancho+=formato[i][j];
			j++;
		}
		if(formato[i][0]==1) for(k=0; k < ancho; k++) printf("%c", 205);
		else {
			for(j=1;j<formato[i][0]+1;j++){
    			for(k=0; k < formato[i][j]; k++) printf("%c", 205);
    			if(j<formato[i][0]) printf("%c", 206);
			}
		}
		if(i<columnas-1) printf("%c", 206);

	}
	printf("%c", 185);
	printf("\n");
	
    va_end(pa);
}

void imprimirContenidoBis(int tipo, int columnas, ...){
	int i, j, k, ancho;
	int formato[10][10];
	char* titulos[10][10];
	char opcion, opcion1, opcion2;

	for(i=0;i<10;i++) {
    	for(j=0;j<10;j++){
    		formato[i][j] = 0;
    		titulos[i][j] = strdup("");
		}
	}
	
	va_list pa;
    va_start(pa, columnas);
    
    for(i=0;i<columnas;i++) {
    	formato[i][0] = va_arg(pa, int);
    	for(j=1;j<formato[i][0]+1;j++){
    		formato[i][j] = va_arg(pa, int);
		}
		for(j=0;j<formato[i][0];j++){
	    	titulos[i][j] = strdup(va_arg(pa, char*));
		}
	}
	
	printf("%c", 186);
	for(i=0;i<columnas;i++) {
		j = 1;
		ancho = 0;
		while(formato[i][j]){
			ancho+=formato[i][j];
			j++;
		}
		if(formato[i][0]==1) printf("%s", centrar(titulos[i][0], ancho));
		else{
			for(j=1;j<formato[i][0]+1;j++){
    			printf("%s", centrar(titulos[i][j-1], formato[i][j]));
    			if(j<formato[i][0]) printf("%c", 186);
			}
		}
		printf("%c", 186);
	}
	printf("\n");
	
	if(tipo){
        if(tipo==2){
            opcion=204;
            opcion1=206;
            opcion2=185;
        }
        else{
            opcion=200;
            opcion1=202;
            opcion2=188;
        }
		printf("%c", opcion);
		for(i=0;i<columnas;i++) {
			j = 1;
			ancho = 0;
			while(formato[i][j]){
				ancho+=formato[i][j];
				j++;
			}
			if(formato[i][0]==1) for(k=0; k < ancho; k++) printf("%c", 205);
			else {
				for(j=1;j<formato[i][0]+1;j++){
	    			for(k=0; k < formato[i][j]; k++) printf("%c", 205);
	    			if(j<formato[i][0]) printf("%c", opcion1);
				}
			}
			if(i<columnas-1) printf("%c", opcion1);
	
		}
		printf("%c", opcion2);
		printf("\n");
	}
	
    va_end(pa);
}