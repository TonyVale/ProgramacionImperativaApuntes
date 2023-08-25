#include <stdio.h>
#define ES 1

int sumDiv(int);

int esPrimo(int num){
  
  if(num < 0)
    num = num*(-1);
  
  int rta = ES;
  if(num < 2)
    rta = !rta;
  int div = 2;
  
  while (div*div <= num && rta){
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
  return 0;
}

int numerosAmigos(int a, int b){
  if(sumDiv(a) == sumDiv(b))
    return 1;
  return 0;
}

int sumDiv(int n){
  
  int aux = 1;
  int cont = 0;
  
  while(aux < n){
    if( !(aux%n) )
      cont += aux;
    ++aux;
  }
  return cont;
}
