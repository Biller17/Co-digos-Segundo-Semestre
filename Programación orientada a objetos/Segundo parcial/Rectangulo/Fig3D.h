#pragma once
#include "FigGeometrica.h"

class Fig3D : public FigGeometrica
{
protected:
    static const float pi;
    //Tambien se puede poner:
    //constexpr static const float pi  = 3.1416;
    float radio;
public:
    virtual float volumen() = 0;
    
};