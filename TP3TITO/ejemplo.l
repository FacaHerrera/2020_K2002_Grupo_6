%option noyywrap

%{

#include <stdio.h>
#include <stdlib.h>
#include "misfunciones.h" // Libreria con mis funciones

FILE* reporte;
ListaNoReconocido listaNoReconocidos = NULL;
Lista listaDefiniciones = NULL;
Lista listaIncludes = NULL;
ListaIdentificador listaIdentificadores = NULL;
Lista listaPalabrasReservadas = NULL;
Lista listaLiteralesCadena = NULL;
Lista listaComentarios = NULL;
Lista listaComentariosMultiples = NULL;
ListaCaracter listaCaracteres = NULL;
Lista listaReales = NULL;
Lista listaHexadecimales = NULL;
Lista listaDecimales = NULL;
Lista listaOctales = NULL;
int acumDecimal = 0; // Acumulador del valor de las constantes decimales
int acumSaltosDeLinea = 1;
%}

LETRA [a-zA-z]
DIGITO_HEXADECIMAL [0-9A-Fa-f]
DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
CARACTER_IMPRIMIBLE [ -~]

%%

[1-9]{DIGITO_DECIMAL}* {acumDecimal += atoi(yytext); insertarFinal(&listaDecimales,yytext);}
0{DIGITO_OCTAL}* {insertarFinal(&listaOctales,yytext);}
0[xX]{DIGITO_HEXADECIMAL}+ {insertarFinal(&listaHexadecimales,yytext);}
((({DIGITO_DECIMAL}+\.{DIGITO_DECIMAL}+)|{DIGITO_DECIMAL}+\.)((e?[+-]?{DIGITO_DECIMAL}+)|E?[+-]?{DIGITO_DECIMAL}+)[fFlL]?)|([1-9]{DIGITO_DECIMAL}*((e[+-]?{DIGITO_DECIMAL}+)|E[+-]?{DIGITO_DECIMAL}+)[fFlL]?) {insertarFinal(&listaReales,yytext);}
auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|typedef|union|unsigned|void|volatile|while {insertarFinal(&listaPalabrasReservadas,yytext);}
\[|\]|\(|\)|\{|\}|\.|\-\>|\+\+|\-\-|\&|\*|\+|\~|\-|\!|\/|\%|\<\<|\>\>|\<|\>|\<\=|\>\=|\=\=|\!\=|\^|\||\&\&|\|\||\=|\*\=|\/\=|\%\=|\+\=|\-\=|\<\<\=|\>\>\=|\&\=|\^\=|\|\=|\?|\:|\;|\.\.\.|\,|\#|\#\# {insertarPrincipioCaracter(&listaCaracteres,yytext);} 
([a-zA-Z]|"_")([a-zA-Z]|{DIGITO_DECIMAL}|"_")* {insertarOrdenado(&listaIdentificadores,yytext);}
\"([^\"]|$)*\" {insertarFinal(&listaLiteralesCadena,yytext);}
\/\/{CARACTER_IMPRIMIBLE}* {insertarFinal(&listaComentarios,yytext);}
\/\*(([^\*]|$)|(\*([^\/]|$)))*\*\/ {insertarFinal(&listaComentariosMultiples,yytext);}
\#include(\ )*\<{CARACTER_IMPRIMIBLE}*\> {insertarFinal(&listaIncludes,yytext);}
\#define(\ )+{CARACTER_IMPRIMIBLE}*\ {CARACTER_IMPRIMIBLE}* {insertarFinal(&listaDefiniciones,yytext);}
.|\n {insertarFinalNoReconocido(&listaNoReconocidos,yytext,acumSaltosDeLinea);acumSaltosDeLinea = acumSaltosDeLinea + calcularSaltoDeLinea(yytext);}

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
