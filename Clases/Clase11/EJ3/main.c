#include <stdio.h>
#include "backend.h"

int main(){
    int arr1[5] = { 3 , 5 , 7 , 9 , 15 };
    int arr2[5] = { 5 , 6 , 7, 8 , 9 , };
    int ret[10] = {0};

    int aux = intersección(arr1, arr2, ret, 5, 5);

    for(int i = 0; i<aux ; i++){
        printf("%d \n",ret[i]);
    }
}