#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
int main() {
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];
    char newStr[MAX_LENGTH];

    printf("Write two string same length:");
    scanf_s("%s %s", str1, sizeof(str1), str2, sizeof(str2));

    int length = strlen(str1);
    if (length != strlen(str2)) {
        printf("Length must be same.\n");
        return 1;
    }

    createNewString(str1, str2, newStr, length);

    printf("New string:%s\n", newStr);

    return 0;
}
