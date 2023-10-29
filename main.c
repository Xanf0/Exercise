#include <stdio.h>
#include "functions.h"
#include "euler.h"
#define SIZE 2
int main() {
 /*
      {
        int value = 0;
        int array[SIZE];

        printf("value = ");
        scanf_s("%d", &value);

        for (unsigned int i = 0; i < SIZE; ++i)
            scanf_s("%d", &array[i]);

        printf("%llu\n", Problem_1(value, array, SIZE));

        return 0;
      }*/



    /*
    int value = 0;
    printf("value = ");
    scanf_s("%d", &value);

    printf("answer = %llu\n", Problem_2(value));
    */
    


   /*
       long long number = 600851475143;
       long long largestPrimeDivisor = 1;

       for (long long i = 2; i * i <= number; i++) {
           if (number% i == 0 && Problem_3(i)) {
               largestPrimeDivisor = i;
           }
       }

       printf("Number:%lld MaxDelPrime = %lld\n", number, largestPrimeDivisor);

   }*/

    /*
    int largestPalindrom = 0;
   
           for (int i = 100; i < 1000; i++)
           {
               for (int j = 100; j < 1000; j++)
               {
                   int result = i * j;

                   if (Problem_4(result) && result > largestPalindrom)
                   {
                       largestPalindrom = result;
                   }
               }
           }

           printf("answer: %d\n", largestPalindrom);
*/
    
   
    printf("%llu\n", Problem_5(20));
}