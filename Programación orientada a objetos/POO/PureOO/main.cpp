#include "Collection.h"
#include "ArrayCollection.h"
#include "Sort.h"
#include "Insertion.h"
#include "Comparable.h"
#include<iostream>
using namespace std;

int main()
{
    Collection<int>* c = new ArrayCollection<int>(5);
    
    c->at(0)=13;
    c->at(1)=31;
    c->at(2)=34;
    c->at(3)=14;
    c->at(4)=11;
    
    Sort<int>* s = new Insertion<int>();
    
    s->sort(*c);
 
    for(int i=0; i<c->getSetSize();i++)
        cout << c->at(i) << " ";
    
    delete c;
    return 0;
}