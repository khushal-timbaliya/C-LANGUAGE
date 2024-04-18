#include<stdio.h>
main()
{
    int a;

    printf("Enter Your Marks :");
    scanf("%d",&a);

    if (a < 40)
    {
        printf("Sorry You Have can't Passed This Exam..");
    }
    else{
        printf("Congratulations You Have Passed This Exam..");
    }
    
}