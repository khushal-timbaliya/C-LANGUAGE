// 12. Write a program to compare two strings without using strcmp() function.

#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result < 0) {
        printf("First string is less than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }
}
