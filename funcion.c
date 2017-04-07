#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>


void pedirNum1 () {
    printf("Ingrese el primer operando: ");
    fflush(stdin);
    scanf("%f", &num1);
    flag1='1';
}

void pedirNum2 () {
    printf("Ingrese el segundo operando: ");
    fflush(stdin);
    scanf("%f", &num2);
    flag2='1';
}
void sumaNum(float num1, float num2){
    float suma;
    suma = num1 + num2;
    printf("La suma es : %.2f\n", suma);
}

void restaNum(float num1, float num2){
   float resta;

   resta = num1 - num2;
    printf("La resta es : %.2f\n", resta);
}

void divNum(float num1, float num2){
      float div;

   div = num1/num2;
    printf("La división es : %.2f\n", div);
}

void multNum(float num1, float num2){
     float mult;

   mult = num1*num2;
    printf("La multiplicación es : %.2f\n", mult);
    }

    void factorial(float num1){
      int i, numeroEntero= num1;


        if (num1 != numeroEntero){
            printf("Error. Se calculara sobre un numero entero \n");
        }else{
           		long long int resultado = 1;
		for (i=1; i<=num1; i++) {
			resultado *= i;
		}
		printf("El resultado de A!: %d\n", resultado);}
    }
