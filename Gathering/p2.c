#include<stdio.h>
int calculateArea(int h,int w){
    int sum=0;
    if (h<0 || w<0)
    {
        printf("value is invalid");
    }
    else{
        sum=h*w;
    }
    return sum;
}
main(){
    int h,w;
    printf("enter value of height :");
    scanf("%d",&h);
    printf("enter value of wight :");
    scanf("%d",&w);

    printf("area of a rectangle : %d",calculateArea(h,w));
}