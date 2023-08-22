#include <stdio.h>
#include <ctype.h>

int main(){

  int aux;

  for(aux=getchar() ; aux=EOF ; aux=getchar()){
    if(!isspace(aux)){
      printf("%c", toupper(aux));
    } 
  }
}
