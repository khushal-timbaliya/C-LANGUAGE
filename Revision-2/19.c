// 19. Implement a function to find the square root of a number without using sqrt() function.

#include <stdio.h>

int squareRoot(num) {
    int x = num;
    int y = 1;
    int z = 0.000001; 

    while (x - y > z) {
        x = (x + y) / 2;
        y = num / x;
    }

    return x;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Square root is not defined for negative numbers.\n");
    } else {
        printf("Square root of %d is %.2d\n", num, squareRoot(num));
    }

}
