%option noyywrap

%{

#include "funcionesTP3v5.h"

Pila identificadores;
Pila literalCadena;
Pila palabrasReservadas;
Pila constanteDecimal;
Pila constanteOctal;
Pila constanteHexa;
Pila constanteReal;
Pila constanteCaracter;
Pila constantePuntuacion;
Pila comentarioSimple;
Pila comentarioMultiple;
Pila include;
Pila define;
Pila noReconocido;

double fractpart, intpart, linea = 1;

void inicializarPilas();

%}

LETRA_MINUSCULA [a-z]
LETRA_MAYUSCULA [A-Z]
LETRA {LETRA_MINUSCULA}|{LETRA_MAYUSCULA}
GUION_BAJO "_"
NUMERO_DECIMAL 0|{NUMERO_DECIMAL_SIN_CERO}
NUMERO_DECIMAL_SIN_CERO [1-9]
NUMERO_HAXADECIMAL ({NUMERO_DECIMAL}|{LETRA})
PREFIJO_HEXADECIMAL 0[xX]
NUMERO_OCTAL [0-7]
SECUENCIA_DE_DIGITOS {NUMERO_DECIMAL}+
SUFIJO_ENTERO ([uU][lL]?[lL]?)|([lL][lL]?[uU]?)
FRACCION {SECUENCIA_DE_DIGITOS}?\.{SECUENCIA_DE_DIGITOS}|{SECUENCIA_DE_DIGITOS}\.
EXPONENTE [eE]{SIGNO}?{SECUENCIA_DE_DIGITOS}
SIGNO [+-]
SUFIJO_REAL [fFlL]
CARACTER_C [^\'\\]
CARACTER_S [^\"\\]
SECUENCIA_DE_ESCAPE {ESCAPE_SIMPLE_1}|{ESCAPE_SIMPLE_2}|{ESCAPE_OCTAL}|{ESCAPE_HEXADECIMAL}
ESCAPE_SIMPLE_1 [\a\b\f\n\r\t\v]
ESCAPE_SIMPLE_2 (\\\\)|(\\?)|(\\\")|(\\\')
ESCAPE_OCTAL \\{NUMERO_OCTAL}{1,3}
ESCAPE_HEXADECIMAL \\x{NUMERO_HAXADECIMAL}{1,2}
CONSTANTE_CARACTER {CARACTER_C}|{SECUENCIA_DE_ESCAPE}
CONSTANTE_CADENA {CARACTER_S}|{SECUENCIA_DE_ESCAPE}
CARACTER_DE_PUNTUACION [\[\]\(\)\{\}\.\&\*\+\-\!\/\%\<\>\^\|\=\:\,\;\#]|(\-\>)|(\+\+)|(\-\-)|(\<\<)|(\>\>)|(\<\=)|(\>\=)|(\=\=)|(\!\=)|(\&\&)|(\|\|)|(\*\=)|(\/\=)|(\%\=)|(\+\=)|(\-\=)|(\<\<\=)|(\>\>\=)|(\&\=)|(\^\=)|(\|\=)|(\.\.\.)|(\#\#)
TIPOS_DE_DATO (char)|(const)|(double)|(enum)|(float)|(int)|(long)|(short)|(signed)|(struct)|(typedef)|(union)|(unsigned)|(void)
ESTRUCTURAS_DE_CONTROL (break)|(case)|(continue)|(default)|(do)|(else)|(for)|(goto)|(if)|(return)|(switch)|(while)
OTRAS (auto)|(extern)|(register)|(static)|(volatile)|(sizeof)
PALABRA_RESERVADA {TIPOS_DE_DATO}|{ESTRUCTURAS_DE_CONTROL}|{OTRAS}
IDENTIFICADOR ({LETRA}|{GUION_BAJO})({LETRA}|{NUMERO_DECIMAL}|{GUION_BAJO})*
CONSTANTE {CONSTANTE_DECIMAL}|{CONSTANTE_HEXADECIMAL}|{CONSTANTE_OCTAL}|\'{CONSTANTE_CARACTER}?\'|\"{CONSTANTE_CADENA}*\"
CONSTANTE_DECIMAL {NUMERO_DECIMAL_SIN_CERO}{NUMERO_DECIMAL}*{SUFIJO_ENTERO}?
CONSTANTE_HEXADECIMAL {PREFIJO_HEXADECIMAL}{NUMERO_HAXADECIMAL}+{SUFIJO_ENTERO}? 
CONSTANTE_OCTAL 0{NUMERO_OCTAL}*{SUFIJO_ENTERO}?
COMENTARIO_MULTILINEA \/\*(\*+[^\*\/]|[^\*])*\*+\/
COMENTARIO_SIMPLE \/\/.*

%%

#define(" ")+{IDENTIFICADOR}(" ")*({PALABRA_RESERVADA}|{CONSTANTE})? {
    escribirPila(&define, yytext, 0, 0);
    //printf("Encontre un DEFINE: %s \n", yytext);
}
#include(" ")+\<([\\\/\.]*{IDENTIFICADOR}[\\\/]*)+\.{LETRA_MINUSCULA}*\> {
    escribirPila(&include, yytext, 0, 0);
    //printf("Encontre un INCLUDE: %s \n", yytext);
}
#include(" ")+\"([\\\/\.]*{IDENTIFICADOR}[\\\/]*)+\.{LETRA_MINUSCULA}*\" {
    escribirPila(&include, yytext, 0, 0);
    //printf("Encontre un INCLUDE: %s \n", yytext);
}

{PALABRA_RESERVADA} {
    escribirPila(&palabrasReservadas, yytext, 0, 0);
    //printf("Encontre una palabra reservada \n");
    }
{IDENTIFICADOR} {
	agregarOrdenado(&identificadores,yytext);
    //printf("Encontre un identificador: %s \n", yytext);
	}
{CONSTANTE_DECIMAL} {
    escribirPila(&constanteDecimal, yytext, atoi(yytext), 0);
    //printf("Encontre una constante entera decimal \n");
    }
{CONSTANTE_OCTAL} {
    escribirPila(&constanteOctal, yytext, strtol(yytext, NULL, 8), 0);
    //printf("Encontre una constante entera octal \n");
    }
{CONSTANTE_HEXADECIMAL} {
    escribirPila(&constanteHexa, yytext, strtol(yytext, NULL, 16), 0);
    //printf("Encontre una constante entera hexadecimal \n");
    }
{FRACCION}{EXPONENTE}?{SUFIJO_REAL}?|{SECUENCIA_DE_DIGITOS}{EXPONENTE}{SUFIJO_REAL}? {
    escribirPila(&constanteReal, yytext, intpart, modf(atof(yytext), &intpart));
    //printf("Encontre una constante real \n");
    }
\'{CONSTANTE_CARACTER}?\' {
    agregarOrdenado(&constanteCaracter,yytext);
    //printf("Encontre una constante caracter: %s \n", yytext);
    }
