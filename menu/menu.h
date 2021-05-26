#include <stdio.h>
#include <stdlib.h>


//MACROS



//IMPORTACIÓN DE EJERCICIOS DE MACROS
#include "../macros/nivel 2/max.h"
#include "../macros/nivel 1/par.h"
#include "../macros/nivel 1/divisible.h"
#include "../macros/nivel 2/entre100.h"
#include "../macros/nivel 2/consecutivos.h"
#include "../macros/nivel 3/maximo.h"

//IMPORTACIÓN DE EJERCICIO DE BUCLES
#include "../bucles/nivel 1/for1a100.h"
#include "../bucles/nivel 1/for1a100par.h"
#include "../bucles/nivel 1/suma1a100impar.h"
#include "../bucles/nivel 1/sumaintervalo.h"
#include "../bucles/nivel 1/multiplicacionintervalo.h"
#include "../bucles/nivel 1/promedio.h"
#include "../bucles/nivel 1/ingresoasterisco.h"
#include "../bucles/nivel 2/divisoresDeX.h"
#include "../bucles/nivel 2/nroPrimo.h"
#include "../bucles/nivel 2/100cuadrados.h"
#include "../bucles/nivel 2/promN.h"


//declaración de variable global

int selector;

void continuar(void){
  printf("Seleccione una tecla para volver al menú..."); 
  getchar(); 
  getchar();
}

void menuBucles(void){
  fflush( stdin );
  do{
  system("clear");
  printf("-Bucles-\n");
  printf("1-Nivel 1\n");
  printf("2-Nivel 2\n");
  printf("3-Nivel 3\n");
  printf("4-Volver\n");
  printf("Ingrese una opción: ");
  scanf("%i",&selector);
  switch(selector){
    case 1:
      system("clear");
      printf("1-Numeros del 100 al 1.\n");
      printf("2-Números pares del 1 al 100.⚠ Ejercicio faltante\n");
      printf("3-Numeros pares del 1 al 100.\n");
      printf("4-Sumatoria de números impares del 1 al 100.\n");
      printf("5-Sumatoria de números dentro de un intervalo.\n");
      printf("6-Multiplicación de números dentro de un intervalo.\n");
      printf("7-Promedio de 10 números ingresados.\n");
      printf("8-Impresión de asteriscos por ingreso de datos.\n");
      printf("9-Volver.\n");
      printf("Ingrese una opción: ");
      scanf("%i",&selector);
      switch(selector){
        case 1:
          descendente1a100();
          continuar();
          break;
        case 2:
          ascendentePar();
          continuar();
          break;
        case 3:
          suma1a100impar();
          continuar();
          break;
        case 4:
          sumaIntervalo();
          continuar();
          break;
        case 5:

          continuar();
          break;
        case 6:
          multiplicacionIntervalo();
          continuar();
          break;
        case 7:
          promedio();
          continuar();
          break;
        case 8:
          ingresoAsterisco();
          continuar();
          break;
        default:
          break;
          
      }

      break;
    case 2:
    system("clear");
    printf("1-Muestre los divisores de un número.\n");
    printf("2-Número primo.\n");
    printf("3-La suma de los cuadrados de los primero 100 números.\n");
    printf("4-Promedio de N números.\n");
    printf("5-Volver.\n");
    printf("Ingrese una opción: ");
      scanf("%i",&selector);
      switch(selector){
        case 1:
          divisorDeX();
          continuar();
          break;
        case 2:
          nroPrimo();
          continuar();
        case 3:
          cuadradosEnteros();
          continuar();
        case 4:
          promN();
          continuar();
        default:
          break;
      }
      break;
    case 3:
      printf("1-.\n");
      printf("2-.\n");
      printf("3-Volver.\n");
      printf("Ingrese una opción: ");
      scanf("%i",&selector);
      if(selector==1){
        
        continuar();
      }else if(selector==2){
        
        continuar();
      }
      break;
    case 4:
      break;
    default:
      break;
  }
  }while(selector<4 && selector > 0);
  

}

// agregar todas las opciones al menú

void menuMacros(){
  fflush( stdin );
  do{
  system("clear");
  printf("-Macros-\n");
  printf("1-Nivel 1\n");
  printf("2-Nivel 2\n");
  printf("3-Nivel 3\n");
  printf("4-Volver\n");
  printf("Ingrese una opción: ");
  scanf("%i",&selector);
  switch(selector){
    case 1:
      system("clear");
      printf("1-Paridad de un número.\n");
      printf("2-Número divisible por otro.\n");
      printf("3-Volver.\n");
      printf("Ingrese una opción: ");
      scanf("%i",&selector);
      if(selector==1){
        nroPar();
        continuar();
      }else if(selector==2){
        divisible();
        continuar();
      }

      break;
    case 2:
    system("clear");
    printf("1-Consecutivo entre 2 números.\n");
    printf("2-Número entre 0 y 100.\n");
    printf("3-Volver.\n");
    printf("Ingrese una opción: ");
      scanf("%i",&selector);
      if(selector==1){
        consecutivo();
        continuar();
      }else if(selector==2){
        entre0_100();
        continuar();
      }
      break;
    case 3:
      system("clear");
      printf("1-Máximo entre 3 números.\n");
      printf("3-Volver.\n");
      printf("Ingrese una opción: ");
      scanf("%i",&selector);
      if(selector==1){
        maximo();
        continuar();
      }
      break;
    case 4:
      break;
    default:
      break;
  }
  }while(selector<4 && selector > 0);
  
}

void menuText(void){

  system("clear");
  printf("Menú:\n");
  printf("1-Bucles.\n");
  printf("2-Macros.\n");
  printf("3-Salir.\n");

}


int mainMenu(void){


  printf("Hola!!\n");
  menuText();
  printf("Ingrese un número: ");
  scanf("%i",&selector);


//TODO arreglar menú

  while(selector != 3){

    while( selector < 0  || selector > 3 ){
      printf("Ingrese una opción válida: ");
      scanf("%i",&selector);}
      
      if(selector == 1){
          menuBucles();
          }
      else if(selector==2){
          menuMacros();
      }
      menuText();
      printf("Ingrese un número: ");
      scanf("%i",&selector);
  }

  printf("Chau..😘\n");
  getchar();
  getchar();
    

  return 0;
}