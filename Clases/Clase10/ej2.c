#include <stdio.h>
#include "./random/random/random.h"

#define DELTA 'A' - 'a';

char randLetra(void);
int read(char);

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
  return(randInt('A', 'Z'));
}

int read(char c){
  int cont = 0;
  char aux;
  while ((aux = getchar()) != '\n'){
    if ( aux == c || aux == c + )
      ++cont;
  }
  return cont;
}
