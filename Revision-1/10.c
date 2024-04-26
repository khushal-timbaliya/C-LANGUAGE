#include<stdio.h>
main()
{
    int i,j,a=1;

    for (i = 0; i < 5; i++)
    {
        for(j = 0; j< 5; j++)
        {
            printf(" %2d",a);
            a++;
        }
        printf("\n");
    }
    
}