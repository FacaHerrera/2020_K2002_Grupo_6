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

extern FILE* yyin;
extern FILE* yyout;

char* tipoDatoVariable;
char* tipoDatoFuncion;
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
%token <cval> GOTO

%token <cval> TIPO_DATO
%token <cval> CLASE_ALMACENAMIENTO
%token <cval> STRUCT_UNION
%token <cval> ID
%token <cval> SIZEOF

%left OR
%left AND
%left IGUALDAD DESIGUALDAD
%left MAYORIGUAl '>' MENORIGUAL '<'
%left '+' '-'
%left '*' '/' '%'
%left '(' ')'

%expect 31

%% 

input:
     | input line
;

line: declaracionExterna
    | sentencia
    | error ';' {yyerrok; }
;

//DECLARACIONES
declaracion: especDeclaracion listaDeclaradoresBis ';' {tipoDatoFuncion = $<cval>1; nombreFuncion = $<cval>2;}
;

especDeclaracionBis:
                   | especDeclaracion
;

especDeclaracion: especClase especDeclaracionBis
                | especTipo especDeclaracionBis
;

listaDeclaradoresBis:
                    | listaDeclaradores
;

listaDeclaradores: declarador
                 | listaDeclaradores ',' declarador
;

declarador: decla
          | decla '=' inicializador
;

inicializador: expAsignacion
             | '{' listaDeInicializadores '}'
;

listaDeInicializadores: inicializador
                      | listaDeInicializadores ',' inicializador
;

especClase: CLASE_ALMACENAMIENTO
;

especTipo: TIPO_DATO
         | especStructUnion
;

especStructUnion: STRUCT_UNION ID opcionLista
                | STRUCT_UNION '{' listaDeclaracionesStruct '}'
;

listaDeclaracionesStruct: declaracionStruct
                        | listaDeclaracionesStruct declaracionStruct
;

declaracionStruct: listaCalificadores declaradoresStruct ';'
;

listaCalificadores: especTipo listaCalificadoresBis
;

listaCalificadoresBis: 
                     | listaCalificadores
;

opcionLista: 
           | '{' listaDeclaracionesStruct '}'
;

declaradoresStruct: declaStruct
                  | declaradoresStruct ',' declaStruct
;

declaStruct: decla
           | declaBis ':' expCondicional
;

decla: puntero declaradorDirecto
     | declaradorDirecto
;

declaBis: 
        | decla
;

declaradorDirecto: ID {printf("Se declara la variable %s de tipo %s  \n",$<cval>1,tipoDatoFuncion); }
                 | declaradorDirecto '[' expCondicionalBis ']' {printf("Se declara el arreglo %s de tipo %s  \n",nombreFuncion,tipoDatoFuncion); }
                 | declaradorDirecto '(' listaTiposParametros ')' {printf("Se declara la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDatoFuncion); contadorParametros = 0; }
                 | declaradorDirecto '(' listaIdentificadores ')' {printf("Se invoca la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDatoFuncion); contadorParametros = 0; }
;

listaTiposParametros: listaParametros
                    | listaParametros ',' '.' '.' '.'
;

listaTiposParametrosBis:
                       | listaTiposParametros
;

listaParametros: declaracionParametro {contadorParametros++; }
               | listaParametros ',' declaracionParametro {contadorParametros++; }
;

declaracionParametro: especDeclaracion decla
                    | especDeclaracion declaradorAbstracto
;

listaIdentificadores: 
                    | ID {contadorParametros++; }
                    | listaIdentificadores ',' ID {contadorParametros++; }
;

nombreTipo: listaCalificadores declaradorAbstractoBis
;

declaradorAbstracto: puntero declaradorAbstractoDirecto
                   | declaradorAbstractoDirecto
                   | puntero
;

declaradorAbstractoBis:
                      | declaradorAbstracto
;

declaradorAbstractoDirecto: '(' declaradorAbstracto ')'
                          | declaradorAbstractoDirecto opcionExpresion
                          | opcionExpresion
;

opcionExpresion: '['expCondicionalBis ']'
               | '(' listaTiposParametrosBis ')'
;

//SENTENCIAS
sentencia: sentCompuesta
         | sentExpresion
         | sentSeleccion
         | sentIteracion
         | sentSalto
         | sentEtiquetada
;

sentExpresion: exp ';'
             | ';'       
;

sentCompuesta: '{' decalracionOSentencia '}' {printf("Se encontro una Sentencia Compuesta. \n"); }
;

decalracionOSentencia: 
                     | decalracionOSentencia listaDeclaraciones
                     | decalracionOSentencia listaSentencias
;

listaDeclaraciones: declaracion
                  | listaDeclaraciones declaracion
;

listaDeclaracionesBis:
                     | listaDeclaraciones
;

listaSentencias: sentencia
               | listaSentencias sentencia
;

puntero: '*'
       | '*' puntero
;

sentSeleccion: IF '(' exp ')' sentencia                {printf("Se encontro una Sentencia de Seleccion IF.\n"); }
             | IF '(' exp ')' sentencia ELSE sentencia {printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n"); }
             | SWITCH '(' exp ')' sentencia            {printf("Se enconto una Sentencia de Seleccion SWITCH.\n"); }
;

sentIteracion: WHILE '(' exp ')' sentencia               {printf("Se encontro una Sentencia de Iteracion WHILE.\n"); }
             | DO sentencia WHILE '(' exp ')' ';'        {printf("Se encontro una Sentencia de Iteracion DO WHILE.\n"); }
             | FOR '(' expOp ';' expOp ';' expOp ')' sentencia {printf("Se encontro una Sentencia de Iteracion FOR.\n"); }
;

sentEtiquetada: CASE expCondicional ':' sentencia {printf("Se encontro una Sentencia de Etiqueta CASE.\n"); }
              | DEFAULT ':' sentencia  {printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n"); }
              | ID ':' sentencia
;

sentSalto: RETURN expOp ';' {printf("Se encontro una Sentencia de Salto RETURN. \n"); }
         | BREAK ';'      {printf("Se encontro una Sentencia de Salto BREAK.\n"); }
         | CONTINUE ';'   {printf("Se encontro una Sentencia de Salto CONTINUE.\n"); }
         | GOTO ID ';'    {printf("Se encontro una Sentencia de Salto GOTO. \n"); }
;

//EXPRESIONES 
exp: expAsignacion
   | exp ',' expAsignacion
;

expOp:
     | exp
;

expAsignacion: expCondicional
             | expUnaria operAsignacion expAsignacion {$<dval>$ = $<dval>3; }
;

expCondicional: expOr
              | expOr '?' exp ':' expCondicional {$<dval>$ = 0; }
;

expCondicionalBis:
                 | expCondicional
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
         | SIZEOF '(' nombreTipo ')' {$<dval>$ = sizeof($<dval>3); }
;

expSufijo: expPrimaria
         | expSufijo '[' exp ']'             {$<dval>$ = 0; }
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

//DEFINICIONES EXTERNAS
declaracionExterna: definicionFuncion {printf("Se define la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDatoFuncion); contadorParametros = 0; }
                  | declaracion
;

definicionFuncion: especDeclaracion decla listaDeclaracionesBis sentCompuesta {nombreFuncion = $<cval>2; tipoDatoFuncion = $<cval>1;}
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