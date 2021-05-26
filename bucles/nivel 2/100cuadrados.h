#include <stdio.h>

/*
3. Calcule la suma de los cuadrados de los 100 primeros números enteros.
*/

int cuadradosEnteros(void){
  int indice = 1;
  int numero;
  int acumulador = 0;

  printf("- Suma de los primeros 100 nros enteros -\n");

  for (indice; indice<=100;indice++){
    acumulador = acumulador + indice;
  } 

  printf("La suma de los primeros 100 números enteros es: %d\n",acumulador);


  return 0;
}