#include "function.h"

void initializeAugmentedMatrix(double matrix[][MAX_SIZE], double augmentedMatrix[][2 * MAX_SIZE], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            if (j < n)
                augmentedMatrix[i][j] = matrix[i][j];
            else if (j == n + i)
                augmentedMatrix[i][j] = 1.0;
            else
                augmentedMatrix[i][j] = 0.0;
        }
    }
}

int isDiagonalElementZero(double augmentedMatrix[][2 * MAX_SIZE], int row)
{
    return augmentedMatrix[row][row] == 0.0;
}
void performRowOperations(double augmentedMatrix[][2 * MAX_SIZE], int n, int pivotRow)
{
    for (int j = 0; j < n; j++) {
        if (pivotRow != j) {
            double factor = augmentedMatrix[j][pivotRow] / augmentedMatrix[pivotRow][pivotRow];
            for (int k = 0; k < 2 * n; k++) {
                augmentedMatrix[j][k] -= factor * augmentedMatrix[pivotRow][k];
            }
        }
    }
}

void divideRowByDiagonalElement(double augmentedMatrix[][2 * MAX_SIZE], int n, int row)
{
    double divisor = augmentedMatrix[row][row];
    for (int j = 0; j < 2 * n; j++) {
        augmentedMatrix[row][j] /= divisor;
    }
}

void extractInverseMatrix(double augmentedMatrix[][2 * MAX_SIZE], double inverseMatrix[][MAX_SIZE], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inverseMatrix[i][j] = augmentedMatrix[i][j + n];
        }
    }
}

void findInverseMatrix(double matrix[][MAX_SIZE], int n)
{
    double augmentedMatrix[MAX_SIZE][2 * MAX_SIZE];
    double inverseMatrix[MAX_SIZE][MAX_SIZE];

    initializeAugmentedMatrix(matrix, augmentedMatrix, n);

    for (int i = 0; i < n; i++) {
        if (isDiagonalElementZero(augmentedMatrix, i)) {
            printf("Inverse doesn't exist.\n");
            return;
        }

        performRowOperations(augmentedMatrix, n, i);
    }

    for (int i = 0; i < n; i++) {
        divideRowByDiagonalElement(augmentedMatrix, n, i);
    }

    extractInverseMatrix(augmentedMatrix, inverseMatrix, n);

    printf("Inverse Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f\t", inverseMatrix[i][j]);
        }
        printf("\n");
    }
}






