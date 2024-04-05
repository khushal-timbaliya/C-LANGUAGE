#include <stdio.h>
#include<string.h>

main() {
    char str1[100], str2[100]; 
	
	printf("enter first:");
	gets(str1);
	printf("enter secound:");
	gets(str2);
	
	int a;
	a=strcmp(str1,str2);
	if(a==0)
	
		printf("string equal");
	
	else
		printf("not equal...");
    
}
