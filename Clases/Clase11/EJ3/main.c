#include <stdio.h>
#include "backend.h"

int main(){
    int arr1[5] = { 2 , 3 , 5 , 6 , 0};
    int arr2[3] = { 0 , 5, 2};
    int ret[10] = {0};

    int aux = intersección(arr1, arr2, ret, 5, 3);

    for(int i = 0; i<aux ; i++){
        printf("%d \n",ret[i]);
    }
}