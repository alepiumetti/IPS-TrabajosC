## Ejercitación IPS - Taller de programación 1. 


### MACROS - BATERÍA DE EJERCICIOS:

(Tip) usar el operador ternario:
expresión_boleana ? valor_si_cierto : valor_si_falso

Escriban macros para determinar:

#### Nivel 1:
1. El mínimo entre dos enteros.
#define MIN(X,Y) .....siguen uds.....

2. El máximo entre dos enteros
#define MAX(X,Y) .....siguen uds.....

3. Si un número es par (aquí es útil el operador %, que da el resto de la división entera)
#define PAR(X) .....siguen uds.....

4. Si un número X es divisible (de manera entera) por otro Y  (considerar Y nunca es 0 )
#define DIVISIBLE(X,Y) .....siguen uds.....


#### Nivel 2:
5. Determinar si un número está entre el 0 y el 100   (se puede usar cond1 && cond2)
#define ENTRE_0_100(X) .....siguen uds.....

6. Determinar si dos números son consecutivos, (5 y 4 o 33 y 34 lo son, pero 40 y 42 o bien 8 y 91 no lo son)
#define CONSECUTIVOS(X,Y) .....siguen uds.....


#### Nivel 3:
7. Determinar el máximo entre tres enteros
#define MAX(X,Y,Z) .....siguen uds.....

___

## BUCLES

Realizar un programa que
#### Nivel 1
1. Muestre los números de 1 a 100 de forma descendente.
2. Muestre los números impares que hay entre 1 y 100.
3. Muestre la suma de todos los números impares que van del 1 al 100.
4. Pida dos números y sume todos los números comprendidos entre el primero y el segundo (inclusive).
Debe controlarse que el segundo número sea mayor que el primero.
5. Pida dos números y multiplique todos los números comprendidos entre el primero y el segundo (inclusive).
Debe controlarse que el segundo número sea mayor que el primero.
6. Calcule el promedio de 10 números ingresados por el usuario
7. Pida un número entero entre 1 y 15 (controlar esto) y muestre el mismo número de asteriscos por pantalla.

#### Nivel 2
1. Muestre los divisores de un número.
2. Pida un número por teclado y decir si es un número primo o no. Controlar que el usuario ingrese un número mayor a 0.
3. Calcule la suma de los cuadrados de los 100 primeros números enteros.
4. Calcule el promedio de N números, se dejarán de solicitar números hasta que se introduzca el cero.
5. Reciba tres enteros positivos n, p y m, asegurándose que 
```
n<m
genere la salida n, n+p, n+2.p, n+3.p, .... k (k<=m y es de la forma n+NRO.p)
Ejemplo n=2, p=3, m=10, debe generarse: 2, 5, 8
Ejemplo n=1, p=4, m=21, debe generarse 1,5,9,13,17,21
```

#### Nivel 3
1. Muestre el abecedario por pantalla.
2. Calcule el factorial de un número entero positvo.
3. Muestre las tablas de multiplicar del 1 al 10.
4. Muestre los 25 primeros números de la sucesión de Fibonacci.
5. Permita ingresar una matriz cuadrada 4x4 y luego la muestre por pantalla.
6. Empleando bucles for anidados intente generar las siguientes salidas por pantalla

![salida por consola](https://prnt.sc/12ixin1)