#include<stdio.h>

main()
{
    int a;

    printf("Enter Year :");
    scanf("%d",&a);

    if (a % 4 == 0)
    {
        printf("This is Leap Year... %d",a);
    }
    else{
        printf("This is Not Leap Year.. %d",a);
    }
}