/*
Permita ingresar una matriz cuadrada 4x4 y luego la muestre por pantalla.
*/

#include <stdio.h>

int matriz(void){
  int y,x;
  int matriz[4][4];

  printf("-Matriz 4x4-\n");

  for (x=0;x<4;x++){
    for (y=0;y<4;y++){
      printf("Ingrese un número: ");
      scanf("%d",&matriz[x][y]);
    }
  }

  for (int x=0;x <4;x++){
    for (int y=0;y<4;y++){
      printf("%d,",matriz[x][y]);
    }
    printf("\n");
  }


  return 0;
}