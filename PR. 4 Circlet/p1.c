#include<stdio.h>
main(){
    for (int i = 41; i <= 45; i++)
    {
        for (int j = 41; j <= i; j++)
        {
            printf("%3d",j);
        }
        
        printf("\n");
    }
    
}