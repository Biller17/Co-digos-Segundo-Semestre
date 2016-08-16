#include "BiciMontania.h"


BiciMontania::BiciMontania() : Bicicleta("Verde", 26, "bmx"), suspTrasera(true)
{
    obligatorioM = new int;
}

BiciMontania::BiciMontania(string _color, int _size, string _marca, bool sDel, bool sTras)
:Bicicleta(_color,_size,_marca), suspTrasera(true), suspDelantera(true)
{
    obligatorioM = new int;

}

BiciMontania::~BiciMontania()
{
    delete obligatorioM;
    cout<<"Destructor bici montaña"<<endl;
    
}