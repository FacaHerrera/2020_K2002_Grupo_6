%{

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern int yylex();
int yyerror (char* );
int yywrap(){
return(1);
}
extern FILE *yyin;
char* tipoDato;
int contadorVariables = 0;
int contadorParametros = 0;
char* nombreFuncion;

%}

%union {
  int ival;
  double dval;
  char cval[30];
}

%token <dval> REAL
%token <ival> ENTERO
%token <cval> LITERAL_CADENA
%token <cval> OR
%token <cval> AND
%token <cval> IGUALDAD
%token <cval> DESIGUALDAD
%token <cval> MAYORIGUAL
%token <cval> MENORIGUAL
%token <cval> INCREMENTO
%token <cval> DECREMENTO
%token <cval> ASIGNACION_INCREMENTO
%token <cval> ASIGNACION_DECREMENTO
%token <cval> ASIGNACION_PRODUCTO
%token <cval> ASIGNACION_DIVISION

%token <cval> IF
%token <cval> ELSE
%token <cval> SWITCH
%token <cval> WHILE
%token <cval> DO
%token <cval> FOR
%token <cval> RETURN
%token <cval> CONTINUE
%token <cval> BREAK
%token <cval> CASE
%token <cval> DEFAULT

%token <cval> TIPO_DATO
%token <cval> ID
%token <cval> SIZEOF

%left OR
%left AND
%left IGUALDAD DESIGUALDAD
%left MAYORIGUAl '>' MENORIGUAL '<'
%left '+' '-'
%left '*' '/' '%'
%left '^'
%left '(' ')'

%type <dval> exp
%type <cval> unaVarSimple

%% 

input:
     | input line
;

line: '\n'
    | funcion '\n'
    | sentencia '\n'
;

// DECLARACION DE FUNCION
funcion: TIPO_DATO {tipoDato = $<cval>1; } ID {nombreFuncion = $<cval>2; } declaracionODefinicion {contadorParametros = 0; }
;

