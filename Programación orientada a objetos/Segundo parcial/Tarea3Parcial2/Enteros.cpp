#include "Enteros.h"


Enteros::Enteros()
{
    a = 1;
}

Enteros::Enteros(int i)
{
    a = i;
}

int Enteros::getEntero()
{
    return a;
}


int Enteros::operator * (Enteros n)
{
    return a * n.getEntero();
}
