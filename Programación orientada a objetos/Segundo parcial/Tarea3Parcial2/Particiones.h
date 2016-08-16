#pragma once
#include "Multiplicacion.h"

class Particiones : public Multiplicacion
{
public:
    Particiones(){}
    int multiplicar(Enteros a, Enteros b);
    int getSize(int a);
    int separarUno(int a, int longitud);
    int separarDos(int a, int longitud);
};