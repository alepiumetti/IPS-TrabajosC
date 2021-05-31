#include <stdio.h>

int patronAsteriscos(void){
    int i,j;

    for (i=0;i<5;i++){
      for (j=0;j<=i;j++){
        printf("*");
      }
      printf("\n");
    };

  return 0;
}

int patronMas(void){

  int i,j;

  for (i=0;i<5;i++){
    for (j=0;j<5;j++){
      printf("+");
    }
    printf("\n");
  };

  return 0;
}

int patronPesos(void){

  int j,i;

  for (i=5;i>0;i--){
    for (j=i;j>0;j--){
      printf("$");
    }
    printf("\n");
  };

  return 0;
}

patronPuntoArroba(void){
  int i,j;

  for (i=0;i<4;i++){
    if (i%2==0){
      for(j=0;j<7;j++){
        if (j%2==0){
          printf("@");
        }else{
          printf(".");
        }
      }
      printf("\n");
    }else{
      for(j=0;j<7;j++){
        if (j%2==0){
          printf(".");
        }else{
          printf("@");
        }
      }
      printf("\n");
    }
  }
  return 0;
}

int imagenes(void){

  int selector;

  printf("- Creación de patrones con diferentes caracteres -\n");
  printf("1- Mostrar patron de asteriscos\n");
  printf("2- Mostrar patron de +\n");
  printf("3- Mostrar patron de $\n");
  printf("4- Mostrar patron de @ y .\n");
  printf("Ingrese una opción:");
  scanf("%d",&selector);

  switch(selector){
    case 1:
      patronAsteriscos();
      break;
    case 2:
      patronMas();
      break;
    case 3:
      patronPesos();
      break;
    case 4:
      patronPuntoArroba();
      break;
  }

return 0;


}