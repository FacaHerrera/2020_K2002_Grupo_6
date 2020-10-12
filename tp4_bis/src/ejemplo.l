%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ejemplo.tab.h"

%}

option noyywrap

LETRA [a-zA-z]
DIGITO_HEXADECIMAL [0-9A-Fa-f]
DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
CARACTER_IMPRIMIBLE [ -~]
CONSTANTE_CARACTER {CARACTER_C}|{SECUENCIA_DE_ESCAPE}
SECUENCIA_DE_ESCAPE {ESCAPE_SIMPLE_1}|{ESCAPE_SIMPLE_2}|{ESCAPE_OCTAL}|{ESCAPE_HEXADECIMAL}
ESCAPE_SIMPLE_1 [\a\b\f\n\r\t\v]
ESCAPE_SIMPLE_2 (\\\\)|(\\?)|(\\\")|(\\\')
ESCAPE_OCTAL \\{DIGITO_OCTAL}{1,3}
ESCAPE_HEXADECIMAL \\x{DIGITO_HEXADECIMAL}{1,2}
CARACTER_C [^\'\\]

%%

[1-9]{DIGITO_DECIMAL}* {yylval.ival = atoi(yytext); return ENTERO; }
0{DIGITO_OCTAL}* {yylval.ival = strtol(yytext, NULL, 0); return ENTERO; }
0[xX]{DIGITO_HEXADECIMAL}+ {yylval.ival = strtol(yytext, NULL, 0); return ENTERO; }
((({DIGITO_DECIMAL}+\.{DIGITO_DECIMAL}+)|{DIGITO_DECIMAL}+\.)((e?[+-]?{DIGITO_DECIMAL}+)|E?[+-]?{DIGITO_DECIMAL}+)[fFlL]?)|([1-9]{DIGITO_DECIMAL}*((e[+-]?{DIGITO_DECIMAL}+)|E[+-]?{DIGITO_DECIMAL}+)[fFlL]?) {yylval.dval = atof(yytext); return REAL; }
null|NULL {strcpy(yylval.cval,yytext); return NULL1; }
\'{CONSTANTE_CARACTER}?\' {strcpy(yylval.cval,yytext); return CTE_CARACTER; }
\"([^\"]|$)*\" {strcpy(yylval.cval,yytext); return LITERAL_CADENA; }

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

([a-zA-Z]|"_")([a-zA-Z]|{DIGITO_DECIMAL}|"_")* {strcpy(yylval.cval,yytext); return ID;}

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


\/\/{CARACTER_IMPRIMIBLE}* {printf("Se encontro el comentario simple: \"%s\". \n",yytext); }
\/\*(([^\*]|$)|(\*([^\/]|$)))*\*\/ {printf("Se encontro el comentario multiple: \"%s\". \n",yytext); }

[^\n\t' '] {printf("Se encontro un error lexico: %s\n", yytext); }
%%