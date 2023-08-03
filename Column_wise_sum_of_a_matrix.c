#include<stdio.h>
int main()
{
    int i,j,r,c,a[100][100],b[100][100], C[100][100];
    
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<c;j++){
    	int s=0;
        
        for(i=0;i<r;i++){
            s=s+a[i][j];
        }
    
    printf("%d ",s);
}  
}