//Adrián Biller A01019840

#include <iostream>
#include <string.h>
#pragma once
using namespace std;

class Lavadora
{
private:
    int weight,precio,consumo,carga,tax;
    string color;
public:
    Lavadora();
    Lavadora(int weight,int carga, int consumo, string color);
    Lavadora(Lavadora& original);
    int getPrice(int weight);
    int getWeight();
    int getCarga();
    int getConsumo();
    string getColor();
    void print();
    int getTax(int price);

};


