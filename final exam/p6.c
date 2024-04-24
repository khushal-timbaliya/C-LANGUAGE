#include<stdio.h>
#include<string.h>

 struct student
    { 
        int id;
        char title[100];
        char gener[100];
        char langage[100];
        
    }s1[100];

main(){
    
    int n;
    printf("Enter movie number : ");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
        printf("Enter movie ID : ");
        scanf("%d",&s1[i].id);
        
        printf("Enter movie title : ");
        scanf("%s",&s1[i].title);

        printf("Enter movie gener : ");
        scanf("%s",&s1[i].gener);

         printf("Enter movie langage : ");
        scanf("%s",&s1[i].langage);

    }

    for (int i = 0; i < n; i++)
    {
        printf("ID : %d\n",s1[i].id);
        printf("title : %s\n",s1[i].title);
        printf("gener : %s\n",s1[i].gener);
         printf("langage : %s\n",s1[i].langage);
      
    }
   
}