#include<stdio.h>
int calculateFactorial(int a){

    int fact=1;
    for(int i=a;i>=1;i--)
    {
        printf("\n%d",i);
        fact *=i;
    }   

    return fact;
}

int main()
{
    int a;

    printf("enter the number:");
    scanf("%d",&a);

    int ans=calculateFactorial(a);

    printf("\n the ans is:%d",ans);

    return 0;
}