#pragma once
#include <string>
#include <iostream>

using namespace std;


class Persona
{
private:
    string apellidoPaterno;
    string apelidoMaterno;
    
public:
    void leer();
    
private:
    string nombre;
    int edad;
};
