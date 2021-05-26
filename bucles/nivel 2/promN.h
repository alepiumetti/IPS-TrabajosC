/*
Calcule el promedio de N números, se dejarán de solicitar números hasta que se introduzca el cero.
*/

#include <stdio.h>

int promN(void){

  int numero,promedio;
  int acumuladorNumero,acumuladorIndice = 0;

  printf("- Promedio de N números -\n");
  printf("Para ver el resultado ingrese 0\n");
  printf("Ingrese números para promediar: ");
  scanf("%d",&numero);
  if (numero==0){
    printf("El promedio de 0 es 0");
  }else{
    while(numero!=0){
      acumuladorNumero = acumuladorNumero + numero;
      acumuladorIndice++;
      scanf("%d",&numero);

    };
  };

  promedio = acumuladorNumero / acumuladorIndice;
  printf("El promedio de %d por %d es %d\n",acumuladorNumero,acumuladorIndice,promedio);



  return 0;
}