#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
/*
//Hacer una función que pase todos los elementos de una pila a otra.
PasarElementosPila();
int main()
{
Pila A, B;
inicpila (&A);
inicpila (&B);
B = PasarElementosPila (Pila A, Pila B);
printf("estos serian los elementos de la  pila A n")
mostrar (&A)
printf("estos serian los elementos de la  pila A en la pila B/n")
mostrar (&B);

    return 0;
}
Pila PasarElementosPila(Pila A, Pila B)
{
char continuar = 's';
do
{

leer (&A);
printf("desea seguir agregando elementos? presione s:/n");
fflush(stdin);
scanf("%c",&continuar);
}while (continuar=='s');


while(!pilavacia(&A)) {
apilar (&B,desapilar(&A))
}

return B;
}
*/

Pila pilaG(Pila pilaOrigen, Pila pilaDestino);
Pila pilaF(Pila pilaOrigen);
int main()
{
    Pila pilaOrigen;
    inicpila (&pilaOrigen);
    Pila pilaDestino;
    inicpila(&pilaDestino);
    pilaOrigen = pilaF(pilaOrigen);
    mostrar (&pilaOrigen);
scanf ("essta es la pila de destino: /n");
pilaDestino=pilaG(Pila pilaOrigen, Pila pilaDestino);
mostar (&pilaDestino);
    return 0;
}

Pila pilaF(Pila pilaOrigen){

    char opcion;

    do{
        leer (&pilaOrigen);
        printf ("desea seguir cargando? s/n \n");
        fflush (stdin);
        scanf ("%c", &opcion);
    }while (opcion =='s');
    return pilaOrigen;
}
Pila pilaG(Pila pilaOrigen, Pila pilaDestino){
while (!pilavacia (&pilaOrigen)){

    apilar(&pilaDestino,desapilar(&pilaOrigen));
}
return pilaDestino;
*/









}



