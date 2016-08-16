#pragma once
#include "Character.h"

class Villain : public Character
{
protected:
    Villain(){}

public:
    Villain(string name, int strength) : Character(name, strength) { }
    
    virtual void attack()
    {
        cout << "Villain Attacking the hero" << endl;
    }
    
    void defense()
    {
        
    }
    
    virtual void printMe()
    {
        cout << "soy el villano " << name;
    }
};