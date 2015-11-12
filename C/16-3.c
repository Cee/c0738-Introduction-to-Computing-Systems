#include <stdio.h>
int main(){
	int a[20000];
	int i,j,n,tmp;
	printf("How many numbers?:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++){
		for(j=0;j<=n-i-1;j++){
			if (a[j]>a[j+1]){
				tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
			}
		}
	}
	j=0;
	for(i=0;i<=n-2;i++){
		if (a[i]!=a[i+1])
			j=1;
		if (j==1){
			printf("%d ",a[i]);
			j=0;
		}
	}
	if ((a[n-1]!=a[n-2]) || (n==1)) 
		printf("%d",a[n-1]);
}

