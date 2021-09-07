#include <stdio.h>

int factorial (void){

  int indice,i;
  int acumulador = 1;

  printf("- Factorial de un número -\n");

  printf("Ingrese un número: ");
  scanf("%d",&indice);
  i=indice;
  for (indice;indice>0;indice--){
    acumulador=acumulador*indice;
  }
  printf("!%d es: %d\n",i,acumulador);


  return 0;
}