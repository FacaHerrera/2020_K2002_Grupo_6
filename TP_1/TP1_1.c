#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escanearArchivoYescribirResultados(FILE* datos, FILE* resultados);
int verificar_txt(char *);
void escribirBase(FILE* resultados, int estado);

int main(int argc, char const *argv[])
{
    char archivo[100];
    printf("Trabajo Practico Nro 1 - Automata Finito Deterministico para Constantes Enteras\nIngrese el nombre del archivo a escanear: ");
    scanf("%s", archivo);
    verificar_txt(&archivo);
    FILE* datos = fopen(archivo, "rt");
    FILE* resultados = fopen("RESULTADOS.txt","w");
    escanearArchivoYescribirResultados(datos, resultados);
    fclose(datos);
    fclose(resultados);
}

void escanearArchivoYescribirResultados(FILE* datos, FILE* resultados)
{
    int tablaDeTransicion[7][6]={{2,1,1,6,6,6},{1,1,1,6,6,6},{5,5,6,3,6,6},{4,4,4,6,4,6},{4,4,4,6,4,6},{5,5,6,6,6,6},{6,6,6,6,6,6}};
    int estado = 0;
    char numero;
    numero = fgetc(datos);
    while(numero!=EOF)
    {
        if(numero=='0')
        {
            estado = tablaDeTransicion[estado][0];
            fwrite(&numero,sizeof(char),sizeof(numero),resultados);
        }
        if(numero>='1' && numero<='7')
        {
            estado = tablaDeTransicion[estado][1];
            fwrite(&numero,sizeof(char),sizeof(numero),resultados);
        }
        if(numero>='8' && numero<='9')
        {
            estado = tablaDeTransicion[estado][2];
            fwrite(&numero,sizeof(char),sizeof(numero),resultados);
        }
        if(numero == 'x' || numero == 'X')
        {
            estado = tablaDeTransicion[estado][3];
            fwrite(&numero,sizeof(char),sizeof(numero),resultados);
        }
        if(numero>='a' && numero<='f' || numero>='A' && numero<='F')
        {
            estado = tablaDeTransicion[estado][4];
            fwrite(&numero,sizeof(char),sizeof(numero),resultados);
        }
        if(numero<44 && numero>44 && numero<48 && numero>57 && numero<65 && numero>90 && numero<97 && numero>122)
        {
            estado = tablaDeTransicion[estado][5];
            fwrite(&numero,sizeof(char),1,resultados);
        }
        if(numero == ',')
        {
            escribirBase(resultados,estado);
            estado = 0;
        }
        numero = fgetc(datos);
    }
    escribirBase(resultados,estado);

}

void escribirBase(FILE* resultados, int estado)
{
    if(estado == 1)
    {
        fputs(": Decimal\n",resultados);
    }
    if(estado == 4)
    {
        fputs(": Hexadecimal\n",resultados);
    }
    if(estado == 5 || estado == 2)
    {
        fputs(": Octal\n",resultados);
    }
    if(estado == 6 || estado == 3)
    {
        fputs(": Error\n",resultados);
    }
}

int verificar_txt(char *archivo)
{
	if (strstr(archivo, ".txt") == NULL)
    {
		strcat(archivo, ".txt");
	}
}