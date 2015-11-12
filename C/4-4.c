#include <stdio.h>
int main(){
	int year,month;
	printf("Input year and month:");
	scanf ("%d%d",&year,&month);
	if ((month==1) || (month==3) || (month==5) || (month==7)
		|| (month==8) || (month==10) || (month==12))
		printf("This month has 31 days.\n");
	if ((month==4) || (month==6) || (month==9) || (month==11))
		printf("This month has 30 days.\n");
	if (month==2)
		if (((year % 4 ==0) && (year % 100 !=0))||(year % 400 ==0))
			printf("This month has 29 days.\n");
		else
			printf("This month has 28 days.\n");
}