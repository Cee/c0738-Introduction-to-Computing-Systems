#include <stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	do{		
		if (c != ' ')
			printf("%c",c);
		scanf("%c",&c);
	} while (c != '\n');	
}