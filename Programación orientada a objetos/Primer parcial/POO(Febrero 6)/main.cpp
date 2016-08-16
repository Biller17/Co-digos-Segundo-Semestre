#include "Circulo.h"

int main()
{
    double* pi = new double;
    
    *pi  = 3.1416;
    
    Circulo c = Circulo(34.4,pi);
    
    cout<< c.getArea()<<endl;
    
    Circulo d = c;
    
    cout<<d.getArea();
    
    return 0;
}