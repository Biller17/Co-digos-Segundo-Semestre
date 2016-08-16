#include "Primes.h"

int main()
{
    int num,count,suma,opcion,repetir;
    Primes numPrimo;
    do
    {
        cout<<"Que operacion desea hacer? \n1-Revisar si el numero es primo\n2-Buscar el enesimo numero\n3-Suma de los primos menores a un numero\n4-Todoslos primos circulares abajo de 10,000\n";
        cin>>opcion;
        switch(opcion)
        {
            case 1:
                cout<<"Que numero desea revisar";
                cin>>num;
                if(numPrimo.isPrime(num))
                    cout<<"El numero:"<<num<<" es primo\n";
                else
                    cout<<"El numero:"<<num<<" no es primo\n";
                break;
            case 2:
                cout<<"Hasta qué numero primo desea llegar(3 = el tercero)";
                cin>>count;
                numPrimo.getNEsimPrime(count);
                cout<<"El "<<count<<"to numero primo es: "<<numPrimo.getNEsimPrime(count);
                break;
            case 3:
                cout<<"Hasta que numero desea sumar los primos?\n";
                cin>>suma;
                cout<<"La suma de los primos abajo de"<<suma<<"es: "<<numPrimo.sumPrimesBelow(suma);
                break;
            case 4:
                cout<<"Los numeros primos circulares abajo de 10,000 son:";
                numPrimo.getCircularPrimesBelow();
                break;
            case 5:
                numPrimo.getCircularPrimesBelow();
                break;
            default:
                cout<<"Lo sientom su respuesta es invalida";
    
        }
        cout<<"Desea repetir el programa?(1 = si / 0 = no)\n\n";
        cin>>repetir;
    }while(repetir == 1);
    return 0;
    
}