#include <stdio.h>

int promedio(void){

  int num,indice;
  float promedio,sumatoria=0;

  printf("-Promedio de 10 números.\n");
  printf("Ingrese 10 números separandolos por saltos de linea: ");
  for (indice=1;indice<=10;indice=indice+1){
    scanf("%i",&num);
    sumatoria=sumatoria+num;
  }
  promedio=sumatoria/10;
  printf("El promedio de todos los números ingresados es: %f\n",promedio);

  return 0;
}