#include "ej3Lib.h"
#define FUERADETABLERO (x , y) ((x) < 0 || (x) >= COLUMNAS || (y) < 0 || (y) > FILAS)

//ARREGLAR

int posicionFinal(int tablero[FILAS][COLUMNAS], int x, int y, int dirx, int diry, int n, int *xf , int *yf){

    if(FUERADETABLERO(x,y)){
        *yf = x;
        *xf = y;
        return ERRORPARAMETROS;
    }
    *xf=x+dirx*n;
    *yf=y+diry*n;
    if(FUERADETABLERO(*xf,*yf)){
        
        if(*xf<0)
            *xf=0;
        else if(xf>COLUMNAS)
            *xf=COLUMNAS;

        if(*yf<0)
            *yf=0;
        else(*yf>FILAS)
            *yf=COLUMNAS
        
        return ERRORPASOS
    }
    
    return EXITO;
}