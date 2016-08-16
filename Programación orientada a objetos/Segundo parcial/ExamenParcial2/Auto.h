#pragma once
#include <iostream>
#include <string.h>
#include "Vehiculo.h"
using namespace std;



class Auto : public Vehiculo
{
protected:
    string manufacturer;
    string model;
    int year;
    string color;
    int passengers;
    int doors;
    int price;
    int kilometers;
    bool standard;//(True = standar/false = automatico)
    bool use;//(true = usado/false = nuevo)
    Auto(){}
    
public:
    virtual void printChar() = 0;
    virtual int getAge() = 0;
    virtual int GetSellPrice() = 0;
    virtual void getService() = 0;
    virtual string getModelo() = 0;
    virtual int getTag() = 0;
};