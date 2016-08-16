#include<iostream>
using namespace std;

template<class J>
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
        c = new double(6.4);
        d = new double(7.7);
    }
    
    virtual ~Incremento()
    {
        delete a;
        delete b;
        delete c;
        delete d;
    }
    
    template<class T, class Func>
    void incremento(T value, Func metodo)
    {
        (this->*metodo)() += value;
    }
    
    template<class Q, class W>
     void inc(Q value, W metodo)
     {
        metodo(*this)+=value; 
     }
     
     template<class valor, class objeto, class funcion>
     void incre(valor v, objeto o, funcion f)
     {
        (o->*f)() += v;        
     }

    int& setGetA(){ return *a; }
    int& setGetB(){ return *b; }
    double& setGetC(){ return *c; }
    double& setGetD(){ return *d; }
};

int main()
{
    Incremento<int> i;
    i.incremento<int, int&(Incremento<int>::*)() >(15, &Incremento<int>::setGetA);
    i.incremento(15.33, &Incremento<int>::setGetC);

    i.inc(8.3, [&](Incremento<int>& w) ->double& {
        return w.setGetC();
    });
    
    i.incre(5, &i, &Incremento<int>::setGetA);
    
    cout << i.setGetA() << endl;
    cout << i.setGetC() << endl;
    
    
    return 0;
}