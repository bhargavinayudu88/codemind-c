#include<stdio.h>
int main()
{
	int i,j,r,c,even=0,odd=0;
	scanf("%d%d",&r,&c);
	int mat[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i%2==0){
				even=even+mat[i][j];
			}
			else{
				odd=odd+mat[i][j];
			}
			
		}
	}
	printf("%d %d",even,odd);
}


