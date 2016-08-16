//16 de enero 2015

#include <iostream>//libreria de c++


int contador()
{
    long sumatoria, x;
    for (x=1; x<100000000; x++)
    {
        sumatoria+=x;
        x++;
    }
    printf("La sumatoria de todos los numeros primos menores de un millon es: %ld", sumatoria);
    return 1;
}

int main()//también se pone main
{
    int numero;
    std::cout <<"Hola";//otra manera de printf
    //std:: significa que esta funcion esta en la libreria standar por si hay otra funcion en otra libreria
    contador();
    
    
    
    std::cout<<"Escribe un numero\n";
    std::cin>>numero;//como scanf
    
    return 1;
}
