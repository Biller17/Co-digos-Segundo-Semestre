#pragma once

template<class T>
class Collection
{
protected:
    int* size;

public:
    Collection();
    Collection(int size);
    Collection(const Collection& col);
    virtual ~Collection();

    virtual T& at(int index) = 0;
    
    int& getSetSize();
};

//Empiezan las implementaciones ////////////////////////////////////////////////////////
template<class T>
int& Collection<T>::getSetSize(){ return *size; }

template<class T>
Collection<T>::Collection() : size(new int(1)) {}

template<class T>
Collection<T>::Collection(int size) : size(new int(size)) {}

template<class T>
Collection<T>::Collection(const Collection& orig) : size(new int(orig.size)){}

template<class T>
Collection<T>::~Collection(){ delete size; }
