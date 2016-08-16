#include "Esposa.h"
#include "Esposo.h"


Esposa:: Esposa (string nombre, string apellido)
{
    this->nombre = nombre;
    this->apellido = apellido;
}

void Esposa::setEsposo(Esposo* m)
{
    marido = m;
}

void Esposa::printMaritales()
{
    cout<<"Soy "<<nombre<<" "<<apellido<<" y mi esposo es ";
    marido->printNombre();
}