#include<stdio.h>
main(){
    int i=1,n;
    printf("enter number=",n);
    scanf("%d",&n);

    do
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
    } while (i<=n);
    
}