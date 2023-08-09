#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n],i,j,sum=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=0;
            }
        }
        if(arr[i]!=0)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}