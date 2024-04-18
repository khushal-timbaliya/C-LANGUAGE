#include<stdio.h>
main()
{
    int i,size_a,size_b,ressize,j;

    printf("enter size of array:");
    scanf("%d",&size_a);

    printf("enter size of array:");
    scanf("%d",&size_b);

    int a[size_a];
    int b[size_b];


    printf("\n enter first array:");
    for ( i = 0; i < size_a; i++)
    {
        printf("\nenter:");
        scanf("%d",&a[i]);
    }


    printf("\n enter secound array:");
    for ( i = 0; i < size_b; i++)
    {
        printf("\nenter:");
        scanf("%d",&b[i]);
    }
    
    ressize=size_a + size_b;

    int c[ressize];
    
    
    for ( i = 0; i < size_a; i++)
    {
        c[i]=a[i];
    }
    for (i = 0, j = size_a; j < ressize && i < size_b;  i++, j++) {
        c[j] = b[i];
    }

    
    printf("\n merge array is:");

    for (i = 0; i < ressize; i++) {
        printf("\n%d ", c[i]);
    }
}