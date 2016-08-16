#include "Matrix.h"
#include <iostream>
using namespace std;

int main()
{
    Matrix<int> m;
    
    m[0][0] = 22;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++) {
            cout << m[i][j]<< " ";
        }
        cout << endl;
    }
    
    return 0;
}