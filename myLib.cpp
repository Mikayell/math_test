#include "myLib.h"

int fib(int num)
{
    if(num == 0 || num == 1)
        return num;
    return fib(num - 1) + fib(num - 2);
}

bool isPowOfTwo(int num)
{
    return num && (!(num & num - 1));
}

int numOf1s(int num)
{
    if(num == 0)
        return 0;
    return (num & 1) + numOf1s(num >> 1);
}

bool isPrime(int num)
{
    if(num <= 1)
        return false;

    for(int i = 2; i < num; ++i)
        if(num % i == 0)
            return false;

    return true;
}
