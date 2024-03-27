#include <stdio.h>
void main(){
    int number;

    printf("Enter the number :");
    scanf("%d",&number);

    (number %2==0) ? printf("Even Number"):printf("Odd Number");
}