#include<stdio.h>
#include<string.h>

int function(int a){
    if(a<=1){
        return 1;
    }
    else{
        return a*function(a-1);
    }
}


main(){
    int a;
    
    printf("Enter the valu :");
    scanf("%d",&a);

    printf("sum=%d\n",function(a));
}