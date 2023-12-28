#pragma once
#define MAX_SIZE 10

/*
 * @brief �������������� ����������� ������� ���������� �� ������������ �������.
 * @param matrix ������������ �������.
 * @param augmentedMatrix ����������� �������.
 * @param n ������ �������.
 */
void initializeAugmentedMatrix(double matrix[][MAX_SIZE], double augmentedMatrix[][2 * MAX_SIZE], int n);
/*
 * @brief ���������, �������� �� ������������ ������� ������ ����.
 * @param augmentedMatrix ����������� �������.
 * @param row ������, ��� ������� ����������� ������������ �������.
 * @return 1, ���� ������������ ������� ����� ����; 0, ���� ������������ ������� �� ����� ����.
 */
int isDiagonalElementZero(double augmentedMatrix[][2 * MAX_SIZE], int row);
/*
 * @brief ��������� �������� ��� �������� � ������ ������-�������.
 * @param augmentedMatrix ����������� �������.
 * @param n ������ �������.
 * @param pivotRow ������, ������� �������� ����������� ���������.
 */
void performRowOperations(double augmentedMatrix[][2 * MAX_SIZE], int n, int pivotRow);
/*
 * @brief ����� ������ ������ �� ������������ �������.
 * @param augmentedMatrix ����������� �������.
 * @param n ������ �������.
 * @param row ������, ������� ����� �������� �� ������������ �������.
 */
void divideRowByDiagonalElement(double augmentedMatrix[][2 * MAX_SIZE], int n, int row);
/*
 * @brief ��������� �������� ������� �� ����������� �������.
 * @param augmentedMatrix ����������� �������.
 * @param inverseMatrix �������� �������.
 * @param n ������ �������.
 */
void extractInverseMatrix(double augmentedMatrix[][2 * MAX_SIZE], double inverseMatrix[][MAX_SIZE], int n);
/*
 * @brief ������� �������� ������� �������� �������.
 * @param matrix �������� �������.
 * @param n ������ �������.
 */
void findInverseMatrix(double matrix[][MAX_SIZE], int n);

