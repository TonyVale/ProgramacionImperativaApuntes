#include <stdio.h>
#include <ctype.h>

int main(){

  int aux;
  aux = getchar();
  
  while( aux != EOF ){
    if(! isspace(aux) ){
      putchar(toupper(aux));
    } 
    aux = getchar();
  }

  return 0;
}
