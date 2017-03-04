#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void llenarArreglo(int n);
void ordenarArreglo (int arreglo[], int n);
void ordenarBurbuja ();

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

void ordenarBurbuja ()
{
    int num[5]={5,4,7,6,8};
    int i,j,k,aux;

    for(i=0;i<k;++i)
    {
        for(j=0;j<4;++j)
        {
            if (num[j]>num[j+1])
            {
                aux = num[j];
                num[j] = num[j+1];
                num[j+1]=aux;
            }
        }
    }

    for(k=0;k<5;++k){

    printf("%i\n",num[k]);
    }
   return 0;
    
}

