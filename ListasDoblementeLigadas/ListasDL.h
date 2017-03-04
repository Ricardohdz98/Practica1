#ifndef LISTASDL_H_INCLUDED
#define LISTASDL_H_INCLUDED

struct NodoListaDL
{
    int dato;
    NodoListaDL* anterior;
    NodoListaDL* siguiente;
};

struct ListaDL
{
    NodoListaDL* primero;
};

/***
   Nombre: crearNodoListaDL
   Dueno: Omar Alvizo
   Desc: Esta funcion crea un nodo nuevo
   Parametros:
        Int dato -> dato nuevo */

NodoListaDL* crearNodoListaDL(int dato);

/***
   Nombre: insertarEnListaDL
   Dueno: Omar Alvizo
   Desc: Esta funcion insertar un nodo en la
         ultima posicion de la Lista

   Parametros:
        ListaDL L  -> Lista
        Int dato -> dato a meter */
void insertarEnListaDL(ListaDL* Lista, int dato);

/***
   Nombre: ImprimirListaDL
   Dueno: Omar Alvizo
   Desc: Esta funcion simplemente imprime la lista
         en consola

   Parametros:
        ListaDL L  -> Lista*/
void imprimirListaDL(ListaDL* Lista);


#endif // LISTASDL_H_INCLUDED
