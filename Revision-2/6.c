#include <stdio.h>

int countOccurrences(char str[], char ch) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    int occurrences = countOccurrences(str, ch);
    printf("The character '%c' occurs %d times in the string.\n", ch, occurrences);
}
