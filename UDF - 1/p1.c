// #include <stdio.h>

// Function to add two numbers and print the result
// void addNumbers(int a, int b) {
//     int sum = a + b;
//     printf("Sum of %d and %d is %d\n", a, b, sum);
// }

// int main() {
//     int num1, num2;

//     printf("Enter the first integer: ");
//     scanf("%d", &num1);

//     printf("Enter the second integer: ");
//     scanf("%d", &num2);

//     Call the addNumbers() function
//     addNumbers(num1, num2);

//     return 0;
// }

#include<stdio.h>
void sum(int x , int y){
    printf("%d + %d = %d",x,y,x+y);
}

main(){
    int a,b;
    printf("enter value of a : ",a);
    scanf("%d",&a);
    printf("enter value of b : ",b);
    scanf("%d",&b);

    sum(a,b);
}