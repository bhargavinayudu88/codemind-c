#include<stdio.h>
int main(){
    int a,b,i,gcf;
    scanf("%d%d",&a,&b);
    for(i=1;i<b;i++){
        if(a%i==0 && b%i==0){
            gcf=i;
        }
    }
    printf("%d",gcf);
}