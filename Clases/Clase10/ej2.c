#include <stdio.h>
#include "./random/random/random.h"

char randLetra(void);
int read(char)

int main(){
  randomize();
  
  char l;
  int n; 

  l = randLetra();
  n = randInt(1 , 256);
    
  printf("%c %d", l , n );

  printf("%d", read(l));
  
  return 0;
}

char randLetra(void){
  return(randInt(0, 25) + 'A');
}

int read(char c){
  int cont = 0;
  while ((char aux = getchar()) != EOF){
    if ( aux == c)
      ++cont;
  }
  return cont;
}
