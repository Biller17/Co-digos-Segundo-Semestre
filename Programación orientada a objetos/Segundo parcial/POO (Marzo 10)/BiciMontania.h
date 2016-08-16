#pragma once
#include "Bicicleta.h"
#include "ArticuloDeportivo.h"


class BiciMontania : public Bicicleta
{
public:
    BiciMontania();
    BiciMontania(string _color, int _size, string _marca, bool sDel, bool sTras);
    void frenar(int potencia)//overriding
    {
        Bicicleta::frenar();
    }
    
    void frenar ()
    {
        cout<<"Frenar bici de montaña"<<endl;
    }
    
    ~BiciMontania();
    
protected:
    bool suspDelantera;
    bool suspTrasera;
    int* obligatorioM;
    
};