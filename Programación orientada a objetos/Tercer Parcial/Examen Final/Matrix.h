#pragma once
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;


template <class T, class Y>
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
    int findIf(T num, Y metodo);
    int findAdyacent(T num,T num2, Y metodo);
    int mayorQue(int cmp, int n);
    int menorQue(int cmp, int n);
    float negativo(int n);
    int primo(int n);
    int naturalP (int n);
    int circular(int n);
    int circularPrimo(int n);
    friend ostream& operator << (ostream&, Matrix<T,Y>&);
    
};

template <class T, class Y>
Matrix<T, Y>::Matrix()
{
    rows = 1;
    columns = 1;
    matrix = new int * [rows];
    for(int i = 0; i<rows; i++)
        matrix[i] = new int[columns];
}

template <class T, class Y>
Matrix<T, Y>::Matrix(int n)
{
    rows = columns = n;
    matrix = new int * [rows];
    for(int i = 0; i<rows; i++)
        matrix[i] = new int [columns];
}

template <class T, class Y>
Matrix<T, Y>::Matrix(int n, int m)
{
    rows = n;
    columns = m;
    matrix = new int * [rows];
    for(int i = 0; i<rows; i++)
        matrix[i] = new int[columns];
}

template <class T, class Y>
void Matrix<T, Y>::fillRandom()
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

template <class T, class Y>
void Matrix<T, Y>::fillRandom(int n)
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

template <class T, class Y>
void Matrix<T, Y>::fillUser()
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


template <class T, class Y>
void Matrix<T, Y>::transpose()
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


template <class T, class Y>
int Matrix<T, Y>::getRows()
{
    return rows;
}

template <class T, class Y>
int Matrix<T, Y>::getColumns()
{
    return columns;
}


template <class T, class Y>
void Matrix<T, Y>::upper()
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



template <class T, class Y>
void Matrix<T, Y>::lower()
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



template <class T, class Y>
void Matrix<T, Y>::print()
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
template <class T, class Y>
void Matrix<T, Y>::printUpper()
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

template <class T, class Y>
void Matrix<T, Y>::printLower()
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

template <class T, class Y>
void Matrix<T, Y>::operator~()
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

template <class T, class Y>
void Matrix<T, Y>::operator^(int power)
{
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            matrix[i][j]= pow(matrix[i][j],power);
        }
    }
}

template <class T, class Y>
void Matrix<T, Y>::operator()(int mul)
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

template <class T, class Y>
int Matrix<T, Y>::findIf(T num , Y metodo)
{
    num = this->metodo();
    return num;
}


template <class T, class Y>
int Matrix<T,Y>::findAdyacent(T num,T num2, Y metodo)
{
    num = this->metodo();
    num2 =this-> metodo();
    if(num>0)
    {
        if(num2>0)
        {
            cout<<"Ambos numeros son del mismo tipo"<<endl;
        }
    }
}
template <class T, class Y>
int Matrix<T, Y>::mayorQue(int cmp, int n)
{
    if(cmp < n)
    {
        return n;
    }
    return 0;
}

    
template <class T, class Y>
int Matrix<T, Y>::menorQue(int cmp, int n)
{
    if(cmp > n)
    {
        return n;
    }
    return 0;
}
    
template <class T, class Y>
float Matrix<T, Y>::negativo(int n)
{
    if(n<0)
    {
        return n;
    }
}

template <class T, class Y>
int Matrix<T,Y>::primo(int n)
{
    for(int i = n-1; i>1; i--)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return n;
}

template <class T, class Y>
int Matrix <T,Y>::naturalP(int n)
{
    int num;
    for(int i = n-1;i>0; i--)
    {
        if(n%i == 0 )
        {
            num += i;
        }
    }
    if(n == num)
    {
        return num;
    }
    else
    {
        return 0;
    }
}

template <class T, class Y>
int Matrix <T,Y>::circular(int n)
{
    int cmp = n^2;
    int i;
    int j = 0;
    int num = n;
    int k = 1;
    for(i = 0; num>0 ; i++)
    {
        num/=10;
    }
    
    for(int f = 0 ; f<i ; f++)
    {
        j += (cmp%10)*k;
        k*=10;
        cmp/=10;
    }
    if(j == n)
    {
        return n;
    }
    else
    {
        return 0;
    }
}

template <class T, class Y>
int Matrix<T, Y>::circularPrimo(int n)
{
    int i,j, count;
    int num = n;
    for(i = 0; num>0 ; i++)
    {
        num/=10;
    }
    count = i;
    for(num = n ; i>1; i--)
    {
        j =n%10;
        j *=100;
        num/=10;
        num+=j;
        if(this->primo(num))
        {
            count--;
        }
    }
    if(count == 0 )
    {
        return n;
    }
    else
    {
        return 0;
    }
    
}

/*template<class T>
ostream& operator << (ostream& os, Matrix<T,Y>& arre)
{
    for(int i = 0; i<= this->rows; i++)
    {
        for(int j = 0; j<= this->columns; j++)
        {
            cout<<this->matrix[i][j];
        }
    }
}*/
    

