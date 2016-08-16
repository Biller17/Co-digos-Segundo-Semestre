#include "Almacen.h"
#include "Producto.h"
#include "Pluma.h"
#include "Lapiz.h"
#include "Goma.h"
#include "Sacapuntas.h"
#include "Corrector.h"
#include "Engrapadora.h"
#include "Calculadora.h"
#include "Cuaderno.h"
#include "Carpeta.h"
#include "Folder.h"
#include <time.h>
int main ()
{
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    
    
    
    int date = aTime->tm_mday;
    int opcion = 1;
    float price;
    int tipo, ink, venta;
    int identification = 0;
    string contrasena, color;
    Almacen<Producto*>list;
    while (opcion != 0)
    {
        cout<<"Bienvenido a Mitiendita de utiles"<<endl;
        cout<<"Hoy es el dia "<<date<<" de este mes"<<endl;
        cout<<"1) Ingresar como administrador"<<endl;
        cout<<"2) Ingresar como cliente"<<endl;
        cout<<"0) Salir"<<endl;
        cin>>opcion;
        if(opcion == 1)
        {
            cout<<"Ingrese la contraseña de administrador"<<endl;
            cin>>contrasena;
            while(contrasena == "proyecto")
            {
                cout<<"Escoja la accion a realizar:"<<endl;
                cout<<"1) Abastecer"<<endl;
                cout<<"2) Ver el estado de cuenta"<<endl;
                cout<<"3) Ver el inventario"<<endl;
                cin>>opcion;
                if(opcion == 1)
                {
                    while(opcion != 0 && identification<100)
                    {
                        cout<<"1) Plumas"<<endl;
                        cout<<"2) Lapices"<<endl;
                        cout<<"3) Gomas"<<endl;
                        cout<<"4) Sacapuntas"<<endl;
                        cout<<"5) Correctores"<<endl;
                        cout<<"6) Calculadoras"<<endl;
                        cout<<"7) Engrapadoras"<<endl;
                        cout<<"8) Cuadernos"<<endl;
                        cout<<"9) Carpetas"<<endl;
                        cout<<"10)Folders"<<endl;
                        cout<<"0) Salir"<<endl;
                        cin>>opcion;
                        switch(opcion)
                        {
                            case 1:
                            {
                                cout<<"Ingresar precio:"<<endl;
                                cin>>price;
                                cout<<"Ingresar tinta (1.Azul / 2.Roja / 3.Negra)"<<endl;
                                cin>>ink;
                                cout<<"Ingresar tipo (1.Fuente / 2.De gel)"<<endl;
                                cin>>tipo;
                                Producto *temp = new Pluma(price, ink, tipo, identification, date);
                                list.agregar(temp, identification);
                                break;
                            }
                            case 2:
                            {
                                cout<<"Ingresar precio:"<<endl;
                                cin>>price;
                                cout<<"Ingresar color: "<<endl;
                                cin>>color;
                                cout<<"Ingresar tipo (1.Lapicero / 2. Normal )"<<endl;
                                cin>>tipo;
                                Producto* temp = new Lapiz(price, identification, color, tipo, date);
                                list.agregar(temp, identification);
                                break;
                            }
                            case 3:
                            {
                                cout<<"Ingresar precio:"<<endl;
                                cin>>price;
                                cout<<"Ingresar tipo (1.De plastico / 2.Para tinta / 3.De migajon)"<<endl;
                                cin>>tipo;
                                Producto* temp = new Goma(price, identification, tipo, date);
                                list.agregar(temp,identification);
                                break;
                            }
                            case 4:
                            {
                                cout<<"Ingresar precio:"<<endl;
                                cin>>price;
                                cout<<"Ingresar tipo (1.De metal / 2.De plastico)"<<endl;
                                cin>>tipo;
                                Producto* temp = new Sacapuntas(price, identification, tipo, date);
                                list.agregar(temp, identification);
                                break;
                            }
                            case 5:
                            {
                                cout<<"Ingresar precio"<<endl;
                                cin>>price;
                                Producto* temp = new Corrector(price, identification, date);
                                list.agregar(temp, identification);
                                break;
                            }
                            case 6:
                            {
                                cout<<"Ingresar precio"<<endl;
                                cin>>price;
                                cout<<"Ingresar tipo (1.Normal / 2.Cientifica / 3.Graficadora)"<<endl;
                                cin>>tipo;
                                Producto* temp = new Calculadora(price, identification, tipo, date);
                                list.agregar(temp, identification);
                                break;
                            }
                            case 7:
                            {
                                cout<<"Ingresar precio:"<<endl;
                                cin>>price;
                                Producto* temp = new Engrapadora(price, identification, date);
                                list.agregar(temp, identification);
                                break;
                            }
                            case 8:
                            {
                                cout<<"Ingresar precio"<<endl;
                                cin>>price;
                                cout<<"Ingresar tipo (1.Rayado / 2.Cuadriculado / 3.Blanco)"<<endl;
                                cin>>tipo;
                                cout<<"1. Con espiral / 2.De pasta"<<endl;
                                cin>>ink;
                                Producto* temp = new Cuaderno(price, identification, tipo, ink, date);
                                list.agregar(temp, identification);
                                break;
                            }
                            case 9:
                            {
                                cout<<"Ingresar precio"<<endl;
                                cin>>price;
                                cout<<"Ingresar tipo (1.De argollas / 2.De broche / 3.De clip / 4.De plastico)"<<endl;
                                cin>>tipo;
                                Producto* temp = new Carpeta(price, identification, tipo, date);
                                list.agregar(temp, identification);
                                break;
                            }
                            case 10:
                            {
                                cout<<"Ingresar precio"<<endl;
                                cin>>price;
                                cout<<"Ingresar Tamaño (1.Carta / 2.Oficio)"<<endl;
                                cin>>tipo;
                                Producto* temp = new Folder(price, identification, tipo, date);
                                list.agregar(temp, identification);
                                break;
                            }
                                
                        }
                        identification++;
                    }
                }
                else if(opcion == 2)
                {
                    cout<<"1) Total de ventas"<<endl;
                    cout<<"2) Total de ventas por categoria"<<endl;
                    cout<<"3) Total de ventas por producto"<<endl;
                    cout<<"4) Total de ganancias"<<endl;
                    cin>>opcion;
                    switch (opcion)
                    {
                        case 1:
                        {
                            cout<<"El total de  ventas es: "<<list.getVentas()<<endl;
                        }
                        case 2:
                        {
                            cout<<"Escoja una categoria: "<<endl;
                            cout<<"1) Plumas"<<endl;
                            cout<<"2) Lapices"<<endl;
                            cout<<"3) Gomas"<<endl;
                            cout<<"4) Sacapuntas"<<endl;
                            cout<<"5) Correctores"<<endl;
                            cout<<"6) Calculadoras"<<endl;
                            cout<<"7) Engrapadoras"<<endl;
                            cout<<"8) Cuadernos"<<endl;
                            cout<<"9) Carpetas"<<endl;
                            cout<<"10)Folders"<<endl;
                            cin>>opcion;
                            list.getCompraTipo(opcion);
                        }
                        case 3:
                        {
                            cout<<"Ingrese el numero de identificacion del producto"<<endl;
                            cin>>opcion;
                            list.buscar(opcion);
                        }
                        case 4:
                        {
                            cout<<"Las ganancias totales son: "<<list.getCompras()<<endl;
                        }
                    }
                }
                else if(opcion == 3)
                {
                    cout<<"1) Desplegar todo el inventario"<<endl;
                    cout<<"2) Desplegar por categoria"<<endl;
                    cout<<"3) Desplegar por productos caducados"<<endl;
                    cin>>opcion;
                    if(opcion == 1)
                    {
                        cout<<"Inventario completo: "<<endl;
                        list.imprimir();
                    }
                    else if(opcion == 2)
                    {
                        cout<<"Escoja una categoria: "<<endl;
                        cout<<"1) Plumas"<<endl;
                        cout<<"2) Lapices"<<endl;
                        cout<<"3) Gomas"<<endl;
                        cout<<"4) Sacapuntas"<<endl;
                        cout<<"5) Correctores"<<endl;
                        cout<<"6) Calculadoras"<<endl;
                        cout<<"7) Engrapadoras"<<endl;
                        cout<<"8) Cuadernos"<<endl;
                        cout<<"9) Carpetas"<<endl;
                        cout<<"10)Folders"<<endl;
                        cin>>opcion;
                        list.buscarTipo(opcion);
                    }
                    else
                    {
                        cout<<"Lista de productos caducados: "<<endl;
                        list.printCaducado();
                    }
                }
            }
            cout<<"Lo siento su contraseña es incorrecta"<<endl;
            
        }
        else if(opcion  == 2)
        {
            while(opcion != 0 && venta<100)
            {
                cout<<"******************¡Bienvenido a Mitiendita en linea!************************"<<endl;
                cout<<"Escoja la categoria de producto que desea comprar"<<endl;
                list.printAvailable();
                cout<<"0) Salir"<<endl;
                cin>>opcion;
                list.compra(opcion, venta);
                venta++;
            }
            cout<<"El total de su compra de hoy es de $"<<list.getCompraTotal()<<endl;
            cout<<"Desea pagar con (1.Credito / 2.Debito / 3.Efectivo)"<<endl;
            cin>>opcion;
            if(opcion == 1)
            {
                cout<<"Escogio la opcion de tarjeta de credito"<<endl;

            }
            else if(opcion == 2)
            {
                cout<<"Escogio la opcion de tarjeta de debito"<<endl;
            }
            else
            {
                cout<<"Escogio la opcion de efectivo"<<endl;
            }
        }
        else
        {
            cout<<"Lo siento la opcion que escogio es incorrecta"<<endl;
        }
    }
    return 0;
    
}