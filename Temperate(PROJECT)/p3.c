#include <stdio.h>

main() {
    int n, f, l, sum;

    printf("Enter a Number : ");
    scanf("%d", &n);

    f = n;
    while (f >= 10) {
        f = f/10;
    }

    l = n % 10;

    sum = f + l;

    printf("Sum of first and last digit is : %d \n",sum);

}