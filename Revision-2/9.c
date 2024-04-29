#include <stdio.h>

#define ROWS 3
#define COLS 3

int sumOfElements(int arr[][COLS], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    int arr[ROWS][COLS];


    for(int i=0; i<ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            printf("\n no:");
            scanf("%d",&arr[i][j]);
        }
    }

    int totalSum = sumOfElements(arr, ROWS, COLS);

    printf("Sum of elements in the 2D array: %d\n", totalSum);
}
