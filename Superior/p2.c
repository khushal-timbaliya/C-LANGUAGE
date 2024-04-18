#include<stdio.h>
main(){
    int a,max;
    printf("enter size of array : ",a);
    scanf("%d",&a);

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[0] <= arr[i])
        {
            max = arr[i];
        }
    }
    printf("largest element is : %d",max);
    
}