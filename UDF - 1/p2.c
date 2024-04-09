#include <stdio.h>

// Function to multiply two numbers and print the result
void multiplyNumbers(int a, int b) {
    int product = a * b;
    printf("Product of %d and %d is %d\n", a, b, product);
}

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Call the multiplyNumbers() function
    multiplyNumbers(num1, num2);

    return 0;
}
