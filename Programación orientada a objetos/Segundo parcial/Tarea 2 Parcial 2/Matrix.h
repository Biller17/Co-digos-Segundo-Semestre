#pragma once
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;


template <class T>
class Matrix
{
private:
    T** matrix;
    T** matrixTransposed;
    T** uMatrix;
    T** lMatrix;
    int rows;
    int columns;
    
public:
    Matrix();
    Matrix(int n);
    Matrix(int n, int m);
    void fillRandom();
    void fillRandom(int n);
    void fillUser();
    void upper();
    void lower();
    void transpose();
    void print();
    int getRows();
    int getColumns();
    void printUpper();
    void printLower();
    //T** operator + (Matrix& matrix);
    void operator~();
    void operator^(int power);
    void operator()(int mul);
};

template <class T>
Matrix<T>::Matrix()
{
    rows = 2;
    columns = 2;
    matrix = new int * [rows];
    for(int i = 0; i<rows; i++)
        matrix[i] = new int[columns];
}

template <class T>
Matrix<T>::Matrix(int n)
{
    rows = columns = n;
    matrix = new int * [rows];
    for(int i = 0; i<rows; i++)
        matrix[i] = new int [columns];
}

template <class T>
Matrix<T>::Matrix(int n, int m)
{
    rows = n;
    columns = m;
    matrix = new int * [rows];
    for(int i = 0; i<rows; i++)
        matrix[i] = new int[columns];
}

template <class T>
void Matrix<T>::fillRandom()
{
    int randomNumber;
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            randomNumber = rand();
            matrix[i][j] = randomNumber;
        }
    }
}

template <class T>
void Matrix<T>::fillRandom(int n)
{
    int randomNumber;
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            randomNumber = rand()%n+1;
            matrix[i][j] = randomNumber;
        }
    }
}

template <class T>
void Matrix<T>::fillUser()
{
    int user;
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            cout<<"Posicion ("<<i<<","<<j<<"): ";
            cin>>user;
            matrix[i][j] = user;
        }
    }
    
}


template <class T>
void Matrix<T>::transpose()
{
    int rowsT = columns;
    int columnsT = rows;
    matrixTransposed = new int * [rowsT];
    for(int i = 0; i<rowsT; i++)
        matrixTransposed[i] = new int [columnsT];
    cout<<"Matriz traspuesta: "<<endl<<endl;
    for(int i = 0; i<rowsT; i++)
    {
        for(int j = 0; j<columnsT; j++)
        {
            matrixTransposed[i][j] = matrix[j][i];
        }
    }
    for(int i = 0; i<rowsT; i++)
    {
        for(int j = 0; j<columnsT; j++)
        {
            cout<<matrixTransposed[i][j]<<"   ";
        }
        cout<<endl;
    }
}


template <class T>
int Matrix<T>::getRows()
{
    return rows;
}

template <class T>
int Matrix<T>::getColumns()
{
    return columns;
}


template <class T>
void Matrix<T>::upper()
{
    int rows_= getRows();
    int columns_=getColumns();
    uMatrix = new int * [rows_];
    for(int i = 0; i<rows_; i++)
        uMatrix[i] = new int[columns_];
    for(int i = 0; i<rows_; i++)
    {
        for(int j= 0; j<columns_ ; j++)
        {
            uMatrix[i][j] = matrix[i][j];
        }
    }
    for(int i = 0; i<rows_; i++)
    {
        for(int j= 0; j<i ; j++)
        {
            uMatrix[i][j] = 0;
        }
    }
    printUpper();
}



template <class T>
void Matrix<T>::lower()
{
    int rows_= getRows();
    int columns_=getColumns();
    lMatrix = new int * [rows_];
    for(int i = 0; i<rows_; i++)
        lMatrix[i] = new int[columns_];
    for(int i = 0; i<rows_; i++)
    {
        for(int j= 0; j<columns_ ; j++)
        {
            lMatrix[i][j] = matrix[i][j];
        }
    }
    for(int i = 0; i<rows_; i++)
    {
        for(int j= 0; j<i ; j++)
        {
            lMatrix[j][i] = 0;
        }
    }
    printLower();
}



template <class T>
void Matrix<T>::print()
{
    cout<<"Matriz Original: "<<endl<<endl;
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            cout<<matrix[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;

}
template <class T>
void Matrix<T>::printUpper()
{
    cout<<"Matriz Upper: "<<endl<<endl;
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            cout<<uMatrix[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
    delete []uMatrix;

}

template <class T>
void Matrix<T>::printLower()
{
    cout<<"Matriz Lower: "<<endl<<endl;
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            cout<<lMatrix[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
    delete[]lMatrix;
    
}


/*template <class T>
T** Matrix<T>::operator + (Matrix& arr)
{
    T** sum;
    matrix = new int * [rows];
    for(int i = 0; i<rows; i++)
        matrix[i] = new int [columns];
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            cout<<sum[i][j]=arr[i][j]+matrix[i][j]<<"   ";
        }
        cout<<endl;
    }

    
}*/

template <class T>
void Matrix<T>::operator~()
{
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            matrix[i][j]*=(-1);
        }
    }
    cout<<"Matriz negativa: "<<endl<<endl;
    for(int i = 0; i<rows; i++)
    {//
        for(int j = 0; j<columns; j++)
        {
            cout<<matrix[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;

    
}

template <class T>
void Matrix<T>::operator^(int power)
{
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            matrix[i][j]= pow(matrix[i][j],power);
        }
    }
}

template <class T>
void Matrix<T>::operator()(int mul)
{
    cout<<"Matriz multiplicada: "<<endl<<endl;
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            cout<<(matrix[i][j] *=mul)<<"   ";
        }
        cout<<endl;
    }
}













