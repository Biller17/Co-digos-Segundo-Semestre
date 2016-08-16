//Adrián Biller A01019840

#include "Lavadora.h"

Lavadora::Lavadora()
{
    weight = 1;
    consumo = 1;
    color = "blanco";
    carga = 10;
    precio = 1000;
    tax = getTax(precio);
    cout<<"Este es el constructor default"<<endl;
    print();
    
}

Lavadora::Lavadora(int weight, int carga, int consumo, string color)
{
    this->weight = weight;
    this->carga = carga;
    this->consumo = consumo;
    this->color = color;
    precio = getPrice(weight);
    tax = getTax(precio);
    cout<<"Este es el constructor por parametros"<<endl;
    print();
}

Lavadora::Lavadora(Lavadora& original)
{
    weight = original.getWeight();
    carga = original.getCarga();
    consumo = original.getConsumo();
    color = original.getColor();
    precio = getPrice(weight);
    tax = getTax(precio);
    print();
    
}

int Lavadora::getPrice(int weight)
{
    int price = 0;
    if (weight >= 0 && weight<=19)
    {
        price = 10000;
    }
    if(weight >= 20 && weight <= 49)
    {
        price = 50000;
        
    }
    if(weight >= 50 && weight <= 79)
    {
        price = 80000;
    }
    if(weight >= 80)
    {
        price = 100000;
    }
    return price;
}

int Lavadora::getTax(int price)
{
    if(price >= 20000)
        price = price +(20000*0.3)+(10000*0.4);
    else if(price >=20000 && price <=40000)
        price = price +(20000*0.3)+(40000*0.4);
    else if (price >= 40000 && price <= 80000)
    price = price +(20000*0.3)+(40000*0.4)+(20000*0.5);
    return price;
}

int Lavadora::getWeight()
{
    return weight;
}

int Lavadora::getCarga()
{
    return carga;
}

int Lavadora::getConsumo()
{
    return consumo;
}

string Lavadora::getColor()
{
    return color;
}

void Lavadora::print()
{
    cout<<"Peso: "<<weight<<endl;
    cout<<"Consumo: "<<consumo<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Carga: "<<carga<<endl;
    cout<<"Precio base: "<<precio<<endl;
    cout<<"Precio con impuesto: "<<tax<<endl;
}

