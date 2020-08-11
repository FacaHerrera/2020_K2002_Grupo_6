%option noyywrap

%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcionesfaca.h"

nodo* cte_decimal = NULL;
nodo* cte_octal = NULL;
nodo* cte_hexa = NULL;
nodo* cte_real = NULL;
nodo* cte_caracter = NULL;
nodo* lit_cadena = NULL;
nodo* tipo_dato = NULL;
nodo* struct_control = NULL;
nodo* reservada = NULL;
nodo* identificadores = NULL;
nodo* cter_puntuacion = NULL;
nodo* coment_simple = NULL;
nodo* coment_multiple = NULL;
nodo* include = NULL;
nodo* define = NULL;
nodo* cter_NN = NULL;

double suma = 0, variable_conversion;
int i = 1, contador_linea = 0;

%}

LETRA_MINUSCULA [a-z]
DIGITO [1-9]
DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
DIGITO_HEXADECIMAL [a-fA-F0-9]
SUFIJO_UNSIGNED [Uu]
SUFIJO_LONG [Ll]
SUFIJO_ENTERO ({SUFIJO_UNSIGNED}{SUFIJO_LONG}?)|({SUFIJO_LONG}{SUFIJO_UNSIGNED}?)
SUFIJO_REAL [FfLl]
SIGNO [+-]
LETRA [a-zA-Z]
EXPONENTE [eE]
PARTE_EXPONENTE {EXPONENTE}{SIGNO}?{DIGITO}+
CTE_OCTAL 0{DIGITO_OCTAL}*({SUFIJO_ENTERO}?)
CTE_HEXADECIMAL 0[xX]{DIGITO_HEXADECIMAL}+({SUFIJO_ENTERO}?)
CTE_DECIMAL {DIGITO}{DIGITO_DECIMAL}*({SUFIJO_ENTERO}?)
CTE_REAL ({DIGITO}*\.{DIGITO}+|{DIGITO}+\.){PARTE_EXPONENTE}?{SUFIJO_REAL}?|{DIGITO}+{PARTE_EXPONENTE}{SUFIJO_REAL}?
CONSTANTE ({CTE_OCTAL}|{CTE_DECIMAL}|{CTE_HEXADECIMAL}|{CTE_REAL})
CARACTER_C [^\'\\]
CARACTER_S [^\"\\]
SECUENCIA_DE_ESCAPE {ESCAPE_SIMPLE_1}|{ESCAPE_SIMPLE_2}|{ESCAPE_OCTAL}|{ESCAPE_HEXADECIMAL}
ESCAPE_SIMPLE_1 [\a\b\f\n\r\t\v]
ESCAPE_SIMPLE_2 (\\\\)|(\\?)|(\\\")|(\\\')
ESCAPE_OCTAL \\{DIGITO_OCTAL}{1,3}
ESCAPE_HEXADECIMAL \\x{DIGITO_HEXADECIMAL}{1,2}
CONSTANTE_CARACTER {CARACTER_C}|{SECUENCIA_DE_ESCAPE}
LITERAL_CADENA {CARACTER_S}|{SECUENCIA_DE_ESCAPE}
TIPOS_DATO (struct|char|const|double|enum|float|int|long|short|signed|static|unsigned|void|volatile)
ESTRUCTURAS_CONTROL (if|else|switch|while|for|do|continue|break|case|return)
OTROS (auto|default|extern|goto|register|sizeof|typedef|union)
PALABRA_RESERVADA ({TIPOS_DATO}|{ESTRUCTURAS_CONTROL}|{OTROS})
CARACTER_PUNTUACION (\[|\]|\(|\)|\{|\}|\.|\-\>|\+\+|\-\-|\&|\*|\+|\-|\!|\/|\%|\<\<|\>\>|\<|\>|\<\=|\>\=|\=\=|\!\=|\^|\||\&\&|\|\||\=|\*\=|\/\=|\%\=|\+\=|\-\=|\<\<\=|\>\>\=|\&\=|\^\=|\|\=|\?|\:|\;|\.\.\.|\,|\#|\#\#)
COMENTARIO \/\/.*
COMENTARIO_MULTILINEA \/\*(\*+[^\*\/]|[^\*])*\*+\/
IDENTIFICADOR ({LETRA}|"_")({LETRA}|{DIGITO_DECIMAL}|"_")*


%%

{CTE_DECIMAL} {
    insertarNodo(&cte_decimal, yytext, 0, 0);
    suma += atoi(yytext);
}

{CTE_OCTAL} {
    variable_conversion = strtol(yytext, NULL, 8);
    insertarNodo(&cte_octal, yytext, variable_conversion, 0);
}

{CTE_HEXADECIMAL} {
    variable_conversion = strtol(yytext, NULL, 16);
    insertarNodo(&cte_hexa, yytext, variable_conversion, 0);
}

{CTE_REAL} {
    double parte_entera = 0, parte_decimal = 0, numero = 0;
    numero = atof(yytext);
    parte_decimal = modf(numero, &parte_entera);
    insertarNodo(&cte_real, "", parte_entera, parte_decimal);
}

\'{CONSTANTE_CARACTER}?\' {
    insertarNodo(&cte_caracter, yytext, i, 0);
    i++;

}

\"{LITERAL_CADENA}*\" {
    insertarNodo(&lit_cadena, yytext, yyleng, 0);
}

{TIPOS_DATO} {
    insertarNodo(&tipo_dato, yytext, 0, 0);
}
{ESTRUCTURAS_CONTROL} {
    insertarNodo(&struct_control, yytext, 0, 0);
}
{OTROS} {
    insertarNodo(&reservada, yytext, 0, 0);
}

{IDENTIFICADOR} {
    insertarSinRepetir(&identificadores, yytext, 1, 0);
}

{CARACTER_PUNTUACION} {
    insertarSinRepetir(&cter_puntuacion, yytext, 1, 0);
}

{COMENTARIO} {
    insertarNodo(&coment_simple, yytext, 0, 0);
}

{COMENTARIO_MULTILINEA} {
    insertarNodo(&coment_multiple, yytext, 0, 0);
}

#include(" ")+\<([\\\/\.]*{IDENTIFICADOR}[\\\/]*)+\.{LETRA_MINUSCULA}*\> {
    insertarNodo(&include, yytext, 0, 0);
}

#include(" ")+\"([\\\/\.]*{IDENTIFICADOR}[\\\/]*)+\.{LETRA_MINUSCULA}*\" {
    insertarNodo(&include, yytext, 0, 0);
}

