#pragma once
#include <iostream>

using namespace std;

template<class T>
class Arreglo
{
private:    
    T* arr;
    int size;
    
public:
    Arreglo(int size);
    Arreglo();
    Arreglo(Arreglo&);
    
    ~Arreglo();
    
    int getSize();
    
    template<class Q>
    friend ostream& operator << (ostream&, Arreglo<Q>&);
    T& operator [] (int index);
    void operator()(int mult);
};

template<class T>
Arreglo<T>::Arreglo(int size)
{
    arr = new T[size];
    this->size = size;
}

template<class T>
Arreglo<T>::Arreglo()
{
    arr = new T[1];
    size = 1;
}

template<class T>
Arreglo<T>::Arreglo(Arreglo& original)
{
    size = original.getSize();
    arr = new T[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = original[i];  // Esto es posible grax a la sobrecarga de los []
    }
}
    
template<class T>
Arreglo<T>::~Arreglo()
{
    delete [] arr;   
}

template<class T>
int Arreglo<T>::getSize()
{
    return size;
}

template<class T>
ostream& operator << (ostream& os, Arreglo<T>& arre)
{
    for (int i = 0; i < arre.size; i++) 
    {
        //os << arre.arr[i] << " ";  //Esto fue lo que puse en clase pero es mejor la siguiente línea
        os << arre[i] << " ";  //Esto es posible grax a la sobrecarga de los []
    }
    return os;
}

template<class T>
T& Arreglo<T>::operator [] (int index)
{
    return arr[index];
}

template<class T>
void Arreglo<T>::operator()(int mult)
{
    for (int i = 0; i < size; i++)
    {
        cout << (arr[i] * mult) << " ";    
    }
}
