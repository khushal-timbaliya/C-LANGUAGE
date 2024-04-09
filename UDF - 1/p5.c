#include <stdio.h>

// Function to calculate the square of a number and print the result
void calculateSquare(int num) {
    long long square = (long long)num * num;
    printf("Square of %d is %lld\n", num, square);
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the calculateSquare() function
    calculateSquare(number);

    return 0;
}
