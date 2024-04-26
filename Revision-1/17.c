#include <stdio.h>

int main() {
    int limit;
    int first = 0, second = 1, next;

    printf("Enter the limit for the Fibonacci series: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d terms:\n", limit);

    while (first <= limit) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

}
