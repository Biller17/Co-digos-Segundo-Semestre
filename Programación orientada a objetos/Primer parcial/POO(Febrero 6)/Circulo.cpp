#include "Circulo.h"


double Circulo :: getArea()
{
    return (*pi *radio *radio);
}

Circulo::Circulo()
{
    
}

Circulo::Circulo(double radio, double* pi);
{
    this -> pi = pi;//-> es para acceder al valor de un apuntador
    this->radio = radio;
}

Circulo::Circulo(const Circulo& c);
{
    //no es necesario definirla pero se puede
    this -> pi = c.pi;
    radio = c.radio;
}