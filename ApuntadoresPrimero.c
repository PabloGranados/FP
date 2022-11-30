#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int siz, incre=0;
    char *p;
    
    printf("Ingrese la longitud de caracteres: \n");
    scanf("%d", &siz);

    p=(char*)malloc(siz*(sizeof(char))+1);
    printf("La direccion inicial del vector es: %p\n", p);
    // El tipo que usamos en el casteo 
    // debe de ser del mismo tipo de la variable 
    //que vamos a usar en el malloc

    printf("\nIngrese el texto: \n");
    scanf("%s", p);

    for(int i=0; i<=siz; i++){
        incre=incre+1;
        printf("\nDireccion: %p   Contenido de la direccion: %c\n", p, *p);
        p=p+1;
        if(*p == '\0'){
            break;
        }
    }

    printf("El tamaño de la cadena de caracteres es: %d\n", incre);
    printf("La direccion actual del vector es: %p\n", p);

    free(p);

    return 0;
}