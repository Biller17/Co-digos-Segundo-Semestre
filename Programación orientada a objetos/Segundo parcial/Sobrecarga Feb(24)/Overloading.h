#pragma once
#include <iostream>

using namespace std;

/*class Numero
{
    int suma (int a, int b);
    int suma (int a, int b, int c);
    double suma (double z, double v);
public:
    Numero operator + (Numero b);
    Numero operator - (Numero b);
    bool operator == (Numero b); //N1 == N2
    
};*/

class Numero
{
public:
    int value;
public:
    void setValue(int valueP);
    int getValue();
    
    Numero (int valueP);
    Numero();
    
    Numero operator + (Numero);//puedes no ponerle el nombre de la variable sino solo el tipo
    bool operator == (Numero);
    
    friend ostream& operator << (ostream&, const Numero&);
    friend istream& operator >> (istream&, const Numero&);
};

