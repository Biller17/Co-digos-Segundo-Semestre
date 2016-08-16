#pragma once
#include"Villain.h"

class Minion : public Villain
{
private:
    Minion(){}

public:
    Minion(string name, int strength) : Villain(name, strength){}

    void attack()
    {
        Villain::attack();
        cout << "Spitting attack" << endl;
    }
    
    void printMe()
    {
        Villain::printMe();
        cout << "soy el minion " << name;
    }
};