#pragma once

#include "Sort.h"
#include <iostream>
using namespace std;

template<class T>
class Insertion : public Sort<T>
{
private:
    void swap(Collection<T>& col, int pivot, int j)
    {
        T temp;
        temp = col.at(j);
        col.at(j) = pivot;
        col.at(j+1) = temp;
    }
    
public:
    Collection<T>& sort(Collection<T>& col)
    {
        T pivot;
        for(int i=1; i<col.getSetSize(); i++)
        {
            pivot = col.at(i);
            for(int j=i-1; j>=0; j--)
            {
                if(pivot < col.at(j))
                {
                    swap(col, pivot, j);           
                }
            }
        }
    }
};