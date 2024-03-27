#include<stdio.h>
main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("%d",j%2!=0);
        }
        printf("\n");
    }
    
}