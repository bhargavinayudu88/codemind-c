#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i,a=0,b=0,tc;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c;
    scanf("%d",&c);
    for(i=0;i<n;i++){
        if(arr[i]>c){
            a=a+2;
        }
        else{
            b=b+1;
        }
    }
    tc=b+a;
    printf("%d",tc);
}