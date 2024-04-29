// 1. Write a C program to check if a number is even or odd using if-else statements.

#include<stdio.h>
main()
{
    int a;

    printf("\nENTER THE NUMBER:");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("\n%d NUMBER IS EVEN",a);
    }
    else
    printf("\n%d NUMBER IS ODD",a);
}