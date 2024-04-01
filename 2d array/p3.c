#include<stdio.h>
main(){
    int arr[5][5];
    int sum;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            printf("enter value of array : ");
            scanf("%d",&arr[i][j]);
        }
        
        printf("\n");
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (i==0 || i==4 || j==0  ||j==4)
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