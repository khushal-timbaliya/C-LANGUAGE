#include<stdio.h>
main(){
    int n,a=1;
    printf("enter value =",n);
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        a=a*i;
    }
    printf("%d\n",a);
}