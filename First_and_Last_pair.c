#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++){
        printf("%d %d ",arr[i],arr[n-(i+1)]);
    }
    if(n%2!=0){
        printf("%d 0",arr[i]);
    }
}