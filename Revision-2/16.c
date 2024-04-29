// 16. Implement a C program to find the sum of digits of a number .

#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    
    while (num != 0) {
        sum += num % 10; 
        num /= 10;     
    }
    
    return sum;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = sumOfDigits(num);
    
    printf("Sum of digits of %d is %d\n", num, sum);

}
