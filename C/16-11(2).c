#include <stdio.h>
int main(){
	int a[10][10];
	int b[10][10];
	int num[100];
	printf("Input n,m to decide n*m:");
	int n,m,i,j;
	scanf("%d,%d",&n,&m);
	for(i=0;i<=n-1;i++)
		for(j=0;j<=m-1;j++){
			scanf("%d",&a[i][j]);
			b[j][i]=a[i][j];
		}
		printf("\n");
	for(i=0;i<=m-1;i++){
		for(j=0;j<=n-1;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}