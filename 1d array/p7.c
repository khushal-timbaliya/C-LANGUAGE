#include<stdio.h>
main(){
    int arr[5];
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("enter value of array :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]< min)
        {
            min = arr[i];
        }
        
    }
    printf("%d\n",min);
    
}