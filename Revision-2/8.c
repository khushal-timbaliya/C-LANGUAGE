#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    int lar = arr[0];
    int sl = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > lar) {
            sl = lar;
            lar = arr[i];
        } else if (arr[i] > sl && arr[i] != lar) {
            sl = arr[i];
        }
    }

    return sl;
}

int main() {
    int s;
    
    printf("\n enter size of array:");
    scanf("%d",&s);
    int arr[s];

    for (int i = 0; i < s; i++)
    {
        printf("\n no:");
        scanf("%d",&arr[i]);
    }
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, size);
    printf("The second largest element in the array is: %d\n", secondLargest);
}
