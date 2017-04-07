#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{    char seguir='s';
    int opcion=0;

    while(seguir=='s'){

      if(flag1 == 0){
            printf("1-Ingrese el primer operando para A=x\n");
     }else{
       printf("1-Ingrese el primer operando para A=%2.f\n", num1);
    }
     if(flag2 == 0){
       printf("1-Ingrese el primer operando para B=y\n");
     }else{
        printf("2-Ingrese el primer operando para B=%2.f\n", num2);
    }
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                pedirNum1();
                break;
            case 2:
                pedirNum2();
                break;
            case 3:
                if(num1 == 0 || num2 == 0){
                    printf("Ingrese los dos números\n");
                }else{
                sumaNum(num1, num2);}
                break;
            case 4:
                if(num1 == 0 || num2 == 0){
                    printf("Ingrese los dos números\n");
                }else{
                restaNum(num1, num2);}
                break;
            case 5:
                if(num1 == 0 || num2 == 0){
                    printf("Ingrese los dos números\n");
                }else{
                divNum(num1, num2);}
                break;
            case 6:
                if(num1 == 0 || num2 == 0){
                    printf("Ingrese los dos números\n");
                }else{
                multNum(num1, num2);}
                break;
            case 7:
                factorial(num1);
                break;
            case 8:
                sumaNum(num1, num2);
                restaNum(num1, num2);
                divNum(num1, num2);
                multNum(num1, num2);
                factorial(num1);
                break;
            case 9:
                seguir = 'n';
                break;
        }
        system("pause");
        system("cls");
}
return 0;
}
