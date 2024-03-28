#include <stdio.h> 
main() 
{  
    for (int i = 0; i < 6; i++)
    { 
        for (int j = 0; j < 6; j++) { 
            if (i > 0 && i < 6 - 1 && j > 0 && j < 6 - 1) { 
                printf("  "); 
            } 
            else { 
                printf("* "); 
            } 
        } 
        printf("\n"); 
    } 
}