#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b=a%3;
    if(b==1){
        printf("HUGE");
    }
    else if(b==2){
        printf("SMALL");
    }
    else {
        printf("NORMAL");
    }
}