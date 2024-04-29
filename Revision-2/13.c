// 13. Implement a function to concatenate two strings using pointers.

#include <stdio.h>

void concatStrings(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    
    printf("Before concatenation:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    
    concatStrings(str1, str2);
    
    printf("\nAfter concatenation:\n");
    printf("Concatenated string: %s\n", str1);
    
}
