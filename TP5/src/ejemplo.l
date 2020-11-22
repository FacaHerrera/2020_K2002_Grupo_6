%option yylineno

%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ejemplo.tab.h"

%}

option noyywrap

LETRA [a-zA-Z]
GUION_BAJO "_"
NUMERO_DECIMAL 0|{NUMERO_DECIMAL_SIN_CERO}
NUMERO_DECIMAL_SIN_CERO [1-9]
NUMERO_HEXADECIMAL ({NUMERO_DECIMAL}|{LETRA})
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
ESCAPE_HEXADECIMAL \\x{NUMERO_HEXADECIMAL}{1,2}
CONSTANTE_CARACTER {CARACTER_C}|{SECUENCIA_DE_ESCAPE}
CONSTANTE_CADENA {CARACTER_S}|{SECUENCIA_DE_ESCAPE}
TIPOS_DE_DATO (char)|(const)|(double)|(enum)|(float)|(int)|(long)|(short)|(signed)|(struct)|(typedef)|(union)|(unsigned)|(void)
ESTRUCTURAS_DE_CONTROL (break)|(case)|(continue)|(default)|(do)|(else)|(for)|(goto)|(if)|(return)|(switch)|(while)
OTRAS (auto)|(extern)|(register)|(static)|(volatile)|(sizeof)
PALABRA_RESERVADA {TIPOS_DE_DATO}|{ESTRUCTURAS_DE_CONTROL}|{OTRAS}
IDENTIFICADOR ({LETRA}|{GUION_BAJO})({LETRA}|{NUMERO_DECIMAL}|{GUION_BAJO})*
CONSTANTE {CONSTANTE_DECIMAL}|{CONSTANTE_HEXADECIMAL}|{CONSTANTE_OCTAL}|\'{CONSTANTE_CARACTER}?\'|\"{CONSTANTE_CADENA}*\"
CONSTANTE_DECIMAL {NUMERO_DECIMAL_SIN_CERO}{NUMERO_DECIMAL}*{SUFIJO_ENTERO}?
CONSTANTE_HEXADECIMAL {PREFIJO_HEXADECIMAL}{NUMERO_HEXADECIMAL}+{SUFIJO_ENTERO}? 
CONSTANTE_OCTAL 0{NUMERO_OCTAL}*{SUFIJO_ENTERO}?
COMENTARIO_SIMPLE \/\/.*
COMENTARIO_MULTIPLE \/\*(\*+[^\*\/]|[^\*])*\*+\/
CARACTER_IMPRIMIBLE [ -~]

%%

#define {strcpy(yylval.cval,yytext); return DEFINE;}
#include(" ")+\<([\\\/\.]*{IDENTIFICADOR}[\\\/]*)+\.[a-z]*\> {strcpy(yylval.cval,yytext); return INCLUDE;}
#include(" ")+\"([\\\/\.]*{IDENTIFICADOR}[\\\/]*)+\.[a-z]*\" {strcpy(yylval.cval,yytext); return INCLUDE;}

[1-9]{NUMERO_DECIMAL}* {yylval.ival = atoi(yytext); return ENTERO; }
0{NUMERO_OCTAL}* {yylval.ival = strtol(yytext, NULL, 0); return ENTERO; }
0[xX]{NUMERO_HEXADECIMAL}+ {yylval.ival = strtol(yytext, NULL, 0); return ENTERO; }
{FRACCION}{EXPONENTE}?{SUFIJO_REAL}?|{SECUENCIA_DE_DIGITOS}{EXPONENTE}{SUFIJO_REAL}? {yylval.dval = atof(yytext); return REAL; }
null|NULL {strcpy(yylval.cval,yytext); return NULL1; }
\'{CONSTANTE_CARACTER}?\' {strcpy(yylval.cval,yytext); return CTE_CARACTER; }
\"([^\"])*\" {strcpy(yylval.cval,yytext); return LITERAL_CADENA; }

void|char|float|int|long|short|double {strcpy(yylval.cval,yytext); return TIPO_DATO; }
typedef|static|auto|register|extern {strcpy(yylval.cval,yytext); return CLASE_ALMACENAMIENTO; }
struct|union {strcpy(yylval.cval,yytext); return STRUCT_UNION; }

if {return IF; }
else {return ELSE; }
switch {return SWITCH; }
while {return WHILE; }
do {return DO; }
for {return FOR; }
return {return RETURN; }
break {return BREAK; }
continue {return CONTINUE; }
case {return CASE; }
default {return DEFAULT; }
sizeof {return SIZEOF; }
goto {return GOTO; }


{IDENTIFICADOR} {strcpy(yylval.cval,yytext); return ID;}

"+" {return '+'; }
"-" {return '-'; }
"*" {return '*'; }
"/" {return '/'; }
"%" {return '%'; }
"^" {return '^'; }
"(" {return '('; }
")" {return ')'; }
"{" {return '{'; }
"}" {return '}'; }
"[" {return '['; }
"]" {return ']'; }
">" {return '>'; }
"<" {return '<'; }
"=" {return '='; }
";" {return ';'; }
"," {return ','; }
"." {return '.'; }
":" {return ':'; }
"&" {return '&'; }
"!" {return '!'; }
"~" {return '~'; }
"?" {return '?'; }
"\n" {return '\n'; }

"||" {return OR; }
"&&" {return AND; }
"==" {return IGUALDAD; }
"!=" {return DESIGUALDAD; }
">=" {return MAYORIGUAL; }
"<=" {return MENORIGUAL; }
"++" {return INCREMENTO; }
"--" {return DECREMENTO; }
"+=" {return ASIGNACION_INCREMENTO; }
"-=" {return ASIGNACION_DECREMENTO; }
"*=" {return ASIGNACION_PRODUCTO; }
"/=" {return ASIGNACION_DIVISION; }
"->" {return FLECHA; }


{COMENTARIO_SIMPLE} {strcpy(yylval.cval,yytext); return COMENTARIO_SIMPLE;}
{COMENTARIO_MULTIPLE} {strcpy(yylval.cval,yytext); return COMENTARIO_MULTIPLE;}

[^\t' '] {strcpy(yylval.cval,yytext); return ERROR_LEXICO; }

%%