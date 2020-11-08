#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"tablaDeSimbolos.h"

int hola(int a, int b) {
    return a+b;
}

int main() {
    ListaVariables *lista = NULL;
    agregarVariable(&lista,"a","int");
    agregarVariable(&lista,"b","char");
    imprimirVariables(&lista);
    eliminarVariable(&lista,"b");
    imprimirVariables(&lista);

    ListaParametros *funcionSumar = NULL;
    agregarParametro(&funcionSumar, "a", "int");
    agregarParametro(&funcionSumar, "b", "int");

    ListaParametros *funcionRestar = NULL;
    agregarParametro(&funcionRestar, "a", "int");
    agregarParametro(&funcionRestar, "b", "int");

    ListaFunciones *funciones = NULL;
    agregarFuncion(&funciones,"sumar","int",&funcionSumar);
    agregarFuncion(&funciones,"restar","int",&funcionRestar);
    agregarFuncion(&funciones,"restar","int",&funcionRestar);
    imprimirFunciones(&funciones);

    TablaDeSimbolos tabla;
    tabla.listaVariables = NULL;
    tabla.listaFunciones = NULL;
    
    agregarVariable(&tabla.listaVariables, "d","int");
    agregarVariable(&tabla.listaVariables, "de","int");
    agregarFuncion(&tabla.listaFunciones,"sumar","int",&funcionSumar);

    imprimirTabla(tabla);   
}