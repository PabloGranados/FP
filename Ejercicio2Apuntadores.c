#include <stdio.h>
#include <stdlib.h>

int main(){
    char *str;
    int n = 0;
    str = (char*)malloc(sizeof(char)*50);

    printf("Ingrese la cadena de caracteres: \n");
    fgets(str, 100, stdin);

    printf("Ingrese el carácter que quiere encontrar: \n");
    scanf("%c", &car);

    for (int i = 0; i < 100; i++){       
        if (*(c+i) == car){
            n++;
        }
    }
    printf("El caracter %d se encuentra en la cadena %d veces\n", car, n);

    return 0;
}   