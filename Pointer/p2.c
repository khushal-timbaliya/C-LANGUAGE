#include<stdio.h>
min(int *a , int *b){
    if (*a<*b)
    {
        printf("a is minimum : %d",*a);
    }
    else
    {
        printf("b is minimum : %d",*b);
    }
    
}
void main(){
    int a,b;
    printf("enter value of a : ",a);
    scanf("%d",&a);
    printf("enter value of b : ",b);
    scanf("%d",&b);
    min(&a,&b);
}