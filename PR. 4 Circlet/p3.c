#include<stdio.h>
main(){
    for (int i = 5; i >= 1; i--)
    {
        for (int k = i-1; k >= 1; k--)
        {
            printf("_");
        }
        
        for (int j = i; j <= 5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}