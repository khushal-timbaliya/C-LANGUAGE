#include<stdio.h>
int main(){
    char val[]="hello world";

    for (int i=0; val[i]!=NULL; i++)
    {
      if (val[i]>='a' && val[i]<='z')
      {
        val[i]-=32;
      }
        
        printf("%c",val[i]);
    }
    

}