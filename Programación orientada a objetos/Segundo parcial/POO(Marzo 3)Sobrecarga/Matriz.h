#include <iostream>
#pragma once
using namespace std;
template <class T>

class Matriz
{
    T** data;
    int row;
    int col;
    class Inner
    {
        T* array;
    public:
        Inner(){}//constructor por default
        
        Inner(T* _array)
        {
            array = _array;
        }
        
        T& operator[](int index)
        {
            return array [index];
        }
        
    };
public:
    Matriz()
    {
        data = new T*[5];
        for(int i = 0; i < 5; i ++)
        {
            data[i] = new T[5];
            for(int j = 0; j<5; j++)
            {
                data[i][j]=1;
            }
        }
    }
    void print()
    {
        for(int i = 0; i < 5;i++)
        {
            for(int j = 0; j<5; j++)
            {
                cout<< data[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    Inner operator[](int index)
    {
        return Inner(data[index]);
    }
};