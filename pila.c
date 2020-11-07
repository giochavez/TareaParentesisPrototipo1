#include "pila.h"

int  vacia(Pila p){
    if (p.tos == -1)
        return 1;
    return 0;
}

int  llena(Pila p) {
    if (p.tos==MAX-1)
        return 1;
    return 0;
}

char tope(Pila *p) {
    if (vacia(*p)==1) {
        return '\0';
    }
    return (*p).pila[ (*p).tos ];
}

void push(Pila *p, char c) {
    if (llena(*p)==1)
        return;
    (*p).tos = (*p).tos+1;
    (*p).pila[ (*p).tos ] = c;
}

char pop(Pila *p) {
    char aux;
    if (vacia(*p)==1)
        return '\0'; // caracter null
    aux = tope(p);
    (*p).tos = (*p).tos-1;
    return aux;
}

