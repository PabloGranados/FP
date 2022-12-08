#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int nump, nump2;
    char par;

    printf("Ingrese el número de parametros: ");
    scanf("%d", &nump);
    char **parametros;

    // Crear sección de memoria dinamica

    parametros = (char **)malloc(sizeof(char *) * nump);

    for (int i = 0; i < nump; i++)
    {
        printf("\nIngrese el tamaño del parametro %d: ", i);
        scanf("%d", &nump2);
        *(parametros + i) = (char *)malloc(nump2 * sizeof(char));
        printf("\nIngrese el dato: ");
        scanf("%s", *(parametros + i)); // El contenido tiene direcciones
        printf("\nDato [%d]: %s\n", i, *(parametros + i));
    }
    for (int i = 0; i < nump; i++)
    {
        free(*(parametros + i));
    }
}