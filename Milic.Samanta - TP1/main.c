#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{   //float num1, num2;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {

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

                suma(num1,num2);
                break;

            case 4:

                resta (num1, num2);
                break;
            case 5:

                division (num1,num2);
                break;
            case 6:

                multiplicacion(num1,num2);
                break;
            case 7:

                 factorial(num1);
                break;
            case 8:


               suma(num1, num2);
                resta (num1, num2);
                division (num1, num2);
                multiplicacion (num1,num2);
                factorial (num1);


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


