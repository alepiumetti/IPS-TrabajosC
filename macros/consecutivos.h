#include <stdio.h>

#define CONSECUTIVOS(X,Y) ((X)==(Y)-1 || (X)==(Y)+1 ? 0 : 1 )

int consecutivo(void){

  int x,y = 0;

  printf("-Números consecutivos-\n");
  printf("Ingrese un número: ");
  scanf("%d",&x);
  printf("Ingrese otro número para saber si es consecutivo a %d: ",x);
  scanf("%d",&y);

  if (CONSECUTIVOS(x,y)==0){
    printf("%d y %d son consecutivos\n",x,y);
  }else{
    printf("%d y %d no son consecutivos\n",x,y);
  }

  return 0;
}