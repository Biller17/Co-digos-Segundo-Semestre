#include "Overloading.h"

int main()
{
    Numero uno(34);
    
    Numero dos(50);
    
    Numero tres = uno + dos;
    
    cout<<tres.getValue();
    
    cout<<((uno == dos)?"True":"False");
    
    cout<<uno;
    cout<<endl;
    cout<<dos;
    cout<<endl;
    
    return 0;
}