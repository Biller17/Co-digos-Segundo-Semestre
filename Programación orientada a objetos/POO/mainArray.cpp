#include "Arreglo.h"
int main()
{
    int size = 10;
    Arreglo<int> miArray(size);
    
    for (int i = 0; i < size; i++) 
    {
        miArray[i] = i+1;
    }
    
    cout << miArray << endl;
    
    miArray(5);   //Esto es posible grax a la sobrecarga de los (). En esta caso significan que cada elemento lo multiplico por 5
    
    return 0;
}