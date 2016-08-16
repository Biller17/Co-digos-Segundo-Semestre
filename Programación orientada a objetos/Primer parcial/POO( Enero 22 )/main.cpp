//Adrian Biller A01018940
//Enero 22
#include <iostream>

//++++++++++++++++++++++++++++++         Plantillas          +++++++++++++++++++++++++++++++++++++++++++
template <class T>
T menor (T a, T b)
{
    return(a>b);
}
//Especializacion de las plantillas
/*template <>
bool mayor (std::string a, std::string b)
{
    return a>b;
}*/

//*******************************           Pointers             ************************************
int apuntador()
{

    //cuando se define un arreglo se guardan los espacios de memoria especificados mas el apuntador

    // Los Apuntadores son acceso dinamico a memoria, en el tiempo de ejecucion se cambia el tamaño en la memoria.
            //--el apuntador cambia de lugar, libera los espacios usados y se dirige a otro lugar en la memoria para poder llegar al tamaño del string o arreglo.

    //inicializacion del apuntador
    int *d;

    //guardando direccion de memoria en el apuntador
    d= new int [3];
    
    //para hacer que un arreglo crezca de manera dinamica
    
    //para borrar memoria del apuntador se pone delete [] y el nombre del apuntador
    delete [] d;
    
    
    int *a = new int;
    
    //si quieres imprimir o modificar el apuntador solo se pone a
    // si quieres imprimir o modificar la informacion de la direccion se pone *a
    
    
    
    
    return 0;
}


int main()
{
    return 0;
}
