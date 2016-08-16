#pragma once

template <class T>
class Almacen
{
    T* almacen;
public:
    Almacen()
    {
        almacen = new T[50];
    }
    
    void agregar(T elemento, int pos)
    {
        almacen[pos] = elemento;
    }
    
    void imprimir()
    {
        for(int i = 0; i < 10; i++)
        {
            if(almacen[i])
                almacen[i]->printChar();
            else
                break;
        }
    }
    
    int buscar(string modelo)
    {
        for(int i = 0; i < 50; i++)
        {
            Auto* temporal  =dynamic_cast<Auto*>(almacen[i]);
            if(temporal!=0)
            {
                if(modelo == temporal->getModelo())
                {
                    cout<<modelo<<" si esta en la lista en la posicion: "<<i<<endl;
                    return i;
                }
            }
            
        }
        cout<<modelo<<" no esta en el sistema"<<endl;
        return -1;
    }
    
    int buscarTipo(int t)
    {
        if(t == 1)
            cout<<"Lista de Convertibles: "<<endl;
        if(t == 2)
            cout<<"Lista de Deportivos: "<<endl;
        if(t == 3)
            cout<<"Lista de sedanes: "<<endl;
        for(int i = 0; i < 50; i++)
        {
            Auto* temporal  =dynamic_cast<Auto*>(almacen[i]);
            if(temporal!=0)
            {
                if(t == temporal->getTag())
                {
                    cout<<"Posición:"<<i<<" "<<temporal->getModelo()<<endl;;
                }
            }
            
        }
        cout<<endl;
        
        return 0;
    }
    int eliminar(string modelo)
    {
        for(int i = 0; i < 50; i++)
        {
            Auto* temporal  =dynamic_cast<Auto*>(almacen[i]);
            if(temporal!=0)
            {
                if(modelo == temporal->getModelo())
                {
                    delete almacen[i];
                    cout<<modelo<<" ha sido eliminado del sistema"<<endl;
                    return i;
                }
            }
            
        }
        cout<<modelo<<" no esta en el sistema"<<endl;
        return -1;
    }
    int imprimirP(string modelo)
    {
        for(int i = 0; i < 50; i++)
        {
            Auto* temporal  =dynamic_cast<Auto*>(almacen[i]);
            if(temporal!=0)
            {
                if(modelo == temporal->getModelo())
                {
                    almacen[i]->printChar();
                    return i;
                }
            }
            
        }
        cout<<modelo<<" no esta en el sistema"<<endl;
        return -1;
    }
    
    template <class Func>
    void ranking(Func rank())
    {
        Vehiculo* temporal;
        for(int j = 0; j<50; j++)
        {
            for(int i = 0; i<10; i++)
            {
                if(almacen[i].rank() > almacen[i+1].rank())
                {
                    temporal = almacen[i];
                    almacen[i] = almacen[i+1];
                    almacen[i+1] = temporal;
                }
                
            }
        }
        cout<<"Lista ordenada: ";
        imprimir();
    }
    
    template <class Func>
    void rankingInverse(Func rank())
    {
        Vehiculo* temporal;
        for(int j = 0; j<50; j++)
        {
            for(int i = 0; i>10; i++)
            {
                if(almacen[i].rank() > almacen[i+1].rank())
                {
                    temporal = almacen[i];
                    almacen[i] = almacen[i+1];
                    almacen[i+1] = temporal;
                }
                
            }
        }
        cout<<"Lista ordenada: ";
        imprimir();
    }
    
    
    template <class Func>
    int buscarTAREA(string tipo, Func type())
    {
        for(int i = 0; i < 50; i++)
        {
            Auto* temporal  =dynamic_cast<Auto*>(almacen[i]);
            if(temporal!=0)
            {
                if(tipo == temporal->*type())
                {
                    cout<<tipo<<" si esta en la lista en la posicion: "<<i<<endl;
                    return i;
                }
            }
            
        }
        cout<<tipo<<" no esta en el sistema"<<endl;
        return -1;
    }
    
    
};




