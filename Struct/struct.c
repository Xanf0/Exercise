#include "struct.h"

void printYoungestEmployee(Employee employees[], int count)
{
    int min_age_index = 0;
    for (int j = 1; j < count; j++) {
        if (strcmp(employees[j].birth_date, employees[min_age_index].birth_date) < 0) {
            min_age_index = j;
        }
    }

    // Print the youngest employee's information
    printf("Youngest employee information:\n");
    printf("Surname: %s\n", employees[min_age_index].surname);
    printf("Name: %s\n", employees[min_age_index].name);
    printf("Middle name: %s\n", employees[min_age_index].middle_name);
    printf("Position: %s\n", employees[min_age_index].position);
    printf("Salary: %.2f\n", employees[min_age_index].salary);
    printf("Birth date: %s\n", employees[min_age_index].birth_date);
}

