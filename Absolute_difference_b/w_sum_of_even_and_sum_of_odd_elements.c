#include<stdio.h>
int main()
{
    int n,i,s=0,es=0,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            s=s+a[i];
        }
        else{
            es=es+a[i];
        }
    }
    if(s>es){
        d=s-es;
    }
    else{
        d=es-s;
    }
    printf("%d",d);
}