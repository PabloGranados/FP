#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int siz; 
    float nummay, nummen, dato, *p, prom = 0;
    
    printf("Ingrese la CANTIDAD de datos a evaluar: \n");
    scanf("%d", &siz);

    p=(float*)malloc(siz*(sizeof(float))+1);
    printf("Ingrese los datos a evaluar: \n");
    
    for (int i=0; i<siz; i++){
        printf("\nDato %d : ", i+1);
        scanf("%f", &dato);
        *(p+i) = dato;
    }

    nummay = *(p + 0);
    nummen = *(p + 0);

    for (int i=0; i<siz; i++){
        if (*(p+i) > nummay){
            nummay = *(p+i);
        }
        if (*(p+i) < nummen){
            nummen = *(p+i);
        }
        prom += *(p+i);
    }
    prom /= siz;
    
    printf("\nEl dato con valor máximo del conjunto de datos es: %.2f", nummay);
    printf("\nEl dato con valor mínimo del conjunto de datos es: %.2f", nummen);
    printf("\nEl promedio del conjunto de datos es: %.2f\n", prom);
    
    free(p);
    return 0;
}


