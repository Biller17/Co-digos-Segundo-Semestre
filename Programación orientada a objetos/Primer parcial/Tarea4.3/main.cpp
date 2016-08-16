#include <iostream>


void reservaMemoria(int **pointer, int size)
{
    *pointer = new int [size];
}
int main()
{
    int espaciosMemoria = 10;
    int **pointer;
    reservaMemoria(pointer, espaciosMemoria);
    return 0;
}