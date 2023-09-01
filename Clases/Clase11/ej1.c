#include <stdio.h>
#include "C:\Users\antov\OneDrive\Escritorio\ITBA\PI\ProgramacionImperativaApuntes\lib\random\random\random.h"

void shuffle( unsigned int array[] , unsigned int dim);

int main(){
    
    randomize();
    int TestArray[5] = { 1 , 2 , 3, 4, 5 };
    shuffle(TestArray, 5 );
    
    for(int i = 0 ; i < 5 ; i++)
        printf("%d\n", TestArray[i]);

}

void shuffle( unsigned int array[] , unsigned int dim){
    
    if (dim >= 0){

        int aux, idx;
        for(int i=0 ; i < dim ; i++){
            
            idx = randInt(0, dim-1);
            aux = array[idx];
            array[idx] = array[i];
            array[i] = aux;
        
        }
    }
}