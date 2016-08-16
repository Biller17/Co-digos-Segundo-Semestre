#pragma once 
#include "Persona.h"


class Esposa;

class Esposo : public Persona
{
protected:
    Esposa* mujer;
    
public:
    Esposo(){}
    Esposo (string nombre, string apellido);
    
    void setEsposa(Esposa* m);
    void printMaritales();

    
    
};