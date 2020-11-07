#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#define MAX 1024

typedef struct {
    char pila[MAX];
    int tos;
} Pila;

int  vacia(Pila p); // 0 no esta vacia 1 si esta vacia
int  llena(Pila p); // 0 no esta llena 1 si esta llena
void push(Pila *p, char c);
char pop(Pila *p);
char tope(Pila *p);

#endif // PILA_H_INCLUDED
