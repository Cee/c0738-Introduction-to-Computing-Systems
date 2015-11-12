#include <stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	do{		
		if (('a' <= c) && ('z' >= c))
			c=c-32;
		printf("%c",c);
		scanf("%c",&c);
	} while (c != '\n');	
}