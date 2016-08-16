#pragma once 
#include "Producto.h"

class Sacapuntas : public Producto
{
protected:
    int stock;
    int tag = 4;
    int identification;
    float price;
    string tipo;
    int date;
    
    
public:
    Sacapuntas(){}
    Sacapuntas(float price, int identification, int tipo, int date)
    {
        this->price = price;
        this->identification = identification;
        if(tipo == 1)
        {
            this->tipo = "de metal";
        }
        else
        {
            this->tipo = "de plastico";

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
        cout<<"Sacapuntas "<<tipo<<" $"<<price<<endl;
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