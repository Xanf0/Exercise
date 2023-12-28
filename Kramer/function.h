#pragma once
#define MAX_SIZE 10

/*
*brief ��������� �������������� ���������� �������, �������� ������������ ������ � �������
*param a - �������, ��� ������� ����������� ��������
*param temp - ��������� ������� ��� �������� ����������
*param p - ������ ������ ��� ����������
*param q - ������ ������� ��� ����������
*param n - ����������� �������
*/
void solveEquation(float a[][MAX_SIZE], float b[], int n);
/*
*brief ��������� ������������ �������
*param a - �������, ��� ������� ����������� ������������
*param n - ����������� �������
*return ������������ ������� 
*/
float determinant(float a[][MAX_SIZE], int n);
/*
*brief ������ ������� �������� ��������� ���� Ax = b
*param a - ������� �������������
*param b - ������ ��������� ������
*param n - ����������� �������
*/
void getCofactor(float a[][MAX_SIZE], float temp[][MAX_SIZE], int p, int q, int n);

