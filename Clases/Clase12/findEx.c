#include <stdio.h>

#define TRUE 1
#define FALSE 0
  


int isInArray(const int arr[], int num, int dim);

int main(){
    int arr[4] = {0 ,2 ,3, 4};

    printf("%d", isInArray( arr , 3, 4, ) );

}

int isInArray(const int arr[], int num, int dim){
    for(int i = 0 ; i < dim ; ++i){
        if(arr[i]==num)
            return TRUE;
    }
    return FALSE;    
}