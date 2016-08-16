#pragma once
#include "Producto.h"

template <class T>
class Almacen
{
protected:
    T* almacen;
    T* caducados;
    T* carrito;
    int day = 0;
    int identification;
    int pPluma,pLapiz,pGoma,pSacapuntas,pCorrector,pCalculadora,pEngrapadora,pCuaderno,pCarpeta,pFolder;
    int numeroVentas;
public:
    
    Almacen()
    {
        almacen = new T[100];
        caducados = new T[100];
        carrito = new T[100];
    }

    
    void agregar(T elemento, int identification)
    {
        almacen[identification] = elemento;
    }

    
    void imprimir()
    {
        for(int i = 0; i < 100; i++)
        {
            if(almacen[i])
            {
                cout<<"Producto"<<i<<" ";
                almacen[i]->print();
            }
            else
                break;
        }
        
    }
    
    void imprimirTipo(int tipo)
    {
        int count;
        for(int i = 0; i <= 100; i++)
        {
            if(tipo == almacen[i]->getTag())
            {
                almacen[i]->print();
                cout<<endl;
                count++;
            }
            else
                break;
            cout<<"Hay "<<count<<" articulos en el sistema"<<endl;
        }
    }
    int buscar(int iden)
    {
        for(int i = 0; i < 100; i++)
        {
            Producto* temporal  =dynamic_cast<Producto*>(almacen[i]);
            if(temporal!=0)
            {
                if(iden == temporal->getID())
                {
                    cout<<iden<<" si esta en la lista en la posicion: "<<i<<endl;
                    return i;
                }
            }
            
        }
        cout<<iden<<" no esta en el sistema"<<endl;
        return -1;
    }
    
    int buscarTipo(int tipo)
    {
        int count = 0;
        for(int i = 0; i<100; i++)
        {
            Producto* temporal  = dynamic_cast<Producto*>(almacen[i]);
            if(almacen[i] == nullptr)
            {
                cout<<"No hay mas articulos en existencia de esta categoria"<<endl;
                return 0;
            }
            int tag = temporal->getTag();
            if(tag==tipo)
            {
                switch(tag)
                {
                    case 1:
                        temporal->print();
                        count++;
                        break;
                    case 2:
                        temporal->print();
                        count++;
                        break;
                    case 3:
                        temporal->print();
                        count++;
                        break;
                    case 4:
                        temporal->print();
                        count++;
                        break;
                    case 5:
                        temporal->print();
                        count++;
                        break;
                    case 6:
                        temporal->print();
                        count++;
                        break;
                    case 7:
                        temporal->print();
                        count++;
                        break;
                    case 8:
                        temporal->print();
                        count++;
                        break;
                    case 9:
                        temporal->print();
                        count++;
                        break;
                    case 10:
                        temporal->print();
                        count++;
                        break;
                }
            }
        }
        cout<<"Hay "<<count<<" articulos en el sistema"<<endl;
        return 1;

    }

    int eliminar(int name)
    {
        for(int i = 0; i < 100; i++)
        {
            Producto* temporal  =dynamic_cast<Producto*>(almacen[i]);
            if(temporal!=0)
            {
                if(name == temporal->getID())
                {
                    delete almacen[i];
                    cout<<name<<" ha sido eliminado del sistema"<<endl;
                    return i;
                }
            }
            
        }
        cout<<name<<" no esta en el sistema"<<endl;
        return -1;
    }
    
    int getCompras()
    {
        return (pPluma+pLapiz+pGoma+pSacapuntas+
                pCorrector+pCalculadora+pEngrapadora+
                pCuaderno+pCarpeta+pFolder);
    }
   
