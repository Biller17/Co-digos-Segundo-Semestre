#pragma once
#include "Producto.h"

class Folder : public Producto

{
protected:
    int stock;
    int tag = 10;
    int identification;
    float price;
    string tamano;
    int date;
    
public:
    Folder(){}
    Folder(float price, int identification, int tamaño, int date)
    {
        this->price = price;
        this->identification = identification;
        if(tamaño == 1)
        {
            this->tamano  = " tamaño carta";
        }
        else if(tamaño == 2)
        {
            this->tamano = " tamaño oficio";
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
        cout<<"Folder "<<tamano<<" $"<<price<<endl;
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