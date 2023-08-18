#include <stdio.h>
#include "getnum.h"

int main(void){
  
  float num=getfloat("");
  int aux, suma;
  suma=aux=0;

  do{
    
    int entero = num;
    num -= entero;
    num+10;
    aux = (int)num;
    suma += aux;
    
  }while("%d \n", suma)
}
