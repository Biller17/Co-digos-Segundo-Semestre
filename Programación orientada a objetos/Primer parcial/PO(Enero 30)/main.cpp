//
//  main.cpp
//  PO(Enero 30)
//
//  Created by Adrián Biller on 1/30/15.
//  Copyright (c) 2015 Adrián Biller. All rights reserved.
//

#include <iostream>

int main ()
{
    //se declara una variable
    int a = 10;
    
    //se crea un apuntador
    int* ptr1 = new int;
    
    //a la direccion del apuntador se le asigna un 10
    *ptr1 = 10;
    
    //a la variable se le asigna el valor al que esta apuntando el pointer
    a = *ptr1;
    
    //se borra la direccion a la que estaba apuntando el pointer para que no se quede en la memoria
    delete ptr1;
    
    //la direccion de la variabe a se le asigna al pointer
    ptr1 = &a;
    
    
    return 1;
}