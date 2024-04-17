#include<stdio.h>
struct student{
    int id;
    int age;
    int standard;
    char name[100];
    char city[100];
    char course[100];
    char school[100];
}arr[1000];
main(){
    int n;
    printf("enter number of student : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("enter value of student %d\n ",i+1);

        printf("enter id : ");
        scanf("%d",&arr[i].id);

        printf("enter age : ");
        scanf("%d",&arr[i].age);

        printf("enter standard : ");
        scanf("%d",&arr[i].standard);

        printf("enter name : ");
        scanf("%s",&arr[i].name);

        printf("enter city : ");
        scanf("%s",&arr[i].city);

        printf("enter course : ");
        scanf("%s",&arr[i].course);

        printf("enter school : ");
        scanf("%s",&arr[i].school);
    }

    for (int i = 0; i < n; i++)
    {
        printf("enter value of student %d\n ",i+1);

        printf("id : %d\n",arr[i].id);
        printf("age : %d\n",arr[i].age);
        printf("standard : %d\n",arr[i].standard);
        printf("name : %s\n",arr[i].name);
        printf("city : %s\n",arr[i].city);
        printf("course : %s\n",arr[i].course);
        printf("school : %s\n",arr[i].school);
    }

    
}