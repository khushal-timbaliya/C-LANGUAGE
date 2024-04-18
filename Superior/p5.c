#include <stdio.h>
main()
{
    int a;

    printf("Enter Size Of Array :");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter Value of Array :");
        scanf("%d", &arr[i]);
    }

    for (int i = a-1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
}