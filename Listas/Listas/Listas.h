#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

struct NodoLista
{
    int dato;
    NodoLista* sig;
} ;

struct Lista
{
    NodoLista* primero;
};

#endif // LISTAS_H_INCLUDED
