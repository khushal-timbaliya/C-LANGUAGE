#include<stdio.h>

void main()
{
    char str[100];
    int i,count = 0;
    
    scanf("%s",str);
    
    
    for(i = 0; str[i] != '\0'; i++)
    {
        
        if( str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' || 
            str[i] == 'o' || 
            str[i] == 'u' ||
            str[i] == 'A' ||
            str[i] == 'E' ||
            str[i] == 'I' || 
            str[i] == 'O' || 
            str[i] == 'U'  )
        {
           
            count++;
        }
    }
    
 
    printf("vowel count = %d\n",count);
    
   
}