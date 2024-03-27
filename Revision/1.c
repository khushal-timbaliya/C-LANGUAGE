//1. Check for Prime Number using Simple Method
// What is a prime number ?


// A prime number is a whole number greater than 1 whose only factors are 1 and itself. 
// The number 546 is not a Prime Number

#include <stdio.h>

main() {
    int num,prime = 1 ; 

    printf("Enter Value of Number :");
    scanf("%d",&num);

    if (num == 0 || num == 1)
    {
        prime = 0;
    }

    for (int i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime) {
        printf("\n%d is a prime number.\n", num);
    } else {
        printf("\n%d is not a prime number.\n", num);
    }

}
