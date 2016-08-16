template <class T>
class SobrecargaOs
{
public:
	template <class Q>
	friend ostream& operator << (ostream& os, const SobrecargaOs<Q>& s);

};


template <class Q>//si es una plantilla, se debe poner en la declaracion de 
ostream& operator << (ostream& os, const SobrecargaOs <Q>& s)
{

}