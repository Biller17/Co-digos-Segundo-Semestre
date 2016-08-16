#pragma once
#include <iostream>

using namespace std;

template <class T>
class Lista
{
protected:
	T* container;
	int size;
	int numElems;

public:
	Lista();
	Lista(int sizeParametro);
	Lista(const Lista& original);
	~Lista();
	int getSize();
	void imprimirElementos();
	void addElement(T element);
	void deleteLast();
	void deletePos(int pos);
	void sortYear();
	void sortYear2();
	void sortPrice();
	void sortPrice2();
	void print();
	void printWithId(int id);
	void borrar(string _name);
	void recorrerElementos(int pos);
	int search(int id);
	int search(string name_);
	friend ostream& operator << (ostream& os, Lista &container);
	T& at(int index);

	template <class Param, class Func>
	int searchAll(Param value, Func metodo)
	{
		for (int i = 0; i < numElems; i++)
		{
			if ((container[i]->*metodo)() == value)
			{
				return i;
			}
		}
		return -1;
	};

	template <class Param, class Choice>
	void sortChoice(Param metodo, Choice eval)
	{
		bool done = false;
		T temp;

		while (done == false)
		{
			//Metodo Bubblesort
			for (int i = 0; i < numElems - 1; i++)
			{
				//if ((container[i]->*metodo)() < (container[i+1]->*metodo)())
				if (eval((container[i]->*metodo)(), (container[i + 1]->*metodo)()))
				{
					temp = *(container + i);
					*(container + i) = *(container + i + 1);
					*(container + i + 1) = temp;
					done = false;
					break;
				}
				done = true;
			}
		}
	}

	template <class Func>
	void sortAll(Func metodo)
	{
		bool done = false;
		T temp;

		while (done == false)
		{
			//Metodo Bubblesort
			for (int i = 0; i < numElems - 1; i++)
			{
				if ((container[i]->*metodo)() < (container[i+1]->*metodo)())
				{
					temp = *(container + i);
					*(container + i) = *(container + i + 1);
					*(container + i + 1) = temp;
					done = false;
					break;
				}
				done = true;
			}
		}
	}
};

template <class T>
Lista<T>::Lista()
{
	container = new T[10];
	size = 10;
	numElems = 0;
}

template <class T>
Lista<T>::Lista(int sizeParametro)
{
	size = sizeParametro;
	container = new T[size];
	//this->size = sizeParametro;
	numElems = 0;
}

template <class T>
Lista<T>::Lista(const Lista& original)
{
	container = new T[original.getSize()];
	size = original.getSize();
	numElems = 0;
}

template <class T>
Lista<T>::~Lista()
{
	delete[] container;
}

template <class T>
int Lista<T>::getSize()
{
	return size;
}

template <class T>
void Lista<T>::imprimirElementos()
{
	cout << "El numero de elementos son: " << numElems << endl << endl;
}

//Agregar Elementos
template <class T>
void Lista<T>::addElement(T element)
{
	if (numElems == size)
	{
		size = size + 10;
		T * nuevoCont = new T[size];
		for (int i = 0; i < numElems; i++)
		{
			nuevoCont[i] = container[i];
		}
		delete[] container;
		container = nuevoCont;
	}

	container[numElems] = element;
	numElems++;
}

template <class T>
void Lista<T>::deletePos(int pos)
{
	recorrerElementos(pos);
}

template <class T>
void Lista<T>::recorrerElementos(int pos)
{
	if (pos >= 0)
	{
		for (int i = pos; i < (numElems - 1); i++)
		{
			container[i] = container[i + 1];
		}
		numElems--;
	}
	else
	{
		cout << endl << "El elemento no existe" << endl;
	}
}

//Sort la lista
template <class T>
void Lista<T>::sortYear()
{
	bool done = false;
	T temp;

	while (done == false)
	{
		//Metodo Bubblesort
		for (int i = 0; i < numElems - 1; i++)
		{
			if (container[i]->getYear() < container[i + 1]->getYear())
			{
				temp = *(container + i);
				*(container + i) = *(container + i + 1);
				*(container + i + 1) = temp;
				done = false;
				break;
			}
			done = true;
		}
	}
}

template <class T>
void Lista<T>::sortYear2()
{
	bool done = false;
	T temp;

	while (done == false)
	{
		//Metodo Bubblesort
		for (int i = 0; i < numElems - 1; i++)
		{
			if (container[i]->getYear() > container[i + 1]->getYear())
			{
				temp = *(container + i);
				*(container + i) = *(container + i + 1);
				*(container + i + 1) = temp;
				done = false;
				break;
			}
			done = true;
		}
	}
}

template <class T>
void Lista<T>::sortPrice()
{
	bool done = false;
	T temp;

	while (done == false)
	{
		//Metodo Bubblesort
		for (int i = 0; i < numElems - 1; i++)
		{
			if (container[i]->getCost() < container[i + 1]->getCost())
			{
				temp = *(container + i);
				*(container + i) = *(container + i + 1);
				*(container + i + 1) = temp;
				done = false;
				break;
			}
			done = true;
		}
	}
}

template <class T>
void Lista<T>::sortPrice2()
{
	bool done = false;
	T temp;

	while (done == false)
	{
		//Metodo Bubblesort
		for (int i = 0; i < numElems - 1; i++)
		{
			if (container[i]->getCost() > container[i + 1]->getCost())
			{
				temp = *(container + i);
				*(container + i) = *(container + i + 1);
				*(container + i + 1) = temp;
				done = false;
				break;
			}
			done = true;
		}
	}
}

//Funciones para Imprimir
template <class T>
void Lista<T>::print()
{
	for (int i = 0; i < numElems; i++)
		container[i]->printMe();
}

template <class T>
void Lista<T>::deleteLast()
{
	if (numElems >= 1)
		numElems--;
}

//Funciones de search
template <class T>
int Lista<T>::search(int year)
{
	for (int i = 0; i < numElems; i++)
	{
		if (year == container[i]->getYear())
			return i;
	}
	return -1;
}

template <class T>
int Lista<T>::search(string name_)
{
	for (int i = 0; i < numElems; i++)
	{
			if (container[i]->getModel() == name_)
			{
				return i;
			}
	}
	return -1;
}

template <class T>
void Lista<T>::printWithId(int id)
{
	for (int i = 0; i < numElems; i++)
	{
		if (id == container[i]->getId())
			container[i]->printMe();
	}
}

/*//Delete element
template <class T>
void Lista<T>::borrar(string _name)
{
	int pos = search(_name);

	recorrerElementos(pos);
}
*/


