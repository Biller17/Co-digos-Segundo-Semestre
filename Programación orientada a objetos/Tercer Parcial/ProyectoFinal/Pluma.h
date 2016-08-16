#pragma once
#include "Producto.h"

class Pluma : public Producto
{
protected:
    int stock;
    int tag = 1;
    int identification;
    float price;
    string ink;
    string tipo;
    int date;
    
public:
    Pluma(){}
    Pluma(float price, int ink, int tipo, int identification, int date)
    {
        this->price = price;
        this->identification = identification;
        if(ink == 1)
        {
            this->ink = "Azul";
        }
        else if (ink == 2)
        {
            this->ink = "Roja";
        }
        else if (ink == 3)
        {
            this->ink = "Negra";
        }
        
        if(tipo == 1)
        {
            this->tipo = "fuente";
            
        }
        else if (tipo == 2)
        {
            this->tipo = "de gel";
        }
        this->date = date;

    }
    
    int getTag()
    {
        return tag;
    }
    
    int getID()
    {
        
        return identification;
    }
    
    void print()
    {
        cout<<"Pluma "<<ink<<" "<<tipo<<" $"<<price<<endl;
    }
    
    int getDate()
    {
        return date;
    }
    
    int getPrice()
    {
        return price;
    }
    

};