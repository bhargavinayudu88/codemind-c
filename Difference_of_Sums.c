#include<stdio.h>
int main()
{
    int i,n,x,y=0,z=0,square=1;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        x=i*i;
        y=y+x;
        z=z+i;
        square=z*z;
    }
    printf("%d",square-y);
}