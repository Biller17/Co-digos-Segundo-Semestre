//Adrián Biller A01018940

#include <iostream>
using namespace std;


template <class A>
A porcentaje(A a)
{
    int p = a*0.50;
    return a+=p;
}

int main ()
{
    double num1;
    float num2;
    long num3;
    int num4;
    short num5;
    int tipo;
    cout<<"Tipo de variable: 1)double\n 2)float\n 3)long\n 4)int\n 5)short\n";
    cin>>tipo;
    switch(tipo)
    {
        case 1:
            cout<<"Que numero desea usar";
            cin>>num1;
            porcentaje(num1);
            break;
        case 2:
            cout<<"Que numero desea usar";
            cin>>num2;
            cout<<porcentaje(num2);
            break;
        case 3:
            cout<<"Que numero desea usar";
            cin>>num3;
            cout<<porcentaje(num3);
            break;
        case 4:
            cout<<"Que numero desea usar";
            cin>>num4;
            cout<<porcentaje(num4);
            break;
        case 5:
            cout<<"Que numero desea usar";
            cin>>num5;
            cout<<porcentaje(num5);
            break;
    }
    
    return 1;
}