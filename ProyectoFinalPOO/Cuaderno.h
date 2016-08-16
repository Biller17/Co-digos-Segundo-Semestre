#pragma once
#include "Producto.h"

class Cuaderno : public Producto

{
protected:
    int stock;
    int tag = 8;
    int identification;
    float price;
    string tipo;
    string espiral;
    int date;
    
    
public:
    Cuaderno(){}
    Cuaderno(float price, int identification, int tipo, int espiral, int date)
    {
        this->price = price;
        this->identification = identification;
        switch (tipo)
        {
            case 1:
                this->tipo = "rayado ";
                break;
            case 2:
                this->tipo = "cuadriculado ";
                break;
            case 3:
                this->tipo = "blanco ";
                break;
        }
        if(espiral == 1)
        {
            this->espiral = "con espiral ";
        }
        else
        {
            this->espiral = "de pasta ";
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
        cout<<"Cuaderno "<<tipo<<espiral<<" $"<<price<<endl;
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