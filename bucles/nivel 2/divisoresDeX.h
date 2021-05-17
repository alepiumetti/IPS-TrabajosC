#include <stdio.h>

int divisorDeX (void){

  int x,i;

  printf("- Divisor de un número -\n");
  printf("Ingrese un número:");
  scanf("%d",&x);

  printf("%d es divisible por: ",x);

  for (i=x;i>0;i--){
    if( (x%i) == 0){
      printf("%d  ",i);
    }
  }
  printf("\n");


  return 0;
}