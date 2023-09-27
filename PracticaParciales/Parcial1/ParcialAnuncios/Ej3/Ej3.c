#include <stdio.h>
#include "wordle.h"

int main(){

    char usrAns[FILS][COLS] = {{'F' , 'A' , 'R' , 'O' , 'L'},
                               {'S' , 'A' , 'C' , 'O' , 'S'},
                               {'R' , 'A' , 'T' , 'O' , 'S'},
                               {'R' , 'O' , 's' , 'A' , 'S'},
                               {'C' , 'O' , 'S' , 'A' , 'S'},
                               {'T' , 'E' , 'C' , 'L' , 'A'}};
    
    char userRes[FILS][COLS] = {0};
    
    char word[COLS] = {'R', 'O' , 's' , 'A' , 'S'};

    int rta = wordle(word , usrAns , 6 , userRes);

    return 0;
}