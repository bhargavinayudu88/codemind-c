#include<stdio.h>
int main(){
    int n,i,arr[n],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
    if(arr[i]==0 || arr[i]==1){
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

