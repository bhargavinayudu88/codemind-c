#include<stdio.h>
int main()
{
    int i,n,hcf;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    hcf=a[0];
    int j=1;
    while(j<n)
    {
        if(a[j]%hcf==0)
        {
            j++;
        }
        else
        {
            hcf=a[j]%hcf;
            i++;
        }
    }
    printf("%d",hcf);
}