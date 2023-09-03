#include <stdio.h>

#define ON 1
#define OFF 0

int deleteEq(const int arr[], int dim , int ret[]);
int deleteEqOr(const int arr[], int dim , int ret[]);

int main(){
    
    int TestArr[10] = {1 , 1 , 2, 4 , 5, 6, 6, 8, 8 ,10};
    int TestRet[10] = {0};

    deleteEqOr( TestArr , 10 , TestRet);

    return 0;


}

int deleteEq(const int arr[], int dim , int ret[]){
    int retDim = 1 , flag = OFF ; 
    for(int i = 0 ; i<dim ; i++ , flag = OFF){
        for( int j = 0; j < retDim && flag == OFF; ++j)
            if (arr[i] == ret[j]) flag = ON;
        if(flag == OFF){
            ret[retDim-1] = arr[i];
            ++retDim;
        }
    }
    return retDim;
}

int deleteEqOr(const int arr[], int dim , int ret[]){
    int j = 0, i = 0; 
    while (i < dim){
        if(arr[i] == ret[j])
            ++i;
        else if(arr[i] != ret[j] && i != j)
            ret[++j] = arr[i++];
        else if(arr[i] != ret[j] && i == j)
            ret[j] = arr[i++];
    }

    return j+1;
}
    