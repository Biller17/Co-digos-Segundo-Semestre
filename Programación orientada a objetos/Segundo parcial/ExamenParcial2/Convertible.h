#pragma once
#include "Auto.h"

class Convertible : public Auto
{
protected:
    bool techo;
    bool tipoTecho;
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
    int tag = 1;
    Convertible(){}
    Convertible(const Convertible &A){}
    
public:
    Convertible(string man, string mod,int y, string col, int pass, int door, int pr, int kil, bool std, bool us ,bool tec, bool tipo)
    {
        manufacturer = man;
        model = mod;
        year = y;
        color = col;
        passengers = pass;
        doors = door;
        price = pr;
        kilometers = kil;
        standard = std;
        use = us;
        techo = tec;
        tipoTecho = tipo;
    }
    void printChar()
    {
        cout<<"Las characteristicas del coche son:"<<endl;
        cout<<"-"<<manufacturer<<endl;
        cout<<"-"<<model<<endl;
        cout<<"-"<<year<<endl;
        if(techo)
            cout<<"Techo retractil"<<endl;
        else
            cout<<"Sin techo retractil"<<endl;
        if(tipoTecho)
            cout<<"Techo rígido"<<endl;
        else
            cout<<"Techo de piel"<<endl;
    }
    int getAge()
    {
        return 2015-year;
    }
    int getSellPrice()
    {
        int anio;
        anio = getAge();
        anio *= 20;
        anio = anio/100;
        anio *= price;
        price = price-anio;
        cout<<"El precio de venta del vehiculo es de: $"<<price<<" Dolares"<<endl;
        return price;
    }
    void getService()
    {
        if(kilometers<10000)
            cout<<"A este automovil le faltan "<<kilometers-10000<<" para el servicio básico"<<endl;
        if(kilometers>10000 && kilometers<20000)
            cout<<"A este automovil le faltan "<<kilometers-20000<<" para el servicio medio"<<endl;
        if(kilometers>20000 && kilometers<30000)
            cout<<"A este automovil le faltan "<<kilometers-30000<<" para el servicio básico"<<endl;
        if(kilometers>30000 && kilometers<40000)
            cout<<"A este automovil le faltan "<<kilometers-40000<<" para el servicio completo"<<endl;
        if(kilometers>40000 && kilometers<50000)
            cout<<"A este automovil le faltan "<<kilometers-50000<<" para el servicio básico"<<endl;
        if(kilometers>50000 && kilometers<60000)
            cout<<"A este automovil le faltan "<<kilometers-60000<<" para el servicio medio"<<endl;
        if(kilometers>60000 && kilometers<70000)
            cout<<"A este automovil le faltan "<<kilometers-70000<<" para el servicio básico"<<endl;
        if(kilometers>70000 && kilometers<80000)
            cout<<"A este automovil le faltan "<<kilometers-80000<<" para el servicio completo"<<endl;
        if(kilometers>80000 && kilometers<90000)
            cout<<"A este automovil le faltan "<<kilometers-90000<<" para el servicio básico"<<endl;
        if(kilometers>90000 && kilometers<100000)
            cout<<"A este automovil le faltan "<<kilometers-100000<<" para el servicio completo plus"<<endl;
    }
    int getTag()
    {
        return tag;
    }
    string getModelo()
    {
        return model;
    }
    
};