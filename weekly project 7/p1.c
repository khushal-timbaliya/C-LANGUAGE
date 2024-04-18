#include <stdio.h>
main()
{
    int a;

    printf("Enter Number :");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("This is Zero... %d",a);
    }
    else if (a < 0)
    {
        printf("This is Nagative... %d",a);
    }
    else{
        printf("This is Positive... %d",a);
    }
}