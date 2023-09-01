#include <stdio.h>

int dondeEsta(const int array[], int dim, int ret[], int num){
    
    int cont;
    cont = 0;

    if(dim >= 0 && array[dim-1] < num){
        for(int i = 0; i<dim ; i++){
            if(array[i] == num){
                ret[cont] = i;
                ++cont;
            }else if(array[i] > num){
                break;
            }
        }
    }

    return cont;
}