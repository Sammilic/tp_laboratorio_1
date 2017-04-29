#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <strings.h>

int main()
{
    char seguir='s';
    int opcion=0;
    ePersonas personas[20] = {"", 0, 0, 0};

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            crearPersona (personas);
            break;
        case 2:
            bajarPersona (personas);
            break;
        case 3:
            listarPersona(personas);
            break;
        case 4:
            imprimirGrafico(personas);
            break;
        case 5:
            seguir = 'n';
            break;
        }
        system("pause");
        system("cls");
    }
    return 0;
}
