#include<stdio.h>
int main(){
    int i,j,n,arr[100],f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        int c=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(c==arr[i]){
            f++;
            arr[i]=0;
        }
    }
    printf("%d",f);
}