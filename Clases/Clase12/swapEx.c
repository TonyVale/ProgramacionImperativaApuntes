#include <stdio.h>

void swap(int *a , int *b);

int main(){
    
    int a = 3, b=5;

    int *pf = NULL;

    swap(&a , &b);

    printf("%d , %d \n" , a , b);
}

void swap(int *a, int *b){
    
    int aux=*a;
    *a=*b;
    *b=aux;

}