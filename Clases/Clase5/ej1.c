//Libreries
#include <stdio.h>

//Main

int main(){

  //Vars
  
  unsigned char var, var1, var2, var3, var4;

  //Ask for data
  
  var = getchar();

  //Var values
  
  var1 = (var>>6) & 0x03;
  var2 = (var>>4) & 0x03;
  var3 = (var>>2) & 0x03;
  var4 = var & 0x03;

  //show in console
  
  printf("var: %b \n", var);
  printf("var1: %b \n", var1);
  printf("var2: %b \n", var2);
  printf("var3: %b \n", var3);
  printf("var4: %b \n", var4);
  
  return 0
}
