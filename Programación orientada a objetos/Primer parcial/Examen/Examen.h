#include <iostream>
#pragma once
using namespace std;


template <class T>
class Rules
{
public:
    T*container;
    T*notFollowcont;
    int size;
    int elements;
    Rules();
    Rules(int size);
    Rules(const Rules& original);
    ~Rules();
    void print();
    int notFollow(T rule);
    void reduce ();
    int find (T value);
    void printNotFollow();
    void recorrer(int pos);
    
};

template <class T>
Rules<T>::Rules()
{
    int num = 1;
    T rule;
    cout<<"Este es el constructor default"<<endl;
    cout<<"Cuantas reglas son?"<<endl;
    cin>>size;
    container = new T[size];
    for(elements = 0; elements<size; elements++)
    {
        cout<<"Ingrese el elemento "<<num<<endl;
        cin>>rule;
        container[elements] = rule;
        num++;
    }
}

template <class T>
Rules<T>::Rules(int size)
{
    int num = 1;
    T rule;
    container = new T[size];
    cout<<"Este es el constructor por parametros"<<endl;
    cout<<"Son 10 reglas predeterminadas, ingrese las reglas"<<endl;
    for(elements = 0; elements<size; elements++)
    {
        cout<<"Ingrese el elemento "<<num<<endl;
        cin>>rule;
        container[elements] = rule;
        num++;
    }
    print();

}

template <class T>
Rules<T>::Rules(const Rules& original)
{
    int num = 1;
    T rule;
    cout<<"Este es el constructor copia"<<endl;
    cout<<"Son 10 reglas predeterminadas, ingrese las reglas"<<endl;
    for(elements = 0; elements<size; elements++)
    {
        cout<<"Ingrese el elemento "<<num<<endl;
        cin<<rule;
        container[elements] = rule;
        num++;
    }
    print();
}


template <class T>
int Rules<T>::notFollow(T rule)
{
    notFollowcont = new T[elements];
    int num = 0;
    for(int i = 0; i <= elements; i ++)
    {
        if(rule == container[i])
        {
            notFollowcont[num] = container[i+1];
            num++;
        }
    }
    printNotFollow();
    reduce();
    
    return 1;
}

template <class T>
void Rules<T>::reduce()
{
    int pos;
    for(int i=0; i<elements; i++)
    {
        pos = find(notFollowcont[i]);
        recorrer(pos);
    }    
}

template <class T>
void Rules<T>::recorrer(int pos)
{
    if(pos >= 0 && pos <= elements)
    {
        for(int i = pos; i < (elements-1); i ++)
        {
            container[i] = container[i+1];
        }
        elements--;
    }

}


template <class T>
int Rules<T>::find(T value)
{
    for(int i = 0; i < elements; i ++)
    {
        if (container[i]== value)
        {
            return i;
        }
    }
    return -1;
}

template <class T>
void Rules<T>::print()
{
    cout<<"Sus elementos son: "<<endl;
    for(int i = 0; i<=elements; i++)
    {
        cout<<container[i]<<" ";
    }
}

template <class T>
void Rules<T>::printNotFollow()
{
    cout<<"Sus elementos son: "<<endl;
    for(int i = 0; i<=elements; i++)
    {
        cout<<notFollowcont[i]<<" ";
    }
}
template <class T>
Rules<T>::~Rules()
{
    delete []container;
}

