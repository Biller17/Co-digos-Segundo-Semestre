#pragma once

template <class T>
class Almacen
{
    T* almacen;
public:
    Almacen()
    {
        almacen = new T[10];
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
                almacen[i]->printMe();
            else
                break;
        }
    }
    
    int buscar(string name)
    {
        for(int i = 0; i < 10; i++)
        {
            Personajes* temporal  =dynamic_cast<Personajes*>(almacen[i]);
            if(temporal!=0)
            {
                if(name == temporal->getName())
                {
                    cout<<name<<" si esta en la lista en la posicion: "<<i<<endl;
                    return i;
                }
            }

        }
        cout<<name<<" no esta en el sistema"<<endl;
        return -1;
    }
    
    int buscarTipo(int t)
    {
        if(t == 1)
            cout<<"Lista de heroes: "<<endl;
        if(t == 2)
            cout<<"Lista de villanos: "<<endl;
        if(t == 3)
            cout<<"Lista de secuaces: "<<endl;
        if(t == 4)
            cout<<"Lista de princesas: "<<endl;
        
        for(int i = 0; i < 10; i++)
        {
            Personajes* temporal  =dynamic_cast<Personajes*>(almacen[i]);
            if(temporal!=0)
            {
                if(t == temporal->getTag())
                {
                    cout<<"Posición:"<<i<<" "<<temporal->getName()<<endl;;
                }
            }
            
        }
        cout<<endl;
        
        return 0;
    }
    int eliminar(string name)
    {
        for(int i = 0; i < 10; i++)
        {
            Personajes* temporal  =dynamic_cast<Personajes*>(almacen[i]);
            if(temporal!=0)
            {
                if(name == temporal->getName())
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
    int imprimirP(string name)
    {
        for(int i = 0; i < 10; i++)
        {
            Personajes* temporal  =dynamic_cast<Personajes*>(almacen[i]);
            if(temporal!=0)
            {
                if(name == temporal->getName())
                {
                    almacen[i]->printMe();
                    return i;
                }
            }
            
        }
        cout<<name<<" no esta en el sistema"<<endl;
        return -1;
    }
    
    void ranking()
    {
        Personajes* temporal;
        for(int j = 0; j<10; j++)
        {
            for(int i = 0; i<10; i++)
            {
                if(almacen[i].getStrength > almacen[i+1].getStrength)
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
    
};






