#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

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