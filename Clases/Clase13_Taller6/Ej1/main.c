#include <stdio.h>
#include "unDiaMas.h"

int main(){
    int day = 28 , month = 2 , year = 2004;
    
    printf("fecha actual: %d / %d / %d \n", day, month , year);
    
    if(unDiaMas(&day, &month , &year))
        printf("fecha actual: %d / %d / %d \n", day, month , year);
    else
        printf("error");
    
    return 0;
}