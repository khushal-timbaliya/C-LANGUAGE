#include<stdio.h>
main()
{
    int i,j,k;
    char a='A';

    for ( i = 0; i <= 5; i++)
    {
        for(k = i; k <= 5; k++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            printf(" %c",a);
            a++;
        }
        printf("\n");
    }

    for ( i = 4; i >= 0; i--)
    {
        for(k = i; k <= 5; k++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            printf(" %c",a);
            a++;
        }
        printf("\n");
    }
    
}