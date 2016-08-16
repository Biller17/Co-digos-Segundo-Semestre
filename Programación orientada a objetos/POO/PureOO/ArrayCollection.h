#pragma once

template<class T>
class ArrayCollection : public Collection<T>
{
protected:
    T* array;

public:
    ArrayCollection();
    ArrayCollection(int size);
    ArrayCollection(const ArrayCollection<T>& orig);
    ~ArrayCollection();

    T& at(int index);
};

// Aqu[i empiezan las implementaciones ////////////////////////////////////////////////////////
template<class T>
ArrayCollection<T>::ArrayCollection() : Collection<T>() {}

template<class T>
ArrayCollection<T>::ArrayCollection(int size) : Collection<T>(size), array(new T[size]) {}

template<class T>
ArrayCollection<T>::ArrayCollection(const ArrayCollection<T>& orig) : Collection<T>(orig.size), array(new T[orig.size])
{
    for (int i = 0; i < orig.size; i++)
    {
        array[i] = orig.array[i];
    }
}

template<class T>
ArrayCollection<T>::~ArrayCollection()
{
    delete [] array;
}

template<class T>
T& ArrayCollection<T>::at(int index){ return array[index]; }
