#include"ListasDL.h"
#include<stdio.h>

NodoListaDL* crearNodoListaDL(int dato)
{
    NodoListaDL *nuevoNodo = new NodoListaDL;
    nuevoNodo->anterior = nuevoNodo->siguiente = NULL;
    nuevoNodo->dato = dato;

    return nuevoNodo;
}


void insertarEnListaDL(ListaDL* Lista, int dato)
{
    if(Lista->primero == NULL)
    {
        Lista->primero = crearNodoListaDL(dato);
    }
    else
    {
        NodoListaDL* nodoActual = Lista->primero;
        while(nodoActual->siguiente != NULL)
        {
            nodoActual = nodoActual->siguiente;
        }

        nodoActual->siguiente = crearNodoListaDL(dato);
        nodoActual->siguiente->anterior = nodoActual;
    }
}

void imprimirListaDL(ListaDL* Lista)
{
    NodoListaDL* nodoActual = Lista->primero;
    while(nodoActual != NULL)
    {
        printf("%i ->", nodoActual->dato);
        nodoActual = nodoActual->siguiente;
    }
    printf("\n");
}
