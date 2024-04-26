#include<stdio.h>

struct stud
{
    char name[100];
    int r_no;
    int mark;
}s;

main()
{
    int student;

    printf("\n enter student number:");
    scanf("%d",&student);

    for (int i = 1; i <= student; i++)
    {
    printf("\nEnter name:");
    scanf("%s",s.name);

    printf("\nEnter roll number:");
    scanf("%d",&s.r_no);

    printf("\nEnter mark:");
    scanf("%d",&s.mark);

    }
    
    for (int i = 1; i <= student; i++)
    {
    printf("\nNAME:%s",s.name);
    printf("\nROLL NUMBER:%d",s.r_no);
    printf("\nMARK:%d",s.mark);
    }
    
    
}