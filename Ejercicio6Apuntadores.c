#include <stdio.h>
#include <stdlib.h>

int main(){
    int fil = 4, col =4, c = 0;
    int **p;
    
    printf("Ingrese el valor que tendrá de tamaño la matriz: ");
    scanf("%d", &fil);
    col = fil;

    p = (int **)malloc(filas*(sizeof(int*)));

    for (int i = 0; i < fil; i++){
        p[i] = (int *)malloc(col*(sizeof(int)));
        for (int j = 0; j < col; j++){
            if (i == j || (j+1) == col-c){
                p[i][j] = 1;
            }
            else p[i][j] = 0;
        }
        c++;
    }

    for (int i = 0; i < fil; i++){
        printf("[");
        for (int j = 0; j < col; j++){
            printf(" %d ", p[i][j]);
        }
        printf(" ]\n");
    }

    for (int i = 0; i < fil; i++){
        free(p[i]);
    }
    
    return 0;
}