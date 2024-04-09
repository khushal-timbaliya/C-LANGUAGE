#include <stdio.h>

// Recursive function to calculate factorial
long long calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the calculateFactorial() function
        long long result = calculateFactorial(num);
        printf("Factorial of %d is %lld\n", num, result);
    }

    return 0;
}
