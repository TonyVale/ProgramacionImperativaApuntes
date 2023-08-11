//libreries
#include <stdio.h>
#include "getnum.h"

//main
int main(){

  int var1, var2, var3, max;
  
  var1 = getint("Ingrese Número:");
  var2 = getint("Ingrese Número:");
  var3 = getint("Ingrese Número:");

  //MAL ! Repite codigo. Guardar en variable e imprimir en un print aparte.
  max = var1 > var2 ? ( var1 > var3 ? var1 : var3) : (var2 > var3 ? var2 : var3);

  printf("%d", max);
  
  return 0;
}

