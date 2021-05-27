#include <stdio.h>

int abecedario(void){

  char letraMayus = 'A';
  char letraMinus = 'a';
  char indicador;
  int i;

  printf("- Abecedario -\n");
  printf("Ingrese M para ver el abecedario en Mayusculas o m para verlo en minusculas: ");
  scanf("%c",&indicador);
  while (indicador!='m' && indicador!='M'){
    printf("Ingrese un valor válido: ");
    scanf("%c",&indicador);
  }
  if (indicador == 'M'){
    while (letraMayus<='Z'){
      printf("%c\n",letraMayus);
      letraMayus++;
    }
  }else{
    while(letraMinus<='z'){
      printf("%c\n",letraMinus);
      letraMinus++;
    }
  }
  return 0;

}