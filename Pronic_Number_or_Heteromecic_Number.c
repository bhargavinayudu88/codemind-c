#include<stdio.h>
#include<math.h>
int main(){
	int c,c1,c2,a=1,b=1,x,k;
	scanf("%d",&c);
	c1=-b+sqrt(b*b-4*a*-c);
	c2=-b-sqrt(b*b-4*a*-c);
	x=a*2;
    k=c1/x;
	if(k*(k+1)==c){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
	
}

