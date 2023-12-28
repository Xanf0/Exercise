#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int n;
    double matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the size of the matrix: ");
    scanf_s("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf_s("%lf", &matrix[i][j]);
        }
    }

    findInverseMatrix(matrix, n);

    return 0;
}
