#include<stdio.h>
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int b,sum=0;
	scanf("%d",&b);
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			break;
		}
		else{
		    sum=sum+arr[i];
		}
	}
	printf("%d",sum);
	
}

	