#pragma once

#include "commons.h"
#include "Graphic.h"

class Character : public Graphic
{
protected:
    int* strength;
    string name;
    
    Character(){ }
    
public:
    Character(string name, int strength) : name(name), strength(new int(strength)){ }
    int& getSetStrength(){ return *strength; }
    string getName()
    {
        return name;
    }
    
    virtual void attack() = 0;
    virtual void defense() = 0;
    
    virtual ~Character()
    {
        delete strength;
    }
};