%{

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tablaDeSimbolos.h"

extern int yylineno;
extern int yylex();
int yyerror (char* );
int yywrap(){
return(1);
}

extern FILE* yyin;
extern FILE* yyout;

char* tipoInicializador;
char* tipoInicializadorFuncion;
char* tipoDato;
char* tipoDatoAuxiliar;
char* tipoDatoFuncion;
char* tipoDatoPuntero;
char* nombre;
char* nombreFuncion;
char* variable[20];
char* variableExpresion[20];
char* tipoParametroInvocacion;
char* tipoParametroReturn;
char* valorTipoFuncion;

char esArray[20];
char flagError = 0;
char flagOperacionBinaria = 0; 
char flagArray = 0;
char flagReturn = 0;
char flagFuncion = 0;

int lineaVariable[10];
int jerarquia = 0;
int contadorVariables = 0;
int contadorParametros = 0;
int tip = 0;
int tipDecla = 0;
int cantidad = 0;
int cantidadPuntero = 0;
int contadorVariableExpresion = 0;
Nodo *parametrosInvocacion;
ListaVariables *listaVariablesAuxiliares;
TablaDeSimbolos tabla;


%}

%union {
  int ival;
  double dval;
  char cval[1000];
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
%token <cval> NULL1

%token <cval> TIPO_DATO
%token <cval> CLASE_ALMACENAMIENTO
%token <cval> STRUCT_UNION
%token <cval> ID
%token <cval> IDBIS
%token <cval> SIZEOF
%token <cval> CTE_CARACTER
%token <cval> INCLUDE
%token <cval> DEFINE
%token <cval> COMENTARIO_SIMPLE
%token <cval> COMENTARIO_MULTIPLE
%token <cval> ERROR_LEXICO

%left OR
%left AND
%left IGUALDAD DESIGUALDAD
%left MAYORIGUAL '>' MENORIGUAL '<'
%left '+' '-'
%left '*' '/' '%'
%left '(' ')'

%% 

input: opcionComentario opcionBarraN
     | input line
;

line: '\n'
    | declaracionExterna opcionComentario opcionBarraN
    | sentencia opcionComentario opcionBarraN
    | INCLUDE opcionComentario '\n' {agregarFuncionesExternas(&tabla.listaFuncionesExternas, &tabla.listaVariablesExternas, $<cval>1, yylineno-1);}
    | lineaControl opcionComentario '\n' 
    | ERROR_LEXICO  {
                         char *error = malloc(strlen("Error Lexico: ") + strlen($<cval>1) + 1);
                         strcpy(error, "Error Lexico: ");
                         strcat(error, $<cval>1);
                         agregarError(&errores, error, yylineno);
                    }
    | error '\n' {agregarError(&errores,"Error Sintactico",yylineno-1); tabla.listaParametros = NULL; cantidadPuntero = 0; contadorParametros = 0;}
;

lineaControl: DEFINE ID expPrimaria {agregarVariablesExternasBis(&tabla.listaVariablesExternas, $<cval>2, tipoInicializador, yylineno);}
;

opcionComentario: 
               | COMENTARIO_MULTIPLE
               | COMENTARIO_SIMPLE
;

opcionBarraN: 
               | '\n' opcionBarraN
;

//DECLARACIONES
declaracion: especDeclaracion listaDeclaradoresBis ';' opcionComentario opcionBarraN {
          nombre = $<cval>2;
          
          while(contadorVariables!=0 && tip != 3){
               contadorVariables--;
               agregarVariable(&tabla.listaVariables, &listaVariablesAuxiliares, variable[contadorVariables], tipoDato, tipoInicializador, yylineno-1, flagError, esArray[contadorVariables], tipDecla, jerarquia, lineaVariable[contadorVariables]);               tipoInicializador = "vacio";
          }
          strcpy(tipoDato, "");
          contadorVariableExpresion = 0;
          contadorVariables = 0;
          flagArray = 0;
          flagError = 0;
          flagOperacionBinaria = 0;
     }
;

especDeclaracionBis:
                   | especDeclaracion
;

especDeclaracion: CLASE_ALMACENAMIENTO especDeclaracionBis
                | especTipo especDeclaracionBis   {
                                                       if(tip == 3 && flagFuncion == 0 && strcmp(tipoDato,"")) {
                                                            tipoDatoFuncion = (char*)realloc(tipoDatoFuncion, strlen(tipoDato));
                                                            strcpy(tipoDatoFuncion, tipoDato);
                                                            flagFuncion = 1;
                                                       }
                                                       tipoDato = strdup($<cval>1);
                                                  }
               
;

listaDeclaradoresBis:
                    | listaDeclaradores
;

listaDeclaradores: declarador {cantidad = 1; }
                 | listaDeclaradores ',' declarador {cantidad = 2;}
;

declarador: decla1 { tipDecla = 1; }
          | decla1 '=' inicializador {   tipDecla = 2; }
;

inicializador: expAsignacion 
             | '{' listaDeInicializadores '}' {flagArray = 1;}
;

listaDeInicializadores: inicializador
                      | listaDeInicializadores ',' inicializador
;

especTipo: TIPO_DATO 
         | especStructUnion
         | IDBIS
;

especTipoBis: TIPO_DATO 
         | especStructUnion
;

especStructUnion: STRUCT_UNION ID opcionLista
                | STRUCT_UNION '{' listaDeclaracionesStruct '}'
;

listaDeclaracionesStruct: declaracionStruct
                        | listaDeclaracionesStruct declaracionStruct
;

declaracionStruct: listaCalificadores declaradoresStruct ';' opcionComentario opcionBarraN
;

listaCalificadores: especTipoBis listaCalificadoresBis
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

declaStruct: decla1
           | declaBis ':' expCondicional
;

decla1: puntero declaradorDirecto   {
                                        if(tip!=3){
                                             tipoDato = (char*)realloc(tipoDato, strlen(tipoDato)+cantidadPuntero);
                                             while(cantidadPuntero!=0){
                                                  strcat(tipoDato, "*");
                                                  cantidadPuntero--;
                                             }
                                             variable[contadorVariables] = $<cval>2;
                                             lineaVariable[contadorVariables] = yylineno;
                                             esArray[contadorVariables] = flagArray;
                                             contadorVariables++;

                                             /*variable[contadorVariables] = (char*)malloc(strlen($<cval>2)+cantidadPuntero);
                                             strcpy(variable[contadorVariables],"\0"); 
                                             while(cantidadPuntero!=0){
                                                  strcat(variable[contadorVariables], "*");
                                                  cantidadPuntero--;
                                             }
                                             strcat(variable[contadorVariables],$<cval>2); 
                                             contadorVariables++;*/
                                        }

                                   }                   
     | declaradorDirecto { 
                              if(tip!=3){
                                   variable[contadorVariables] = strdup($<cval>1); 
                                   lineaVariable[contadorVariables] = yylineno;
                                   esArray[contadorVariables] = flagArray;
                                   contadorVariables++;
                              }
                         }
;

decla2: puntero declaradorDirecto   {
                                        tipoDatoPuntero = (char*)malloc(cantidadPuntero);
                                        strcpy(tipoDatoPuntero, "");
                                        while(cantidadPuntero!=0){
                                             strcat(tipoDatoPuntero, "*");
                                             cantidadPuntero--;
                                        }
                                        nombre = strdup($<cval>2);
                                   }                   
     | declaradorDirecto {
                              tipoDatoPuntero = (char*)malloc(strlen(""));
                              strcpy(tipoDatoPuntero, ""); 
                              nombre = strdup($<cval>1);
                         }
;

declaBis: 
        | decla1
;

declaradorDirecto: ID {tip = 1;flagArray=0;}
                 | declaradorDirecto '[' expCondicionalBis ']' {tip = 2; flagArray=1;}
                 | declaradorDirecto {tip = 3;flagArray=0;} '(' listaTiposParametrosBis ')' 
;

listaTiposParametros: listaParametros
                    | listaParametros ',' '.' '.' '.'
;

listaTiposParametrosBis: {
                              tipoDatoFuncion = (char*)realloc(tipoDatoFuncion, strlen(tipoDato));
                              strcpy(tipoDatoFuncion, tipoDato);
                         }
                       | listaTiposParametros
;

listaParametros: declaracionParametro {contadorParametros++; }
               | listaParametros ',' declaracionParametro {contadorParametros++; }
;

declaracionParametro: especDeclaracion {agregarParametro(&tabla.listaParametros, "-", $<cval>1,yylineno-1, flagArray); }
                    | especDeclaracion decla2 {
                                                  char* aux = (char*)malloc(strlen($<cval>1)+strlen(tipoDatoPuntero));
                                                  strcpy(aux, $<cval>1);
                                                  strcat(aux, tipoDatoPuntero);
                                                  agregarParametro(&tabla.listaParametros, nombre, aux,yylineno-1, flagArray);
                                                  cantidadPuntero = 0;
                                             }
                    | especDeclaracion declaradorAbstracto
;

nombreTipo: listaCalificadores declaradorAbstractoBis
;

declaradorAbstracto: puntero  {
                                   tipoDatoPuntero = (char*)realloc(tipoDatoPuntero, strlen($<cval>1)+cantidadPuntero);
                                   strcpy(tipoDatoPuntero, $<cval>1);
                                   while(cantidadPuntero!=0){
                                        strcat(tipoDatoPuntero, "*");
                                        cantidadPuntero--;
                                   }
                                   agregarParametro(&tabla.listaParametros, "-", tipoDatoPuntero,yylineno-1, flagArray); 
                                   cantidadPuntero = 0;
                              }
;

declaradorAbstractoBis:
                      | declaradorAbstracto
;

//SENTENCIAS
sentencia: sentCompuesta
         | sentExpresion
         | sentSeleccion
         | sentIteracion
         | sentSalto opcionComentario opcionBarraN
         | sentEtiquetada
;

sentExpresion: exp ';' opcionComentario opcionBarraN     {   
                                             while(contadorVariableExpresion && !flagArray){
                                                  
                                                  if(contadorVariableExpresion == 1 || !strcmp(variableExpresion[0],variableExpresion[contadorVariableExpresion-1])) {
                                                       contadorVariableExpresion--;
                                                       tipoInicializador = variableExpresion[0];
                                                  }
                                                  else if(flagOperacionBinaria==1) {

                                                       char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere sumar un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                                                       strcpy(error,"Se quiere sumar un valor de tipo ");
                                                       strcat(error,variableExpresion[0]);
                                                       strcat(error," a un valor de tipo ");
                                                       strcat(error, variableExpresion[contadorVariableExpresion-1]);
                                                       agregarError(&errores, error, yylineno-1);
                                                       flagError = 1;
                                                       contadorVariableExpresion = 0;
                                                  }
                                                  else if(flagOperacionBinaria==2) {

                                                       char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere restar un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                                                       strcpy(error,"Se quiere restar un valor de tipo ");
                                                       strcat(error,variableExpresion[0]);
                                                       strcat(error," a un valor de tipo ");
                                                       strcat(error, variableExpresion[contadorVariableExpresion-1]);
                                                       agregarError(&errores, error, yylineno-1);
                                                       flagError = 1;
                                                       contadorVariableExpresion = 0;
                                                  }
                                                  else if(flagOperacionBinaria==3) {

                                                       char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere multiplicar un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                                                       strcpy(error,"Se quiere multiplicar un valor de tipo ");
                                                       strcat(error,variableExpresion[0]);
                                                       strcat(error," a un valor de tipo ");
                                                       strcat(error, variableExpresion[contadorVariableExpresion-1]);
                                                       agregarError(&errores, error, yylineno-1);
                                                       flagError = 1;
                                                       contadorVariableExpresion = 0;
                                                  }
                                                  else if(flagOperacionBinaria==4) {

                                                       char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere dividir un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                                                       strcpy(error,"Se quiere dividir un valor de tipo ");
                                                       strcat(error,variableExpresion[0]);
                                                       strcat(error," a un valor de tipo ");
                                                       strcat(error, variableExpresion[contadorVariableExpresion-1]);
                                                       agregarError(&errores, error, yylineno-1);
                                                       flagError = 1;
                                                       contadorVariableExpresion = 0;
                                                  } 
                                                  else if(!flagOperacionBinaria){
                                                       contadorVariableExpresion = 0;
                                                  }
                                             }
                                             contadorVariableExpresion = 0;
                                             contadorVariables = 0;
                                             flagArray = 0;
                                             flagError = 0;
                                             flagOperacionBinaria = 0;
                                        }
             | ';' opcionComentario opcionBarraN       
;

sentCompuesta: '{' {jerarquia++;} opcionComentario opcionBarraN decalracionOSentencia opcionComentario opcionBarraN'}' opcionComentario opcionBarraN {/*printf("Se encontro una Sentencia Compuesta. \n");*/sacarVariables(&listaVariablesAuxiliares, jerarquia); jerarquia--;}
;

decalracionOSentencia: 
                     | decalracionOSentenciaBis decalracionOSentencia 
;

decalracionOSentenciaBis: listaDeclaraciones
                        | listaSentencias
;

listaDeclaraciones: declaracionExterna
                  | listaDeclaraciones declaracionExterna
;

listaDeclaracionesBis:
                     | listaDeclaraciones
;

listaSentencias: sentencia 
               | listaSentencias sentencia
;

puntero: '*' punteroBis {cantidadPuntero++;}
;

punteroBis:
          | '*' punteroBis {cantidadPuntero++;}
;

sentSeleccion: IF '(' exp ')' sentencia                {/*printf("Se encontro una Sentencia de Seleccion IF.\n");*/ }
             | IF '(' exp ')' sentencia ELSE sentencia {/*printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n");*/ }
             | SWITCH '(' exp ')' sentencia            {/*printf("Se enconto una Sentencia de Seleccion SWITCH.\n");*/ }
;

sentIteracion: WHILE '(' exp ')' sentencia               {/*printf("Se encontro una Sentencia de Iteracion WHILE.\n");*/ }
             | DO sentencia WHILE '(' exp ')' ';'   opcionComentario opcionBarraN     {/*printf("Se encontro una Sentencia de Iteracion DO WHILE.\n");*/ }
             | FOR '(' expOp ';' expOp ';' expOp ')' opcionComentario opcionBarraN sentencia {/*printf("Se encontro una Sentencia de Iteracion FOR.\n");*/ }
;

sentEtiquetada: CASE expCondicional ':' opcionComentario opcionBarraN sentencia {/*printf("Se encontro una Sentencia de Etiqueta CASE.\n");*/ }
              | DEFAULT ':' opcionComentario opcionBarraN sentencia  {/*printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n");*/ }
              | ID ':' sentencia
;

sentSalto: RETURN expOp ';' {/*printf("Se encontro una Sentencia de Salto RETURN. \n"); */
                                   if(strcmp(tipoInicializadorFuncion,valorTipoFuncion)){
                                        if(!strcmp(tipoInicializadorFuncion,"")){
                                             char *error = (char *)malloc(strlen("Error Semantico en la devolucion de la funcion ") + strlen(nombreFuncion) + strlen(": El parametro no existe ") + 1);
                                             strcpy(error, "Error Semantico en la devolucion de la funcion ");
                                             strcat(error, nombreFuncion);
                                             strcat(error, ": El parametro no existe ");
                                             agregarError(&errores, error, yylineno);
                                        }
                                        else{
                                             char *error = (char *)malloc(strlen("Error Semantico en la devolucion de la funcion ") + strlen(nombreFuncion) + strlen(": Se quiere devolver el parametro de tipo ") + strlen(tipoInicializadorFuncion) + strlen(", mientras que la funcion devuelve ") +strlen(valorTipoFuncion) + 1);
                                             strcpy(error, "Error Semantico en la devolucion de la funcion ");
                                             strcat(error, nombreFuncion);
                                             strcat(error, ": Se quiere devolver el parametro de tipo ");
                                             strcat(error, tipoInicializadorFuncion);
                                             strcat(error, ", mientras que la funcion devuelve ");
                                             strcat(error, valorTipoFuncion);
                                             agregarError(&errores, error, yylineno);
                                        }
                                   }
                                   flagReturn = 0;
                              }
         | BREAK ';'     {/*printf("Se encontro una Sentencia de Salto BREAK.\n"); */}
         | CONTINUE ';' {/*printf("Se encontro una Sentencia de Salto CONTINUE.\n"); */}
         | GOTO ID ';'  {/*printf("Se encontro una Sentencia de Salto GOTO. \n"); */}
;

//EXPRESIONES 
expPrimaria: ID               {    if(esArrayVariable(&listaVariablesAuxiliares,$<cval>1, jerarquia)!=2) flagArray = esArrayVariable(&listaVariablesAuxiliares,$<cval>1, jerarquia);
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = tipo(tabla, &listaVariablesAuxiliares, &tabla.listaParametros, $<cval>1, jerarquia); 
                                   variableExpresion[contadorVariableExpresion] = strdup(tipo(tabla, &listaVariablesAuxiliares, &tabla.listaParametros, $<cval>1, jerarquia));
                                   contadorVariableExpresion++;
                                   tip = 0;
                              }
           | ENTERO           {
                                   $<dval>$ = $<ival>1; 
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "int"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("int");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              } 
           | REAL             {
                                   $<dval>$ = $<dval>1; 
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "double"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("double");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              }
           | CTE_CARACTER     {
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "char"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              }
           | LITERAL_CADENA   {
                                   tipoParametroInvocacion = tipoInicializadorFuncion = "char*"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char*");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              }
           | NULL1
           | '(' exp ')'      {$<dval>$ = ( $<dval>2 ); }
;

exp: expAsignacion 
   | exp ',' expAsignacion 
;

expOp:
     | exp
;

expAsignacion: expCondicional 
             | expUnaria operAsignacion expAsignacion {
                                                            $<dval>$ = $<dval>3; 
                                                            if(tip==3) variableExpresion[1] = strdup(tipoInicializadorFuncion);
                                                            if(strcmp(variableExpresion[0],variableExpresion[1])){
                                                                 char *error = (char *)malloc(strlen("Error Semantico: Se quiere asignar un valor de tipo ") + strlen(variableExpresion[1]) + strlen(" a un valor de tipo ") + strlen(variableExpresion[0]) + 1);
                                                                 strcpy(error, "Error Semantico: Se quiere asignar un valor de tipo ");
                                                                 strcat(error, variableExpresion[1]);
                                                                 strcat(error, " a un valor de tipo ");
                                                                 strcat(error, variableExpresion[0]);
                                                                 agregarError(&errores, error, yylineno);
                                                            };
                                                       }
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
          | expAditiva '+' expMultiplicativa {$<dval>$ = $<dval>1 + $<dval>3; flagOperacionBinaria = 1;}
          | expAditiva '-' expMultiplicativa {$<dval>$ = $<dval>1 - $<dval>3; flagOperacionBinaria = 2; }
;

expMultiplicativa: expUnaria
                 | expMultiplicativa '*' expUnaria {$<dval>$ = $<dval>1 * $<dval>3;  flagOperacionBinaria = 3;}
                 | expMultiplicativa '/' expUnaria {if($<dval>3 == 0) {agregarError(&errores,"ERROR/: No se puede dividir por 0",yylineno-1);} else {$<dval>$ = $<dval>1 / $<dval>3;  flagOperacionBinaria = 4;}}
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
         | expSufijo '[' exp ']'             {$<dval>$ = 0; flagArray = 1;}
         | expSufijo '(' listaArgumentos ')' {$<dval>$ = 0; validarInvocacion(tabla,$<cval>1,parametrosInvocacion,yylineno); parametrosInvocacion = NULL; tipoInicializadorFuncion = strdup(tipoFuncion(tabla, $<cval>1)); contadorVariableExpresion = 0; tip = 3;}
         | expSufijo '.' ID                  {$<dval>$ = 0; }
         | expSufijo FLECHA ID               {$<dval>$ = 0; }
         | expSufijo INCREMENTO              {$<dval>$ = $<dval>2 ++; }
         | expSufijo DECREMENTO              {$<dval>$ = $<dval>2 --; }
;

listaArgumentos: expAsignacion {agregarNodo(&parametrosInvocacion,tipoInicializadorFuncion, flagArray);}
               | listaArgumentos ',' expAsignacion {agregarNodo(&parametrosInvocacion,tipoInicializadorFuncion, flagArray);}
;

//DEFINICIONES EXTERNAS
declaracionExterna: definicionFuncion {/*printf("Se define la funcion %s con %d parametros y devolucion de tipo %s  \n",nombre,contadorParametros,tipoDato); contadorParametros = 0;*/ agregarFuncion(&tabla.listaFuncionesDeclaradas, &tabla.listaFuncionesDefinidas,nombreFuncion,valorTipoFuncion,&tabla.listaParametros,yylineno-1, 1); contadorParametros = 0; tabla.listaParametros = NULL; cantidadPuntero = 0; flagFuncion = 0;}
                  | declaracion {
                       switch(tip){
                         case 1:
                              if(tipDecla == 1){
                                   if(cantidad == 1){
                                        //printf("Se declara la variable %s de tipo %s  \n",nombre,tipoDato);
                                   }
                                   else if(cantidad == 2){
                                        //printf("Se declaran variables de tipo %s  \n",tipoDato);
                                   } 
                              }
                              else if(tipDecla == 2){
                                   if(cantidad == 1){
                                        //printf("Se inicializa la variable %s de tipo %s \n",nombre,tipoDato);
                                   }
                                   else if(cantidad == 2){
                                        //printf("Se inicializan variables de tipo %s \n",tipoDato);
                                   } 
                              }
                              break;
                         case 2:
                              if(tipDecla == 1){
                                   if(cantidad == 1){
                                        //printf("Se declara el arreglo %s de tipo %s  \n",nombre,tipoDato);
                                   }
                                   else if(cantidad == 2){
                                        //printf("Se declaran arreglos de tipo %s \n",tipoDato);
                                   }  
                              }
                              else if(tipDecla == 2){
                                   if(cantidad == 1){
                                        //printf("Se inicializa el arreglo %s de tipo %s \n",nombre,tipoDato);
                                   }
                                   else if(cantidad == 2){
                                        //printf("Se inicializan arreglos de tipo %s \n",tipoDato);
                                   }   
                              }
                              break;
                         case 3:
                              if(tipDecla == 1){
                                   //printf("Se declara la funcion %s con %d parametros y devolucion de tipo %s  \n",nombre,contadorParametros,tipoDato); 
                                   contadorParametros = 0;
                                   agregarFuncion(&tabla.listaFuncionesDeclaradas, &tabla.listaFuncionesDefinidas,nombre,tipoDatoFuncion,&tabla.listaParametros,yylineno-1, 0);
                                   cantidadPuntero = 0;
                                   tabla.listaParametros = NULL;
                                   flagFuncion = 0;
                              }
                              break;     
                       }
                       tip = 0;
                  }
;

definicionFuncion: especDeclaracion decla2 {nombreFuncion = strdup($<cval>2); valorTipoFuncion = strdup($<cval>1); if(strcmp(valorTipoFuncion,"void")) flagReturn = 1;} listaDeclaracionesBis sentCompuesta {
               flagFuncion = 0; 
               if(flagReturn){
                    char *error = (char *)malloc(strlen("Error Semantico en la funcion ") + strlen(nombreFuncion) + strlen(": Deberia utilizar return.") + 1);
                    strcpy(error, "Warning: En la funcion ");
                    strcat(error, nombreFuncion);
                    strcat(error, " deberia utilizar return.");
                    agregarError(&errores, error, yylineno);
               }
               flagReturn = 0;
     }
;



%% 

int yyerror (char *mensaje) 
{
  //printf ("Error Sintactico: %s\n", mensaje);
}

void main(){

     #ifdef BISON_DEBUG
          yydebug = 1;
     #endif 
     yyout = fopen("salida.txt","w");
     yyin = fopen("entrada.txt", "r");

     tabla.listaVariables = NULL;
     tabla.listaParametros = NULL;
     tabla.listaVariablesExternas = NULL;
     tabla.listaFuncionesDeclaradas = NULL;
     tabla.listaFuncionesDefinidas = NULL;
     tabla.listaFuncionesExternas = NULL;
     parametrosInvocacion = NULL;
     listaVariablesAuxiliares = NULL;
     tipoInicializador = strdup("vacio");
     tipoDato = strdup("");

     yyparse();
     imprimirTabla(tabla);
     imprimirErrores(&errores);
     system("PAUSE");
}