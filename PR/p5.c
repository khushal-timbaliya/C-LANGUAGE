#include<stdio.h>
main()
{
    
    for(int i=4;i>=1;i--)
    {
        for(int k=i;k<=4;k++)
        {
            printf(" ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }



    for(int i=2;i<=4;i++)
    {
        for(int k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}