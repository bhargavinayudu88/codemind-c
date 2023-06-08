
#include<stdio.h>
int main(){
	int n,a[100],i,A,B,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d%d",&A,&B);
	for(i=0;i<n;i++){
		if(a[i]<A && a[i]<B || a[i]>A && a[i]>B){
			sum=sum+a[i];
		}
	}
	{
		printf("%d",sum);
	}
}
