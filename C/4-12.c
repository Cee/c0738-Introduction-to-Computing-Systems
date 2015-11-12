#include <stdio.h>
int main(){
	int n,i,tmp;
	double pi;
	tmp=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		pi=pi+tmp*4.0/(2*i-1);
		tmp=tmp*(-1);
	}
	printf("pi=%f\n",pi);
}