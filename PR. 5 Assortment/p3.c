#include<stdio.h>
main(){
    int row,col,swap,i,j;
    printf("enter value of row : ",row);
    scanf("%d",&row);
    printf("enter value of col : ",col);
    scanf("%d",&col);
    int arr[row][col];

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
        }
        printf("\n");
    }

    swap = row;
    row = col;
    col = swap;
    
    int arr2[row][col];

    printf("\nThe transpose matrix of an array :\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%2d",arr[j][i]);
        }
        printf("\n");
    }
}
