#include <stdio.h>
#include "ej2Lib.h"

#define MAX_MAYUS 'Z'
#define MIN_MAYUS 'A'
#define MAX_MINUS 'z'
#define MIN_MINUS 'a'

int delNotLet(unsigned char str[]){

    int k = 0;

    for(int i = 0; str[i] != '\0'; ++i ){
        if((str[i] <= MAX_MAYUS && str[i] >= MIN_MAYUS) || (str[i] <= MAX_MINUS && str[i] >= MIN_MINUS)){
            str[k++] = str[i];
        }
    }
    str[k]='\0';
    return k;
}