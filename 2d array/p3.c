#include<stdio.h>
main(){
    int space;
    printf("enter space of array : ");
    scanf("%d",&space);
    int arr[space][space];
    int sum;
    for (int i = 0; i < space; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf("enter value of array : ");
            scanf("%d",&arr[i][j]);
        }
        
        printf("\n");
    }
    for (int i = 0; i < space; i++)
    {
        for (int j = 0; j < space; j++)
        {
            if (i==0 || i==space-1 || j==0  ||j==space-1)
            {
                printf("%d",arr[i][j]);
                // sum=sum+arr[i][j];
            }
            else
            {
                printf(" ");
            }
        } 
        printf("\n");
    }
    // printf("%d",sum);

}