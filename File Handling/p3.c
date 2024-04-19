#include<stdio.h>
main(){
    FILE *p;
    char data[100];

    p = fopen("remo.txt","a");

    if (p == NULL)
    {
        printf("Can't open file");
    }
    else
    {
        printf("enter message : ");
        gets(data);
        fputs(data,p);
    }
    
}