#include <stdio.h>

main() {
    int num, sum = 0;

    printf("Enter a Number : ");
    scanf("%d", &num);

    int t = num;
    while (t != 0) {
        t = t/10;
        sum++;
    }

    printf("The total number of digits is : %d\n",sum);

}