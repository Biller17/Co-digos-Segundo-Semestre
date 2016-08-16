#pragma once 
#include <iostream>
using namespace std;


template <class J>
class Incremento
{
protected:
    int *a;
    int *b;
    double *c;
    double *d;
    
public:
    Incremento()
    {
        a = new int(4);
        b = new int(5);
        c = new double(5.4);
        d = new double(6.7);
    }
    
    virtual ~Incremento()
    {
        delete a;
        delete b;
        delete c;
        delete d;
        
    }
    template <class T, class Func>
    void incremento(T value, Func metodo)
    {
        
        (this->*metodo)()+=value; //this es el apuntador a la instancia actual
    }
    
    template <class Q, class W>
    void inc(Q value, W metodo)
    {
        metodo(*this) += value;
    }
    
    int& setGetA()
    {
        return *a;
    }
    int& setGetB()
    {
        return *b;
    }
    double& setGetC()
    {
        return *c;
    }
    double& setGetD()
    {
        return *d;
    }
    
};

template <class T>
int& aplica (Incremento<T> i)
{
    return i.setGetA();
}













