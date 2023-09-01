#include <stdio.h>

int intersección( const int arri[], const int arrj[], int ret[], int dimi, int dimj){
    
    int aux = 0;
    
    if(dimi != 0 && dimj != 0){

        for(int i = 0 ; i < dimi ; i++ ){
            for(int j = 0 ; j < dimj ; j++ ){
                if(arri[i] == arrj[j]){
                    ret[aux++]=arri[i];
                    break;
                }
            }
        }
    }
    return aux;
}