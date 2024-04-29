// 3. Implement a C program to find the factorial of a number using recursion.

#include<stdio.h>
fact(x) {
    if (x>=1)
        return x*fact(x-1);
    else
        return 1;
}
main() {
    int x;
    printf("Enter A Number To Find Factorial: ");
    scanf("%d",&x);
    printf("The Factorial of %d = %d", x, fact(x));
    return 0;
}
