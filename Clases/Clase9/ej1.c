#include <stdio.h>
#include <ctype.h>

int main(){

  int aux;

  while((aux=getchar() != EOF ){
    if(! isspace(aux) ){
      printf(toupper(aux));
    } 
  }
}
