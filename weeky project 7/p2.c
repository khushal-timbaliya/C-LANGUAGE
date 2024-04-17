#include<stdio.h>

main()
{
    int a;

    printf("Enter Number :");
    scanf("%d",&a);

    if (a % 2 == 0)
    {
        printf("This is Even... %d",a);
    }
    else{
        printf("This is Odd.. %d",a);
    }
}