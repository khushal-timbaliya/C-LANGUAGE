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

    int sec = arr[0];

    for (int i = 1; i < a; i++)
    {
        if (arr[i] > arr[0]) 
        {
            sec = arr[0];
            arr[0] = arr[i];
        }
        else if (arr[i] > sec && arr[i] != arr[0])
        {
            sec = arr[i];
        }
    }

    printf("The second largest element is: %d\n", sec);
}