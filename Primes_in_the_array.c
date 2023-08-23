#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int k;
    for(i=0;i<n;i++){
        int count=0;
        for(int j=1;j<arr[i];j++){
        if (arr[i]%j==0){
            count+=1;
        }
    }
        if(count==1){
            k++;
        }
    }
     printf("%d",k);
    
   
}