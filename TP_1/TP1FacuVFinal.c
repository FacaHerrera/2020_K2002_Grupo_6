#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ERROR 0;
#define OK 1;

int verificar_txt(char*);
int mostrar_consigna();
int automata(char*);
void guardar(int, char*);

int main(int argc, char *argv[]){
    
    FILE *resultados;
	resultados = fopen("RESULTADOS.txt", "w");
	fclose(resultados);
    
    if (mostrar_consigna()) printf("\n\nProceso satisfactorio.\n\n");
	else printf("\n\nEl Proceso no se pudo realizar porque el archivo no existe.\n");
	
    return 0;
}

int mostrar_consigna(){
    char nombre_archivo[20];
    
    printf("Trabajo Practico N°1 SSL - Automata/n/nIingrese el nombre del archivo de testeo: ");
    scanf("%s", nombre_archivo);
    verificar_txt(nombre_archivo);
    return automata(nombre_archivo);
}

int automata(char *nombre_archivo){
    int tabla_transicion[7][6]={{2,1,1,6,6,6},{1,1,1,6,6,6},{5,5,6,3,6,6},{4,4,4,6,4,6},{4,4,4,6,4,6},{5,5,6,6,6,6},{6,6,6,6,6,6}};
    int estado=0;
    
    FILE*datos=fopen(nombre_archivo,"rt");
    if(datos==NULL) return ERROR;
    
    int pos=0;
    char cadena[50], c;
    
    do{
        strcpy(cadena,"");
        c=fgetc(datos);
        while(c!=',' && c!=EOF){
            cadena[pos]=c;
            pos++;
            c=fgetc(datos);
        }
        cadena[pos]='\0';
        estado=0;
        pos=0;
        while(cadena[pos]!='\0'){
            if(cadena[pos]=='0'){
                estado = tabla_transicion[estado][0];
            }
            else if(cadena[pos] >= '1' && cadena[pos] <= '7'){
                estado = tabla_transicion[estado][1];
            }
            else if(cadena[pos]=='8'||cadena[pos]=='9'){
                estado = tabla_transicion[estado][2];
            }
            else if(cadena[pos]=='x'||cadena[pos]=='X'){
                estado = tabla_transicion[estado][3];
            }
            else if((cadena[pos]>='a'&& cadena[pos]<='f')||(cadena[pos]>='A' && cadena[pos]<='F')){
                estado = tabla_transicion[estado][4];
            }
            else{
                estado = tabla_transicion[estado][5];
            }
                
            pos++;    
        }
        pos=0;
        guardar (estado,cadena);
    }while(c!=EOF);

    return OK;
}

int verificar_txt(char *nombre_archivo){
	if (strstr(nombre_archivo, ".txt") == NULL){
		strcat(nombre_archivo, ".txt");
	}
}

void guardar(int estado, char *cadena){
    
    FILE*resultados = fopen("RESULTADOS.txt", "a");
    fputs(cadena, resultados);
    
    switch(estado){
        case 2:
        case 5:
            fputs(" - OCTAL\n", resultados);
            break;
        case 1:
            fputs(" - DECIMAL\n", resultados);
            break;
        case 4:
            fputs(" - HEXADECIMAL\n", resultados);
            break;
        default:
            fputs(" - INCORRECTO\n", resultados);
    }
    fclose(resultados);
}