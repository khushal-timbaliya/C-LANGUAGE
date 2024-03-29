#include<stdio.h>
main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter value of array :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]%2!=0)
        {
            printf("\n%d",arr[i]);
        }
        
    }
    
}