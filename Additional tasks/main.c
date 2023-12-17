#include "function.h"
#include <stdio.h>

int main()
{
/*
 unsigned int number;

    printf("Write number: ");
    scanf_s("%u", &number);

    unsigned int phi = eulerFunction(number);

    printf("Euler for number %u equals %u\n", number, phi);

    return 0;

*/
    double x;
    int precision;

    printf("Enter the value of x: ");
    scanf_s("%lf", &x);

    printf("Enter the precision: ");
    scanf_s("%d", &precision);

    double result = taylorSeries(x, precision);

    printf("The result of the Taylor series for exp %lf is %lf\n", x, result);

    return 0;
}
   

