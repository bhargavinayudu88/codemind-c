#include<stdio.h>
int main()
{
	int i,j,r,c,mat[10][10],maxsum=0,maxsumrow=0;
	scanf("%d%d",&r,&c);
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(j=0;j<c;j++){
		int sum=0;
		for(i=0;i<r;i++){
			sum=sum+mat[i][j];
		}
		if(sum>maxsum){
			maxsum=sum;
			maxsumrow=i;
		}
	}
	printf("%d",maxsum);
	
}