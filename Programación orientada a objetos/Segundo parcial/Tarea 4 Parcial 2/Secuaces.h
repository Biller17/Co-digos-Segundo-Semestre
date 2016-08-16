#pragma once
#include "Personajes.h"
#include "Villanos.h"


class Secuaces : public Villanos
{
protected:
    Secuaces(){}
    int tag = 3;
    
public:
    Secuaces(string name, int strength) : Villanos(name, strength){}
    
    void attack()
    {
        Villanos::attack();
        cout<<"Minion attack"<<endl;
        
    }
    
    void printMe()
    {
        Villanos::printMe();
        cout<<"Soy el minion "<<name<<endl;
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