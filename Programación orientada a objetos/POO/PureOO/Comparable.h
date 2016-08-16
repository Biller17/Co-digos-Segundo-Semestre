#pragma once

template<class T>
class Comparable
{
public:
    //El default será mayor que
    virtual bool compare(const T&, const T&);  
};

template<> 
bool Comparable<int>::compare(const int& a, const int& b)
{
    return a < b;
}