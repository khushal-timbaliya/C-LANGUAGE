#include <stdio.h>

int main() {
    int a;

    printf("Enter Size of Array :");
    scanf("%d",&a);
    int arr1[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter Value Of First Array :");
        scanf("%d",&arr1[i]);


    }
            int n1 = sizeof(arr1) / sizeof(arr1[0]);

    

    int arr2[a];

        for (int i = 0; i < a; i++)
    {
        printf("Enter Value Of Second Array :");
        scanf("%d",&arr2[i]);


    }
            int n2 = sizeof(arr2) / sizeof(arr2[0]);



    int mergedArr[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        mergedArr[k++] = arr1[i++];
    }

    while (j < n2) {
        mergedArr[k++] = arr2[j++];
    }

    printf("Merged array:\n");
    for (int idx = 0; idx < n1 + n2; idx++) {
        printf("%d ", mergedArr[idx]);
    }
    printf("\n");
}