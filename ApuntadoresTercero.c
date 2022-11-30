#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    int siz, incre=0;
    char *p;
    srand(time(NULL));

    printf("Ingrese el tamaño del vector con el que se trabajará:  \n");
    scanf("%d", &siz);

    p=(char*)malloc(siz*(sizeof(char))+1);
    printf("El vector con números enteros aleatorios es: [");

    for(int i=0; i<siz; i++){
        *(p+i) = rand()%11;
        printf(" %d ", *(p+i));
    }
    printf("]\n");
    free(p);

    return 0;
}