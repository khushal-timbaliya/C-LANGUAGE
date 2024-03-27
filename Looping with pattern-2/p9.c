#include<stdio.h>
main()
{
    for(int i=5; i>=1 ; i--)
    {
        
        for (int j = 1; j <=i; j++)
        {
            printf("%d",j);
        }
    
        for(int k=8; k>=i*2-1; k--)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
    
        printf("\n");
        
    }



    for(int i=1; i<=5 ; i++)
    {
        
        for (int j = 1; j <=i; j++)
        {
            printf("%d",j);
        }
    
        for(int k=8; k>=i*2-1; k--)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
    
        printf("\n");
        
    }

}