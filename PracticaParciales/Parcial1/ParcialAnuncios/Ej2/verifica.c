#include <stdio.h>
#include "verifica.h"

static int sumCuadrante(const int mtr[][N] , int col, int fila);
static int checkRangeAndRep(const int mtr[][N] , int col, int fila);

int verifica(const int mtr[][N]){

    int aux = 0;
    if( N%DIM ){
        return ERROR;
    }

    for(int i = 0, j=0; i < N ; j+=DIM){
        int aux2 =  checkRangeAndRep( mtr , j , i);
        if(j >= N){
            j=0;
            i+=DIM;
        }else if(i == 0 && j==0){
            aux = checkRangeAndRep( mtr , j , i);
            if(aux==0)
                return 0;
        }else if(aux != aux2){
            return 0;
        }
    }

    return 1;

}

static int checkRangeAndRep(const int mtr[][N], int col , int fila){
    
    char apVec[DIM*N] = {0};

    int sum = 0;

    for(int i=fila, j= col; i < fila+DIM ; j++){
        if(j >= col+DIM){
            j=col;
            i++;
        }else if(mtr[i][j] > DIM*N || mtr[i][j] < 1){
            return 0;
        }else if(apVec[mtr[i][j]]){
            return 0;
        }else{
            apVec[mtr[i][j]] = 1;
            sum += mtr[i][j];
        }
    }

    return sum;
}

static int sumCuadrante(const int mtr[][N] , int col, int fila){
    
    if(col > N/3 || col < 0 || fila > N/3 || fila < 0)
        return 0;
    
    int i = fila , j=col, suma = 0 ;
    
    while(i != fila+3){
        if(j == col+3){
            j=0;
            ++i;
        }else{
            suma+=mtr[i][j++];
        }
    }

    return suma;

}