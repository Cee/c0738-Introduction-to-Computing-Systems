#include <stdio.h>
int func(int a,int b);
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",func(x,y));
}
int func(int a,int b){
	int i,sum;
	sum=1;
	if (a==0) 
		return 0;
	else{
		if (b==0)
			return 1;
		else{
			for (i=1;i<=b;i++){
				sum=sum*a;
			}
		}
	}
	return sum;
}