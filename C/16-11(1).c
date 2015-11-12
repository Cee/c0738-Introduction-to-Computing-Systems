#include <stdio.h>
int main(){
	int a[10][10];
	int num[100];
	printf("Input n,m to decide n*m:");
	int n,m,i,j,max_i,max_j,max,count,search_i,search_j;
	scanf("%d,%d",&n,&m);
	for(i=0;i<=n-1;i++)
		for(j=0;j<=m-1;j++)
			scanf("%d",&a[i][j]);
	max_i=0;
	max_j=0;
	max=0;
	for(i=0;i<=n-1;i++)
		for(j=0;j<=m-1;j++){
			count=0;
			for(search_i=0;search_i<=n-1;search_i++)
				for(search_j=0;search_j<=m-1;search_j++)
					if (a[search_i][search_j]==a[i][j]) 
						count++;
			if (count>max){
				max_i=i;
				max_j=j;
				max=count;
			}
		}
	printf("%d",a[max_i][max_j]);
}