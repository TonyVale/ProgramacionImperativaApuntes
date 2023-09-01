#include <stdio.h>
#include "./backend.h"

int main(){

    int TestArray[5] = { 0 , 2 , 9 , 2 , 1};
    int retArray[5] ;
    int ret = dondeEsta(TestArray , 5 , retArray , 2);

    printf("%d \n", ret);
    for(int i = 0 ; i < ret ; i++)
        printf("%d \n", TestArray[i]);
}