#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int first, second;

    printf("Enter first integer: ");
    scanf("%d", &first);
    printf("Enter first integer: ");
    scanf("%d", &second);

    printf("Before swapping: \nnum1 = %d\nnum2 = %d\n", first, second);

    swap(&first, &second);

    printf("after swapping: \nnum1 = %d\nnum2 = %d\n", first, second);

    return 0;
}
