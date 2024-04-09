#include <stdio.h>

// Function to calculate the cube of a number and print the result
void calculateCube(int num) {
    long long cube = (long long)num * num * num;
    printf("Cube of %d is %lld\n", num, cube);
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the calculateCube() function
    calculateCube(number);

    return 0;
}
