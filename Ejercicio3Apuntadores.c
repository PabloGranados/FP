#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int *vtr;
    int ncol = 0;
    srand(time(NULL));

    printf("Ingrese el tamaño de su vector: ");
    scanf("%d", &ncol);

    vtr = (int*)malloc(ncol*sizeof(int));
    for (int i = 0; i < ncol; i++){
        *(vtr+i) = rand()%11;
    }
    
    printf("[");
    for (int i = 0; i < ncol; i++){
        printf(" %d ", *(vtr+i));
    }
    printf("]\n");
    free(vtr);

    return 0;
}