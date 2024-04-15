#include<stdio.h>
// Write a Program to find the reverse of a 1D array using a Chain of Pointers.
// For example,
// Input:
// Enter the array's size: 5

// Enter array elements:
// a[0] = 5
// a[1] = 9
// a[2] = 4
// a[3] = 7
// a[4] = 3

// Output:
// Reversed array elements:
// 3, 7, 4, 9, 5

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