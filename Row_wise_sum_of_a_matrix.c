#include<stdio.h>
int main(){
    int i,j,r,c,arr[10][10],sum;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
    
    printf("%d ",sum);
    }
}






