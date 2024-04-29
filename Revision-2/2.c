// 2. Create a program to find the largest among three numbers using nested if-else.

#include<stdio.h>
main()
{
    int a,b,c;

    printf("\nENTER THE VALUE OF A=");
    scanf("%d",&a);
    
    printf("\nENTER THE VALUE OF B=");
    scanf("%d",&b);
    
    printf("\nENTER THE VALUE OF C=");
    scanf("%d",&c);
    

    if(a>b)
    {
        if(a>c)
        {
            printf("\nTHE LARGEST NUMBER IS A=%d",a);
        }
        else
        {
            printf("\nTHE LARGEST NUMBER IS C=%d",c);
        }
    }
    else if(b>c)
    {
        printf("\nTHE LARGEST NUMBER IS B=%d",b);
    }
    else
    {
        printf("\nTHE LARGEST NUMBER IS C=%d",c);
    }
}