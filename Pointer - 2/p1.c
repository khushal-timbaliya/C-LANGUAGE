#include <stdio.h>

main(){

    int a;
    int *b;

    printf("Enter the size of array=");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the value of array=");
        scanf("%d", &arr[i]);
    }

    b = &arr;

    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d\n", *(b + i));
    }
}