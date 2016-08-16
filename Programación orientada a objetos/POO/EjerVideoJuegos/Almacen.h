template<class T>
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
        for (int i = 0; i < 4; i++) {
            almacen[i]->printMe();
        }
    }
    
    int buscar(string name)
    {
        for (int i = 0; i < 10 ; i++)
        {
            Character* temporal = dynamic_cast<Character*>(almacen[i]); 
            if(temporal != 0)
            {
                if( name == temporal->getName())
                {
                    return i;
                }    
            }
        }
        return -1;
    }
};

