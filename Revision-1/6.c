#include <stdio.h>
#include <string.h>

int palindrome(const char *str) {
    int len = strlen(str);
    int i, j;

    char upperStr[len + 1];
    for (i = 0; i < len; i++) {
        upperStr[i] =(str[i]);
    }
    upperStr[len] = '\0';

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (upperStr[i] != upperStr[j]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (palindrome(input)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

}
