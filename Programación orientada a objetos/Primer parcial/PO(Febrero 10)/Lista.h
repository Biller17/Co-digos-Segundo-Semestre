#include <iostream>
#pragma once
using namespace std;


template <class T>//Hace que la clase sea una plantilla
class Lista
{
private:
    T*container;
    int size;
    int numElems;//las variables se le llaman atributos en la clase
    
    
    int search(T value);//funciona para buscar la posicion de un valor
    void recorrerElementos(int pos);//funcion para recorrer los elementos en el arreglo
public:
    Lista();//Default
    Lista(int sizeP);//constructor
    Lista(const Lista& original);//Copia del constructor
    ~Lista();//destructor
    int getSize();
    void addElement(T element);
    void print();
    void deleteLast();
    void deleteElement(T value);
    void deletePos(int pos);
    
};

//***************Implementacoin de los metodos********(esto solo funciona cuando las clases son plantillas)
//normalmente esto se pone en un cpp pero como hay plantillas se pone aqui

template <class T>//Se tiene que poner a todos que la clase es una plantilla
Lista<T>::Lista()//Definicion del constructor y se pone de que tipo es la lista
{
    container = new T[10];//se define el arreglo de tipo de la plantilla
    size = 10;
    numElems = 0;
}

template <class T>
Lista <T>::Lista (int sizeP)
{
    size = sizeP;
    //this->size = sizeP;   (this->)sirve para apuntar a la clase
    container  = new T[size];
    numElems = 0;
    
}

template <class T>
Lista <T>::Lista(const Lista& original)
{
    container = new T[original.getSize()];
    size = original.getSize();
    numElems = 0;
}

template <class T>
int Lista<T>::getSize()
{
    return size;
}


template <class T>//este es el destructor
Lista<T>::~Lista()
{
    delete []container;//se deben poner los corchetes para saber que tiene que borrar un arreglo, si no entonces solo va a borrar la primera direccion
}


template <class T>
void Lista<T>::addElement(T element)
{
    container[numElems] = element;
    numElems ++;
    if(numElems == size)//esto es por si ya no hay espacio para mas elementos y se crea mas espacio en la memoria
    {
        T* nuevoCont = new T[size + 10];
        for(int i = 0; i < numElems; i++)
        {
            nuevoCont[i] = container[i];
        }
        delete [] container;
        container = nuevoCont;//se asigna el apuntador container al nuevo arreglo de nuevoCont
        size += 10;
    }
}


template <class T>
void Lista<T>::print()
{
    for(int i = 0; i < numElems; i ++)
    {
        cout<<container[i]<<" ";
    }
}


template <class T>
void Lista<T>::deleteLast()//es para eliminar el ultimo valor
{
    if(numElems >= 1)//antes eran 10 elementos pero se hace esto y ahora son 9
        numElems--;
}

template <class T>
void Lista<T>::deleteElement(T value)
{
    int pos = search(value);
    recorrerElementos(pos);

}


template <class T>
void Lista<T>::deletePos(int pos)
{
    recorrerElementos(pos);
}

template <class T>
int Lista<T>::search(T value)
{
    for(int i = 0;i < numElems; i++)
    {
        if(container[i] == value)
        {
            return i;
        }
    }
    return -1;
}


template <class T>
void Lista <T>::recorrerElementos(int pos)
{
    if(pos >= 0 && pos <= numElems)
    {
        for(int i = pos; i < (numElems-1); i ++)//un for que mueve las posiciones de los numeros
        {
            container[i] = container[i+1];
        }
        numElems--;
    }
    else
    {
        cout<<endl<<"El elemento no existe"<<endl;
    }
    
}









