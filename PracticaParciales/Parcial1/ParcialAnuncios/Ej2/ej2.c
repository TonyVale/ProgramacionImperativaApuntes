#include <stdio.h>
#include "verifica.h"

int main(){
    int mtr[N][N] = {{1 , 2 , 3 , 1 , 2 , 3},
                     {4 , 5 , 6 , 4 , 5 , 6},
                     {7 , 8 , 9 , 7 , 8 , 9},
                     {1 , 2 , 3 , 1 , 2 , 3},
                     {4 , 5 , 6 , 4 , 5 , 6},
                     {7 , 8 , 9 , 7 , 8 , 9}};

    printf("%d",verifica(mtr));

    return 0;
}