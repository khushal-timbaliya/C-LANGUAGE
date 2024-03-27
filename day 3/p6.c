#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter value of a :");
	scanf("%d",&a);
	printf("enter value of b :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;	
	printf("new value of a : %d\n",a);
	printf("new value of b : %d\n",b);
}