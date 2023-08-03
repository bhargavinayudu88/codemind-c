#include<stdio.h>
int main()
{
	int i,j,r,c,sum=0,sum1=0;
	scanf("%d%d",&r,&c);
	int mat[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			
			
			if(i==j){
				sum=sum+mat[i][j];
			}
			else if(i+j==r-1){
				sum1=sum1+mat[i][j];	
			}	
		}
	
}
	printf("%d",sum+sum1);
}




