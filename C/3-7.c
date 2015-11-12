#include <stdio.h>
int main(){
	int ti;
	scanf("%d",&ti);
	printf("hour=%d min=%d sec=%d",ti/3600,(ti % 3600) /60,(ti % 3600) % 60);
}