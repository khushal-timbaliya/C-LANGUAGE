#include <stdio.h>

int main() {
    int num, i = 2;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    }

    do {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
        }
        i++;
    } while (i * i <= num);

    printf("%d is a prime number.\n", num);

}
