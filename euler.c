#include "euler.h"
#include<math.h>
#include <stdbool.h>
unsigned long long int Problem_1(const int value_, const int* multiples_, const unsigned int size_)
{
    unsigned long long sum = 0;

    for (unsigned int number = 0; number < value_; ++number)
    {
        for (unsigned int i = 0; i < size_; ++i)
        {
            if (number % multiples_[i] == 0)
            {
                sum += number;
                break;
            }


        }
    }
    return sum;
}

unsigned long long Problem_2(const unsigned int value_)
{
    unsigned long long sum = 0;
    unsigned fib1 = 1;
    unsigned fib2 = 2;

    while (fib2 < value_)
    {
        if (fib2 % 2 == 0)
        {
            sum += fib2;
        }

        unsigned int prom = fib1;
        fib1 = fib2;
        fib2 = fib1 + prom;
    }

    return sum;
}

unsigned long long Problem_3(long long num)
{
    for (long long i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;

        }
    }
    return 1;
}

unsigned long long Problem_4(int num)
{
        int original = num;
        int reverseNum = 0;

        while (original)
        {
            reverseNum = reverseNum * 10 + original % 10;
            original /= 10;
        }

        if (reverseNum == num)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}

unsigned long long Problem_5(const unsigned int value_)
{
    unsigned int number = 1;
    while (1)
    {
        bool flag = true;
        for (unsigned int del = 1; del <= value_; ++del)
        {
            if (number % del != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            return number;

        number++;
    }
}