// Q.4 Write a Program to print the below pattern using nested for loop.
// *  *  *  *  *
// *           *
// *  *  *  *  *
// *           *
// *           *


#include <stdio.h>
main()
{


	for(int i=1;i<=5;i++)
	{
		for (int j=1;j<=5;j++)

		if(i==2 && (j>1 && j<5)|| i==4 && (j>1 && j<5)||i==5&&(j>1 && j<5))
		{
			printf(" ");
		}
		else {
			printf("*");
		}
		printf("\n");
	}
}