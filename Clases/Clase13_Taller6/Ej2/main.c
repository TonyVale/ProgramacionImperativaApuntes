#include <stdio.h>
#include "solucionesCuadraticas.h"

int main(){

    int a = 1 , b= -2 , c=-4;
    float r1 , r2;

    if(solucionesCuadraticas( a , b , c , &r1 , &r2))
        printf("%f , %f " , r1  , r2);
    else
        printf("error");

    return 0; 
}