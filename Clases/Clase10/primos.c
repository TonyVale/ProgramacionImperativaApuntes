#include <stdio.h>
#define ES 1

int esPrimo(int num){
  
  if(num < 0)
    num = num*(-1);
  
  int rta = ES;
  if(num < 2)
    rta = !rta;
  int div = 2;
  
  while (div**2 <= num && rta){
    if(num%div == 0)
      rta = !rta;
    div++;
    }
    return rta;
}

int nPrimos(int n){
  int aux = 2;
  
  while(n =! 0){
    if(esPrimo(aux)){
      printf("%d", aux);
      --n;
    }
  }
}