\"{CONSTANTE_CADENA}*\" {
    escribirPila(&literalCadena,yytext,yyleng, 0);
    //printf("Encontre una constante cadena: %s \n", yytext);
    }
{CARACTER_DE_PUNTUACION} {
    agregarOrdenado(&constantePuntuacion,yytext);
    //printf("Encontre un caracter de puntuacion / operador: %s \n", yytext);
    }
{COMENTARIO_SIMPLE} {
    escribirPila(&comentarioSimple, yytext, 0, 0);
    //printf("Encontre un comentario simple \n");
    }
{COMENTARIO_MULTILINEA} {
    linea += evalua(yytext,'\n',' ');
    escribirPila(&comentarioMultiple, yytext, 0, 0);
    //printf("Encontre un comentario multiple \n");
    }
\n {
    linea++;
    escribirPila(&noReconocido, "\\n", linea, 0);
    //printf("Encontre un caracter o cadena no reconocida \n");
    }
\t {
    escribirPila(&noReconocido, "\\t", linea, 0);
    //printf("Encontre un caracter o cadena no reconocida \n");
    }  
" " {
    escribirPila(&noReconocido, "ESPACIO", linea, 0);
    //printf("Encontre un caracter o cadena no reconocida \n");
    }  
. {
    escribirPila(&noReconocido, yytext, linea, 0);
    //printf("Encontre un caracter o cadena no reconocida \n");
}

