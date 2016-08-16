#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Bicicleta
{
private:
public:
    Bicicleta()
    {
        obligatorio = new int;
    }
    Bicicleta(string _color, int _size, string _marca)
    {
        color = _color;
        size = _size;
        marca = _marca;
        obligatorio = new int;
    }
    
    virtual~Bicicleta()
    {
        delete obligatorio;
        cout<<"Destructor bicicleta"<<endl;
    }
    
protected://atributos privados para otros pero publicos para las clases hijos
    string color;
    int size;
    string marca;
    void acelererar(){}
    void frenar(){}
    
    int* obligatorio;
    
};