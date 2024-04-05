#include<stdio.h>
main(){
	char firstname[50],lastname[50],fullname[100];

	printf("enter firstname : ");
	gets(firstname);
	printf("enter lastname : ");
	gets(lastname);
	strcpy(fullname , strcat(firstname , lastname));
	puts(fullname);
	
}
