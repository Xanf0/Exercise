#pragma once
#define SIZE 4
/**
 * @brief ���������� ��������� ����� � ��������� ��������.
 * @param RandomNum: ������ ��� ���������� ���������� �����
 */
int GenRandomNum(int RandomNum[SIZE]);
/*
 * @brief ������������ ���������� ����������� ���� �� ���������� ��������.
 * @param RandomNum: ������ � ���������� ������
 * @param guess: ������ � �������������� ������
 * @return ���������� �����
 */
int Bulls(int RandomNum[SIZE], int guess[SIZE]);
/*
 * @brief ������������ ���������� ����������� ����, �� ����������� �� ���������� ��������.
 * @param RandomNum: ������ � ���������� ������
 * @param guess: ������ � �������������� ������
 * @return ���������� �����
 */
int Cows(int RandomNum[SIZE], int guess[SIZE]);

