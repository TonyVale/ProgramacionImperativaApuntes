#include <stdio.h>
#include "getnum.h"

int main(){
  
  unsigned int num, aux;

  num = getint("Ingrese su numero:");
  
  aux = num <= 15 ? (num > 10 ? num + "0" : num - 10 + "A" ) : num ;
  printf("%d", aux);
  
  return 0;
}
