//Tarea1 Adrián Biller A01018940

#include <iostream>
#include <math.h>

int primo(int total)
{
    short primo;
    int x,y;
    unsigned int sumatoria = 2; //caso especial del 2 que no se encuentra en las siguientes lineas
    
    for(x = 3; x < total; x++)
    {
        primo = 1;
        for(y = 2; y < x; y++)
        {
            if ( (x % y) == 0)
            {
                primo = 0;
                break;
            }
        }
        if (primo == 1)
        {
            printf("%d\n",x);
            sumatoria += x;
        }
    }
    printf("%u\n",sumatoria);
    
    return 1;
}

int sumaDigitos()
{
    long double numero= pow(2,352);
    printf("           %Lf\n",numero);
    long double x;
    long suma;
    x=numero;
    numero*=100;
    while( numero > 0.0001)
    {
        x = fmod(numero,10.0);
        printf("%Lf   ",x);
        numero = numero/10.0;
        printf("%Lf \n",numero);
        suma+=x;
    }
    
    printf("La suma de los digitos es: %ld",suma);
    return 1;
}


int factorial()
{
    int a;
    double x,suma;
    double resultado=1;
    for(a=1;a<=100;a++)
    {
        resultado*=a;
        printf("%lf ",resultado);
    }
    printf("%lf",resultado);
    printf("           %lf\n",resultado);
    x=resultado;
    while( resultado > 0.0001)
    {
        x = fmod(resultado,10.0);
        printf("%lf   ",x);
        resultado = resultado/10.0;
        printf("%lf \n",resultado);
        suma+=x;
    }
    
    printf("La suma de los digitos es: %lf",suma);

    return 1;
}
int main()
{
    return 0;
}
