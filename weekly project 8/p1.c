#include<stdio.h>

main(){
    int a,sum=0;

    printf("Enter the size=");
    scanf("%d",&a);

    for(int i=0; i<=a; i++){
        sum=sum+i;
    }
    printf("%d",sum);
}