#include "function.h"

unsigned int eulerFunction(unsigned int n)
{
    unsigned int result = n;
    unsigned int i;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            result -= result / i;
        }
    }

    if (n > 1) {
        result -= result / n;
    }

    return result;
}



double power(double base, int exponent)
{
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

double factorial(int n)
{
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double taylorSeries(double x, int precision)
{
    double sum = 1.0;
    for (int i = 1; i <= precision; i++) {
        double term = power(x, i) / factorial(i);
        sum += term;
    }
    return sum;
}


