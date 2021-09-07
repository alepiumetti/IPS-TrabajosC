#include <stdio.h>
#include <stdbool.h>

int nroPrimo(void){

  int nro,indice;
  bool primo=true;

  printf("- Saber si un número es primo -\n");
  printf("Ingrese un número mayor a cero: ");
  scanf("%i",&nro);
  while (nro <= 0 ){
    printf("Número incorrecto\n");
    printf("Ingrese un número mayor a cero: ");
    scanf("%i",&nro);
  }
  indice = nro;

  while(indice>1 && primo==true ){
    if (nro%indice == 0 && indice!=nro){
       if (indice != 1){
        primo = false;
       }
    }    
    indice--;
  }

  if(primo){
    printf("%i es un número primo.\n",nro);
  }else{
    printf("%i no es un número primo.\n",nro);
  }



  return 0;
}