#pragma once
#include "Persona.h"
#include "Esposo.h"

class Esposo;//forward declaration

class Esposa : public Persona
{
protected:
    Esposo* marido;
    
public:
    Esposa(){}
    Esposa (string nombre, string apellido);
    
    void setEsposo(Esposo* m);
    void printMaritales();
    
    
};