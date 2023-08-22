#include <stdio.h>
#include <ctype.h>

int main(){

  int aux;

  while( (aux=getchar()) != -1 ){
    if(! isspace(aux) ){
      putchar(toupper(aux));
    } 
  }

  return 0;
}
