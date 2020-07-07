%option noyywrap

%{

#include <stdio.h>
#include <stdlib.h>
#include "misfunciones.h" // Libreria con mis funciones

FILE* reporte;
Lista listaNoReconocidos = NULL;
Lista listaDefiniciones = NULL;
Lista listaIncludes = NULL;
Lista listaIdentificadores = NULL;
Lista listaPalabrasReservadas = NULL;
Lista listaLiteralesCadena = NULL;
Lista listaComentarios = NULL;
Lista listaComentariosMultiples = NULL;
Lista listaCaracteres = NULL;
Lista listaReales = NULL;
Lista listaHexadecimales = NULL;
Lista listaDecimales = NULL;
Lista listaOctales = NULL;
int acumDecimal = 0; // Acumulador del valor de las constantes decimales
int acumSaltosDeLinea = 1;

int octalADecimal(int);
int hexadecimalADecimal(char*);
void reconocerLibreria(char*);
void reconocerDefinicion(char*, char*);
int calcularSaltoDeLinea(char*);
int calcularSaltosDeLineaComentariosMultiples(char*);
void insertarPrincipio(Lista*, char*);
//void insertarFinal(Lista*, char*);
void insertarFinal(Lista*, char*,int);
void insertarPrincipioCaracter(Lista*, char*);
void insertarOrdenado(Lista*, char*);
void reporteIncludes(FILE*,Lista);
void reporteDefiniciones(FILE*, Lista);
void reporteIdentificadores(FILE*, Lista);
void reporteLiteralesCadena(FILE*, Lista);
void reportePalabrasReservadas(FILE*, Lista);
void reporteDecimales(FILE*, Lista, int);
void reporteOctales(FILE*, Lista);
void reporteHexadecimales(FILE*, Lista);
void reporteConstantesNumericas(FILE*, Lista, int, Lista, Lista, Lista);
void reporteCaracteresYOperadores(FILE*, Lista);
void reporteComentarios(FILE*, Lista);
void reporteComentariosMultiples(FILE*, Lista);
void reporteNoReconocidos(FILE*, Lista);

%}

LETRA [a-zA-z]
DIGITO_HEXADECIMAL [0-9A-Fa-f]
DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
CARACTER_IMPRIMIBLE [ -~]

%%

[1-9]{DIGITO_DECIMAL}* {acumDecimal += atoi(yytext); insertarFinal(&listaDecimales,yytext,0);}
0{DIGITO_OCTAL}* {insertarFinal(&listaOctales,yytext,0);}
0[xX]{DIGITO_HEXADECIMAL}+ {insertarFinal(&listaHexadecimales,yytext,0);}
((({DIGITO_DECIMAL}+\.{DIGITO_DECIMAL}+)|{DIGITO_DECIMAL}+\.)((e?[+-]?{DIGITO_DECIMAL}+)|E?[+-]?{DIGITO_DECIMAL}+)[fFlL]?)|([1-9]{DIGITO_DECIMAL}*((e[+-]?{DIGITO_DECIMAL}+)|E[+-]?{DIGITO_DECIMAL}+)[fFlL]?) {insertarFinal(&listaReales,yytext,0);}
auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|typedef|union|unsigned|void|volatile|while {insertarFinal(&listaPalabrasReservadas,yytext,0);}
\[|\]|\(|\)|\{|\}|\.|\-\>|\+\+|\-\-|\&|\*|\+|\~|\-|\!|\/|\%|\<\<|\>\>|\<|\>|\<\=|\>\=|\=\=|\!\=|\^|\||\&\&|\|\||\=|\*\=|\/\=|\%\=|\+\=|\-\=|\<\<\=|\>\>\=|\&\=|\^\=|\|\=|\?|\:|\;|\.\.\.|\,|\#|\#\# {insertarOrdenado(&listaCaracteres,yytext);} 
([a-zA-Z]|"_")([a-zA-Z]|{DIGITO_DECIMAL}|"_")* {insertarOrdenado(&listaIdentificadores,yytext);}
\"([^\"]|$)*\" {insertarFinal(&listaLiteralesCadena,yytext,0);}
\/\/{CARACTER_IMPRIMIBLE}* {insertarFinal(&listaComentarios,yytext,0);}
\/\*(([^\*]|$)|(\*([^\/]|$)))*\*\/ {insertarFinal(&listaComentariosMultiples,yytext,0);acumSaltosDeLinea = acumSaltosDeLinea + calcularSaltosDeLineaComentariosMultiples(yytext);}
\#include(\ )*\<{CARACTER_IMPRIMIBLE}*\> {insertarFinal(&listaIncludes,yytext,0);printf("Encontre el include: %s\n",yytext);}
\#define(\ )+{CARACTER_IMPRIMIBLE}*\ {CARACTER_IMPRIMIBLE}* {insertarFinal(&listaDefiniciones,yytext,0);}
.|\n {insertarFinal(&listaNoReconocidos,yytext,acumSaltosDeLinea);acumSaltosDeLinea = acumSaltosDeLinea + calcularSaltoDeLinea(yytext);}

%%

int main() {
   
    /* Acciones previas a la invocación den analizador léxico */

    yyin = fopen("entrada.txt", "r");

    /* Invocación del analizador léxico */

    yylex();
	
    /* Acciónes posteriores a la ejecución del analizador léxico, 
    sirven por ejemplo, para hacer un informen de resumen.1 */

    reporte = fopen("reporte.txt","wt");

    reporteIncludes(reporte,listaIncludes);
    reporteDefiniciones(reporte,listaDefiniciones);
    reporteIdentificadores(reporte,listaIdentificadores);
    reporteLiteralesCadena(reporte,listaLiteralesCadena);
    reportePalabrasReservadas(reporte,listaPalabrasReservadas);
    reporteConstantesNumericas(reporte,listaDecimales,acumDecimal,listaOctales,listaHexadecimales,listaReales);
    reporteCaracteresYOperadores(reporte,listaCaracteres);
    reporteComentarios(reporte,listaComentarios);
    reporteComentariosMultiples(reporte,listaComentariosMultiples);
    reporteNoReconocidos(reporte,listaNoReconocidos);

    fclose(reporte);

    return 0;
}