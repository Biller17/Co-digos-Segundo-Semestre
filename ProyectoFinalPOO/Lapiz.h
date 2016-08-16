#pragma once
#include "Producto.h"


class Lapiz : public Producto
{
protected:
    int stock;
    int tag = 2;
    int identification;
    float price;
    string color;
    string lapicero;
    int date;
    
    
public:
    Lapiz(){}
    Lapiz(float price,int identification, string color, int lapicero,int date )
    {
        this->price = price;
        this->identification = identification;
        this->color = color;
        if(lapicero == 1)
        {
            this->lapicero = "Lapicero";
        }
        else
        {
            this->lapicero = "normal";
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
        cout<<"Lapiz "<<color<<" "<<lapicero<<" $"<<price<<endl;
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