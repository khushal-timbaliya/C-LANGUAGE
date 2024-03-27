#include<stdio.h>
main(){
    int n,a=0;
    printf("enter value =",n);
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        a=a+i;
    }
    printf("%d\n",a);
}