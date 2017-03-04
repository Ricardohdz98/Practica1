#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void llenarArreglo(int n);
void ordenarArreglo (int arreglo[], int n);

int main()
{
    int n;
    printf("Numero de elementos: ");
    scanf("%i",&n);
    llenarArreglo(n);
    return 0;
}

void llenarArreglo(int n)
{
    int arreglo[n];
    for(int cont=0;cont<n;cont++)
    {
        system("cls");
        printf("Valor de la casillla %i: ",cont + 1);
        scanf("%i",&arreglo[cont]);
    }
    ordenarArreglo(arreglo, n);
}

void ordenarArreglo (int arreglo[], int n)
{
    system("cls");
    for(int cont=0;cont<n;cont++)
    {
        printf("%i ",arreglo[cont]);
    }

    int primero, ultimo, central;
    primero = 0;
    ultimo = n-1;
    central = primero + ultimo / 2;
}