declaracionODefinicion: '(' listaParametrosDeclaracion ')' ';' {printf("Se declara la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDato); }
                      | '(' listaParametrosDefinicion ')' sentCompuesta {printf("Se define la funcion %s con %d parametros y devolucion de tipo %s \n",nombreFuncion,contadorParametros,tipoDato); }
;

listaParametrosDeclaracion:
                          | TIPO_DATO {contadorParametros++; printf(" -Tipo parametro %d = %s \n",contadorParametros ,$<cval>1); }
                          | listaParametrosDeclaracion ',' TIPO_DATO {contadorParametros++; printf(" -Tipo parametro %d = %s \n",contadorParametros ,$<cval>1); }
;

listaParametrosDefinicion: 
                         | TIPO_DATO ID {contadorParametros++; printf(" -Tipo parametro %d = %s \n",contadorParametros ,$<cval>1); }
                         | listaParametrosDefinicion ',' TIPO_DATO ID {contadorParametros++; printf(" -Tipo parametro %d = %s \n",contadorParametros ,$<cval>1); }
;

//SENTENCIA
sentencia: sentCompuesta
         | sentExpresion
         | sentSeleccion
         | sentIteracion
         | sentSalto
         | sentEtiquetada
;


//SENTENCIA COMPUESTA
sentCompuesta: '{' listaDeclaraciones listaSentencias '}'
;

listaDeclaraciones: 
                  | sentenciaDeclaracion
                  | listaDeclaraciones sentenciaDeclaracion
;

listaSentencias: 
               | sentencia
               | listaSentencias sentencia
;


//SENTENCIA DE DECLARACION
sentenciaDeclaracion: TIPO_DATO {tipoDato = $<cval>1; } listaVarSimples ';' {printf("Se declararon %d variables de tipo %s\n",contadorVariables,$<cval>1); contadorVariables = 0; }
;

listaVarSimples: unaVarSimple
                | unaVarSimple ',' listaVarSimples
;
unaVarSimple: ID                               {printf("Se declaro el identificador %s de tipo %s\n",$<cval>1,tipoDato); contadorVariables++; }
            | ID operAsignacion exp           {printf("Se declaro el identificador %s de tipo %s, con valor %g\n",$<cval>1,tipoDato,$<dval>3); contadorVariables++;}
;

operAsignacion: '='
              | ASIGNACION_INCREMENTO
              | ASIGNACION_DECREMENTO
              | ASIGNACION_PRODUCTO
              | ASIGNACION_DIVISION
;


//SENTENCIA DE EXPRESION
sentExpresion: exp ';' {printf ("El resultado de la expresion es: %g \n", $<dval>1); }
;


//SENTENCIA DE SELECCION
sentSeleccion: IF '(' exp ')' sentencia                {printf("Se encontro una Sentencia de Seleccion IF.\n"); }
             | IF '(' exp ')' sentencia ELSE sentencia {printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n"); }
             | SWITCH '(' exp ')' sentencia            {printf("Se enconto una Sentencia de Seleccion SWITCH.\n"); }
;


//SENTENCIA DE ITERACION
sentIteracion: WHILE '(' exp ')' sentencia               {printf("Se encontro una Sentencia de Iteracion WHILE.\n"); }
             | DO sentencia WHILE '(' exp ')' ';'        {printf("Se encontro una Sentencia de Iteracion DO WHILE.\n"); }
             | FOR '(' exp ';' exp ';' exp ')' sentencia {printf("Se encontro una Sentencia de Iteracion FOR.\n"); }
;


//SENTENCIA DE ETIQUETA
sentEtiquetada: CASE exp ':' sentencia {printf("Se encontro una Sentencia de Etiqueta CASE.\n"); }
              | DEFAULT ':' sentencia  {printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n"); }


//SENTENCIA DE SALTO
sentSalto: RETURN exp ';' {printf("Se encontro una Sentencia de Salto RETURN, devuelve: %g. \n",$<dval>2); }
         | RETURN ';'     {printf("Se encontro una Sentencia de Salto RETURN.\n"); }
         | BREAK ';'      {printf("Se encontro una Sentencia de Salto BREAK.\n"); }
         | CONTINUE ';'   {printf("Se encontro una Sentencia de Salto CONTINUE.\n"); }
;


//EXPRESIONES 

exp: ID operAsignacion exp        {$<dval>$ = $<dval>3; }
   | exp '?' exp ':' exp        {$<dval>1 ? $<dval>3 : $<dval>5; }
   | exp OR exp                 {$<dval>$ = $<dval>1 || $<dval>3; }
   | exp AND exp                {$<dval>$ = $<dval>1 && $<dval>3; }
   | exp IGUALDAD exp           {$<dval>$ = $<dval>1 == $<dval>3; }
   | exp DESIGUALDAD exp        {$<dval>$ = $<dval>1 != $<dval>3; }
   | exp MAYORIGUAL exp         {$<dval>$ = $<dval>1 >= $<dval>3; }
   | exp '>' exp                {$<dval>$ = $<dval>1 > $<dval>3; }
   | exp MENORIGUAL exp         {$<dval>$ = $<dval>1 <= $<dval>3; }
   | exp '<' exp                {$<dval>$ = $<dval>1 < $<dval>3; }
   | exp '+' exp                {$<dval>$ = $<dval>1 + $<dval>3; }
   | exp '-' exp                {$<dval>$ = $<dval>1 - $<dval>3; }
   | exp '*' exp                {$<dval>$ = $<dval>1 * $<dval>3; }
   | exp '/' exp                {if($<dval>3 == 0) {printf("ERROR/: No se puede dividir por 0 \n"); return 1; } else $<dval>$ = $<dval>1 / $<dval>3; }
   | exp '%' exp                {$<dval>$ = $<ival>1 % $<ival>3; }
   | exp '^' exp                {if($<dval>1 == 0 && $<dval>3 == 0) {printf("ERROR/: No se puede elevear el 0 a la 0 \n"); return 1; } else $<dval>$ = pow($<dval>1,$<dval>3); }
   | INCREMENTO exp             {$<dval>$ = ++ $<dval>2; }
   | DECREMENTO exp             {$<dval>$ = -- $<dval>2; }
   | exp INCREMENTO             {$<dval>$ = $<dval>2 ++; }
   | exp DECREMENTO             {$<dval>$ = $<dval>2 --; }
   | '-' exp                    {$<dval>$ = - $<dval>2; }
   | '!' exp                    {$<dval>$ = !$<dval>2; }
   | '&' exp                    {$<dval>$ = $<dval>2; }
   | '*' exp                    {$<dval>$ = $<dval>2; }
   | SIZEOF '(' TIPO_DATO ')'   {$<dval>$ = sizeof($<dval>3); }
   | ID '[' exp ']'             {$<dval>$ = 0; } //DUDA
   | ID '(' listaArgumentos ')' {$<dval>$ = 0; printf("Se invoco a la funcion %s \n",$<cval>1); } //DUDA
   | '(' exp ')'                {$<dval>$ = ( $<dval>2 ); }
   | ENTERO                     {$<dval>$ = $<ival>1; }
   | REAL                       {$<dval>$ = $<dval>1; }
   | LITERAL_CADENA
   | ID
;

listaArgumentos: 
               | exp
               | listaArgumentos ',' exp
;


%% 

int yyerror (char *mensaje) 
{
  printf ("Error Sintactico: %s\n", mensaje);
}

void main(){

   #ifdef BISON_DEBUG
        yydebug = 1;
#endif 
   yyin = fopen("entrada.txt","rt");
   printf("Ingrese una expresion para resolver:\n");
   yyparse();
}