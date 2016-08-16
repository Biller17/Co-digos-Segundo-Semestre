#pragma once

#include "Character.h"

class Princess : public Character
{
protected:
    Princess(){}
    
public:
    Princess(string name, int strength) : Character(name, strength){}
    
    void attack(){}
    void defense(){}
    
    void scream()
    {
         cout << "Princess is screamming ...... save me!!!!!! save me!!!!!" << endl;
    }
    void run()
    {
        cout << "Princes is running asking for heeeeelp!!!!" << endl;
    }
    
    void printMe()
    {
        cout << "soy la princesa " << name;
    }
};