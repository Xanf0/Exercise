#include "functions.h"
#include <time.h>

int GenRandomNum(int RandomNum[SIZE])
{
    srand(time(NULL));

    RandomNum[0] = rand() % 9 + 1;
    for (int i = 1; i < SIZE; i++)
    {
        RandomNum[i] = rand() % 10;
    }
}

int Bulls(int RandomNum[SIZE], int guess[SIZE])
{
    int bulls = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (RandomNum[i] == guess[i])
        {
            bulls++;
        }
    }

    return bulls;
}

int Cows(int RandomNum[SIZE], int guess[SIZE])
{
    int cows = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (RandomNum[i] == guess[j] && i != j)
            {
                cows++;
            }
        }
    }

    return cows;
}

