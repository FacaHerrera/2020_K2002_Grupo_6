#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ERROR1 'A'
#define ERROR2 'B'
#define ERROR3 'C'
#define ERROR4 'D'
#define ERROR5 'E'
#define ERROR6 'F'
#define ERROR7 'G'

struct estado
{
    int estadoSig;
    char cadPush;
};

typedef struct 
{
    char info;
    struct nodo *sig;
} Nodo;

typedef Nodo *Pila;
typedef Nodo *punteroNodo;

void escanearExpresionYescribirResultados();
int determinarColumna(char);
char pop(Pila* );
void push(Pila* , char );
int determinarCima(char );
void calcularLugarError(int,char*);
int len(char*);
int esEstadoFinal(struct estado);

int main(int argc, char const *argv[])
{
    printf("Trabajo Practico Nro 2 - Automata Finito de Pila para Expresiones\n");
    fflush(stdin);
    escanearExpresionYescribirResultados();
    system("pause");
    return 0;
}

void escanearExpresionYescribirResultados()
{
    char expresion[50];
    char lugarError[50];
    int condicion = 1, i = 0, x = 0, columna = 0, estadoActual = 0, error=0;
    char c, cima;
    struct estado est;
    Pila pila = NULL;
    push(&pila,'$');
    struct estado tablaTransicion[4][2][6] = {{{{3,ERROR2},{1,'$'}   ,{3,ERROR3},{0,'R'}   ,{3,ERROR3},{3,ERROR1}},{{3,ERROR2},{1,'$'}   ,{3,ERROR4},{0,'R'}   ,{3,ERROR3},{3,ERROR1}}},
                                              {{{1,'$'}   ,{1,'$'}   ,{0,'$'}   ,{3,ERROR6},{3,ERROR5},{3,ERROR1}},{{1,'$'}   ,{1,'$'}   ,{0,'$'}   ,{3,ERROR6},{2,'N'}   ,{3,ERROR1}}},
                                              {{{3,ERROR7},{3,ERROR7},{0,'$'}   ,{3,ERROR6},{3,ERROR5},{3,ERROR1}},{{3,ERROR7},{3,ERROR7},{0,'$'}   ,{3,ERROR6},{2,'N'}   ,{3,ERROR1}}},
                                              {{{3,'I'}   ,{3,'I'}   ,{3,'I'}   ,{3,'I'}   ,{3,'I'}   ,{3,'I'}}   ,{{3,'I'}   ,{3,'I'}   ,{3,'I'}   ,{3,'I'}   ,{3,'I'}   ,{3,'I'}}}};
    while(condicion == 1)
    {
        printf("Escriba la expresion: \n");
        fflush(stdin);
        scanf("%49[^\n]",&expresion);
        i = 0;
        estadoActual = 0;
        while(expresion[i] != '\0')
        {
            c = expresion[i];
            cima = pop(&pila);
            if(c != ' ')
            {
                est = tablaTransicion[estadoActual][determinarCima(cima)][determinarColumna(c)];
            }
            if(est.estadoSig == 3)
            {
                estadoActual = 3;
                calcularLugarError(i,expresion);
                switch (est.cadPush)
                {
                case ERROR1:
                    printf("%s","ERROR: Caracter no reconocido.");
                    break;
                case ERROR2:
                    printf("%s","ERROR: No se puede empezar un numero con '0'.");
                    break;
                case ERROR3:
                    printf("%s","ERROR: Se espera un numero o un '('.");
                    break;
                case ERROR4:
                    printf("%s","ERROR: Se esperaba un numero despues de '('.");
                    break;
                case ERROR5:
                    printf("%s","ERROR: Falta '('.");
                    break;
                case ERROR6:
                    printf("%s","ERROR: Se espera una operacion antes de '('.");
                    break;
                case ERROR7:
                    printf("%s","ERROR: Se espera una operacion despues de ')'.");
                    break;
                }
                i = len(expresion);
            }
            else
            {
                estadoActual = est.estadoSig;
                if(est.cadPush == 'R')
                {
                    push(&pila, cima);
                    push(&pila, 'R');
                }
                if(est.cadPush == '$')
                {
                    push(&pila, cima);
                }
                if(est.cadPush == 'N')
                {
                    cima = pop(&pila);
                }
            }
            i++;
        }
        if(esEstadoFinal(est) && determinarCima(cima) == 0)
        {
            printf("La expresion es correcta\n");
        }
        if((esEstadoFinal(est) == 0 && estadoActual != 3) || determinarCima(cima) == 1)
        {
            for(x = 0; x < len(expresion); x++)
            {
                printf("%s"," ");
            }
            if(determinarCima(cima) == 1 && estadoActual == 1)
            {
                printf("^>ERROR: Falta ')'.\n");
            }
            else if(determinarCima(cima) == 1 && estadoActual == 0)
            {
                printf("^>ERROR: Se esperaba un numero o un '('.\n");
            }
            else if(estadoActual != 3)
            {
                printf("^>ERROR: La expresion esta incompleta.\n");
            }
        }
        pila = NULL;
        push(&pila,'$');
        printf("\nSi quiere escribir otra expresion oprima 1, sino 0: ");
        fflush(stdin);
        scanf("%d",&condicion);
    }
}

int determinarColumna(char c)
{
        if(c=='0') return 0;
        else if(c>='1' && c<='9') return 1;
        else if(c == '+' || c == '-' || c == '*' || c == '/') return 2;
        else if(c == '(') return 3;
        else if(c == ')') return 4;
        else{return 5;}
}

int determinarCima(char cima)
{
    if(cima == '$')return 0;
    if(cima == 'R')return 1;
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

void push(Pila *pila, char cadena)
{
    punteroNodo nuevo;
    nuevo = (Nodo *)malloc(sizeof(Nodo));
    nuevo->info = cadena;
    nuevo->sig = *pila;
    *pila = nuevo;
}

int len(char* expresion)
{
    int i =0;
    while(expresion[i] != '\0')
    {
        i++;
    }
    return i-1;
}

void calcularLugarError(int i, char* expresion)
{
    char lugarError[50];
    int x = 0;
    while(x<i)
    {
        lugarError[x] = ' ';
        x++;
    }
    lugarError[x] = '^';
    x++;
    while(expresion[x]!='\0')
    {
        lugarError[x] = '-';
        x++;
    }
    lugarError[x] = '>';
    x++;
    lugarError[x] = '\0';
    printf("%s",lugarError);
}

int esEstadoFinal(struct estado est)
{
    if((est.estadoSig == 1 && (est.cadPush == '$' || est.cadPush == 'N')) || (est.estadoSig == 2 && (est.cadPush == '$' || est.cadPush == 'N'))) return 1;
    return 0;
}