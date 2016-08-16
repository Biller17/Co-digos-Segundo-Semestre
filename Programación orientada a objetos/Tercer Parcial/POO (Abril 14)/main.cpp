#include "Incremento.h"

int main ()
{
    Incremento<int> i;
    i.incremento(3, &Incremento<int>::setGetA);
    i.incremento(15.46, &Incremento<int>::setGetC);
    cout<<"A: "<<i.setGetA()<<endl;
    cout<<"C: "<<i.setGetC()<<endl;
    
    // si el compilador pide que se especifique el tipo de plantilla
    i.incremento<int,int&(Incremento<int>::*)()>(6, &Incremento<int>::setGetB);
    cout<<"B: "<<i.setGetB()<<endl;
    

    
    
    i.inc(8,aplica);
    return 0;
    
    
    
    //funcion lamda SE PONEN DENTRO DE LA FUNCION
    [](int a)->int& //el & despues significa que regresa un valor por referencia
    {
        return a+5;
    }
}