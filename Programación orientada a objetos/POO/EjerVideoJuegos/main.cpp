
#include "Character.h"
#include "Hero.h"
#include "Villain.h"
#include "Minion.h"
#include "Princess.h"
#include "commons.h"
#include "Almacen.h"

int main()
{
    Character* c1 = new Hero("Shrek", 10);
    Character* c2  = new Princess("Fiona", 10);
    
    Character* c3 = new Villain("Joker", 10);
    Character* c4 = new Minion("MiniMinion", 5);
    
    
    
    c1->getSetStrength() = 10;
    
    cout << c1->getSetStrength();
    

    c1->printMe();    
    c4->printMe();

    Character* c = new Hero("SuperShrek", 10);
    
    (dynamic_cast<Princess*>(c2))->scream();
    
    Princess* p = dynamic_cast<Princess*>(c2);
    if (p!=0)
        p->scream();
    
    Almacen<Graphic*> miAlmacen;
    miAlmacen.agregar(c1, 0);
    miAlmacen.agregar(c2, 1);
    miAlmacen.agregar(c3, 2);
    miAlmacen.agregar(c4, 3);
    miAlmacen.imprimir();
    
    cout << "se encuentra en la posicion " << miAlmacen.buscar("Juanito");
    return 0;
}