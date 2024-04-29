// 14. Develop a C program to reverse words in a given string.

#include <stdio.h>
#include <string.h>

void reverseWords(char *str) {
    char *start = str;

    while (*str) {
        if (*str == ' ' || *str == '\0') {
            char *end = str - 1;
            while (start < end) {
                char temp = *start;
                *start++ = *end;
                *end-- = temp;
            }
            start = str + 1;
        }
        str++;
    }
    char *end = str - 1;
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    reverseWords(str);

    printf("Reversed string: %s\n", str);

}
