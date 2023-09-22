#include "./eliminaRepetidas.h"
void eliminaRepetidas(char *w){
    int r = 0 , i=0; 
    while (w[r]){
        if(!r || w[r-1] == w[i])
            w[i++]=w[r];
        r++;
    }
}