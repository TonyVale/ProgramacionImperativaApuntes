#include <stdio.h>
#define TRUE 1
#define FALSE 0

static int esBisiesto(int year);

int unDiaMas(int *day , int *month , int *year){
    
    int monthDays[12] = { 31 , esBisiesto(*year) ? 29 : 28 , 31 , 30 , 31, 30, 31, 31 , 30, 31, 30, 31 };

    if(*month <= 0 || *month >=13 || *day <= 0 || *day > monthDays[*month-1] ){
        return FALSE;
    }else{
        if(*day == monthDays[*month-1]){
            *day = 1;
            if( *month == 12 ){
                ++*year;
                *month=1;
            }
        }else ++*day;
        return TRUE;
    }
}

static int esBisiesto(int year) {
    if(!(year%4))
        return TRUE;
    return FALSE;
}