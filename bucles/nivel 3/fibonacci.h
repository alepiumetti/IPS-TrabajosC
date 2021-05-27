#include <stdio.h>

int fibonacci(void){

  int indice;
  int numero,anterior = 0;
  int siguiente = 1;


  for (indice=0;indice <25 ; indice++){
    anterior = siguiente;
    siguiente = numero + siguiente;
    numero = anterior;
    printf("%d\n",siguiente);
  }

  return 0;

}