    int getCompraTipo(int tipo)
    {
        switch(tipo)
        {
            case 1:
                return pPluma;
                break;
            case 2:
                return pLapiz;
                break;
            case 3:
                return pGoma;
                break;
            case 4:
                return pSacapuntas;
                break;
            case 5:
                return pCorrector;
                break;
            case 6:
                return pCalculadora;
                break;
            case 7:
                return pEngrapadora;
                break;
            case 8:
                return pCuaderno;
                break;
            case 9:
                return pCarpeta;
                break;
            case 10:
                return pFolder;
                break;
        }
        return 1;
    }
    
    
    int getVentas()
    {
        return numeroVentas;
    }
    
    void caduca(int dia)
    {
        for(int i = 0; i<=100; i++)
        {
            if(dia>(almacen[i]->getDate()))
            {
                caducados[i] = almacen[i];
                this->eliminar(i);
            }
        }
    }
    

    void compra(int tg,  int venta)
    {
        for(int i = 0; i<=100; i++)
        {
            if(almacen[i] == nullptr)
                continue;
            if(tg == almacen[i]->getTag())
            {
                if(almacen[i]->getTag() == 1)
                {
                    pPluma += almacen[i]->getPrice();
                }
                else if(almacen[i]->getTag() == 2)
                {
                    pLapiz += almacen[i]->getPrice();
                }
                else if(almacen[i]->getTag() == 3)
                {
                    pGoma += almacen[i]->getPrice();
                }
                else if(almacen[i]->getTag() == 4)
                {
                    pSacapuntas += almacen[i]->getPrice();
                }
                else if(almacen[i]->getTag() == 5)
                {
                    pCorrector += almacen[i]->getPrice();
                }
                else if(almacen[i]->getTag() == 6)
                {
                    pCalculadora += almacen[i]->getPrice();
                }
                else if(almacen[i]->getTag() == 7)
                {
                    pEngrapadora += almacen[i]->getPrice();
                }
                else if(almacen[i]->getTag() == 8)
                {
                    pCuaderno += almacen[i]->getPrice();
                }
                else if(almacen[i]->getTag() == 9)
                {
                    pCarpeta += almacen[i]->getPrice();
                }
                else if(almacen[i]->getTag() == 10)
                {
                    pFolder += almacen[i]->getPrice();
                }
                carrito[venta] = almacen[i];
                this->eliminar(i);
            }
            
        }
    }

    void printCaducado()
    {
        for(int i = 0; i < 100; i++)
        {
            if(caducados[i])
            {
                cout<<"Producto"<<i<<" ";
                caducados[i]->print();
            }
            else
                break;
        }

    }
    
    int getCompraTotal()
    {
        float total;
        for(int i = 0; i<=100; i++)
        {
            if(carrito[i])
            {
                total += carrito[i]->getPrice();
            }
        }
        return total;
    }
    
    void printAvailable()
    {
        for(int i = 0; i <= 100; i++)
        {
            if(almacen[i] == nullptr)
                continue;
                
            if((almacen[i]->getTag()) == 1)
            {
                cout<<"1) Plumas"<<endl;
            }
            else if(almacen[i]->getTag() == 2)
            {
                cout<<"2) Lapices"<<endl;
            }
            else if(almacen[i]->getTag() == 3)
            {
                cout<<"3) Gomas"<<endl;
            }
            else if(almacen[i]->getTag() == 4)
            {
                cout<<"4) Sacapuntas"<<endl;
            }
            else if(almacen[i]->getTag() == 5)
            {
                cout<<"5) Correctores"<<endl;
            }
            else if(almacen[i]->getTag() == 6)
            {
                cout<<"6) Calculadoras"<<endl;
            }
            else if(almacen[i]->getTag() == 7)
            {
                cout<<"7) Engrapadoras"<<endl;
            }
            else if(almacen[i]->getTag() == 8)
            {
                cout<<"8) Cuadernos"<<endl;
            }
            else if(almacen[i]->getTag() == 9)
            {
                cout<<"9) Carpetas"<<endl;
            }
            else if(almacen[i]->getTag() == 10)
            {
                cout<<"10)Folders"<<endl;
            }
            
        }
    }


    
};



