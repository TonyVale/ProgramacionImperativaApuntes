#include <stdio.h>

int main(){

    

    return 0;
}

int MaxConDiff(const arr[]){
    int i = 0 , aux = 0, ret = 0;
    while(arr[i] != 0){
        arr[i]>arr[i+1] ? aux = (arr[i++] - arr [i+1]) : aux = (arr[i+1] - arr[i++]);
        if( aux > ret ) ret = aux;
    } 
    return 0;
}