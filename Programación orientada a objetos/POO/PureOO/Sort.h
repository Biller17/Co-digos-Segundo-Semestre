#pragma once

#include "Collection.h"
#include "Comparable.h"
#include "stdlib.h"

template<class T>
class Sort
{
public:
    virtual Collection<T>& sort(Collection<T>& col)  = 0;
};