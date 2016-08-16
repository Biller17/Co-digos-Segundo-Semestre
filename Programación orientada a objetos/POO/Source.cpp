#include "Vehiculos.h"
#include "Convertibles.h"
#include "Sedanes.h"
#include "Deportivos.h"
#include "Marinos.h"
#include "Hibridos.h"
#include "Lista.h"

bool mayor(int anio1, int anio2);
bool menor(int anio1, int anio2);

int main()
{
	Vehiculos *c1 = new Convertibles("XZ200", "BMW", "Negro", 2013, 4, 4, 450000, 150000, "Automatico", "Nuevo", "Piel");
	Vehiculos *c2 = new Deportivos("Passat", "Volkswagen", "Blanco", 2015, 6, 4, 350000, 100000, "Automatico", "Usado", 4);
	Vehiculos *c3 = new Sedanes("Sedan", "Suzuki", "Rojo", 2014, 4, 4, 150000, 85000, "Estandar", "Nuevo");
	Vehiculos *c4 = new Convertibles("ZZ400", "Ferrari", "Azul", 2012, 2, 2, 900000, 250000, "Automatico", "Nuevo", "Piel");
	Vehiculos *c5 = new Deportivos("P2000", "Porsche", "Naranja", 2016, 4, 4, 1500000, 450000, "Automatico", "Nuevo", 6);
	string response;
	//c1->printMe(); // Metodo para imprimir el vehiculo
	//c2->printMe(); 
	//c3->printMe();

	//cout << "Tengo " <<  c1->devolverEdad() << " anios" << endl << endl; // Metodo que devuelve la edad del vehiculo
	//c1->devolverCostoDev(); //Metodo que devuelve el costo devaluado
	//c1->servicio(); // Metodo que dice cuantos kilometros faltan para que se necesite el servicio

	Lista <Vehiculos*> le;
	le.addElement(c1); //Metodo que agrega elementos al almacen
	le.addElement(c2);
	le.addElement(c3);
	le.addElement(c4);
	le.addElement(c5);
	//le.imprimirElementos(); // Metodo que devuelve numeros de elementos

	//le.deleteLast(); //Metodo que borra el ultimo elemento

	//le.deletePos(1); //Metodo para borrar tal posicion

	//cout << "El coche fabricado en 2014 se encuentra en la posicion " << le.search(2014) << endl << endl; //Metodo que imprime la posicion del coche por anos

	//cout << "El coche de modelo de Volkswagen se encuentra en la posicion " << le.search("Volkswagen") << endl << endl; //Metodo que imprime la posicion del modelo tal

	//le.sortYear(); //Metodo para sort de mayor a menor

	//le.sortYear2(); //Metodo para sort de menor a mayor

	//le.sortPrice(); //Metodo para sort de mayor a menor precios

	//le.sortPrice2(); //Metodo para sort de menor a mayor precios

	//le.print();

	//TAREA FINAL :
	cout << "Tarea 1 Final (3er parcial): " << endl;
	cout << "El coche con el nombre de XZ200 se encuentra en la posicion " << le.searchAll("XZ200", &Vehiculos::getName) << endl;
	cout << "El coche de modelo Volkswagen se encuentra en la posicion " << le.searchAll("Volkswagen", &Vehiculos::getModel) << endl;
	cout << "El coche con el color Rojo se encuentra en la posicion " << le.searchAll("Rojo", &Vehiculos::getColor) << endl;
	cout << "El coche que se va a fabricar en 2016 se encuentra en la posicion " << le.searchAll(2016, &Vehiculos::getYear) << endl;
	cout << "El coche con el numero maximo de pasajeros de 6 se encuentra en la posicion " << le.searchAll(6, &Vehiculos::getPassengers) << endl;
	cout << "El coche con el precio de 1,500,000 se encuentra en la posicion " << le.searchAll(1500000, &Vehiculos::getCost) << endl;
	cout << "El coche con el kilometraje de 100,000 se encuentra en la posicion " << le.searchAll(100000, &Vehiculos::getKilometraje) << endl;
	cout << "El coche de tipo Estandar se encuentra en la posicion " << le.searchAll("Estandar", &Vehiculos::getType) << endl;
	cout << "El coche usado se encuentra en la posicion " << le.searchAll("Usado", &Vehiculos::getUsed) << endl << endl;

	//le.sortAll(&Vehiculos::getYear); //Sort por anios

	//le.sortAll(&Vehiculos::getPassengers); //Sort por pasajeros

	//le.sortAll(&Vehiculos::getCost); //Sort por costo

	//le.sortAll(&Vehiculos::getKilometraje); //Sort por Kilometraje

	//le.print();

	
	//SORTS DE MAYOR A MENOR:
	//le.sortChoice(&Vehiculos::getYear, mayor); //Sort por anios con choice

	//le.sortChoice(&Vehiculos::getPassengers, mayor); //Sort por pasajeros con choice
	
	//le.sortChoice(&Vehiculos::getCost, mayor); //Sort por costo con choice

	//le.sortChoice(&Vehiculos::getKilometraje, mayor); //Sort por kilometraje con choice

	//SORTS DE MENOR A MAYOR:
	//le.sortChoice(&Vehiculos::getYear, menor); //Sort por anios con choice

	//le.sortChoice(&Vehiculos::getPassengers, menor); //Sort por pasajeros con choice

	//le.sortChoice(&Vehiculos::getCost, menor); //Sort por costo con choice

	//le.sortChoice(&Vehiculos::getKilometraje, menor); //Sort por kilometraje con choice

	le.print();
}

bool mayor(int anio1, int anio2)
{
	return anio1 < anio2;
}

bool menor(int anio1, int anio2)
{
	return anio1 > anio2;
}