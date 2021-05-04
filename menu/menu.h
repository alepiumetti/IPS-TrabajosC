#include <stdio.h>
#include <stdlib.h>

#include "../macros/nivel 2/max.h"
#include "../macros/nivel 1/par.h"
#include "../macros/nivel 1/divisible.h"
#include "../macros/nivel 2/entre100.h"
#include "../macros/nivel 2/consecutivos.h"
#include "../macros/nivel 3/maximo.h"

void menuText(void){
  system("clear");
printf("Menú:\n");
printf("1-Máximo entre 3 números.\n");
printf("2-Consecutivo entre 2 números.\n");
printf("3-Número entre 0 y 100.\n");
printf("4-Número divisible por otro.\n");
printf("5-Máximo entre 2 números.\n");
printf("6-Paridad de un número.\n");
printf("Para salir ingrese cualquier número.\n\n");
}

int mainMenu(void){

int selector = 0;

printf("Hola!!\n");
menuText();
printf("Ingrese un número: ");
scanf("%d",&selector);

while( selector > 0 && selector < 7 ){
  switch(selector){
    case 1:
      maximo(); 
    break;
    case 2:
      consecutivo();
    break;
    case 3:
      entre0_100(); 
    break;
    case 4:
      divisible();
    break;
    case 5:
      nroMax();
    break;
    case 6:
      nroPar();
    break;
    default:
    break;
  }
  printf("Presione una tecla para continuar...");
  getchar();
  getchar();

  menuText();
  printf("Ingrese un número: ");
  scanf("%d",&selector);
}

  printf("Chau..😘\n");
  getchar();
  getchar();

  return 0;
}