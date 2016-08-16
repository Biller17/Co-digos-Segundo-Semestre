#pragma once
#include <iostream>
#include <string.h>
using namespace std;


class Cesar
{
private:
    string decrypted;
    string encrypted;
    string* posiblesCombinaciones;
    char abecedario[52]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
public:
    Cesar();
    Cesar(string decrypted);
    string operator[](int index);
    string cypher(string decrypted,int desplazamiento);
    int getSize(string decrypted);
    char getNewLetter(char letter, int desplazamiento);
    void print();
    void decrypt();
    void decrypt(int desplazamiento);
    
};

Cesar::Cesar(){}

Cesar::Cesar(string decrypted)
{
    int desplazamiento;
    this->decrypted = decrypted;
    encrypted = cypher(decrypted,desplazamiento);
}
int Cesar::getSize(string decrypted)
{
    int size = decrypted.length();
    return size;
}

string Cesar::cypher(string decrypted, int desplazamiento)
{
    cout<<"Constante de cifrado: "<<desplazamiento<<endl;
    cout<<"Palabra original: "<<decrypted<<endl;
    int decryptedSize = getSize(decrypted);
    encrypted = decrypted;
    for(int i = 0; i<=decryptedSize; i++)
    {
        encrypted[i]=getNewLetter(decrypted[i], desplazamiento);
    }
    return encrypted;
}

char Cesar::getNewLetter(char letter, int desplazamiento)
{
    int i;
    for(i = 0; i<26; i++)
    {
        if(letter == abecedario[i])
            break;
    }
    return abecedario[i + desplazamiento];
}

string Cesar::operator[](int index)
{
    return *(posiblesCombinaciones+index);
}

void Cesar::print()
{
    cout<<"Palabra encriptada: "<<encrypted<<endl;
}

void Cesar::decrypt()
{
    string word;
    cout<<"Ingrese la palabra a encriptar: "<<endl;
    cin>>word;
    for(int i = 0; i<27; i++)
    {
        cypher(word, i);
        print();
    }
}








