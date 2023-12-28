#include "function.h"

void getCofactor(float a[][MAX_SIZE], float temp[][MAX_SIZE], int p, int q, int n)
{
    int i = 0, j = 0;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = a[row][col];

                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

float determinant(float a[][MAX_SIZE], int n)
{
    int sign = 1;
    float det = 0;

    if (n == 1) {
        return a[0][0];
    }

    float temp[MAX_SIZE][MAX_SIZE];

    for (int f = 0; f < n; f++) {
        getCofactor(a, temp, 0, f, n);
        det += sign * a[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }

    return det;
}

void solveEquation(float a[][MAX_SIZE], float b[], int n)
{
    float detA = determinant(a, n);

    if (detA == 0) {
        printf("No unique solution exists.\n");
        return;
    }

    float detX;
    float result[10];
    float temp[10][10];

    for (int i = 0; i < n; i++) {

        for (int k = 0; k < n; k++) {
            for (int l = 0; l < n; l++) {
                temp[k][l] = a[k][l];
            }
        }


        for (int j = 0; j < n; j++) {
            a[j][i] = b[j];
        }


        detX = determinant(a, n);


        for (int k = 0; k < n; k++) {
            for (int l = 0; l < n; l++) {
                a[k][l] = temp[k][l];
            }
        }


        result[i] = detX / detA;
    }

    printf("Solution:\n");
    for (int i = 0; i < n; i++) {
        printf("x%d = %f\n", i + 1, result[i]);
    }
}