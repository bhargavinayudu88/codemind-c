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
    for(i=0;i<r;i++){
    	int s=0;
        
        for(j=0;j<c;j++){
            s=s+a[i][j];
        }
    
    printf("%d ",s);
}  
}