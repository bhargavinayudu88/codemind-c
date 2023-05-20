#include<stdio.h>
int main(){
    int i,n,a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
            a[i]=a[0];
        }
    }
    printf("%d",min);
    
    
    
}