#define(" ")+{IDENTIFICADOR}(" ")*({PALABRA_RESERVADA}|{CONSTANTE})? {
    insertarNodo(&define, yytext, 0, 0);
}

\n {
    contador_linea++;
    insertarNodo(&cter_NN, "\\n", contador_linea, 0);
}

\t {
    insertarNodo(&cter_NN, "\\t", contador_linea, 0);
}

" " {
    insertarNodo(&cter_NN, "ESPACIO", contador_linea, 0);
}

. {
    insertarNodo(&cter_NN, yytext, contador_linea, 0);
}

%%

int main() {

    char archivo[50];

    printf("Ingrese el nombre del archivo: ");
    scanf("%s", archivo);

    verificar_txt(archivo);

    yyin = fopen(archivo, "r");
    yyout = fopen("basura.txt", "w");

    yylex();

    FILE* salida = fopen("salidaParaPrueba.txt", "w");

    voltearPila(&cte_caracter);
    voltearPila(&tipo_dato);
    voltearPila(&struct_control);
    voltearPila(&reservada);
    voltearPila(&cter_NN);

    reporte(salida, identificadores, "IDENTIFICADORES", "CANTIDAD", 1);
    reporte(salida, lit_cadena, "LITERAL CADENA", "LONGITUD", 1);
    reporte(salida, tipo_dato, "TIPO DE DATO", "", 2);
    reporte(salida, struct_control, "ESTRUCTURA DE CONTROL", "", 2);
    reporte(salida, reservada, "OTRAS RESERVADAS", "", 2);
    reporte(salida, cter_puntuacion, "CARACTER DE PUNTUACION", "CANTIDAD", 1);
    reporte(salida, coment_simple, "COMENTARIO SIMPLE", "", 2);
    reporte(salida, coment_multiple, "COMENTARIO MULTILINEA", "", 2);
    reporte(salida, cte_octal, "CONSTANTE OCTAL", "VALOR DECIMAL", 1);
    reporte(salida, cte_hexa, "CONSTANTE HEXADECIMAL", "VALOR DECIMAL", 1);
    reporte(salida, cte_real, "PARTE ENTERA", "MANTISA", 3);
    reporte(salida, cte_caracter, "CONSTANTE CARACTER", "ENUMERACION", 1);
    reporte(salida, cte_decimal, "CONSTANTE DECIMAL", "", 2);
    fprintf(salida, "\n La suma total es: %lf \n", suma);
    formato(salida, "", "-", 110, 1);
    reporte(salida, include, "INCLUDE'S", "", 2);
    reporte(salida, define, "DEFINE'S", "", 2);
    reporte(salida, cter_NN, "NO RECONOCIDOS", "LINEA", 1);
    
    return 0;
}
