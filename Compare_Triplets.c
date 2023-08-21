#include<stdio.h>
int main(){
    int arr[3],arr1[3];
    int i,a=0,b=0;
    for(i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++){
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<3;i++){
        if(arr[i]>arr1[i]){
            a+=1;
        }
        else if(arr1[i]>arr[i]){
            b+=1;
        }
        else if(arr[i]==arr1[i]){
            continue;
        }
    }
    printf("%d %d",a,b);
    return 0;
}