#include <stdio.h>

void toLowercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main() {
    char str[] = "Hello, World!";
    toLowercase(str);
    printf("Lowercase string: %s\n", str);
}