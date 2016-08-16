#include <iostream>
using namespace std;


int sumaArray(int **arr,int size, int *sum)
{
    *arr = new int [size];
    int count;
    for(count = 0 ; count < size; count ++)
    {
        *sum += *(arr+count);
    }
    return 0;
}

int maxminValues(int **arr2, int size, int *maxNum, int *minNum)
{
    *arr2 = new int [size];
    int count;
    for(count = 0; count< size; count ++ )
    {
        if((**arr2)>(*maxNum))
        {
            *maxNum = **arr2;
        }
        else if((**arr2)<(*minNum))
        {
            *minNum = **arr2;
        }
    }
    return 0;
}

int inversion(int **arr3, int size, int **arr4)
{
    *arr3 = new int [size];
    *arr4 = new int [size];
    int count;
    for(count = 0; count<size; count++)
    {
        *(*arr4+size-count)= *(*arr3+count)*1000;
        
    }
    return 0;
}

int main ()
{
    int arraySize = 6;
    int **arr;
    int *sum = new int;
    *sum = 0;
    int **arr2;
    int *maxNum;
    int *minNum;
    int **arr3;
    int **arr4;
    cout<<sumaArray(arr,arraySize,sum);
    maxminValues(arr2, arraySize, maxNum, minNum);
    cout<<"El valor máximo es:"<<maxNum<<"\n";
    cout<<"El valor mínimo es:"<<minNum<<"\n";
    inversion(arr3, arraySize, arr4);
    
    return 1;
}