%%

int main() {
    int salida = 1, opcion;
    char archivoE[50] = "VACIO", archivoS[50] = "default.txt", condicion = 'S';

    while(toupper(condicion) == 'S'){
        system("CLS");
        if(strcmp(archivoS, "VACIO")!=0){
            verificar_txt(archivoS);
        }
        switch(mostrarMenu(archivoE, archivoS)){
            case(1):
                modificarArchivo(archivoE);
                condicion='s';
                break;
            case(2):
                modificarArchivo(archivoS);
                condicion='s';
                break;
            case(3):
                system("CLS");
                condicion='S';
                if(strcmp(archivoE, "VACIO")==0) printf("NO CARGO UN NOMBRE PARA EL ARCHIVO DE ENTRADA.\n\n");
                else{

                    yyin = fopen(archivoE, "r");
                    if(yyin==NULL){
                        printf("\nNO EXISTE EL ARCHIVO DE ENTRADA.\n\n");
                        fclose(yyin);
                        break;
                    }
                    inicializarPilas();
                    yylex();

                    imprimirConsola(&identificadores, "IDENTIFICADORES", "IDENTIFICADOR", 30, "VECES ENCONTRADO", 20, 0, "", 0, 0);
                    imprimirConsola(&literalCadena, "LITERALES CADENA", "CADENA", 130, "LONGITUD", 10, 0, "", 0, 0);
                    darVuelta(&palabrasReservadas);
                    imprimirConsola(&palabrasReservadas, "PALABRAS RESERVADAS", "PALABRA", 20, "", 0, 0, "", 0, 0);
                    escribirPila(&constanteDecimal, "TOTAL DE LA SUMA", suma(&constanteDecimal), 0);
                    darVuelta(&constanteDecimal);
                    imprimirConsola(&constanteDecimal, "CONSTANTES", "DECIMAL", 20, "VALOR", 20, 0, "", 0, 0);
                    imprimirConsola(&constanteOctal, "CONSTANTES", "OCTAL", 20, "VALOR DECIMAL", 20, 0, "", 0, 0);
                    imprimirConsola(&constanteHexa, "CONSTANTES", "HEXADECIMAL", 20, "VALOR DECIMAL", 20, 0, "", 0, 0);
                    imprimirConsola(&constanteReal, "CONSTANTES", "REAL", 20, "PARTE ENTERA", 50, 0, "MANTISA", 2, 50);
                    imprimirConsola(&constanteCaracter, "CONSTANTES", "CARACTER", 10, "", 0, 0, "", 0, 0);
                    imprimirConsola(&constantePuntuacion, "OPERADORES / C. PUNTUACION", "OPERADOR / CARACTER", 30, "VECES ENCONTRADO", 20, 0, "", 0, 0);
                    imprimirConsola(&comentarioSimple, "COMENTARIOS", "C. SIMPLE", 100, "", 0, 0, "", 0, 0);
                    imprimirConsola(&comentarioMultiple, "COMENTARIOS", "C. MULTIPLE", 150, "", 0, 0, "", 0, 0);
                    imprimirConsola(&include, "DIRECTIVAS PRE-PROCESADOR", "INCLUDE", 30, "", 0, 0, "", 0, 0);
                    imprimirConsola(&define, "DIRECTIVAS PRE-PROCESADOR", "DEFINE", 30, "", 0, 0, "", 0, 0);
                    darVuelta(&noReconocido);
                    imprimirConsola(&noReconocido, "CARACTERES", "NO RECONOCIDOS", 150, "LINEA", 6, 0, "", 0, 0);
                }
                fclose(yyin);
                break;
            case(4):
                system("CLS");  
                condicion='S';
                if(strcmp(archivoS, "VACIO")==0||strcmp(archivoE, "VACIO")==0) printf("NO CARGO UN NOMBRE PARA ALGUNO DE LOS ARCHIVOS.\n\n");
                else{
                    yyin = fopen(archivoE, "r");
                    if(yyin==NULL){
                        printf("\nNO EXISTE EL ARCHIVO DE ENTRADA.\n\n");
                        fclose(yyin);
                        break;
                    }
                    inicializarPilas();
                    yylex();
                    FILE *r;
                    r = fopen(archivoS, "w+");

                    imprimirArchivo(&identificadores, r, "IDENTIFICADORES", "IDENTIFICADOR", 30, "VECES ENCONTRADO", 20, 0, "", 0, 0);
                    imprimirArchivo(&literalCadena, r, "LITERALES CADENA", "CADENA", 130, "LONGITUD", 10, 0, "", 0, 0);
                    darVuelta(&palabrasReservadas);
                    imprimirArchivo(&palabrasReservadas, r, "PALABRAS RESERVADAS", "PALABRA", 20, "", 0, 0, "", 0, 0);
                    escribirPila(&constanteDecimal, "TOTAL DE LA SUMA", suma(&constanteDecimal), 0);
                    darVuelta(&constanteDecimal);
                    imprimirArchivo(&constanteDecimal, r, "CONSTANTES", "DECIMAL", 20, "VALOR", 20, 0, "", 0, 0);
                    imprimirArchivo(&constanteOctal, r, "CONSTANTES", "OCTAL", 20, "VALOR DECIMAL", 20, 0, "", 0, 0);
                    imprimirArchivo(&constanteHexa, r, "CONSTANTES", "HEXADECIMAL", 20, "VALOR DECIMAL", 20, 0, "", 0, 0);
                    imprimirArchivo(&constanteReal, r, "CONSTANTES", "REAL", 20, "PARTE ENTERA", 50, 0, "MANTISA", 2, 50);
                    imprimirArchivo(&constanteCaracter, r, "CONSTANTES", "CARACTER", 10, "", 0, 0, "", 0, 0);
                    imprimirArchivo(&constantePuntuacion, r, "OPERADORES / C. PUNTUACION", "OPERADOR / CARACTER", 30, "VECES ENCONTRADO", 20, 0, "", 0, 0);
                    imprimirArchivo(&comentarioSimple, r, "COMENTARIOS", "C. SIMPLE", 100, "", 0, 0, "", 0, 0);
                    imprimirArchivo(&comentarioMultiple, r, "COMENTARIOS", "C. MULTIPLE", 150, "", 0, 0, "", 0, 0);
                    imprimirArchivo(&include, r, "DIRECTIVAS PRE-PROCESADOR", "INCLUDE", 30, "", 0, 0, "", 0, 0);
                    imprimirArchivo(&define, r, "DIRECTIVAS PRE-PROCESADOR", "DEFINE", 30, "", 0, 0, "", 0, 0);
                    darVuelta(&noReconocido);
                    imprimirArchivo(&noReconocido, r, "CARACTERES", "NO RECONOCIDOS", 150, "LINEA", 6, 0, "", 0, 0);
                    fclose(r);

                    printf("SU ARCHIVO DE SALIDA ES: %s\n", archivoS);
                }
                fclose(yyin);
                break;
            case(5):
                condicion = 'n';
                break;

        }

        if (condicion == 'S'){
            printf("\nDesea realizar otra operacion? (S para si/ Cualquiera para no)");
            fflush(stdin);
            condicion = getc(stdin);
        }
    }
    return 0;
}

void inicializarPilas(){
    inicializar(&identificadores);
    inicializar(&literalCadena);
    inicializar(&palabrasReservadas);
    inicializar(&constanteDecimal);
    inicializar(&constanteOctal);
    inicializar(&constanteHexa);
    inicializar(&constanteReal);
    inicializar(&constanteCaracter);
    inicializar(&constantePuntuacion);
    inicializar(&comentarioSimple);
    inicializar(&comentarioMultiple);
    inicializar(&include);
    inicializar(&define);
    inicializar(&noReconocido);
    linea = 1;
}