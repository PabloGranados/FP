#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int siz, **p, c = 0;
    
    printf("Ingrese el tamaño de la matriz: \n");
    scanf("%d", &siz);

    p = (int **)malloc(siz*(sizeof(int*)));
    for(int i=0; i<siz; i++){
        *(p+i)=(int*)malloc(siz*(sizeof(int)));
        for(int j=0; j<siz; j++){
            if (i == j || (j+1) == siz-c){
                *(*(p+i)+j) = 1;
            }
            else *(*(p+i)+j) = 0;
        }
        c++;
    }

    for (int i=0; i<siz; i++){
        printf("[");
        for (int j=0; j<siz; j++){
            printf(" %d ", *(*(p+i)+j));
        }
        printf(" ]\n");
    }

    for (int i=0; i<siz; i++){
        free(p);
    }

    return 0;
}