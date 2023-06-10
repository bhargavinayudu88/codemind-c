#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,s=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
    s=s+arr[i];
    }
    avg=s/n;
    for(i=0;i<n;i++){
    if(arr[i]<=avg){
        c++;
    }
    }
    
    printf("%d",c);
    
    
}