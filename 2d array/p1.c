#include<stdio.h>
main(){
    int sum=0;
    int arr[3][3];
    int avr=9;
    for (int i = 0; i <= 2; i++)//1
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("enter value of array :");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("\n");
    }  
        avr=sum/avr;
        printf("total of array :%d\n",sum);
        printf("avrage of array :%d",avr);

}