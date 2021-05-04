#include <stdio.h>

#define DIVISIBLE(X,Y) ((X)%(Y)==0?0:1)


int divisible(void){

  int x,y=0;

  printf("Ingrese un número:");
  scanf("%d",&x);
  printf("Ingrese un número para sabér si %d es divisible:",x);
  scanf("%d",&y);
  if (DIVISIBLE(x,y) == 0){
    printf("%d es divisible por %d\n",x,y);
    }else{
      printf("%d no es divisible por %d\n",x,y);
    }

  return 0;
}
