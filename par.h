#include <stdio.h>


#define PAR(X) ((X)%2==0?0:1)

int nroPar(void) {

  int x = 0;
  printf("Número par?\n");
  printf("Ingrese 1 número:\n");
  scanf("%d",&x);

  int par = PAR(x);

  if (par==0){
    printf("El número %d es par",x);
  }else{
    printf("El número %d es impar",x);
  };




  return 0;
}