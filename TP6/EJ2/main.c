#include <stdio.h>
#include "./libs/menu.h"

//Macros de operaciones
#define SIM 1
#define SUM 2
#define END 3

int main(){
    
    int selector;
    int array[4]; 

    do{

        selector = MenuInicio();
        
        switch (selector){
        case SIM:
            
            break;
        case SUM:
            
            break;
        case END:
            continue;
            break;
        default:
            printf("ingrese un valor adecuado");
            break;
    }
    
    }while(selector != END);

    printf("End");
    
    return 0;
}