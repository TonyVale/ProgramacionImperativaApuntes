#include <stdio.h>
#include <ctype.h>

int main(){

  int aux;
 
  
  while(  (aux = getchar()) != '\n' ){
    if(! isspace(aux) ){
      putchar(toupper(aux));
    } 
  }

  return 0;
}
