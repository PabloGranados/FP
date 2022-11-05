#include <stdio.h>
#include <stdlib.h>

int funcion(int valor1, int valor2){
    valor1=5;
    valor2=6;
    printf("\nSuma: %d\n", valor1+valor2);
    return valor1+valor2;
}

int funcion2(int *x,int *y){
    printf("\nSopadumacaco\n");
    *x=5;
    *y=6;
    printf("\nSuma: %d\n", (*x+*y));
    return (*x+*y);
}

int main(int argc, char*argv[]){
    int valor1 = 3, valor2 = 4, resultado;
    //Paso por valor
    resultado = funcion(valor1, valor2);
    printf("\nValor de valor1 = %d\n", valor1);
    printf("\nValor de valor2 = %d\n", valor2);
    printf("\nResultado = %d\n", resultado);

    //Paso por referencia
    int valor3, valor4;
    valor3 = 4;
    valor4 = 4;

    resultado = funcion2(&valor3, &valor4);
    printf("\nValor de valor3 en la funcion 2 = %d\n", valor3);
    printf("\nValor de valor4 en la funcion 2 = %d\n", valor4);
    printf("\nResultado = %d\n", resultado);
    return 0;
}