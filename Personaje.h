#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <stdlib.h>
#include <stdio.h>

struct PERSONAJE_H
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
}personaje[5];

unsigned int cont = 0;

void capturar_personaje()
{
    if(cont<5)
    {
        printf("Nombre: ");
        scanf("%s",personaje[cont].nombre);
        printf("Tipo: ");
        scanf("%s",personaje[cont].tipo);
        printf("Fuerza: ");
        scanf("%f",&personaje[cont].fuerza);
        printf("Salud: ");
        scanf("%d",&personaje[cont].salud);
        cont++;
    } 
    else
        printf("Estructura de personajes está llena \n");
}

#endif