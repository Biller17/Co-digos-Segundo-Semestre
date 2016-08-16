//Adrian Biller A01018940

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int grid(int c, int f)
{
    int col, fil, var;
    int num = ((c/4)*f);
    int grid [f][c];
    for(fil=0;fil<f;fil++)
    {
        for(col=0;col<c;col++)
        {
            grid [fil][col] = rand()%10;
            cout<<grid[fil][col]<<" ";
        }
        cout<<"\n";
    }
    
    for(fil=0;fil<f;fil++)
    {
        for(col=0;col< c-3; col++)
        {
            var = (grid[fil][col])*1000 + (grid[fil][col+1])*100 + (grid[fil][col+2]*10)+grid[fil][col+3];
        }
        cout<<"numero"<<fil<<" "<<var<<"\n";
        
    }
    
    return 0;
}

int main()
{
    int filas,columnas;
    srand(time(NULL));
    cout<<"Numero de filas";
    cin>>filas;
    cout<<"Numero de columnas";
    cin>>columnas;
    grid(columnas, filas);
    return 0;
}
