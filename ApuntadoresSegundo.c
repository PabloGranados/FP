#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int siz, incre=0;
    char *p, car;

    printf("Ingrese la longitud de caracteres: \n");
    scanf("%d", &siz);

    p=(char*)malloc(siz*(sizeof(char))+1);

    printf("Ingrese el texto: \n");
    scanf("%s", p);

    printf("Ingrese el caracter que quiere encontrar: \n");
    scanf("%s", &car);

    for(int i=0; i<=siz; i++){
        siz++;
        if (*p == car){
            incre++;
        }
        if(*p == '\0'){
            break;
        }
        p++;
    }

    printf("El caracter %c se encuentra en la cadena %i veces\n", car, incre);

    free(p);

    return 0;
}