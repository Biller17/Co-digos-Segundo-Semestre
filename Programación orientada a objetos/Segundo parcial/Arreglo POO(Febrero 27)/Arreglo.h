#pragma once 
#include <ostream>
using namespace std;




template <class T, class Q>
class Arreglo
{
private:
    T*arr;
    int size;
    
public:
    Arreglo(int size);
    Arreglo();
    Arreglo(Arreglo&);
    ~Arreglo();
    
    friend ostream& operator << (ostream&, Arreglo&);
    T operator [](int index);
};

ostream& operator << (ostream&, Arreglo& arr)
{
    
    for(int i = 0; i < count; i++)
    {
        os<<arr[i]<<" ";
    }
    return os;
}