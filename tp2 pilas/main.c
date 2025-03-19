#include <stdio.h>
#include <stdlib.h>
#include "pila.h"



 //Hacer una función que permita ingresar varios elementos a una pila, tanto como quiera el usuario.
Pila cargarPila (pilaA);
int main()
{
    Pila (pilaA);
    inicpila (&pilaA);
    pilaA = cargarPila(pilaA);
    mostrar (&pilaA);
    return 0;
}
 Pila cargarPila (Pila pilaA)
{
   char continuar ='s';

do
{
        leer (&pilaA);
        printf ("desea continuar, presione s.");
        fflush(stdin);
        scanf("%c",&continuar);
  }while (continuar=='s');
   return pilaA;
 }

