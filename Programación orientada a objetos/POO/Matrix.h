#include <iostream>
using namespace std;

template<class T>
class Matrix
{
private:
    T** mat;
    
    class Proxy
    {
        T* array;
    public: 
        Proxy(T*& array)
        {
            this->array = array;
        }
        T& operator [](int index)
        {
            return array[index];
        }
    };
    
public:
    Matrix()
    {
        mat = new T*[5];
        for(int i=0; i<5;i++)
        {
            mat[i] = new T[i];
            for (int j = 0; j < 5; j++)
            {
                mat[i][j]=i+j;
            }
        }
    }
    Proxy operator[](int index)
    {
         return Proxy(mat[index]); 
    }
    
};
