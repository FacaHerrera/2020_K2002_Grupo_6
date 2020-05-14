#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
void suprimirEspacios(char*);
void calcularLugarError(int,char*);
int len(char*);


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
    int condicion = 1, i = 0, x = 0, estadoActual = 0, error=0;
    char c, cima;
    struct estado est;
    Pila pila = NULL;
    push(&pila,'$');
    struct estado tablaTransicion[4][2][6] = {{{{3,'B'},{1,'S'},{3,'C'},{0,'R'},{3,'E'},{3,'A'}},{{3,'B'},{1,'S'},{3,'D'},{0,'R'},{3,'E'},{3,'A'}}},
                                              {{{1,'S'},{1,'S'},{0,'S'},{3,'F'},{3,'E'},{3,'A'}},{{1,'S'},{1,'S'},{0,'S'},{3,'F'},{2,'N'},{3,'A'}}},
                                              {{{3,'G'},{3,'G'},{0,'S'},{3,'F'},{3,'E'},{3,'A'}},{{3,'G'},{3,'G'},{0,'S'},{3,'F'},{2,'N'},{3,'A'}}},
                                              {{{3,'I'},{3,'I'},{3,'I'},{3,'I'},{3,'I'},{3,'I'}},{{3,'I'},{3,'I'},{3,'I'},{3,'I'},{3,'I'},{3,'I'}}}};
    while(condicion == 1)
    {
        printf("Escriba la expresion: \n");
        fflush(stdin);
        scanf("%49[^\n]",&expresion);
        suprimirEspacios(expresion);
        i = 0;
        estadoActual = 0;
        while(expresion[i] != '\0')
        {
            c = expresion[i];
            cima = pop(&pila);
            est = tablaTransicion[estadoActual][determinarCima(cima)][determinarColumna(c)];
            if(est.estadoSig == 3)
            {
                estadoActual = 3;
                calcularLugarError(i,expresion);
                if(est.cadPush == 'A')
                {
                    printf("%s","Caracter no reconocido.");
                }
                if(est.cadPush == 'B')
                {
                    printf("%s","No se puede empezar un numero con '0'.");
                }
                if(est.cadPush == 'C')
                {
                    printf("%s","Se espera un numero o un '('.");
                }
                if(est.cadPush == 'D')
                {
                    printf("%s","Se esperaba un numero despues de '('.");
                }
                if(est.cadPush == 'E')
                {
                    printf("%s","Falta '('.");
                }
                if(est.cadPush == 'F')
                {
                    printf("%s","Se espera una operacion antes de '('.");
                }
                if(est.cadPush == 'G')
                {
                    printf("%s","Se espera una operacion despues de ')'.");
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
                if(est.cadPush == 'S')
                {
                    push(&pila, cima);
                }
            }
            i++;
        }
        if(estadoActual != 3)
        {
            printf("La expresion es correcta\n");
        }
        printf("\nSi quiere escribir otra expresion oprima 1, sino 0: ");
        fflush(stdin);
        scanf("%d",&condicion);
    }
}

int determinarColumna(char c)
{
        if(c=='0') return 0;
        if(c>='1' && c<='9') return 1;
        if(c == '+' || c == '-' || c == '*' || c == '/') return 2;
        if(c == '(') return 3;
        if(c == ')') return 4;
        if(c<40 || c == 44 || c == 46 || c>57) return 5;
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

void suprimirEspacios(char *expresion){
	int len = 0, lenAux = 0;
	char auxiliar[50];
	while(expresion[len] != '\0'){
		if (expresion[len] != ' '){
			auxiliar[lenAux] = expresion[len];
			lenAux++;
		} 
		len++;	
	}
	auxiliar[lenAux] = '\0';
	strcpy(expresion, auxiliar);
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