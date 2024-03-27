#include<stdio.h>
main(){
    int f,s;
    printf("enter first number=");
    scanf("%d",&f);
    printf("enter second number=");
    scanf("%d",&s);
    while (f<=s)
    {
        if (f%4==0)
        {
            printf("%d",f);
        }
        f++;
    }
    
}