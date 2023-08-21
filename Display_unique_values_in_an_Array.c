#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=0,d=0;
    for(int i=0;i<n;i++){
        c=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                c++;
            }
        }
        if(c==0){
            printf("%d ",arr[i]);
        }
        else{
           d++;
        }
        }
        if(d==n){
             printf("-1");
    }
}