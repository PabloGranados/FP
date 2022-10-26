#include <stdio.h>
#include <stdlib.h>

//El codigo anterior pero ahora con funciones piteras
//Caso 1. 6 funciones- 3 llenados y 3 mostrados para los 3 tipos de ciclos (Programa 1)
//-llenarFOR
//-mostrarFOR

//-llenarWHILE
//-mostrarWHILE

//-llenarDOWHILE
//-mostrarDOWHILE
//Caso 2. 

//García García Aram Jesua 1CV2

int main(){
    
    int menu, mll;
    int i=1, p=1, q=1, r=1;
    int array[2][2][2][2][2];
    int j, k, l, m, n;
    int valordimen5;

    do{
        printf("\n--------------------------------------");
        printf("\nArreglo de 5 dimensiones");
        printf("\nSelecciona el tipo de ciclo a usar: ");
        printf("\n1. Ciclo for");
        printf("\n2. Ciclo while");
        printf("\n3. Ciclo do-while");
        printf("\n4. Salir del programa\n");
        scanf("%d", &menu);

        switch (menu){
            case 1:
                do{
                    printf("\nOperaciones con el arreglo con el Ciclo FOR");
                    printf("\nSelecciona el tipo de operación a ejecutar: ");
                    printf("\n1. Llenado del arreglo");
                    printf("\n2. Mostrar el arreglo");
                    printf("\n3. Salir del programa");
                    scanf("%d", &mll);
                    if(mll == 1){
                        for(j=0; j<2; j++){
                            for (k=0; k<2; k++){
                                for (l=0; l<2; l++){
                                    for (m=0; m<2; m++){
                                        for (n=0; n<2; n++){
                                            printf("Introduzca el valor: ");
                                            printf("\n[ %d ][ %d ][ %d ][ %d ][ %d ] = ", j,k,l,m,n);
                                            scanf("%d", &valordimen5);
                                            array[j][k][l][m][n] = valordimen5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else if(mll == 2){
                        printf("Arreglo: ");
                        for(j=0; j<2; j++){
                            for (k=0; k<2; k++){
                                for (l=0; l<2; l++){
                                    for (m=0; m<2; m++){
                                        printf("\n");
                                        for (n=0; n<2; n++){
                                            printf("[ %d ][ %d ][ %d ][ %d ][ %d ] = %d", j,k,l,m,n, array[j][k][l][m][n]);
                                            printf("\n");
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else if(mll == 3){
                        p=0;
                    }
                    else{
                        printf("\nNo seas macaco, y pon bien la opción entre el 1 y el 3\n");
                    }
                }while(p == 1);
            break;
            case 2:
                do{
                    printf("\nOperaciones con el arreglo con el Ciclo WHILE");
                    printf("\nSelecciona el tipo de operación a ejecutar: ");
                    printf("\n1. Llenado del arreglo");
                    printf("\n2. Mostrar el arreglo");
                    printf("\n3. Salir del programa");
                    scanf("\n %d", &mll);
                    if(mll == 1){
                        while(j<2){
                            while(k<2){
                                while(l<2){
                                    while(m<2){
                                        printf("\n");
                                        while(n<2){
                                            printf("Introduzca el valor: ");
                                            printf("\n[ %d ][ %d ][ %d ][ %d ][ %d ] = ", j,k,l,m,n);
                                            scanf("%d", &valordimen5);
                                            array[j][k][l][m][n] = valordimen5;
                                            n++;
                                        } 
                                        n=0;
                                        m++;
                                    }  
                                    m=0;
                                    l++;
                                }
                                l=0;
                                k++;
                            }
                            k=0;
                            j++;
                        }
                        j=0;
                    }
                    else if(mll == 2){
                        printf("Arreglo: ");
                        while(j<2){
                            while(k<2){
                                while(l<2){
                                    while(m<2){
                                        printf("\n");
                                        while(n<2){
                                            printf("[ %d ][ %d ][ %d ][ %d ][ %d ] = %d", j,k,l,m,n, array[j][k][l][m][n]);
                                            printf("\n");
                                            n++;
                                        }
                                        n=0;
                                        m++;
                                    }
                                    m=0;
                                    l++;
                                }
                                l=0;
                                k++;
                            }
                            k=0;
                            j++;
                        }
                        j=0;
                    }
                    else if(mll == 3){
                        q=0;
                    }
                    else{
                        printf("\nNo seas macaco, y pon bien la opción entre el 1 y el 3\n");
                    }
                }while(q == 1);
            break;
            case 3:
                do{
                    printf("\nOperaciones con el arreglo con el Ciclo DO-WHILE");
                    printf("\nSelecciona el tipo de operación a ejecutar: ");
                    printf("\n1. Llenado del arreglo");
                    printf("\n2. Mostrar el arreglo");
                    printf("\n3. Salir del programa");
                    scanf("\n %d", &mll);
                    if(mll == 1){
                        do{
                            do{
                                do{
                                    do{
                                        printf("\n");
                                        do{
                                            printf("Introduzca el valor: ");
                                            printf("\n[ %d ][ %d ][ %d ][ %d ][ %d ] = ", j,k,l,m,n);
                                            scanf("%d", &valordimen5);
                                            array[j][k][l][m][n] = valordimen5;
                                            n++;
                                        } while(n<2);
                                        n=0;
                                        m++;
                                    } while(m<2); 
                                    m=0;
                                    l++;
                                } while(l<2);
                                l=0;
                                k++;
                            }while(k<2);
                            k=0;
                            j++;
                        }while(j<2);
                        j=0;
                    }
                    else if(mll == 2){
                        printf("Arreglo: ");
                        do{
                            do{
                                do{
                                    do{
                                        printf("\n");
                                        do{
                                            printf("[ %d ][ %d ][ %d ][ %d ][ %d ] = %d", j,k,l,m,n, array[j][k][l][m][n]);
                                            printf("\n");
                                            n++;
                                        }while(n<2);
                                        n=0;
                                        m++;
                                    }while(m<2);
                                    m=0;
                                    l++;
                                }while(l<2);
                                l=0;
                                k++;
                            }while(k<2);
                            k=0;
                            j++;
                        }while(j<2);
                        j=0;
                    }
                    else if(mll == 3){
                        r=0;
                    }
                    else{
                        printf("\nNo seas macaco, y pon bien la opción entre el 1 y el 3\n");
                    }
                }while(r == 1);
            break;
            case 4:
                i=0;
            break;
            default:
                printf("\nNo seas macaco, y pon bien la opción entre el 1 y el 4\n");
            break;
        }
    } while(i == 1);  
}