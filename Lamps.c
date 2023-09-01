#include<stdio.h>
int main(){
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int r;
    r=k*x;
    if(x<y){
        printf("%d",r+x*(n-k));
    }
    else{
        printf("%d",r+y*(n-k));
        
    }
}