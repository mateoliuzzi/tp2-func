#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
Pila pasarElementos(Pila a,Pila b);







int main()
{
    Pila a,b;
    inicpila(&a);
    inicpila(&b);

    b=pasarElementos(a,b);

    printf("esta es la pila a:/n ");
    mostrar (&a);

    printf("esta es la pila b: /n");
    mostrar (&b);

    return 0;
}

Pila pasarElementos(Pila a, Pila b)
{
    Pila aux;
    inicpila(&aux);

    char continuar = 's';
    do
    {
        leer(&a);
        printf ("desea seguir ingresando? presione s:/n ");
        fflush(stdin);
        scanf ("%c", &continuar);
    } while(continuar == 's');


    while (!pilavacia(&a))
    {
        apilar(&aux,desapilar(&a));
    }
    while (!pilavacia(&aux))
    {
        apilar(&b,desapilar(&aux));
    }
    return b;
}
