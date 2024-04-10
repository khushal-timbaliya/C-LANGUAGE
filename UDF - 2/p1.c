#include<stdio.h>

int sum(int o)
{
    int array[o], b=0;

    for(int i=0 ; i < o; i++)
    {
        printf("array[%d]= ",i);
        scanf("%d",&array[i]);
        b += array[i];
    }


    return b;
}

int main()
{
    int a;
    printf("Enter the size of array :");
    scanf("%d",&a);

    printf("sum=%d",sum(a));
}