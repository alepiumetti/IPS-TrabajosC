/*
Reciba tres enteros positivos n, p y m, asegurándose que 

n<m
genere la salida n, n+p, n+2.p, n+3.p, .... k (k<=m y es de la forma n+NRO.p)
Ejemplo n=2, p=3, m=10, debe generarse: 2, 5, 8
Ejemplo n=1, p=4, m=21, debe generarse 1,5,9,13,17,21

*/

#include <stdio.h>

int tresNros(void){

  int n,p,m;
  int k,i=0;

  printf("- Tres enteros positivos -\n");
  printf("Ingrese un número: ");
  scanf("%d",&n);
  while (n<=0){
    printf("Ingresó un número inválido\nIngrese un número positivo: ");
    scanf("%d",&n);
  }
  printf("Ingrese otro número que sea mayor a %d: ",n);
  scanf("%d",&m);
  while (n>=m){
    printf("Error\nEl número ingresado es menor a %d\nIngrese otro número mayor a %d: ",n,n);
    scanf("%d",&m);
  }

  printf("Ingrese otro número más: ");
  scanf("%d",&p);

  do{
    k = n + (i * p) ;
    printf("%d + ( %d x %d ) = %d\n",n,i,p,k);
    i++;
  }while(k<m);



  return 0;
}