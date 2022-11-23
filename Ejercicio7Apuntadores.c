#include <stdio.h>
#include <stdlib.h>

int main(){
    int fil, col;
    char **p, car = '*';
    char chfil = fil+'0';
    printf("Ingresa el numero de colmunas y filas: \n");
    scanf("%d", &fil);
    col = fil;
    printf("Caracter de relleno: ");
    scanf("%s", &car);
    p = (char **)malloc(fil*(sizeof(char*)));
    for (int i = 0; i < fil; i++){
        chfil = i+'0';
        p[i] = (char *)malloc(col*(sizeof(char)));
        for (int j = 0; j < col; j++){
            if (i == j){
                p[i][j] = chfil;
            }
            else p[i][j] = car;
        }
    }

    for (int i = 0; i < fil; i++){
        printf("[");
        for (int j = 0; j < col; j++){
            printf(" %c ", p[i][j]);
        }
        printf("]\n");
    }

    for (int i = 0; i < fil; i++){ 
        free(p[i]);
    }
    
    return 0;
}
