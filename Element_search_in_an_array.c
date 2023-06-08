#include<stdio.h>
int main(){
	int n,a[100],i,se,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	for(i=0;i<n;i++){
		if(a[i]==se){
			flag=1;
			break;
		}
		
	}
	if(flag==1){
		printf("True");
	}
	else{
		printf("False");
	}
}