#include <iostream> //Cuauhtli  Pilas - Empujar
#include "Pila.h"

//dato = elemento que entrara a la pila

class NodoPila  //en esta clase definire el valor de la pila
    {
    public:
        NodoPila* siguiente;
        int dato;
        NodoPila(int x) //para insertar el valor correspondiente
        {
            dato = x;
            siguiente = NULL;
        }
    };

void pila /* en este void es para introdicir un nuevo dato
a la pila, no estoy seguro de que funcione v,:*/

void Pila::insertar(int dato)
{
    NodoPila* nuevo:
    nuevo = new NodoPila(dato);
    nuevo -> siguiente = arriba;
    arriba = nuevo;
}

int main()
{
    pila();
    return 0;
}
