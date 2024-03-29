#include<stdio.h>
main(){
    int arr[5];
    int multi=1;
    for (int i = 0; i < 5; i++)
    {
        printf("enter nvalue of array :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]%2==0)
        {
            multi=multi*arr[i];
        }
        printf("\n%d",multi);
    }
    
    
}