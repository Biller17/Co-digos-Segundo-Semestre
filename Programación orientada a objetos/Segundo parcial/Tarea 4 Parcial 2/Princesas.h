#pragma once
#include "Personajes.h"

class Princesas : public Personajes
{
protected:
    Princesas(){}
    int tag = 4;
    
public:
    Princesas(string name, int strength) : Personajes(name, strength){}
    
    void attack(){}
    void defense(){}
    void scream()
    {
        cout << "Princess is screaming.....save me!!!"<<endl;
    }
    void run()
    {
        cout<<"Princess is running!"<<endl;
    }
    void printMe()
    {
        cout << "soy la princesa " << name<<endl;
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