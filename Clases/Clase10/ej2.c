#include <stdio.h>
#include "./random/random/random.h"

char randLetra(void);

int main(){
  randomize();
  printf("%c %d", 'A' + 26 , randInt(1 , 256));
  return 0;
}

char randLetra(void){
  return(randInt(0, 26) + 'A');
}
