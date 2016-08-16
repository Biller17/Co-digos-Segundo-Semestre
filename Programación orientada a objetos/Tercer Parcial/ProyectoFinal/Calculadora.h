#pragma once
#include "Producto.h"

class Calculadora : public Producto

{
protected:
    int stock;
    int tag = 6;
    int identification;
    float price;
    string tipo;
    int date;
    
    
    
    
public:
    Calculadora(){}
    Calculadora(float price, int identification, int tipo, int date)
    {
        this->price = price;
        this->identification = identification;
        switch (tipo)
        {
            case 1:
                this->tipo  = "normal";
                break;
            case 2:
                this->tipo = "cientifica";
                break;
            case 3:
                this->tipo = "graficadora";
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
        cout<<"Calculadora "<<tipo<<" $"<<price<<endl;
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