#include <stdio.h>
#include <stdlib.h>


double calculoPromedio (int **ppa){
    float prom1, prom2, prom3, sum1, sum2, sum3;
    for(int i=0; i<10; i++){
        sum1=sum1+*(*(ppa+i)+0);
    }
    prom1 = sum1/10;
    printf("El promedio de la asignatura 1 es: %f\n",prom1);

    for(int i=0; i<10; i++){
        sum2=sum2+*(*(ppa+i)+0);
    }
    prom2 = sum2/10;
    printf("El promedio de la asignatura 2 es: %f\n",prom2);

    for(int i=0; i<10; i++){
        sum3=sum3+*(*(ppa+i)+0);
    }
    prom3 = sum3/10;
    printf("El promedio de la asignatura 3 es: %f\n",prom3);
}

int main(){
    int **ppa = NULL;
    int fil = 10, col = 3,f = 0, c = 0,calif;

    ppa = (int **)malloc(fil * sizeof(int *));
    for (int j=0; j < fil; j++){
        ppa[j] = (int *)malloc(col * sizeof(int));  
    }

    for(int k=0; k<fil; k++){
        for (c = 0; c < col; c++){
                printf("Asignatura %d:\n",c+1);
                printf("Calificacion del alumno %d:\n",k+1);
                scanf("%d", &calif);
                    *(*(ppa+k)+c) = calif;
        }
    }

    printf("Calificaciones capturadas:\n");
    for (int l=0; l<fil; l++){
        for (c = 0; c < col; c++){
            printf("|%d|\t ",*(*(ppa+l)+c));
            printf("\n");
        }
    }
    calculoPromedio(ppa);
    for(int f=0; f<fil; f++){
        free(ppa+f);
    }

    free(ppa);
    system("pause");
    printf("\n\n");
    
    return 0;
}
