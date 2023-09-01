#include <stdio.h>
#include "getnum.h"

int MenuInicio(){

    int selected;

    //ask for operation
    printf("INSERTE NÚMERO DE OPERACIÓN:\n");
    printf("1: Simplificación de feacción\n");
    printf("2: Suma de fracciónes\n");
    printf("3: Simplificación de feacción\n");

    selected = getint("");

    return selected;    
    
}