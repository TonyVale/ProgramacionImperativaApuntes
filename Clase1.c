//C es un lenguaje compilado
//librerías

#include <stdio.h>
#include "Clase1Lib.h"

//Function Examples
//Functions before main. If main is first, the function will by defined as "int function (int a )" so i will have warning and lost data if the original function isn´t like that. 
//Puedo evitar el error, declarando la función antes del main

double dobleFunction(double a);

int intFunction(int a){
  return a;
}

//main function

int main(void){

  int a =  intFunction(2)
  
  printf("HelloWorld %d \n", a );
  return 0;
}

double doubleFunction(double a){
  ...
}
