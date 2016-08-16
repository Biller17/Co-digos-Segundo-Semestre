#include "Particiones.h"
#include "Enteros.h"



int Particiones::getSize(int a)
{
    int size;
    for( ;a > 0; a/=10)
    {
        size++;
    }
    return size;
}

int Particiones::separarUno(int a, int longitud)
{
    for(int i = longitud; i>0; i++)
    {
        a/=10;
    }
    return a;
}
int Particiones::separarDos(int a, int longitud)
{
    
    for(int i = longitud; i>0; i++)
    {
        a%=10;
    }
    return a;
}

int Particiones::multiplicar(Enteros a, Enteros b)
{
    int x = a.getEntero();
    cout<<x<<endl;
    int y = b.getEntero();
    cout<<y<<endl;
    int sizex = getSize(x);
    int sizey = getSize(y);
    int resultado;

    if(sizex%2==1)
    {
        sizex++;
    }
    if(sizey%2==1)
    {
        sizey++;
    }
    resultado+= separarUno(x, sizex) * separarUno(y, sizey);
    resultado+=separarUno(x, sizex) * separarDos(y, sizey);
    resultado+=separarDos(x, sizex) * separarUno(y, sizey);
    resultado+=separarDos(x, sizex) * separarDos(y, sizey);
    
    return resultado;
}



















