#pragma once
#include <string.h>
#include <iostream>
using namespace std;
class Persona
{
protected:
    string nombre;
    string apellido;
    
public:
    Persona(){}
    Persona(string nombre, string apellido) : nombre(nombre), apellido(apellido){}
    virtual void printMaritales() = 0;
    void printNombre()
    {
        cout<<nombre<<" "<<apellido<<endl;
    }

};