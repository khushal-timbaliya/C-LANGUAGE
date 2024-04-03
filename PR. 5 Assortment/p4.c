#include <stdio.h>
main()
{
    int row, col, i, j;

    printf("enter value of row : ",row);
    scanf("%d",&row);
    printf("enter value of col : ",col);
    scanf("%d",&col);
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter Value of Array :");
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    int r, sum = 0, c, sumc = 0;

    printf("Enter Number of row :");
    scanf("%d",&r);

    for (int i = r; i < row; i++)
    {
        if (i == r + 1)
        {
            break;
        }
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d\n", sum);

    printf("Enter Number of col :");
    scanf("%d", &c);

    for (int i = 0; i < row; i++)
    {
        for (int j = c; j < col; j++)
        {
            if (j == c + 1)
            {
                break;
            }
            sumc += arr[i][j];
        }
    }
    printf("%d\n", sumc);
}