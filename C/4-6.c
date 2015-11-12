#include <stdio.h>
int main(){
	int x,y,i,n,t;
	scanf("%d",&n);
	x=0;
	y=1;
	for (i=1;i<=n;i++){
		x=y+x;
		t=x;
		x=y;
		y=t;		
	}
	if (n==0) 
		printf("0");
	else 
		printf("%d\n",x);
}