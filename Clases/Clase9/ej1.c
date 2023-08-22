#include <stdio.h>
#include <ctype.h>

int main(){

  int aux;
 
  
  while(  (aux = getchar()) != EOF ){
    if(! isspace(aux) ){
      putchar(toupper(aux));
    } 
    aux = getchar();
  }

  return 0;
}
