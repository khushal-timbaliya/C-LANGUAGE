#include<stdio.h>

main()
{
    int a,b,c;

    printf("Enter First Number :");
    scanf("%d",&a);

    printf("Enter Second Number :");
    scanf("%d",&b);

    printf("Enter Third Number :");
    scanf("%d",&c);

    if (a > b)
    {
        if (a > c)
        {
            printf("First Number Is Big .. %d",a);
        }
        
        else{
            printf("Third Number Is Big.. %d",c);
        }

    }
    else if (b > c)
    {
        printf("Second Number Is big .. %d",b);
    }
    else
    {
            printf("Third Number Is Big.. %d",c);
    }
    
    
}