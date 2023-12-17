#include "euler.h"
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

int Problem_2(int limit)
{
        int previous = 0;
        int current = 1;
        int sum = 0;
        int temp;

        while (current <= limit) {
            if (current % 2 == 0) {
                sum += current;
            }
            temp = current;
            current = previous + current;
            previous = temp;
        }

        return sum;
 }


int Problem_3(long long num)
{
    if (num < 2) {
        return 0;
    }

    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) {
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

int Problem_5()
{
    int number = 1;
    int isDivisible = 0;

    while (!isDivisible) {
        int i;
        for (i = 1; i <= 20; i++) {
            if (number % i != 0) {
                break;
            }
        }

        if (i > 20) {
            isDivisible = 1;
        }
        else {
            number++;
        }
    }

    return number;
}




