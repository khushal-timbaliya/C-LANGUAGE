#include <stdio.h>
int main(){
    int a,b;
    printf("Press 1 For English\n");
    printf("Press 2 For Hindi\n");
    printf("Press 3 For Gujrati\n");

    printf("Enter Your Choise =");
    scanf("%d",&a);

    switch (a)
    {
        case 1:
            printf("English\n");
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter Your choise:");

            scanf("%d",&b);

            switch (b)
            {
            case 1: printf("successfully tp re\n"); 
                    break;

            case 2: printf("successfully in re\n"); 
                    break;

            case 3: printf("successfully sp re\n"); 
                    break;
            
            default: printf("Invelid Number");
                    break;
            }

    break;



            case 2:
            printf("Hindi\n");
            printf("Internet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your numbre");

            scanf("%d",&b);

            switch (b)
            {
            case 1: printf("successfully Internet Recharge\n"); 
                    break;

            case 2: printf("successfully Top-up Recharge\n"); 
                    break;

            case 3: printf("successfully Special Recharge\n"); 
                    break;
            
            default: printf("Invelid Number");
                    break;
            }


            break;


            case 3:
            printf("Gujarti\n");
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your numbre");

            scanf("%d",&b);

            switch (b)
            {
            case 1: printf("successfully Internet Recharge\n"); 
                    break;

            case 2: printf("successfully Top-up Recharge\n"); 
                    break;

            case 3: printf("successfully Special Recharge\n"); 
                    break;
            
            default: printf("Invelid Number");
                    break;
            }

            break;

            default: printf("invelide number");
            break;
    }

}