#include "Enteros.h"
#include "Russe.h"
#include "Particiones.h"



int main()
{
    int a,b,opcion;
    cout<<"Ingrese el primer valor"<<endl;
    cin>>a;
    cout<<"Ingrese el segundo valor"<<endl;
    cin>>b;
    Enteros uno(a);
    Enteros dos(b);
    cout<<"1)Multiplicacion original"<<endl;
    cout<<"2)Multiplicacion por particiones"<<endl;
    cout<<"3)Multiplicacion por metodo Russé"<<endl;
    cin>>opcion;
    if(opcion == 1)
    {
        Multiplicacion multi;
        cout<<multi.multiplicar(uno, dos);
    }
    if(opcion == 2)
    {
        Particiones particion;
        cout<<particion.multiplicar(uno, dos);
        
    }
    if(opcion == 3)
    {
        Russe ruso;
        cout<<ruso.multiplicar(uno, dos);
        
    }

    
    
    return 0;
}