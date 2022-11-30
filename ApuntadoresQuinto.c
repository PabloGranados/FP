#include <stdio.h>
#include <stdlib.h>

int main(){

    float **calif;
    calif = (float **)malloc(sizeof(float*)*3);
    for(int i=0; i<10; i++){
        *(calif+i)=(float *)malloc(sizeof(float)*10);
    }

    for(int i=0; i<3; i++){
        for (int j=0; j<10; j++){
            *(*(calif+i)+j)=calif;
        }
        
    }
    return 0;
}