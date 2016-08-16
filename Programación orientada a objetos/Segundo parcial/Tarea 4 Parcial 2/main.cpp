#include "Personajes.h"
#include "Objetos.h"
#include "Heroes.h"
#include "Princesas.h"
#include "Villanos.h"
#include "Secuaces.h"
#include "Almacen.h"
#include "Graphic.h"


int main()
{
    int opcion;
    string nombre;
    int strenth;
    
    Personajes* c1 = new Heroes("Shrek",10);
    Personajes* c2 = new Princesas("Fiona",4);
    Personajes* c3 = new Villanos("Dragon",7);
    Personajes* c4 = new Secuaces("Minion",8);
    
    Almacen<Graphic*> miAlmacen;
    miAlmacen.agregar(c1, 0);
    miAlmacen.agregar(c2, 1);
    miAlmacen.agregar(c3, 2);
    miAlmacen.agregar(c4, 3);
    do
    {
        cout<<"Ya existen cuatro personajes en el sistema"<<endl;
        cout<<"Elija una opcion"<<endl;
        cout<<"1)Crear un Heroe"<<endl;
        cout<<"2)Crear un Villano"<<endl;
        cout<<"3)Crear una Princesa"<<endl;
        cout<<"4)Crear un Secuaz"<<endl;
        cout<<"5)Buscar un personaje por nombre"<<endl;
        cout<<"6)Buscar un personaje por tipo"<<endl;
        cout<<"7)Eliminar personaje"<<endl;
        cout<<"8)Imprimir un personaje"<<endl;
        cout<<"9)Imprimir todos los personajes"<<endl;
        cout<<"10)Imprimir ranking de popularidad"<<endl;
        cout<<"0)Salir del programa"<<endl;
        cin>>opcion;
        
        switch (opcion)
        {
            case 1:
            {
                cout<<"Ingrese el nombre de su heroe"<<endl;
                cin>>nombre;
                cout<<"Ingrese un numero de la fuerza del heroe"<<endl;
                cin>>strenth;
                Personajes* c5 = new Heroes(nombre, strenth);
                miAlmacen.agregar(c5, 4);
            }
                break;
            case 2:
            {
                cout<<"Ingrese el nombre de su villano"<<endl;
                cin>>nombre;
                cout<<"Ingrese un numero de la fuerza del villano"<<endl;
                cin>>strenth;
                Personajes* c6 = new Villanos(nombre, strenth);
                miAlmacen.agregar(c6, 5);
            }
                break;
            case 3:
            {
                cout<<"Ingrese el nombre de su princesa"<<endl;
                cin>>nombre;
                cout<<"Ingrese un numero de la fuerza del princesa"<<endl;
                cin>>strenth;
                Personajes* c7 = new Princesas(nombre, strenth);
                miAlmacen.agregar(c7, 6);
            }
                break;
            case 4:
            {
                cout<<"Ingrese el nombre de su secuaz"<<endl;
                cin>>nombre;
                cout<<"Ingrese un numero de la fuerza del secuaz"<<endl;
                cin>>strenth;
                Personajes* c8 = new Secuaces(nombre, strenth);
                miAlmacen.agregar(c8, 7);
            }
                break;
            case 5:
            {
                cout<<"Ingrese el nombre del personaje a buscar:";
                cin>>nombre;
                miAlmacen.buscar(nombre);
            }
                break;
                
            case 6:
            {
                cout<<"Ingrese el tipo que es su personaje"<<endl;
                cout<<"1)Heroe"<<endl;
                cout<<"2)Villano"<<endl;
                cout<<"3)Secuaz"<<endl;
                cout<<"4)Princesa"<<endl;
                cin>>opcion;
                miAlmacen.buscarTipo(opcion);
            }
                break;
            case 7:
            {
                cout<<"Ingrese el nombre del personaje"<<endl;
                cin>>nombre;
                miAlmacen.eliminar(nombre);
            }
                break;
            case 8:
            {
                cout<<"Ingrese el nombre del personaje a imprimir"<<endl;
                cin>>nombre;
                miAlmacen.imprimirP(nombre);
                
            }
                break;
            case 9:
            {
                miAlmacen.imprimir();
            }
            break;
            case 10:
            {
                
            }
            
                
                
                
        }
    }
    while(opcion != 0);
    return 0;
}



















