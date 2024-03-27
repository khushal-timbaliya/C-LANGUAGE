#include<stdio.h>
int main(){
    int a,b,c;

    for (int a = 5; a >= 1; a--)
    {
        for (int b = 1; b<=a; b++)
        {
            printf("%d",b);
        }

        printf("\n");
        
    }


    for ( a = 2; a<=5; a++)
    {
            for (int b = 1; b<=a; b++)
            {
                    printf("%d",b);
            }

            for (int c=a; c<=4; c++)
            {
                printf(" ",c);
            }

            printf("\n");
            
            
    }
    
    
}
