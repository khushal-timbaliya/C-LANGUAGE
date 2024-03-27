#include<stdio.h>
main(){
    int a;
    printf("entwr your marks",a);
    scanf("%d",&a);
    if (a>=90 && a>=100)
    {
        printf("you have A grad");
    }
    else if (a>=80 && a>=89)
    {
        printf("you have B grad");
    }
    else if (a>=70 && a>=79)
    {
        printf("you have C grad");
    }
    else if (a>=60 && a>=69)
    {
        printf("you have D grad");
    }
    else if (a>=0 && a>=50)
    {
        printf("you have E grad");
    }
    else
    {
        printf("entered invalid marks");
    }

       
}