#include "Overloading.h"

//Se puede hacer sobre carga a:
//          - Métodos
//          - Operadores
//              - Los operadores son(==, <=, >=, &&, ::, <<, >>, !=)

Numero::Numero(int valueP)
{
    
}

Numero::Numero()
{
    
}

Numero Numero::operator+(Numero n2)
{
    Numero res(value + n2.value);
    return res;
}

bool Numero::operator==(Numero n2)
{
    return (value == n2.getValue());
}

void Numero::setValue(int valueP)
{
    value = valueP;
}

int Numero::getValue()
{
    return value;
}

ostream& operator<<(ostream &os, Numero &n)
{
    os <<  n.value;
    return os;
}

istream& operator >>(istream& is, Numero& n)
{
    cout<<"Escribe el valor del numero";
    is>>n.value;
    return is;
}