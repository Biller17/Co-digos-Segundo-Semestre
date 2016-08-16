#pragma once
#include <iostream>
#include <string.h>
using namespace std;


class Producto 
{
public:
    Producto(){}
    ~Producto(){}
    virtual int getID() = 0;
    virtual int getTag() = 0;
    virtual void print() = 0;
    virtual int getDate() = 0;
    virtual int getPrice() = 0;
    
    
};