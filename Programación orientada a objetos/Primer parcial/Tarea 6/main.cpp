//Adrián Biller A01018940

#include "Lavadora.h"

int main ()
{
    int peso, carga, consumo;
    string color;
    
    Lavadora lblanca;
    
    
    cout<<"Ingrese las especificaciones de su lavadora"<<endl;
    cout<<"Peso"<<endl;
    cin>>peso;
    cout<<"Carga"<<endl;
    cin>>carga;
    cout<<"Consumo electrico"<<endl;
    cin>>consumo;
    cout<<"Color"<<endl;
    cin>>color;
    Lavadora(peso,carga,consumo,color);
    
    
    
    return 0;
}