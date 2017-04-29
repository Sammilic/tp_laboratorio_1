#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    char nombre[50];
    int edad;
    int dni;
    int estado;
} ePersonas;

void crearPersona (ePersonas per[]);
void bajarPersona (ePersonas per[]);
void listarPersona (ePersonas per[]);
void imprimirGrafico(ePersonas per[]);

#endif // FUNCIONES_H_INCLUDED
