%{

#include <stdio.h>
#include <stdlib.h>
#include "ejemplo.tab.h"

%}

option noyywrap

LETRA [a-zA-z]
DIGITO_HEXADECIMAL [0-9A-Fa-f]
DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
CARACTER_IMPRIMIBLE [ -~]

%%

[1-9]{DIGITO_DECIMAL}* {yylval.ival = atoi(yytext); return ENTERO; }
0{DIGITO_OCTAL}* {yylval.ival = strtol(yytext, NULL, 0); return ENTERO; }
0[xX]{DIGITO_HEXADECIMAL}+ {yylval.ival = strtol(yytext, NULL, 0); return ENTERO; }
((({DIGITO_DECIMAL}+\.{DIGITO_DECIMAL}+)|{DIGITO_DECIMAL}+\.)((e?[+-]?{DIGITO_DECIMAL}+)|E?[+-]?{DIGITO_DECIMAL}+)[fFlL]?)|([1-9]{DIGITO_DECIMAL}*((e[+-]?{DIGITO_DECIMAL}+)|E[+-]?{DIGITO_DECIMAL}+)[fFlL]?) {yylval.dval = atof(yytext); return REAL; }

\"([^\"]|$)*\" {return LITERAL_CADENA; }

char|float|int|long|short|double {return TIPO_DATO; }

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

([a-zA-Z]|"_")([a-zA-Z]|{DIGITO_DECIMAL}|"_")* {return ID;}

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
">" {return '>'; }
"<" {return '<'; }
"=" {return '='; }
";" {return ';'; }
"," {return ','; }
":" {return ':'; }
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

.
%%