#include<stdio.h>
int main(){
    int a,b,i,count1=0,count2=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++){
        if(a%i==0){
            count1=count1+i;
        }
    }
    for(i=1;i<b;i++){
        if(b%i==0){
            count2=count2+i;
        }
    }
    if(a==count2 && b==count1){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
    return 0;
}