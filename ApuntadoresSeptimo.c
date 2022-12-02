#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int siz, c = 0;
    char **p, car;
    char chfil = siz+'0';

    printf("Ingrese el tamaño de la matriz: \n");
    scanf("%d", &siz);

    printf("Ingrese el caracter de relleno: ");
    scanf("%s", &car);
    p = (char **)malloc(siz*(sizeof(char*)));
    for(int i=0; i<siz; i++){
        chfil = i+'0';
        *(p+i)=(char*)malloc(siz*(sizeof(char)));
        for(int j=0; j<siz; j++){
            if (i == j){
                *(*(p+i)+j) = chfil;
            }
            else *(*(p+i)+j) = car;
        }
        c++;
    }

    for (int i=0; i<siz; i++){
        printf("[");
        for (int j=0; j<siz; j++){
            printf(" %c ", *(*(p+i)+j));
        }
        printf(" ]\n");
    }

    for (int i=0; i<siz; i++){
        free(p);
    }

    return 0;
}