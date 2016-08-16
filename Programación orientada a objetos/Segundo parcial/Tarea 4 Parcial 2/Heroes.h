#pragma once
#include "Personajes.h"


class Heroes : public Personajes
{
protected:
    Heroes(){}
    int tag=1;
    
    
public:
    Heroes(string name, int strength) : Personajes(name, strength){}
    
    void attack()
    {
        cout<<"Hero is attacking the villain"<<endl;
    }
    void defense()
    {
        cout<<"Hero is defending from the villain"<<endl;
    }
    
    void printMe()
    {
        cout<<"Soy el heroe "<<name<<endl;
    }
    int getTag()
    {
        return tag;
    }
    string getName()
    {
        return name;
    }
    int* getStrength()
    {
        return strength;
    }
    
    
};