#include<stdio.h>
#include<stdlib.h>
struct alumnos{
    char nom[18];
    char sex;
    int edad;
};

int hombre, mujer, edadM;

int main(){
    struct alumnos *regs;
    regs=((struct alumnos*)malloc(sizeof(struct alumnos)*5));

    for(int i=0; i<5; i++){
        printf("Persona [%d] Nombre: ",i);
        scanf("%s", (regs+i)->nom);
        fflush(stdin);

        printf("Sexo: ");
        scanf("%s", &(regs + i)->sex);
        fflush(stdin);

        printf("Edad: ");
        scanf("%d", &(regs+ i)->edad);
        fflush(stdin);
    }

    for(i=0; i<=4; i++){
        if(((regs + i)->sex)=='M'){
            mujer++;
        }else{
            hom++;
        }
    }
    printf("\n El numero de mujeres es de: %d ", mujer);
    printf("\n EL numero de hombres es de: %d ", hombre);
    
    for(i=0; i<=4; i++){
        if(((regs + i) ->edad) > edadM){
            edadM = (regs + i)->edad;
        }
    }
    printf("\n La edad mayor de todos los alumnos es: %d", edadM);
    printf("\n Su informacion es: ");

    for(i=0; i<=4; i++){
        if(((regs + i)->edad)==edadM){
            printf("\n Nombre: %s",(regs + i)->nom);
            printf("\n Sexo: %c",(regs + i)->sex);
            printf("\n Edad: %d\n",(regs + i)->edad);
        }
    }

    return 0;
}