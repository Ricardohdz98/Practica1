#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

struct NodoLista
{
    int dato;
    NodoLista* sig;
    NodoLista* ult;
} ;

struct Lista
{
    NodoLista* primero;
};
void InsertarEnLista(Lista* primero, int dato)
#endif // LISTAS_H_INCLUDED
