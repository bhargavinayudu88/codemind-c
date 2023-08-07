#include<stdio.h>
int main(){
    int i,j,n,arr[100],f=0,max=0,min=999;
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
            if(arr[i]>max)
                max=arr[i];
            
            if(arr[i]<min)
                min=arr[i];
                f++;
            
            
        }
    }
    if(f==0){
        printf("-1");
    }
    else{
        printf("%d %d",min,max);
        
    }
    
}