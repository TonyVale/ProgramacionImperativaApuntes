#include <stdio.h>
#define COLS 5

void modString(int TABLERO[][COLS] , char *str[], int n)


int main(){


    
    return 0;
}

void modString(int TABLERO[][COLS] , char str[] , int n){
    
    char aux[COLS] = {0};
    int i = 0; j = 0; 

    while (str[i] != 0){
        
        if((str[i]-'a' < COLS && str[i]-'a' > 0) || (str[i]-'A' < COLS && str[i]-'A' > 0)){
            if( aux[str[i]-'a'] < n){
                ++aux[str[i]-'a'];
            }
        }

        
        
        //Modularizar 
        //if(*str > 'a' && *str < 'z'){
        //    if((*str-'a') < COLS){
        //        if(aux[(*str-'a')] == n){
        //            TABLERO[n] = -1;
        //        }else{
        //            TABLERO[aux[(*(str++)-'a')]++];
        //        }
        //    }
        //}
        //
        //if(*str > 'A' && *str < 'Z'){
        //    if((*str-'A') < COLS){
        //        if(aux[(*str-'A')] == n){
        //            TABLERO[n] = -1;
        //        }else{
        //            TABLERO[aux[(*(str++)-'A')]++];
        //        }
        //    }
        //}
    }    
}