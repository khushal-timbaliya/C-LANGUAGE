#include <stdio.h>
int main(){
    float u, l=0.50 , g=0.75, s=1.20 , n=1.50, k;

    printf("Enter The Electric City Unit =");
    scanf("%f",&u);

    if (u>=0 && u<=50)
    {
        k=u*l;
        printf("Your Electric City Bill : Rs %0.2f" , k+(k*0.20));
    }
    
    else if (u>=51 && u<=150)
    {
        k=u*g;
        printf("Your Electric City Bill : Rs %0.2f" , k+(k*0.20));
    }

    else if(u>=151 && u<=250)
    {
        k=u*s;
        printf("Your Electric City Bill : Rs %0.2f" , k+(k*0.20));

    }


        else if(u>250)
    {   
        k=u*n;
        printf("Your Electric City Bill : Rs %0.2f" , k+(k*0.20));

    }

    else{
        printf("Plese Enter Valid Number");
    }


}