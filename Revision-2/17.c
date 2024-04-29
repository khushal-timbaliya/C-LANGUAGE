// 17. Develop a program to check if a given number is Armstrong or not.

#include <stdio.h>
#include <math.h>

int Armstrong(int num) {
    int on, rem, n = 0, res = 0;

    on = num;

    while (on != 0) {
        on /= 10;
        ++n;
    }

    on = num;

    while (on != 0) {
        rem = on % 10;
        res += pow(rem, n);
        on /= 10;
    }

    if (res == num)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (Armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}
