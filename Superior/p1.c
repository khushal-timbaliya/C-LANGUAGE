#include<stdio.h>
main(){
        int a;
        printf("enter value of array : ");
        scanf("%d",&a); 

        int arr[a],sum=0;

        for (int i = 0; i < a; i++)
        {
            printf("arr[%d] : ",i);
            scanf("%d",&arr[i]);
        }
        for (int i = 0; i < a; i++)
        {
            printf("%d\n",arr[i]);
            sum +=arr[i];
        }
        printf("sum of arry : %d",sum);
        
}