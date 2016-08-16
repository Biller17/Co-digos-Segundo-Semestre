//Exammen parcial Adrian Biller A01018940

#include "Examen.h"

int main ()
{
    int opcion;
    char regla;
    
    cout<<"1- Constructor default"<<endl<<"2- Constructor por parametros"<<endl;
    cin>>opcion;
    if(opcion == 1)
    {
        Rules<char> reglasCaracter;
        reglasCaracter.print();
        cout<<"Ingrese la regla para su arreglo: "<<endl;
        cin>>regla;
        reglasCaracter.notFollow(regla);
        cout<<"El arreglo final es: "<<endl;
        reglasCaracter.print();
        
        
        
    }
    else if(opcion == 2)
    {
        Rules<char>(10);
    }
    
    
    return 0;
}
