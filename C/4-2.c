#include <stdio.h>
int main(){
	int result,input;
	printf("Input an integer:");
	scanf("%d",&input);
	if (!(input % 7)) 
		result=1;
	else
		result=0;
	printf("The result is %d\n",result);
}