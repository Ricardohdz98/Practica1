#include <iostream>
#include <stdio.h>

using namespace std;

struct NodoCola
{
    int dato;
    NodoCola* siguiente;
};

struct Colas
{
    NodoCola* primero;
};

NodoCola * crearNodoCola(int dato)
{
    NodoCola* nuevoNodo = new NodoCola;
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;

}

