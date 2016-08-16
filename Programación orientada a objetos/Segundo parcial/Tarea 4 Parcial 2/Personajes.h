#pragma once
#include <iostream>
#include <string.h>
#include "Graphic.h"
using namespace std;

class Personajes : public Graphic
{
protected:
    string name;
    int* strength;
    
    Personajes(){}
public:
    Personajes(string name, int strength) : name(name), strength(new int (strength)){}
    int& getSetStrength(){return *strength;}
    string getName()
    {
        return name;
    }
    virtual void attack() = 0;
    virtual void defense() = 0;
    
    virtual ~Personajes()
    {
        delete strength;
    }
    virtual int getTag() = 0;
    virtual int* getStrength() = 0;
};