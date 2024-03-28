#include<stdio.h>
main()
{
    for (int i = 1; i <=5; i++)
    {
        for (int j = 2; j <=i; j++)
        {
            printf(" ");
        }
        for (int k = i; k<=5; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}