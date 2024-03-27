#include<stdio.h>
main(){
    int i,p,n,r;
    
    printf("enter value of principal=",p);
    scanf("%d",&p);
    printf("enter value of rate=",r);
    scanf("%d",&r);
    printf("enter value of time=",n);
    scanf("%d",&n);
    i=p*n*r/100;
    printf("your answer is=%d",i);
}