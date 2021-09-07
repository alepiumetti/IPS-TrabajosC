#include <stdio.h>

int multiplicacionIntervalo(void){

  int num1,num2= 0;
  int indice;
  int producto=1;

  printf("-Multiplicación entre intervalo de números-\n");
  printf("Ingrese 1 número: ");
  scanf("%i",&num1);
  printf("Ingrese otro número: ");
  scanf("%i",&num2);
  if (num1>num2){
    for (indice=num2;indice<=num1;indice=indice+1){
      producto=producto*indice;
    }
    printf("La multiplicación de los números del intervalos de %i a %i es %i.\n",num2,num1,producto);
  }else if(num1==num2){
    producto=num1*num2;
    printf("La multiplicación de %i por %i es %i.\n",num1,num2,producto);
  }else{
    for (indice=num1;indice<=num2;indice=indice+1){
      producto=producto*indice;      
    }
    printf("La multiplicación de los números del intervalos de %i a %i es %i.\n",num1,num2,producto);
  }


  return 0;
}