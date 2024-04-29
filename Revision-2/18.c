// 18. Write a C program to find the factorial of a number.

#include <stdio.h>

int main() {
    int num,fact=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++)
    {
        fact *=i;
    }
    

    if (num < 0)
        printf("Factorial of negative numbers is not defined.\n");
    else
        printf("Factorial of %d is %d\n", num, fact);
}
