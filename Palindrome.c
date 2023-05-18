#include<stdio.h>
int main()
{
    int n,sum=0,c,r;
    scanf("%d",&n);
      c=n;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
  
    if(c==sum){
        printf("True");
    }
    else{
        printf("False");
    }
    
}