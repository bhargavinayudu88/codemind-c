#include<stdio.h>
int main(){
	int i,n,m;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
}