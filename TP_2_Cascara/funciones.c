#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <strings.h>

void crearPersona (ePersonas per[])
{
    int i;
    int hayLugar = 0;
    for(i=0; i<20; i++)
    {
        if(per[i].estado == 0)
        {
            hayLugar = 1;
            printf("\nIngrese nombre de la persona: ");
            fflush(stdin);
            scanf("%s", &per[i].nombre);
            printf("\nIngrese edad: ");
            fflush(stdin);
            scanf("%d", &per[i].edad);
            printf("\nIngrese dni: ");
            fflush(stdin);
            scanf("%d", &per[i].dni);
            per[i].estado = 1;
            break;
        }
    }
    if (hayLugar == 0)
    {
        printf("Error. No hay espacio suficiente");
    }
}

void bajarPersona (ePersonas per[])
{
    int encontro = 0;
    int i;
    int aux;
    char rta;

    printf("Ingrese el DNI a dar de baja: ");
    fflush(stdin);
    scanf("%d", &aux);

    for(i=0; i<20; i++)
    {
        if (per[i].dni == aux)

        {
            encontro = 1;
            printf("¿Desea dar de baja esta persona? S/N ");
            fflush(stdin);
            rta = getche();
            printf("\n");

            while( rta != 'S' && rta != 's' && rta != 'N' && rta != 'n')
            {
                printf("Error. Conteste S/N");
                fflush(stdin);
                rta = getche();
                printf("\n");
            }
            if(rta == 'S' || rta == 's')
            {
                per[i].estado = 0;
                printf("Operacion realizada");
            }
            else if(rta == 'n' || rta == 'n' )
            {
                printf("Operacion cancelada");
            }
            break;
        }
    }
    if (encontro == 0)
    {
        printf("\nDni inexistente");
    }
}

void listarPersona (ePersonas per[])
{
    int i;
    int j;
    char aux[50];
    int aux1;
    int aux2;
    ePersonas auxP;

    for(i=0; i<19; i++)
    {
        for(j= i+1; j<20; j++)
        {
            if((strcmp(per[i].nombre, per[j].nombre))>0)
            {
                auxP = per[i];
               per[i]=per[j];
               per[j]=auxP;

            }
        }
    }
    printf("-----Lista completa----");
    for(i=0; i<20; i++)
    {
        if(per[i].estado == 1)
        {
            printf("\n\t%s\t%d\t%d\n", per[i].nombre, per[i].edad, per[i].dni);
        }
    }
}

void imprimirGrafico(ePersonas per[]) {

    int primerCont = 0;
    int segundaCont = 0;
    int tercerCont = 0;
    for (int i=0; i<20; i++)
        {
        if (per[i].estado == 1)
        {
            if (per[i].edad > 0 && per[i].edad <= 18)
            {
                primerCont++;
            } else if (per[i].edad > 18 && per[i].edad < 35)
            {
                segundaCont++;
            } else
            {
                tercerCont ++;
            }
        }
        }
    int tamGraf = primerCont;
    if (segundaCont > tamGraf)
    {
        tamGraf = segundaCont;
    }
    if (tercerCont > tamGraf)
     {
        tamGraf = tercerCont;
    }
    char primerF[tamGraf];
    char segundaF[tamGraf];
    char terceraF[tamGraf];

    for (int i=0; i<tamGraf; i++)
        {
        primerF[i] = ' ';
        segundaF[i] = ' ';
        terceraF[i] = ' ';
        if (i < primerCont) {
            primerF[i] = '*';
        } else {
            primerF[i] = ' ';
        }
        if (i < segundaCont) {
            segundaF[i] = '*';
        } else {
            segundaF[i] = ' ';
        }
        if (i < tercerCont) {
            terceraF[i] = '*';
        } else {
            terceraF[i] = ' ';
        }
    }
    for (int i=tamGraf-1; i>=0; i--) {
        printf(" %c     %c     %c\n", primerF[i], segundaF[i], terceraF[i]);
    }
    printf("<18  19-35  >35\n");
}
