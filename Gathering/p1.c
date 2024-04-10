#include<stdio.h>
int calculateSumOfSquares(int a){
    int sum =0;
        if (a<0)
        {
            printf("value is invalid\n");
        }
        else{
            for (int i = 1; i <= a; i++)
            {
                if (i % 2 == 0){
                    printf("squre of %d is : %d\n",i,i*i);
                    sum+=(i*i);
                }
            }            
        }     
    return sum;
}

main(){
    int n;
    printf("enter value of n : ",n);
    scanf("%d",&n);
    printf("total : %d",calculateSumOfSquares(n));
}