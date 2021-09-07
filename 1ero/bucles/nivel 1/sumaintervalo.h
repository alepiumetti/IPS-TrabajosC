#include <stdio.h>

int sumaIntervalo(void){

  int num1,num2,sumatoria= 0;
  int indice;

  printf("-Suma entre intervalo de números-\n");
  printf("Ingrese 1 número: ");
  scanf("%i",&num1);
  printf("Ingrese otro número: ");
  scanf("%i",&num2);
  if (num1>num2){
    for (indice=num2;indice<=num1;indice=indice+1){
      sumatoria=sumatoria+indice;
    }
    printf("La sumatoria de los números del intervalos de %i a %i es %i.\n",num2,num1,sumatoria);
  }else if(num1==num2){
    sumatoria=num1+num2;
    printf("La suma de %i más %i es %i.\n",num1,num2,sumatoria);
  }else{
    for (indice=num1;indice<=num2;indice=indice+1){
      sumatoria=sumatoria+indice;      
    }
    printf("La sumatoria de los números del intervalos de %i a %i es %i.\n",num1,num2,sumatoria);
  }


  return 0;
}