#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n/2;
    int i,arr[n];
    for( i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=n-1; i>=m; i--)
    {
        printf("%d ",arr[i]);
    }
    for (i=0; i<m; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}