#include "Lista.h"

int main ()
{
    
    Lista<int> list;//se dice el tipo de variable que es
    Lista<double>listd;
    int value = 1;
    cout<<"Ingrese los elementos de la lista para terminar escriba 0"<<endl;
    
    while(value != 0)
    {
        cin>>value;
        list.addElement(value);
        
    }
    cout<<"su arreglo es:"<<endl;
    list.print();
    cout<<endl<<"final del arreglo"<<endl;

    cout<<"Que numero desea eliminar?"<<endl;
    cin>>value;
    list.deleteElement(value);
    list.print();
    
    cout<<"Que posicion desea eliminar"<<endl;
    cin>>value;
    list.deletePos(value);
    list.print();

    return 0;
}