#include <stdio.h>

int main() {
    int num;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error!");
    } 
    else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %d", num, factorial);
    }
    return 0;
}
