// Generar un programa que llene y muestre un arreglo de 5 dimensiones. Los valores para el llenado los va a agregar el usuario.
// El programa debe tener un menú donde el usuario puede seleccionar el tipo de ciclos a usar. //

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int menu;
    int llenado;
    int array[3][3][3][3][3];
    int i = 1;

    do
    {
        printf("\n Selecciona el ciclo que quieras usar");
        printf("\n 1.- Ciclo for");
        printf("\n 2.- Ciclo while");
        printf("\n 3.- Ciclo do-while");
        printf("\n 4.- Salir\n");
        scanf("%d", &menu);

        printf("¿Quieres llenar el arreglo o quieres mostrarlo?");
        scanf("%d", &llenado);

        switch (menu)
        {
        case 1:
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            i = 0;
            break;

        default:
            printf("\nSolo puedes poner un número del 1 al 4 pendejo");
        }
    } while (i == 1);
}