#include <stdio.h>
#include <stdlib.h>


int ingresoAsterisco(void){

  int indice,num;

  printf("- Cantidad de asteriscos ingresados- \n");

  printf("Ingrese un número entre 1 y 15:\n");
  scanf("%d",&num);

  while(num>15 || num<1){
    printf("Ingresó un número incorrecto.\n Vuelva a ingresar un número entre 1 y 15: ");
    scanf("%d",&num);
  }

  for(indice=1;indice<=num;indice++){
    printf("*");
  }
  printf("\n");

  return 0;
}