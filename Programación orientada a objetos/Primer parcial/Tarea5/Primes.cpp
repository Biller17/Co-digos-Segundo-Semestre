#include "Primes.h"

bool Primes::isPrime(int num)
{
    int count,div;
    bool prime = true;
    for(div = 2; div < num; div++)
    {
        if(num % div == 0)
        count++;
    }
    if(count == 0)
        prime = true;
    else
        prime = false;
    return prime;
}

int Primes::getNEsimPrime(int count)
{
    if (1 == count)
        return 2;
    int num = 2;
    
    for(int c = 0; c < count; num++)
    {
        if(isPrime(num))
        {
            c++;
        }
    }
    cout<<"El "<<count<<"to numero primo es: "<<num;
    return num;
}
int Primes::sumPrimesBelow(int n)
{
    int num,sum;
    for(num = 2; num < n; num++)
    {
        if(isPrime(num))
        {
            sum+=num;
        }
    }
    return sum;
}

void Primes::getCircularPrimesBelow()
{
    int digits;
    for(int num = 2; num < 10000; num ++)
    {
        if(isPrime(num))
        {
            digits = digitCount(num);
            num = rotation(num, digits);
            while(digits>0 && isPrime(num))
            {
                num = rotation(num, digitCount(num));
                digits--;
            }
            if(digits == 0)
            {
                cout<<num<<"Es un primo circular\n ";
            }
        }
    }
}

int Primes::rotation(int number,int digits)
{
    int lastDigit;
    
    lastDigit = number % 10;
    lastDigit = lastDigit*pow(10,digits-1);
    number = number/10;
    number = lastDigit+number;
    return number;
}

int Primes::digitCount (int number)
{
    int digits;
    for(digits = 0; number > 0; digits ++)
    {
        number = number / 10;
    }
    return digits;
}










