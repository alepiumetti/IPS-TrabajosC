#include <stdio.h>

#define MAX(X,Y,Z) ((X)>(Y) ? ((Z)>(X) ? (Z) : (X)): ((Z)>(Y) ? (Z) : (Y)))

int maximo(void){

  int x,y,z = 0;

  printf("-Máximo entre 3-\n");
  printf("Ingrese 3 números: ");
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);
  int max = MAX(x,y,z);
  printf("El máximo es %d.\n",max);
}