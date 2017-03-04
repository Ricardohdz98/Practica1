#ifndef ARBOLES_H_INCLUDED
#define ARBOLES_H_INCLUDED

struct NodoArbol
{
    int dato;
    NodoArbol* izquierda;
    NodoArbol* derecha;
};

struct Arbol
{
    NodoArbol* raiz;
};
/* Esta jdjkhsdfj */
void insertarEnArbol(Arbol* A, int dato);
#endif // ARBOLES_H_INCLUDED
