#include<stdio.h>
int main(){
    int i,n,arr[100],a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++){
    if(arr[i]<a && arr[i]<b || arr[i]>a && arr[i]>b){
        printf("%d ",arr[i]);
        c=1;
    }
    }
    if(c==0){
        printf("-1");
    }
}