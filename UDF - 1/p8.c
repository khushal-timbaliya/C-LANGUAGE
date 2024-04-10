// #include <stdio.h>

// Function to print the multiplication table of 5
// void printTable() {
//     int number = 5;

//     printf("Multiplication table of %d:\n", number);
//     for (int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", number, i, number * i);
//     }
// }

// int main() {
//     Call the printTable() function
//     printTable();

//     return 0;
// }

#include<stdio.h>

void table(){
     for (int i = 1; i <= 10; i++)
     {
        printf("5 * %d = %d\n ",i,5*i);
     }
     
}

main(){
    table();
}