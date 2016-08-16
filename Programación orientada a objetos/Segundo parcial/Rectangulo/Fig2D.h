#pragma once

#include "FigGeometrica.h"
class Fig2D :  public FigGeometrica
{
protected:
    float base;
    float altura;
    
public:
    virtual float area() = 0;
};