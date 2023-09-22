#include <stdio.h>
#include "ej2Lib.h"
#include <string.h>

int main(){
    unsigned char str[] = "Hello! I´M Antonio :)";

    int ret = delNotLet(str);

    printf('%d', ret);
    printf('%s', str);

    return 0;
}