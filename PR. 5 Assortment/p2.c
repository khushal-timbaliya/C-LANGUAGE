#include<stdio.h>
main(){
    int row,col,max;
    printf("enter value of row : ",row);
    scanf("%d",&row);
    printf("enter value of col : ",col);
    scanf("%d",&col);
    int arr[row][col];
    max = arr[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%2d",arr[i][j]);

            if (arr[i][j]>max)
            {
                max = arr[i][j];
            }
            
        }
        printf("\n");

    }
        printf("\nthe biggest value is : %d",max);

    
}