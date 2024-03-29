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
        printf("\n%d",arr[i]*arr[i]);
    }
    
    
}