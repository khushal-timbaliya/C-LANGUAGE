// 4. Write a program to check if a year is a leap year or not using if-else statements.

#include<stdio.h>
main()
{
    int year;

    printf("\nENTER THE YEAR:");
    scanf("%d",&year);

    (year%4==0) ? printf("\n%d YEAR IS LEAP YEAR",year) : printf("\n%d YEAR IS NOT LEAP YEAR",year);
}