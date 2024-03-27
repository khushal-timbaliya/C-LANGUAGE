//2. Find factorial of anumber.

#include <stdio.h>

int main() {
    int num, i,factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Enter Positive Number..");
    else {
        for(i = 1; i <= num; i++) {
            factorial *= i; 
        }
        printf("Factorial of %d = %d", num, factorial);
    }

}
