#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"tablaDeSimbolos.h"

int hola(int a, int b) {
    return a+b;
}

int main() {
    ListaVariables *lista = NULL;
    agregarVariable(&lista,"a","int", "int", 1);
    agregarVariable(&lista,"b","char", "char", 1);
    imprimirVariables(&lista);
    imprimirVariables(&lista);

    ListaParametros *funcionSumar = NULL;
    agregarParametro(&funcionSumar, "a", "int", 1);
    agregarParametro(&funcionSumar, "b", "int", 1);

    ListaParametros *funcionRestar = NULL;
    agregarParametro(&funcionRestar, "a", "int", 1);
    agregarParametro(&funcionRestar, "b", "int", 1);

    ListaFunciones *funciones = NULL;
    agregarFuncion(&funciones,"sumar","int",&funcionSumar, 1);
    agregarFuncion(&funciones,"restar","int",&funcionRestar, 1);
    agregarFuncion(&funciones,"restar","int",&funcionRestar, 1);
    imprimirFunciones(&funciones);

    Nodo *tiposDeDato = NULL;
    agregarNodo(&tiposDeDato,"int");
    agregarNodo(&tiposDeDato,"");

    TablaDeSimbolos tabla;
    tabla.listaVariables = NULL;
    tabla.listaFunciones = NULL;
    agregarVariable(&tabla.listaVariables, "c","char","int", 1);
    agregarVariable(&tabla.listaVariables, "a","int","int", 1);
    agregarFuncion(&tabla.listaFunciones,"sumar","int",&funcionSumar, 1);
    imprimirTabla(tabla);
    printf("\n");
    agregarError("Error Sintactico", 1);
    imprimirErrores();
}
