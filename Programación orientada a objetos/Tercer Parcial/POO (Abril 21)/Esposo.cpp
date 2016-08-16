#include "Esposo.h"
#include "Esposa.h"


Esposo:: Esposo (string nombre, string apellido)
    {
        this->nombre = nombre;
        this->apellido = apellido;
    }

void Esposo::setEsposa(Esposa* m)
{
    mujer = m;
}

void Esposo::printMaritales()
{
    cout<<"Soy "<<nombre<<" "<<apellido<<" y mi esposa es ";
    mujer->printNombre();
}