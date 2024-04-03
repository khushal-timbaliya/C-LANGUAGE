#include<stdio.h>
main(){
    int size;
    int arr[size];
    printf("enter size of array : ");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<0)
        {
            printf("a[%d] : %d\n",i,arr[i]);
        }
        
    }
    
    
}