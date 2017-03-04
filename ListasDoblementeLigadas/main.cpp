#include <iostream>
#include"ListasDL.h"
using namespace std;

int main()
{
    ListaDL* L = new ListaDL;
    insertarEnListaDL(L,2);
    insertarEnListaDL(L,3);
    insertarEnListaDL(L,4);

    imprimirListaDL(L);
    return 0;
}
