#include <stdio.h>

int fibonacci(void){

  int f[25];
  int indice;
  
  f[0]=0;
  f[1]=1;

  printf("%d\n",f[0]);
  printf("%d\n",f[1]);
  for (indice=2;indice <25 ; indice++){
    f[indice]=f[indice-2]+f[indice-1];


    
    printf("%d\n",f[indice]);
  }

  return 0;

}