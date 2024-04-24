#include<stdio.h>
void main(){
    int a;
    printf("enter the year=");
    scanf("%d",&a);

    if(a%4==0){
        printf("this is leap year");
    }
    else{
        printf("this is not leap year");
    }
}