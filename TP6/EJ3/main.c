#include <stdio.h>

int MaxConDiff(const int arr[]);

int main(){

    int Tester[10] = { 22 , 100 , 90 , 39 , -100 , 43, 7, 22, -3 , 0};

    printf("%d \n", MaxConDiff(Tester));

    return 0;
}

int MaxConDiff(const int arr[]){
    int aux = 0, ret = 0;
    for(int i = 0 ; arr[i] != 0; i++){
        aux = arr[i]>arr[i+1] ? (arr[i] - arr [i+1]) : (arr[i+1] - arr[i]);
        if( aux > ret ) ret = aux;
    } 
    return ret;
}