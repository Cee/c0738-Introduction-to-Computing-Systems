#include <stdio.h>
void stringcopy(char *firststr,char *secondstr);
int main(){
	char s1[300],s2[100];
	printf("Input the string1(length<100):");
	scanf("%s",s1);
	printf("Input the string2(length<100):");
	scanf("%s",s2);
	stringcopy(s1,s2);
	printf("%s",s1);
}
void stringcopy(char *firststr,char *secondstr){
	int i,j;
	i=0;
	while (firststr[i] != '\0')
		i++;
	j=0;
	while (secondstr[j] != '\0')
		j++;
	if (i<j)
		j=0;
	i=0;
	while (secondstr[i] != '\0'){
		firststr[i]=secondstr[i];
		i++;
	}
	if (j==0){
		i++;
		firststr[i]=secondstr[i];
	}
}