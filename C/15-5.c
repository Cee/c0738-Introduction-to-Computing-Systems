#include <stdio.h>
#include <math.h>
int prime(int num);
int main(){
	int i;
	for(i=1;i<=100;i++)
		if(prime(i))
			printf("%d ",i);
	return 0;
}
int prime(int num)
{
	int i;
	if(num<=1)
		return 0;
	for(i=2;i<=sqrt(num);i++)
		if(num%i==0)
			return 0;
	return 1;
}
