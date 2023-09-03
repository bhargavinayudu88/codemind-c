#include<stdio.h>
int main(){
    int n,i,sum=0,r;
    scanf("%d",&n);
    while(n>0 || sum>9){
        if(n==0){
            n=sum;
            sum=0;
        }
        r=n%10;
        sum=sum+r;
        n=n/10;
        
    }
    printf("%d",sum);
}