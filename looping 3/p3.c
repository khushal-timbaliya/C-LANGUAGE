// #include<stdio.h>
// void main()
// {
// 	int a,sum=5;
// 	for(a=1;a<=10;a++)
// 		printf("5 * %d =%d\n",a,a*sum);
// }

#include<stdio.h>
main(){
    int sum;
    printf("enter number of table =",sum);
    scanf("%d",&sum);
    for (int i = 1; i < 10; i++)
    {
        printf("%d x %d = %d\n",sum,i,sum*i);
    }
    
}