//libreries
#include <stdio.h>
#include "getnum.h"

//main
int main(){

  int var1, var2, var3;
  
  var1 = getint("Ingrese Número:");
  var2 = getint("Ingrese Número:");
  var3 = getint("Ingrese Número:");

  var1 > var2 ? ( var1 > var3 ? printf("%d", var1) : printf("%d", var3)) : (var2 > var3 ? printf("%d",var2) : printf("%d", var3));
  
  return 0;
}

