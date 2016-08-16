#include "Cesar.h"
#include <time.h>

int main()
{
    int constante, opcion;
    string palabra;
    cout<<"1. Encriptar una palabra con una constante aleatoria"<<endl;
    cout<<"2. Encriptar una palabra con todas las posibles constantes"<<endl;
    cin>>opcion;
    srand(time(NULL));
    Cesar cifrado;
    constante = rand()%26;
    if(opcion == 1)
    {
        cin>>palabra;
        cifrado.cypher(palabra,constante);
        cifrado.print();
    }
    if(opcion == 2)
    {
        cifrado.decrypt();
    }
    return 0;
}