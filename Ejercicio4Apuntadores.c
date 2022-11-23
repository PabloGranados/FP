#include <stdio.h>
#include <stdlib.h>

void mayorMenor(int datos, float *pro, float *may, float *men, float *p);

int main(){
    int datos;
    float nMayor, nMenor, pro, valor, *vtr;

    printf("\nIngrese la cantidad de datos a evaluar: ");
    scanf("%d", &datos);

    vtr = (float*)malloc(datos*sizeof(float));
    printf("Ingrese los datos a calcular: \n");

    for (int i = 0; i < datos; i++){
        printf("\tPosición %d : ", i);
        scanf("%f", &valor);
        *(vtr+i) = valor;
    }

    mayorMenor(datos, &pro, &nMayor, &nMenor, vtr);
    printf("\nEl dato con valor máximo del conjunto de datos es: %.2f", nMayor);
    printf("\nEl dato con valor mínimo del conjunto de datos es: %.2f", nMenor);
    printf("\nEl promedio del conjunto de datos es: %.2f\n", pro);
    free(vtr);
    return 0;
}

void mayorMenor(int datos, float *pro, float *may, float *men, float *p){
    float datas = 0;
    *mayor = p[0];
    *menor = p[0];
    for (int i = 0; i < datos; i++){
        if (*may < *(p+i)){
            *may = *(p+i);
        }
        if (*men > *(p+i)){
            *men = *(p+i);
        }
        datas += *(p+i);
    }
    *pro = datas/datos;
}