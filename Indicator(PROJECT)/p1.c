#include<stdio.h>
cube(int *x){
    int a=*x;
    int c=a*a*a;
    printf("cube of %d : %d",*x,c);
}
void main(){
    int a;
    printf("enter value of a : ",a);
    scanf("%d",&a);
    cube(&a);
}