#include<stdio.h>
int main()
{
    int n,arr[100],i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    if(count==n){
        printf("True");
    }
    else{
        printf("False");
    }
    
        
}