#pragma once
#include "Producto.h"

class Goma : public Producto
{
protected:
    int stock;
    int tag = 3;
    int identification;
    float price;
    string tipo;
    int date;

    
public:
    Goma(){}
    
    Goma(int price, int identification, int tipo, int date )
    {
        this->price = price;
        this->identification  = identification;
        switch(tipo)
        {
            case 1:
                this->tipo = "de plastico";
                break;
            case 2:
                this->tipo = "para tinta";
                break;
            case 3:
                this->tipo = "de migajon";
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
        cout<<"Goma "<<tipo<<" $"<<price<<endl;
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