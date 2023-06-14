#include<stdio.h>
int main()
{
    int n,a=0,b=0;
    scanf("%d",&n);
    a=n/10;
    n=n%10;
    b=n/5;
    n=n%5;
    if(n==0){
        printf("%d",a+b);
    }
    else{
        printf("-1");
    }
}