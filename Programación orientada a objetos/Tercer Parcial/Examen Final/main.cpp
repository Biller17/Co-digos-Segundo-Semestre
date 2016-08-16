#include "Matrix.h"


int main()
{
    int n, m, opcion;
   
    

    
    
    cout<<"Ingrese los tamaños de la matriz: ";
    cin>>n>>m;
    Matrix<int, int> matriz(n,m);
    cout<<"Elija una opcion"<<endl;
    cout<<"1)Llenar la matriz manual"<<endl;
    cout<<"2)Llenar la matriz de numeros aleatorios"<<endl;
    cout<<"3)Llenar la matriz de numeros aleatorios de 0 a n"<<endl;
    
    switch(opcion)
    {
        case 1:
            matriz.fillUser();
            break;
        case 2:
            matriz.fillRandom();
        case 3:
            cout<<"Ingrese el limite de los numeros aleatorios: ";
            cin>>n;
            matriz.fillRandom(n);
        default:
            cout<<"Su respuesta es invalida"<<endl;
            break;
            
    }
    
    cout<<"Elija una opcion"<<endl;
    cout<<"1)Imprimir la matriz traspuesta"<<endl;
    cout<<"2)Imprimir la matriz upper"<<endl;
    cout<<"3)Imprimir la matriz lower"<<endl;
    
    cin>>opcion;
    switch (opcion)
    {
        case 1:
            matriz.transpose();
            break;
        case 2:
            matriz.upper();
            break;
        case 3:
            matriz.lower();
            break;
        default:
            cout<<"Su respuesta es invalida"<<endl;
            break;
    }
    
    cout<<"Elija una opcion"<<endl;
    cout<<"1)Sumar matrices"<<endl;
    cout<<"2)Sacar el negativo de las matrices"<<endl;
    cout<<"3)Elevar la matriz a un numero"<<endl;
    cout<<"4)Multiplicar los valores de la matriz a un numero"<<endl;
    cin>>opcion;
    if (opcion ==1)
    {
        cout<<"Por ahora esta opcion no esta disponible"<<endl;
        cout<<"Debes crear una nueva matriz";
        cout<<"Filas:";
        cin>>n;
        cout<<"Columnas:";
        cin>>m;
        Matrix<int, int>segunda(n, m);
        //matriz+segunda;
        
        
    }
    switch (opcion)
    {
        case 2:
            ~matriz;
            break;
        case 3:
            cout<<"Exponente:";
            cin>>n;
            matriz^n;
            break;
        case 4:
            cout<<"Multiplo:";
            cin>>n;
            matriz(n);
        default:
            cout<<"Su respuesta es invalida"<<endl;
            break;
    }
    
    
    
    
    
    
    
    
    return 0;
}










