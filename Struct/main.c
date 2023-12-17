#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

int main() {
    FILE* file;
    if (fopen_s(&file, "employees.txt", "r") != 0) {
        printf("Error: unable to open file\n");
        return 1;
    }

    Employee employees[100];
    int count = 0;

    while (fscanf_s(file, "%s %s %s %s %f %s",
        employees[count].surname, (unsigned)_countof(employees[count].surname),
        employees[count].name, (unsigned)_countof(employees[count].name),
        employees[count].middle_name, (unsigned)_countof(employees[count].middle_name),
        employees[count].position, (unsigned)_countof(employees[count].position),
        &employees[count].salary,
        employees[count].birth_date, (unsigned)_countof(employees[count].birth_date)) != EOF) {
        count++;
    }

    fclose(file);

    if (count > 0) {
        printYoungestEmployee(employees, count);
    }
    else {
        printf("No employee data found.\n");
    }

    return 0;
}
