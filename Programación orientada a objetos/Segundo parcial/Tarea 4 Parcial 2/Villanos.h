#pragma once
#include "Personajes.h"

class Villanos : public Personajes
{
protected:
    Villanos(){}
    int tag = 2;
    
public:
    Villanos(string name, int strength) : Personajes(name, strength){}
    
    virtual void attack()
    {
        cout<<"The villain is attacking!"<<endl;
    }
    
    virtual void defense()
    {
        cout<<"Villain is defending"<<endl;
    }
    
    virtual void printMe()
    {
        cout<<"Soy el villano "<<name<<endl;
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