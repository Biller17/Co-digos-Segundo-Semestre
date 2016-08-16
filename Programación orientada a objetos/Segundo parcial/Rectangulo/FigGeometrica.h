#pragma once
//es una clase abstracta, permite definir otras clases
//no tiene nunca instancias
//utiliza metodos virtuales puros(sin implemetacion)
class FigGeometrica
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
    
};