#include "string.h"

void createNewString(const char* str1, const char* str2, char* newStr, int length)
{
    int i;
    for (i = 0; i < length; i++) {
        if (i % 2 == 0) {
            newStr[i] = str1[i];
        }
        else {
            newStr[i] = str2[i];
        }
    }
    newStr[length] = '\0';
}
