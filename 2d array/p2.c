#include<stdio.h>
main(){
    int arr[3][3];
    int sum;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("enter value of array : ");
            scanf("%d",&arr[i][j]);
        }
        
        printf("\n");
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (i==j)
            {
                printf("%d",arr[i][j]);
                sum=sum+arr[i][j];
            }
            else
            {
                printf(" ");
            }
        } 
        printf("\n");
    }
    printf("%d",sum);

}