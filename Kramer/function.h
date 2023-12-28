#pragma once
#define MAX_SIZE 10

/*
*brief Вычисляет алгебраические дополнения матрицы, исключая определенную строку и столбец
*param a - Матрица, для которой вычисляется кофактор
*param temp - Временная матрица для хранения кофакторов
*param p - Индекс строки для исключения
*param q - Индекс столбца для исключения
*param n - Размерность матрицы
*/
void solveEquation(float a[][MAX_SIZE], float b[], int n);
/*
*brief Вычисляет определитель матрицы
*param a - Матрица, для которой вычисляется определитель
*param n - Размерность матрицы
*return Определитель матрицы 
*/
float determinant(float a[][MAX_SIZE], int n);
/*
*brief Решает систему линейных уравнений вида Ax = b
*param a - Матрица коэффициентов
*param b - Вектор свободных членов
*param n - Размерность матрицы
*/
void getCofactor(float a[][MAX_SIZE], float temp[][MAX_SIZE], int p, int q, int n);

