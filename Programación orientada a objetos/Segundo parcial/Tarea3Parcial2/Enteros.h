#pragma once
#include <iostream>
using namespace std;
class Enteros
{
protected:
    int a;
public:
    Enteros();
    Enteros (int i);
    int getEntero();
    int operator * (Enteros n);

};