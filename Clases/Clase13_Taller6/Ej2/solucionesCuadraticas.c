#include <math.h>
#define OK 1
#define FAIL 0
#define ERROR -1

static int resolvente(int a, int b , int c );

int solucionesCuadraticas(int a , int b , int c , float *r1 , float *r2){
    int aux = resolvente(a, b, c);

    if(aux != ERROR){
        *r1 = (-b + sqrt(aux))/(2*a);
        *r2 = (-b - sqrt(aux))/(2*a);
        return OK;
    }
    
    return FAIL;
}

static int resolvente(int a, int b , int c){
    int aux = b*b - 4*a*c;
    if( aux >= 0)
        return aux;
    return ERROR;
}