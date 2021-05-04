#include <stdio.h>


#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int nroMax(void) {

  int x,y = 0;

  printf("Ingrese 2 números:\n");
  scanf("%d",&x);
  scanf("%d",&y);

  int max = MAX(x, y);

  printf("El máximo es: %d ",max);
;

  return 0;
}