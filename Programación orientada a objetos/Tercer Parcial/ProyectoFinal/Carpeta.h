#pragma once
#include "Producto.h"

class Carpeta : public Producto

{
protected:
    int stock;
    int tag = 9;
    int identification;
    float price;
    string tipo;
    int date;
    
public:
    
    Carpeta(){}
    Carpeta(float price, int identification, int tipo, int date)
    {
        this->price = price;
        this->identification = identification;
        switch(tipo)
        {
            case 1:
                this->tipo = " de argollas";
                break;
            case 2:
                this->tipo = " de broche";
                break;
            case 3:
                this->tipo  = " de clip";
                break;
            case 4:
                this->tipo = " de plastico";
                break;
                
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
        cout<<"Carpeta "<<tipo<<" $"<<price<<endl;
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