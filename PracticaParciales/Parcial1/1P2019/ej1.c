#include <stdio.h>


void resta(int arr1[] , int arr2[] , int res[] );

int main(){
    
    int v1[] = {1, 9 , 2 , 6, 3, 6, -1};
    int v2[] = {3, 2, 8, 2, -1};
    int res[sizeof(v1)/sizeof(v1[0])] = {0};

    resta(v1, v2, res);

    return 0;
}

void resta(int arr1[] , int arr2[] , int res[] ){
    
    int i = 0, k = 0, j = 0;

    while (arr1[i] != -1){
        if(arr1[i]==arr2[j]){
            j=0;
            ++i;
        }else if (arr2[j] == -1){
            j=0;
            res[k++] = arr1[i++];
        }else{
            ++j;   
        }
    }
}

