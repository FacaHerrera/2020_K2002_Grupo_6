#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int valor;
    struct Nodo* sig;
} Nodo;

void agregar(Nodo ** p, int v) {
    Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
    nuevo->valor = v;
    nuevo->sig = NULL;
    if(*p==NULL){
        *p = nuevo;
    }
    else{
        Nodo* aux = *p;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void imprimir(Nodo **p){
    Nodo *aux = *p;
    while(aux != NULL){
        printf("%d\n",aux->valor);
        aux = aux->sig;
    }
}

void liberar(Nodo **p){
    Nodo *prox = *p;
    while(*p != NULL){
        prox = (*p)->sig;
        free(*p);
        *p = prox;
    }
}

Nodo* buscar(Nodo **p,int v){
    Nodo* aux = *p;
    while((aux != NULL) && (aux->valor != v)){
        aux = aux->sig;        
    }
    return aux;
}

void eliminar(Nodo **p, int v){
    Nodo* aux = *p;
    Nodo* ant = NULL;
    while((aux != NULL) && (aux->valor !=v)){
        ant = aux;
        aux = aux->sig;
    }
    if(aux != NULL){
        if(ant != NULL){
            ant->sig = aux->sig;
        }
        else{
            *p = aux->sig;
        }
    }
}

void insertarOrdenado(Nodo **p, int v) {
    Nodo *nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->valor = v;
    nuevo->sig = NULL;
    Nodo *aux = *p;
    if(*p == NULL){
        agregar(&(*p),v);
    }
    else if(aux->sig == NULL){
        if(aux->valor <= v){
            agregar(&(*p),v);
        }
        else{
            nuevo->sig = *p;
            *p = nuevo;
        }
    }
    else{
        if(v <= aux->valor){
            *p = nuevo;
            nuevo->sig = aux;
        }
        else{
            while((aux->sig != NULL) && (v > aux->sig->valor)){
                aux = aux->sig;
            }
            if(aux->sig == NULL){
                aux->sig = nuevo;
            }
            else{
                nuevo->sig = aux->sig;
                aux->sig = nuevo;
            }
        }
    }
}

void buscarEInsertarOrdenado(Nodo **p, int v){
    if(buscar(&(*p),v) == 0){
        insertarOrdenado(&(*p),v);
    }
}

void push(Nodo **p, int v){
    Nodo *nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->valor = v;
    nuevo->sig = *p;
    *p = nuevo;
    
}

int pop(Nodo **p){
    Nodo *aux = *p;
    *p = aux->sig;
    int ret = aux->valor;
    free(aux);
    return ret;
}

void encolar(Nodo **p, int v){
    push(&(*p),v);
}

int desencolar(Nodo** p)
{
    Nodo *aux = *p;
    while(aux->sig->sig != NULL){
        aux = aux->sig;
    }
    Nodo *aux2 = aux->sig;
    aux->sig = NULL;
    int ret = aux2->valor;
    free(aux2);
    return ret;
}

int longitud(Nodo **p){
    int longitud = 0;
    Nodo *aux = *p;
    while(aux != NULL){
        aux = aux->sig;
        longitud++;
    }
    return longitud;
}