#include<stdio.h>
main(){
    int arr[5];
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        printf("enter value of array :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum =sum + arr[i];
    }
    printf("%d",sum/5);
    
}