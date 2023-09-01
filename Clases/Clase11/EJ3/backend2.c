#include <stdio.h>

int intersección( const int arri[], const int arrj[], int ret[], int dimi, int dimj){
    
    int aux = 0;
    
    if(dimi > 0 && dimj > 0){
        //for(int i = 0, j = 0; i < dimi && j < dimj ; arri[i] > arrj[j] ? ++j : ++i ){
        //    if(arri[i]==arrj[j]){
        //        ret[aux++]=arri[i];
        //        ++j;
        //    }            
        //}
        int i, j; 
        i=j=0;
        while( i < dimi && j < dimj){
            if(arri[i]>arrj[j])
                ++j;
            else if(arri[i]<arrj[j])
                ++i;
            else if(arri[i]==arrj[j]){
                ret[aux++]=arri[i];
                ++i;
                ++j;
            }
        }

    }

    return aux;
}