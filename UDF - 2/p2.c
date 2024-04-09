#include <stdio.h>
#include <string.h>

// Function to calculate the length of a string
int calculateLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char inputString[100];

    printf("Enter any string: ");
    scanf("%s", inputString);

    // Call the calculateLength() function
    int result = calculateLength(inputString);

    printf("Length is: %d\n", result);

    return 0;
}
