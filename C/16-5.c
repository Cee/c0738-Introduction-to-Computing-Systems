#include <stdio.h>
int main(){
	char s[100];
	int i,n;
	printf("Input the string(length<100):");
	scanf("%s",s);
	printf("Input the number(1<=n<=9):");
	scanf("%d",&n);
	i=0;
	while (s[i]!='\0'){
		if(s[i]>(126-n))
			s[i]=s[i]-(94-n);
		else
			s[i]=s[i]+n;
		i++;
	}
	printf("%s",s);
}