#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void pedirNum1(void)
{


    printf("Ingrese el primer operando: ");
    fflush(stdin);
    scanf("%f", &num1);
    printf("Su primer operando es A=%f\n", num1);

}
void pedirNum2(void)
{


    printf("Ingrese el segundo operando: ");
    fflush(stdin);
    scanf("%f", &num2);
    printf("Su segundo operando es B=%f\n", num2);

}
void suma(float num1, float num2)
{
    float suma;

    suma= num1 + num2;

    printf("La suma de sus dos numeros ingresados es: %f\n", suma);



}
void resta (float num1, float num2)
{
    float resta;

    resta= num1 - num2;

    printf("La resta de sus dos numeros ingresados es: %f\n", resta);

}
void division (float num1, float num2)
{
    float division;

    division= num1/ num2;

    printf("La division de sus dos numeros ingresados es: %f\n", division);



}
void multiplicacion (float num1, float num2)
{
    float multiplicacion;

    multiplicacion= num1 * num2;

    printf("La multiplicacion de sus dos numeros ingresados es: %f\n", multiplicacion);

}

void factorial(float num1)
{
    int i;
    int numeroEntero = num1;
    int resultado=1;

    if (numeroEntero == num1){
                for (i=1; i<=numeroEntero; i++)
        {
            resultado *= i;


        }


    }

    printf("El resultado de A!: %d\n", resultado);
}
