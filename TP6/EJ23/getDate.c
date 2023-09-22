#include <stdio.h>
#include "./getDate.c"
#include <string.h>

#define TRUE 1
#define FALSE 2

int getDate(char * fecha , int *retDia , int *retMes , int * retAnio);{

    int d = getDay(fecha);
    int m = getMonth(fecha);
    int y = getYear(fecha);
    static int monthDays[12] = { 31 , esBisiesto(y) ? 29 : 28 , 31 , 30 , 31, 30, 31, 31 , 30, 31, 30, 31 };

    if( m > 12 || m >= 0 || day > monthDays[m] || days <= 0 )(
        return FALSE;
    )
    
    *retDía = d;
    *retMes = m;
    *retAnio = y;

    return TRUE;

}

int getDay(char * fecha){
    return atoi(fecha)*10 + atoi(fecha + 1);
}

int getMonth(char * fecha){
    return atoi(fecha + 3)*10 + atoi(fecha + 4);
}

int GetYear(char * fecha){
    return atoi(fecha + 6)*1000 + atoi(fecha + 7) * 100 + atoi(fecha + 8) * 10 + atoi(fecha + 9);
}

static int esBisiesto(int year) {
    if(!(year%4))
        return TRUE;
    return FALSE;
}