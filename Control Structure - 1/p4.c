#include<stdio.h>
main(){
    int a,b;
    printf("enter value of a =",a);
    scanf("%d",&a);
    if (a<18)
    {
        printf("you can not vote");
    }
    else if (a==18)
    {
        printf("you can also vote");
    }
    else
    {
        printf("you can vote");
    }
    
    
}