#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    float sum=0,count=0;
    int c=0;
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
            }
            
        }
        if(arr[i]==c){
            sum+=arr[i];
            count++;
            for(j=0;j<n;j++){
                if(arr[i]==arr[j] && i!=j){
                    arr[j]=0;
                }
            }
        }
    }
    if(count==0){
        printf("-1");
    }
    else{
        printf("%.2f",sum/count);
    }
}