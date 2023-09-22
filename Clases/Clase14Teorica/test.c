#include <stdio.h>

int main(){

    int i = 0;
    int * a = &i;

    printf("%n \n" , a);
    printf("%d \n", *a);

    *a++;

    printf("%n \n" , a);
    printf("%d \n", *a);

}