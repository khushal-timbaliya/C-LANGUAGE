// Q.3 Write a Program to print the below pattern using nested for loop.
//             5
//          4 5 4
//       3 4 5 4 3
//    3 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1

#include<stdio.h>
main()
{

    for (int i = 1; i <=5; i++)
    {
        for (int j = i; j <5; j++)
        {
            printf(" ");
        }
        for (int k= 5-i+1; k <=5; k++)
        {
            printf("%d",k);
        }
        for(int j = 5 - 1; j >= 5 - i + 1; j--) {
            printf("%d",j);
        }
        printf("\n");
    }    
}