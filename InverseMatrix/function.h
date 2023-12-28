#pragma once
#define MAX_SIZE 10

/*
 * @brief Инициализирует расширенную матрицу значениями из оригинальной матрицы.
 * @param matrix Оригинальная матрица.
 * @param augmentedMatrix Расширенная матрица.
 * @param n Размер матрицы.
 */
void initializeAugmentedMatrix(double matrix[][MAX_SIZE], double augmentedMatrix[][2 * MAX_SIZE], int n);
/*
 * @brief Проверяет, является ли диагональный элемент равным нулю.
 * @param augmentedMatrix Расширенная матрица.
 * @param row Строка, для которой проверяется диагональный элемент.
 * @return 1, если диагональный элемент равен нулю; 0, если диагональный элемент не равен нулю.
 */
int isDiagonalElementZero(double augmentedMatrix[][2 * MAX_SIZE], int row);
/*
 * @brief Выполняет операции над строками в методе Гаусса-Жордана.
 * @param augmentedMatrix Расширенная матрица.
 * @param n Размер матрицы.
 * @param pivotRow Строка, которая является разрешающим элементом.
 */
void performRowOperations(double augmentedMatrix[][2 * MAX_SIZE], int n, int pivotRow);
/*
 * @brief Делит каждую строку на диагональный элемент.
 * @param augmentedMatrix Расширенная матрица.
 * @param n Размер матрицы.
 * @param row Строка, которую нужно поделить на диагональный элемент.
 */
void divideRowByDiagonalElement(double augmentedMatrix[][2 * MAX_SIZE], int n, int row);
/*
 * @brief Извлекает обратную матрицу из расширенной матрицы.
 * @param augmentedMatrix Расширенная матрица.
 * @param inverseMatrix Обратная матрица.
 * @param n Размер матрицы.
 */
void extractInverseMatrix(double augmentedMatrix[][2 * MAX_SIZE], double inverseMatrix[][MAX_SIZE], int n);
/*
 * @brief Находит обратную матрицу заданной матрицы.
 * @param matrix Заданная матрица.
 * @param n Размер матрицы.
 */
void findInverseMatrix(double matrix[][MAX_SIZE], int n);

