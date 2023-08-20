#include<stdio.h>
int main(){
    int L,R,i,j,su=0,c=0;
    scanf("%d%d",&L,&R);
    for(i=L;i<=R;i++){
        su=0;
        for(j=i;j<=R;j++){
            su+=j;
        if(su%2!=0){
            c++;
          }
       }
    }
    printf("%d",c);
    return 0;
}