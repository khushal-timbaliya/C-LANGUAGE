#include<stdio.h>

swap(int *a,int *b){
    int *t;
    t=a;
    a=b;
    b=t;
    printf("**** after swap ***\n");
    printf("a : %d\n",*a);
    printf("b : %d",*b);
}

void main(){
    int a,b;
    printf("enter value of a : ",a);
    scanf("%d",&a);
    printf("enter value of b : ",b);
    scanf("%d",&b);

    swap(&a,&b);
}