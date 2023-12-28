#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int n;
    float a[MAX_SIZE][MAX_SIZE]; 
    float b[MAX_SIZE]; 

    printf("Enter the number of unknowns (maximum %d): ", MAX_SIZE);
    scanf_s("%d", &n);

    printf("Enter the coefficient matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf_s("%f", &a[i][j]);
        }
    }

    printf("Enter the constant matrix:\n");

    for (int i = 0; i < n; i++) {
        scanf_s("%f", &b[i]);
    }

    solveEquation(a, b, n);

    return 0;
}
