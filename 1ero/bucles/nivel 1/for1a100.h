#include <stdio.h>

int descendente1a100(void){

  int i;

  for (i=100;i<101 && i>0;i=i-1){
    printf("%i\n",i);
  }

  return 0;
}