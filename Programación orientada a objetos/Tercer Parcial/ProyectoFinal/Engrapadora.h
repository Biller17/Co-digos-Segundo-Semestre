#pragma once
#include "Producto.h"

class Engrapadora : public Producto

{
protected:
    int stock;
    int tag = 7;
    int identification;
    float price;
    int date;
    
    
public:
    Engrapadora(){}
    
    Engrapadora(float price, int identification, int date)
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
        cout<<"Engrapadora $"<<price<<endl;
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