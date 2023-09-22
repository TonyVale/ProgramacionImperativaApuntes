#include <stdio.h>
#include "eliminaRepetidas.h"
#include <string.h>

int main(){
    char *palabra = "HOOOOla";
    
    printf("%s\n", palabra);
    eliminaRepetidas(palabra);
    printf("%s\n", palabra);

    return 0;
}