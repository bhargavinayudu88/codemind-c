#include<stdio.h>
int main()
{
	int i,j,r,c,sum=0;
	scanf("%d%d",&r,&c);
	int mat[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			
			
			if(i!=0 && j!=0 && i!=r-1 && j!=c-1){
				sum=sum+mat[i][j];
			}
				
		}
	
}
	printf("%d",sum);
}




