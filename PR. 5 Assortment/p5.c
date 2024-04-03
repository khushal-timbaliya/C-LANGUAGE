#include <stdio.h>
int main() {
  int row,col;
printf("enter your row:");
scanf("%d",&row);
printf("enter your col:");
scanf("%d",&col);
int arr[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++){
            printf("enter your elements:");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<row;i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose matrix of an array:\n");
    for(int i=0; i<col;i++)
    {
        for (int j = 0; j < row; j++)
        {
         printf("%d",arr[j][i]);
        }
        printf("\n");
    }  
}