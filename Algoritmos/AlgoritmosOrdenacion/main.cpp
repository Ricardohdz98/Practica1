#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void llenarArreglo(int arreglo[], int num);
void quicksort(int arreglo[], int num);
void imprimirArreglo (int arreglo[], int num);

int main()
{
    int num;
    int condicion;

    printf("Numero de elementos: ");
    scanf("%i",&num);
    int arreglo[num];
    llenarArreglo(arreglo, num);
    system("cls");
    do
        {
            printf("Opciones: \n1.Burbuja. \n2.QuickSort. \n3.RadixSort. \n4.MergeSort. \n5.Invertir Cadena. \n6.Imprimir Arreglo.\n0.Salir. \nOpcion a elegir: ");
            scanf("%i",&condicion);
            switch(condicion)
                {
                    case 1:
                        {
                            break;
                        }
                    case 2:
                        {
                            break;
                        }
                    case 3:
                        {
                            break;
                        }
                    case 4:
                        {
                            break;
                        }
                    case 5:
                        {
                            break;
                        }
                    case 6:
                        {
                            imprimirArreglo(arreglo, num);
                        }
                }
        }while(condicion=0);
    return 0;
}

void llenarArreglo(int arreglo[], int num)
{
    for(int cont=0;cont<num;cont++)
    {
        system("cls");
        printf("Valor de la casillla %i: ",cont + 1);
        scanf("%i",&arreglo[cont]);
    }
    //quicksort(arreglo, num);
}

void quicksort (int arreglo[], int num)
{
    int primero, ultimo, central;
    primero = 0;
    ultimo = num-1;
    central = primero + ultimo / 2;
}

void imprimirArreglo (int arreglo[], int num)
{
    system("cls");
    for(int cont=0;cont<num;cont++)
    {
        printf("%i ",arreglo[cont]);
    }
}
