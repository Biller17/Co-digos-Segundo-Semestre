#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class Primes
{
public:
    bool isPrime(int num);
    int getNEsimPrime(int count);
    int sumPrimesBelow(int n);
    void getCircularPrimesBelow();
    int rotation(int number, int digits);
    int digitCount(int number);
};