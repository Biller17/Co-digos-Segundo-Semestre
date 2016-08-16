#pragma once 
#include "Producto.h"

class Corrector : public Producto
{
protected:
    int stock;
    int tag = 5;
    int identification;
    float price;
    int date;

public:
    Corrector(){}
    Corrector(float price, int identification, int date)
    {
        this->price = price;
        this->identification = identification;
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
        cout<<"Corrector $"<<price<<endl;
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