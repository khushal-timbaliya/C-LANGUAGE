#include <stdio.h>

main()
{
    int a, even = 0, odd = 0;

    printf("Enter Size Of Array :");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter Value of Array :");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even ++;
        }
        else{
            odd++;
        }
    }
    printf("\n");
    printf("Even :%d\n",even);
    printf("Odd :%d",odd);
}