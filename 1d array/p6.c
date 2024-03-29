#include<stdio.h>
main(){
    int arr[5];
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("enter value of array :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max =arr[i];
        }
        
    }
    printf("%d\n",max);
    
}
