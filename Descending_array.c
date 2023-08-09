#include<stdio.h>
int main()
{
    int n,i,arr[100],j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
            c++;
        }
    }
}
    if(c==0){
        printf("yes");
    }
    else{
        printf("no");
    }
}