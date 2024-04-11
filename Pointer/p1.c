#include<stdio.h> 
max(int *a , int *b){
    if (*a > *b)
    {
        printf("a is max : %d",*a);
    }
    else
    {
        printf("b is max : %d",*a);
    }
    
    
}
void main(){
    int a,b;
    printf("enter value of a : ",a);
    scanf("%d",&a);
    printf("enter value of b : ",b);
    scanf("%d",&b);
max(&a ,&b);
}