#include <stdio.h>

main()
{
    int a, b;

    printf("Enter First Size Of Array :");
    scanf("%d", &a);
    printf("Enter Second Size Of Array :");
    scanf("%d", &b);

    int arr[a];
    int arr1[b];

    printf("Enter First Array Value :\n");

    for (int i = 0; i < a; i++)
    {
        printf("Enter Value of Array :");
        scanf("%d", &arr[i]);
    }

    printf("Enter Second Array Value :\n");

    for (int i = 0; i < b; i++)
    {
        printf("Enter Value of Array :");
        scanf("%d", &arr1[i]);
    }


    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i] == arr1[j])
            {
                printf("%d\n",arr[i]);
                break;
            }
            
        }
        
    }
    printf("\n");

}