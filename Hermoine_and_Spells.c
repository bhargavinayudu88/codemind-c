#include<stdio.h>
int main(){
    int a,b,c,sum=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        sum=a;
        if(b>c){
            sum=sum+b;
        }
        else{
            sum=sum+c;
        }
    }
    if(b>a && b>c){
        sum=b;
        if(a>c){
            sum=sum+a;
        }
        else{
            sum=sum+c;
        }
    }
    if(c>a && c>b){
        sum=c;
        if(a>b){
            sum=sum+a;
        }
        else{
            sum=sum+b;
        }
    }
    printf("%d",sum);
    
    
}