#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4

 GenRandomNum(int RandomNum[SIZE]) 
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

int main() 
{
    int RandomNum[SIZE];
    int guess[SIZE];
    int bulls, cows;
    int attempts = 0;

    GenRandomNum(RandomNum);

    do 
    {
        printf("\nTry %d\n", attempts + 1);

        for (int i = 0; i < SIZE; i++) 
        {
            scanf_s("%1d", &guess[i]);
        }

        bulls = Bulls(RandomNum, guess);
        cows = Cows(RandomNum, guess);

        printf("Bulls: %d, Cows: %d\n", bulls, cows);

        attempts++;
    } while (bulls != SIZE);

    printf("\nYou won with %d Try.\n", attempts);
    printf("RandomNum: ");
    for (int i = 0; i < SIZE; i++) 
    {
        printf("%d", RandomNum[i]);
    }

    return 0;
}