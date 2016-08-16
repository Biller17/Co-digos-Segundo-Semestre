//Adrian Biller A01018940
//Tarea 2
#include <iostream>
template <class A, class B>
A suma (A a, B b)
{
    return a+b;
}


template <class C, class D>
C resta (C a, D b)
{
    return a - b;
}

template <class A, class B>
A multiplicacion (A a, B b)
{
    return a * b;
}

template <class C, class D>
C division (C a, D b)
{
    return a / b;
}

template <class A, class B>
A potencia (A a, B b)
{
    while (b>1)
    {
        a*=a;
        b--;
    }
    return a;
}

template <class C>
C raiz (C a)
{
    double r=a, t=0;
    while(t!=r)
    {
        t=r;
        r=(a/r+r)/2;
    }
    return r;
}


int main ()
{
    double numero1, numero2;
    int repetir=1;
    int a;
    while(repetir==1)
    {
        std::cout<<"Ingrese el primer numero(Puede ser real o entero): ";
        std::cin>>numero1;
        std::cout<<"Ingrese el segundo numero (Puede ser real o entero): ";
        std::cin>>numero2;
        std::cout<<"Que operacion desea realizar?\n 1.Suma\n 2.Resta\n 3.Multiplicacion\n 4.Division\n 5.Potencia\n 6.Raiz\n";
        std::cin>>a;
        switch (a)
        {
            case 1:
                std::cout<<"Suma:"<<suma(numero1,numero2)<<"\n";
                break;
            case 2:
                std::cout<<"Resta:"<<resta(numero1,numero2)<<"\n";
                break;
            case 3:
                std::cout<<"Multiplicacion:"<<multiplicacion(numero1,numero2)<<"\n";
                break;
            case 4:
                std::cout<<"Division:"<<division(numero1,numero2)<<"\n";
                break;
            case 5:
                std::cout<<"Potencia:"<<potencia(numero1,numero2)<<"\n";
                break;
            case 6:
                std::cout<<"Raiz:"<<raiz(numero1)<<"\n";
                break;
            default:
                std::cout<<"Lo siento, la opcion"<<a<<" no existe\n";
            
        }
        std::cout<<"¿Desea hacer otra operacion?(si=1/no=0)";
        std::cin>>repetir;
    }
    return 0;
}
