/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nombre[200], unaLinea[1024];
    int numLinea = 1;
    FILE *archivo;
    printf("Nombre del archivo? ");
    fgets(nombre,200,stdin);
    fflush(stdin);

    nombre[strlen(nombre)-1] = '\0';

    archivo = fopen(nombre,"rt");
    if (archivo==NULL) {
        printf("No existe el archivo [%s]\n",nombre);
        exit(1000);
    }
    while(fgets(unaLinea,1024,archivo)!=NULL) {

        unaLinea[strlen(unaLinea)-1] = '\0';
        printf("%3d: %s\n",numLinea,unaLinea);
        numLinea += 1;
    }
    fclose(archivo);
    return(0);
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"

int main()
{
    Pila unaPila;
    char texto[MAX];
    size_t k;

    printf("Inserta frase: \n");
    gets(texto);

    unaPila.tos = -1;

    for (k=0;k<strlen(texto);k++) {
        push(&unaPila, texto[k]);
    }

    while (vacia(unaPila)!=1) {
        printf("%c\n",pop(&unaPila));
    }

    return 0;
}
