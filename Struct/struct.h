#pragma once
typedef struct 
{
    char surname[50];
    char name[50];
    char middle_name[50];
    char position[50];
    float salary;
    char birth_date[20];
} Employee;

void printYoungestEmployee(Employee employees[], int count);
/**
 * @brief ������� ���������� � ����� ������� ����������.
 * @param employees: ������ �����������.
 * @param count: ���������� �����������.
 */