#include <stdio.h>
char firstChar[10];
char f(int i);
int main()
{
	int num;
	int a,b;
	char i,j;
	printf("Input:");
	scanf("%d",&num);
	a=num/10;
	b=num%10;
	if(a==0||a==1||b==0||b==1)
		printf("wrong\n");
	else
		for(i=f(a);i<f(a+1);i++)
			for(j=f(b);j<f(b+1);j++)
				printf("%c%c\n",i,j);
	return 0;
}

char f(int i)
{
	switch(i)
	{
		case 2:
			return 'A';
		case 3:
			return 'D';
		case 4:
			return 'G';
		case 5:
			return 'J';
		case 6:
			return 'M';
		case 7:
			return 'P';
		case 8:
			return 'T';
		case 9:
			return 'W';
		default:
			return 'Z'+1;
	}
}