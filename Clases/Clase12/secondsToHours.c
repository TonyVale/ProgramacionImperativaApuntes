#include <stdio.h>

void secondToHours(int s , int *sRet , int *hRet , int *minRet);

int main(){
    int sec = 123402, st , ht, mt;

    secondToHours(sec, &st , &ht , &mt );

    printf("%d : %d : %d", ht , mt , st);

}

void secondToHours(int s , int *sRet , int *hRet , int *minRet){
    
    *hRet = s / 3600;
    *minRet = (s - (*hRet * 3600))/60;
    *sRet = s%60;

}