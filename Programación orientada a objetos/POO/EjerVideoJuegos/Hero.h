#pragma once
#include "Character.h"

class Hero : public Character
{
protected:
    Hero(){}
    int value;   
public:
    Hero(string name, int strength)  : Character(name, strength){}
    
    void attack()
    {
        cout << "Hero Attacking the villain" << endl;
    }
    
    void defense()
    {
        cout << "Hero defending from the villain" << endl;
    }
    
    void printMe()
    {
        cout << "soy el hero " << name;
    }
};