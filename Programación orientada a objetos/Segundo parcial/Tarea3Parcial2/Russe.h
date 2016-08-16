#pragma once
#include "Multiplicacion.h"
#include "Enteros.h"

class Russe : public Multiplicacion
{
public:
    Russe(){}
    int multiplicar(Enteros a, Enteros b);
};