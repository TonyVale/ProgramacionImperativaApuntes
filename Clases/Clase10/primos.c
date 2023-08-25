#include <stdio.h>
#define ES 1

int esPrimo(int num){
  
  if(num < 0)
    num = num*(-1);
  
  int rta = ES;
  if(num < 2)
    rta = !rta;
  int div = 2;
  
  while (div <= sqrt(num) && rta){
    if(num%div == 0)
      rta = !rta;
    div++;
    }
    return rta;
}
