#pragma once
#include <iostream>

class Copy
{
private:
    int* pointer;
    int size;
    
public:
    Copy()
    {
        pointer = new int [10];
        size = 10;
    }
    
    Copy& llamadaACopy(Copy &c) //si se pone & significa que esta modificando el original
    {
        Copy z = c;
        return z;
    }
  
    Copy(const Copy& original)
    {
        size = original.getSize();
        pointer = new int [size];
        for(int i = 0; i<size; i++)
        {
            pointer [i] = original[i];
        }
        std::cout<<"copy constructor"<<std::endl;
    }
    
    
    //sobrecarga corchetes
    
    int&/*significa que devuelve un entero por referencia*/ operator [](int index)const
    {
        return pointer[index];
    }
    
    void setSize(int size)
    {
        this-> size = size;
    }
    int getSize() const//para que nohaya problema con el copy porque la copia es constante
    {
        return size;
    }
    /*int getSize()
    {
        size ++;
        return size;
    }*/
};