#include <stdio.h>

int suma1a100impar(void){

  int indice;
  int sumatoria = 0;

  for (indice=0;indice<101;indice=indice+1){
    if(indice%2!=0){
      sumatoria=sumatoria+indice;
    }
  }
  printf("La suma de los números impares del 1 al 100 es %i\n",sumatoria);

  return 0;
}