#include <stdio.h>

// Function to divide two numbers and print the result
void divideNumbers(int dividend, int divisor) {
    if (divisor == 0) {
        printf("Error: Cannot divide by zero!\n");
    } else {
        double quotient = (double)dividend / divisor;
        printf("Quotient of %d divided by %d is %.2lf\n", dividend, divisor, quotient);
    }
}

int main() {
    int num1, num2;

    printf("Enter the dividend: ");
    scanf("%d", &num1);

    printf("Enter the divisor: ");
    scanf("%d", &num2);

    // Call the divideNumbers() function
    divideNumbers(num1, num2);

    return 0;
}
