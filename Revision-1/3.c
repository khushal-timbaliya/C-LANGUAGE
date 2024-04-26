#include<stdio.h>
main()
{

    char name[100];


    printf("Enter Value of String :");
    gets(name);
    strrev(name);

    printf("%s",name);
}