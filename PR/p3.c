#include<stdio.h>
main()
{
    for(int i=5;i>=1;i--)
    {
        for(int k=i;k<=4;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}