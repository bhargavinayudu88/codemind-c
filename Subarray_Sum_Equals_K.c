#include<stdio.h>
int main(){
    int N,K;
    int arr[N],i,j,s=0,c=0;
    scanf("%d%d",&N,&K);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        s=0;
        for(j=i;j<N;j++){
            s=s+arr[j];
            if(s==K){
          c++;
          }
        }
    }
    printf("%d",c);
    return 0;
}