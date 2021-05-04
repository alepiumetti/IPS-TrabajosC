#include <stdio.h>

#define ENTRE_0_100(X) ((X)>=0 && (X)<=100?0:1)

int entre0_100(void){

  int x=0;

  printf("-Entre 0 y 100-\n");
  printf("Ingrese un número:");
  scanf("%d",&x);
  if (ENTRE_0_100(x)==0){
    printf("%d está entre 0 y 100\n",x);
  }else{
    printf("%d no está entre 0 y 100\n",x);
  }

  return 0;

}