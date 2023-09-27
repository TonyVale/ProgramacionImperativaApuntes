#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "ej3Lib.h"



int main(){
    int tablero[FILAS][COLS]={0};
    int xi, yi;
    int xf, yf;
    int n;
    int dirx, diry;
	xi = yi = 0;
	dirx = diry = 1;
	n = 4;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf)==EXITO);
    assert(xf==4 && yf==4);
    assert(tablero[xf][yf]=='B');
	
	xi = yi = 0;
	dirx = -1; 
	diry = 0;
	n = 2;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf)==ERRORPASOS);
    assert(xf==0 && yf==0);
    assert(tablero[xf][yf]=='B');
    
	xi = yi = 2;
	dirx = -1; 
	diry = 0;
	n = 2;
	assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf)==EXITO);
    assert(xf==0 && yf==2);
    assert(tablero[xf][yf]=='B');
    
	xi = -1;
	dirx = -1;
	yi = 0;
	diry = 0;
	n = 2;
	assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf)==ERRORPARAMETROS);
    
	xi = yi = 3;
    dirx = diry = 1;
    n = 3;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf) == EXITO);
    assert(xf == 6 && yf == 6);
	assert(tablero[xf][yf]=='B');

    dirx = 0;
    diry = 1;
    n = 4;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf) == EXITO);
    assert(xf == 3 && yf == 7);
	assert(tablero[xf][yf]=='B');

    n = 5;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf) == ERRORPASOS);
	assert(tablero[xf][yf]=='B');
	
    dirx = diry = -1;
    n = 20;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf) == ERRORPASOS);
	assert(tablero[xf][yf]=='B');
	
    dirx = diry = 0;
    n = 3;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf) == ERRORPARAMETROS);

    dirx = diry = 2;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf) == ERRORPARAMETROS);
	
    dirx = -1;
    diry = -2;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf) == ERRORPARAMETROS);

    dirx = 0;
    diry = -1;
    n = -2;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf) == ERRORPARAMETROS);

    xi = yi = -1;
    n = 1;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf) == ERRORPARAMETROS);

    xi = yi = 20;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf) == ERRORPARAMETROS);

    xi = yi = 0;
    assert(posicionFinal(tablero, xi, yi, dirx, diry, n, &xf, &yf) == ERRORPASOS);
	assert(tablero[xf][yf]=='B');
	
    printf("OK!");
    return EXIT_SUCCESS;

}