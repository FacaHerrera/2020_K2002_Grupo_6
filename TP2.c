#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int estadoSig;
    char cadPush[3];
}estado;

typedef struct 
{
    char info;
    struct Nodo *sig;
} Nodo;

typedef Nodo *Pila;
typedef Nodo *punteroNodo;

void escanearArchivoYescribirResultados(char expresion[]);
int determinarColumna(char c);
char pop(Pila* pila);
void push(Pila* pila, char cadena[]);
int determinarCima(Pila* pila);


int main(int argc, char const *argv[])
{
    char expresion[50];
    printf("Trabajo Practico Nro 2 - Automata Finito de Pila para Expresiones\n Escriba la expresion: \n");
    scanf("%s",&expresion);
    escanearArchivoYescribirResultados(expresion);
}

struct Estado 
{
    int estado;
    char cadena[3];
};

void escanearArchivoYescribirResultados(char expresion[])
{
    int estadoActual = 0;
    int i = 0;
    char c;
    estado error = {3,"$"};
    Pila p = NULL;
    push(p,"$");
    estado tablaTransicion[4][2][6] = {{{{3,"$"},{1,"$"},{3,"$"},{0,"R$"},{3,"$"},{3,"$"}},{{3,"R"},{1,"R"},{3,"R"},{0,"RR"},{3,"R"},{3,"R"}}},
                                       {{{1,"$"},{1,"$"},{0,"$"},{3,"$"},{3,"$"},{3,"$"}},{{1,"R"},{1,"R"},{0,"R"},{3,"R"},{2,""},{3,"R"}}},
                                       {{{3,"$"},{3,"$"},{0,"$"},{3,"$"},{3,"$"},{3,"$"}},{{3,"R"},{3,"R"},{0,"R"},{3,"R"},{2,""},{3,"R"}}},
                                       {{{3,"$"},{3,"$"},{3,"$"},{3,"$"},{3,"$"},{3,"$"}},{{3,"$"},{3,"$"},{3,"$"},{3,"$"},{3,"$"},{3,"$"}}}} ;
    while(expresion[i] != '\0')
    {
        c = expresion[i];
        if(tablaTransicion[estadoActual][determinarCima(p)][determinarColumna(c)].estadoSig == 3)
        {
            estadoActual = 3;
        }
        else
        {
            estadoActual = tablaTransicion[estadoActual][determinarCima(p)][determinarColumna(c)].estadoSig;
            i++;
        }
    }
    if(estadoActual == 3)
    {
        printf("La expresion es incorrecta");
    }
    else
    {
        printf("La expresion es correcta");
    }
}

int determinarColumna(char c)
{
        if(c=='0')
        {
            return 0;
        }
        if(c>='1' && c<='9')
        {
            return 1;
        }
        if(c == '+' || c == '-' || c == '*' || c == '/')
        {
            return 2;
        }
        if(c == '(')
        {
            return 3;
        }
        if(c == ')')
        {
            return 4;
        }
        else
        {
            return 5;
        }
}

int determinarCima(Pila *pila)
{
    if(pop(pila) == '$')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

char pop(Pila* pila)
{
   punteroNodo nodo;
   char v;
   nodo = *pila;
   if(!nodo) return 0;
   *pila = nodo->sig;
   v = nodo->info; 
   free(nodo);
   return v;
}
void push(Pila* pila, char cadena[])
{
    punteroNodo nuevo;
    nuevo = (Nodo *)malloc(sizeof(Nodo));
    nuevo->info = cadena;
    nuevo->sig = *pila;
    *pila = nuevo;
}