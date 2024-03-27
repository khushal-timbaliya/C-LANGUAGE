#include<stdio.h>
main(){
    float w,h;
    printf("enter your weight =",w);
    scanf("%f",&w);
    printf("enter your height =",h);
    scanf("%f",&h);
    printf("your answer is =%.2f",w/(h*h));
}