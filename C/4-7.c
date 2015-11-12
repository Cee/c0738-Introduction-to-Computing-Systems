#include <stdio.h>
int main(){
	int s,i;
	s=1;
	i=1;
	while (i<=9){
		s=s*i;
		i++;
	}
	printf("%d",s);
}