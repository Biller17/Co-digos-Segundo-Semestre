#include "Russe.h"


int Russe::multiplicar(Enteros a,Enteros b)
{
    int x = a.getEntero();
    int y = b.getEntero();
    int resultado = 0;
    x/=2;
    for(;x >= 1; x=x/2)
    {
        y*=2;
        if(x%2==1)
        {
            resultado+=y;
        }
    }
    
    
    return resultado;
}