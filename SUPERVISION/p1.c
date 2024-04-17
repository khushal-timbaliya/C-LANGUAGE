#include<stdio.h>
struct Book{
    int id;
    char title[100];
    char author[100];
    char genre[100];
    char publisher[100];
    int publication_year;
    int price;
}arr[1000];
main(){
    int n;
    printf("enter number of book : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("enter value of book %d\n ",i+1);

        printf("enter id : ");
        scanf("%d",&arr[i].id);

        printf("enter title : ");
        scanf("%s",&arr[i].title);

        printf("enter author : ");
        scanf("%s",&arr[i].author);

        printf("enter genre : ");
        scanf("%s",&arr[i].genre);

        printf("enter publisher : ");
        scanf("%s",&arr[i].publisher);

        printf("enter publication_year : ");
        scanf("%d",&arr[i].publication_year);

        printf("enter price : ");
        scanf("%d",&arr[i].price);
    }
    for (int i = 0; i < n; i++)
    {
        printf("value of book %d\n ",i+1);

        printf("id : %d\n",arr[i].id);
        printf("title : %d\n",arr[i].title);
        printf("author : %d\n",arr[i].author);
        printf("genre : %s\n",arr[i].genre);
        printf("publisher : %s\n",arr[i].publisher);
        printf("publication_year : %s\n",arr[i].publication_year);
        printf("price : %s\n",arr[i].price);
    }
}