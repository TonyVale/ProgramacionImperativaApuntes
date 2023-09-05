#include <stdio.h>

int uni( const int arri[] , const int arrj[] , int ret[] );

int main(){
    int v1[4] = {1,2,3,-1};
    int v2[4] = {2,3,4,-1};
    int ret[10] = {0};
    
    uni(v1 , v2 , ret);
    
    return 0;
}

int uni( const int arri[] , const int arrj[] , int ret[] ){

    int i = 0 , j = 0, aux = 0;
    while(arri[i] != -1 || arrj[j] != -1 ){
        if(arri[i] > arrj[j] && arrj[j] != -1)
            ret[aux++] = arrj[j++];
        else if(arrj[j] > arri [i] && arri[i] != -1)
            ret[aux++] = arri[i++];
        else if(arrj[j] == arri[i] && arri[i] != -1 && arrj[j] != -1){
            ret[aux++] = arri[i++];
            ++j;}}
    ret[aux] = -1;
    return 0;
}