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

FILE* yyin;
FILE* yyout;

char* tipoDato;
char* tipoDatoParametro;
char* nombreFuncion;
char* nombreID;

int contadorVariables = 0;
int contadorParametros = 0;

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
%token <cval> FLECHA

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
%token <cval> VOID
%token <cval> GOTO

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

%% 

input:
     | input line
;

line: '\n'
    | funcion '\n'
    | sentencia '\n'
;

// DECLARACION DE FUNCION
funcion: TIPO_DATO ID {tipoDato = $<cval>1; nombreFuncion = $<cval>2; } parametros {contadorParametros = 0; }
       | VOID ID {tipoDato = $<cval>1; nombreFuncion = $<cval>2; } parametros {contadorParametros = 0; }
;

parametros: '(' listaParametros ')' declaracionODefinicion 
;

declaracionODefinicion: ';'           {printf("Se declara la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDato); }
                      | sentCompuesta {printf("Se define la funcion %s con %d parametros y devolucion de tipo %s \n",nombreFuncion,contadorParametros,tipoDato); }

listaParametros: 
               | tipo {contadorParametros++; }
               | listaParametros ',' tipo {contadorParametros++; }
;

tipo: TIPO_DATO opcionId
;

opcionId: 
    | ID
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
sentCompuesta: '{' listaDeclaraciones listaSentencias barraN '}' {printf("Se encontro una Sentencia Compuesta. \n"); }
;

barraN: 
      | '\n'
      | barraN '\n'
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

unaVarSimple: ID {nombreID = $<cval>1; } tipoVariable asignacion {contadorVariables++; }

tipoVariable:         {printf("Se declaro el identificador \"%s\" de tipo %s\n",nombreID,tipoDato);}
            | array   {printf("Se declaro el array \"%s\" de tipo %s\n",nombreID,tipoDato); }
            | puntero {printf("Se declaro el puntero \"%s\" de tipo %s\n",nombreID,tipoDato) }
;

asignacion:
          | '=' inicializador 
;

puntero: '*'
       | puntero '*'
;

array: '[' exp ']'
     | array '[' exp ']'
;

inicializador: expAsignacion
             | '{' listaDeInicializadores '}' 
;

listaDeInicializadores: inicializador
                      | listaDeInicializadores ',' inicializador
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
              | ID ':' sentencia
;


//SENTENCIA DE SALTO
sentSalto: RETURN exp ';' {printf("Se encontro una Sentencia de Salto RETURN. \n"); }
         | BREAK ';'      {printf("Se encontro una Sentencia de Salto BREAK.\n"); }
         | CONTINUE ';'   {printf("Se encontro una Sentencia de Salto CONTINUE.\n"); }
         | GOTO ID ';'    {printf("Se encontro una Sentencia de Salto GOTO. \n"); }
;


//EXPRESIONES 
exp: expAsignacion
   | exp ',' expAsignacion
;

expAsignacion: expCondicional
             | expUnaria operAsignacion expAsignacion {$<dval>$ = $<dval>3; }
;

expCondicional: expOr
              | expOr '?' exp ':' expCondicional {$<dval>$ = 0; }
;

operAsignacion: '='
              | ASIGNACION_INCREMENTO
              | ASIGNACION_DECREMENTO
              | ASIGNACION_PRODUCTO
              | ASIGNACION_DIVISION
;

expOr: expAnd
     | expOr OR expAnd {$<dval>$ = $<dval>1 || $<dval>3; }
;

expAnd: expIgualdad
      | expAnd AND expIgualdad {$<dval>$ = $<dval>1 && $<dval>3; }
;

expIgualdad: expRelacional
           | expIgualdad IGUALDAD expRelacional    {$<dval>$ = $<dval>1 == $<dval>3; }
           | expIgualdad DESIGUALDAD expRelacional {$<dval>$ = $<dval>1 != $<dval>3; }
;

expRelacional: expAditiva
             | expRelacional '<' expAditiva        {$<dval>$ = $<dval>1 < $<dval>3; }
             | expRelacional '>' expAditiva        {$<dval>$ = $<dval>1 > $<dval>3; }
             | expRelacional MENORIGUAL expAditiva {$<dval>$ = $<dval>1 <= $<dval>3; }
             | expRelacional MAYORIGUAL expAditiva {$<dval>$ = $<dval>1 >= $<dval>3; }      
;

expAditiva: expMultiplicativa
          | expAditiva '+' expMultiplicativa {$<dval>$ = $<dval>1 + $<dval>3; }
          | expAditiva '-' expMultiplicativa {$<dval>$ = $<dval>1 - $<dval>3; }
;

expMultiplicativa: expUnaria
                 | expMultiplicativa '*' expUnaria {$<dval>$ = $<dval>1 * $<dval>3; }
                 | expMultiplicativa '/' expUnaria {if($<dval>3 == 0) {printf("ERROR/: No se puede dividir por 0 \n"); return 1; } else $<dval>$ = $<dval>1 / $<dval>3; }
                 | expMultiplicativa '%' expUnaria {$<dval>$ = $<ival>1 % $<ival>3; }
;

expUnaria: expSufijo
         | INCREMENTO expUnaria     {$<dval>$ = ++ $<dval>2; }
         | DECREMENTO expUnaria     {$<dval>$ = -- $<dval>2; }
         | '-' expUnaria            {$<dval>$ = - $<dval>2; }
         | '+' expUnaria            {$<dval>$ = + $<dval>2; }
         | '~' expUnaria            {$<dval>$ = $<dval>2; } // DUDA
         | '!' expUnaria            {$<dval>$ = ! $<dval>2; }
         | '&' expUnaria            {$<dval>$ = $<dval>2; }
         | puntero expUnaria        {$<dval>$ = $<dval>2; }
         | SIZEOF '(' expUnaria ')' {$<dval>$ = sizeof($<dval>3); }
         | SIZEOF '(' TIPO_DATO ')' {$<dval>$ = sizeof($<dval>3); }
;

expSufijo: expPrimaria
         | expSufijo array                   {$<dval>$ = 0; }
         | expSufijo '(' listaArgumentos ')' {$<dval>$ = 0; printf("Se invoco a la funcion %s \n",$<cval>1); }
         | expSufijo '.' ID                  {$<dval>$ = 0; }
         | expSufijo FLECHA ID               {$<dval>$ = 0; }
         | expSufijo INCREMENTO              {$<dval>$ = $<dval>2 ++; }
         | expSufijo DECREMENTO              {$<dval>$ = $<dval>2 --; }
;

expPrimaria: ID
           | ENTERO         {$<dval>$ = $<ival>1; }
           | REAL           {$<dval>$ = $<dval>1; }
           | LITERAL_CADENA
           | '(' exp ')'    {$<dval>$ = ( $<dval>2 ); }
;

listaArgumentos: 
               | expAsignacion
               | listaArgumentos ',' expAsignacion
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
   printf("Ingrese una expresion para resolver:\n");
   yyout = fopen("salida.txt","w");
   yyin = fopen("entrada.txt", "r");
   yyparse();
}