#include <iostream>
using namespace std;


void searchShort(short *maxShort, short *minShort)
{
    while(*maxShort>0)
    {
        *maxShort = *maxShort+1;
    }
    if(*maxShort<0)
        *minShort=*maxShort;
    (*maxShort)--;
    
}
void searchInt(int *maxInt, int *minInt)
{
    while(*maxInt>0)
    {
        *maxInt = *maxInt+1;
    }
    if(*maxInt<0)
        *minInt = *maxInt;
    (*maxInt)--;
}

void searchLong(long *maxLong, long *minLong)
{
    while(*maxLong>0)
    {
        *maxLong = *maxLong+1;
    }
    if(*maxLong<0)
        *minLong = *maxLong;
    (*maxLong)--;
}

int main()
{
    short *maxShort= new short;
    *maxShort = 32000;
    short *minShort = new short;
    int *maxInt = new int;
    *maxInt = 2147483000;
    int *minInt = new int;
    long *maxLong = new long;
    *maxLong = 2147483000;
    long *minLong = new long;
    
    
    searchShort(maxShort, minShort);
    cout<<"Máximo de un short:"<<*maxShort<<"\n";
    cout<<"Mínimo de un short:"<<*minShort<<"\n";
    searchInt(maxInt, minInt);
    cout<<"Máximo de un int:"<<*maxInt<<"\n";
    cout<<"Mínimo de un int:"<<*minInt<<"\n";
    searchLong(maxLong, minLong);
    cout<<"Máximo de un long:"<<*maxLong<<"\n";
    cout<<"Mínimo de un long:"<<*minLong<<"\n";
    
    return 0;
}