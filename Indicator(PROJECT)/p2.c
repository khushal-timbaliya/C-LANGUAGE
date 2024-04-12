#include<stdio.h>
int swap(int *a,int *b,int *c){
    int *k;
    k=a;
    a=b;
    b=c;
    c=k;

    printf("*** new value ***\n");
    printf("a : %d\n",*a);
    printf("b : %d\n",*b);
    printf("c : %d\n",*c);
}
void main(){
    int a,b,c;
    printf("enter value of a : ",a);
    scanf("%d",&a);
    printf("enter value of b : ",b);
    scanf("%d",&b);
    printf("enter value of c : ",c);
    scanf("%d",&c);

    swap(&a,&b,&c);
} 