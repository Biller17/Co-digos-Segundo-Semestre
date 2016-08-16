#pragma once
#include <iostream>
using namespace std;

class Circulo
{
private:
    double* pi;
    double radio;
public:
    double getArea();
private:
    Circulo();
public:
    Circulo(double radio, double* pi);//constructor
    Circulo(const Circulo& c);//constructor copia, const para que no se modifiquen los valores, y el & para que no se haga una copia, que se manipule como el original
};